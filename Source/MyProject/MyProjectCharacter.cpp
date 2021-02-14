// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectCharacter.h"
#include "MyProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "FPSBombActor.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AMyProjectCharacter

AMyProjectCharacter::AMyProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	enemyTag = "enemy";
	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.
	HoldComp = CreateDefaultSubobject<USceneComponent>(TEXT("HoldingComponent"));
	//HoldComp->RelativeLocation.X = 50.0f;
	HoldComp->SetupAttachment(FP_MuzzleLocation);
	CurrentItem = NULL;
	bCanMove = true; 
	bInspecting = false;
	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void AMyProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
	PitchMax = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax;
	PitchMin = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("SpawnBomb", IE_Pressed, this, &AMyProjectCharacter::SpawnBomb);
	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyProjectCharacter::OnFire);
	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &AMyProjectCharacter::OnAction);
	PlayerInputComponent->BindAction("Inspect", IE_Pressed, this, &AMyProjectCharacter::OnInspect);
	PlayerInputComponent->BindAction("Inspect", IE_Released, this, &AMyProjectCharacter::OnInspectReleased);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMyProjectCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyProjectCharacter::LookUpAtRate);
}

void AMyProjectCharacter::OnFire()
{
	FHitResult hitres;
	FVector sv = GetActorLocation();
	FVector ForwardVec = FirstPersonCameraComponent->GetForwardVector();
	FVector svEnd = (sv + (ForwardVec * 1000.0f));
	FCollisionQueryParams collisionParams;
	DrawDebugLine(GetWorld(), sv, svEnd, FColor::Blue, false, 1, 0, 1);
	bool ishit = GetWorld()->LineTraceSingleByChannel(hitres, sv, svEnd, ECC_Visibility, collisionParams);
	if (ishit) {
		if (hitres.bBlockingHit) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("hit:%s"), *hitres.GetActor()->GetName()));
				//AEnemyActor pCas = Cast<AEnemyActor>(*hitres.GetActor());
				if (hitres.GetActor()->ActorHasTag(enemyTag))
				{
					GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("hit:%s"), *hitres.GetActor()->GetName()));
					FVector Scale = hitres.GetActor()->GetActorScale();
					Scale *= 0.5f;
					if (Scale.GetMin() < 1.f) 
					{
						hitres.GetActor()->Destroy();
					}
					else { hitres.GetActor()->SetActorScale3D(Scale); }
				}
			}
		}
	}
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AMyProjectProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AMyProjectProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AMyProjectCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMyProjectCharacter::OnAction()
{
	if (CurrentItem && !bInspecting) {
		ToggleItemPickup();
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("hit:%s"), CurrentItem.GetActor()->GetName()));
	}
}

void AMyProjectCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AMyProjectCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

void AMyProjectCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
	{
		if (TouchItem.bIsPressed)
		{
			if (GetWorld() != nullptr)
			{
				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
				if (ViewportClient != nullptr)
				{
					FVector MoveDelta = Location - TouchItem.Location;
					FVector2D ScreenSize;
					ViewportClient->GetViewportSize(ScreenSize);
					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
					{
						TouchItem.bMoved = true;
						float Value = ScaledDelta.X * BaseTurnRate;
						AddControllerYawInput(Value);
					}
					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
					{
						TouchItem.bMoved = true;
						float Value = ScaledDelta.Y * BaseTurnRate;
						AddControllerPitchInput(Value);
					}
					TouchItem.Location = Location;
				}
				TouchItem.Location = Location;
			}
		}
	}
}

void AMyProjectCharacter::ToggleMovement()
{

}

void AMyProjectCharacter::ToggleItemPickup()
{
	if (CurrentItem) {
		bHoldingItem = !bHoldingItem; CurrentItem->Pickup();
		if (!bHoldingItem) { CurrentItem = NULL; }
	}
}

void AMyProjectCharacter::OnInspect()
{
	if (bHoldingItem) {
		LastRotation = GetControlRotation();
		ToggleMovement();
	}
	else {
		bInspecting = true;
	}
}

void AMyProjectCharacter::OnInspectReleased()
{
	if (bInspecting && bHoldingItem) 
	{
		GetController()->SetControlRotation(LastRotation);
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax = PitchMax;
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin = PitchMin;
		ToggleMovement();
	}
	else
	{
		bInspecting = false;
	}
}

void AMyProjectCharacter::MoveForward(float Value)
{
	if (Value != 0.0f&&bCanMove)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMyProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f&&bCanMove)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMyProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
void AMyProjectCharacter::SpawnBomb()
{
	AFPSBombActor* bomb1 = GetWorld()->SpawnActor<AFPSBombActor>(BombClass, GetActorLocation(), GetActorRotation());
}

void AMyProjectCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	Start = FirstPersonCameraComponent->GetComponentLocation();
	ForwardVector = FirstPersonCameraComponent->GetForwardVector(); End = ((ForwardVector * 200.f)+Start);
	DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1, 0, 1);
	if (!bHoldingItem) 
	{
		if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, DefaultComponentQueryParam, DefaultResponseParams))
		{
			if (Hit.GetActor()->GetClass()->IsChildOf(APickup::StaticClass())) 
			{
				CurrentItem = Cast<APickup>(Hit.GetActor());
			}
		}
	}
	else
	{
		CurrentItem = NULL;
	}
	if (bInspecting) 
	{
		if (bHoldingItem) 
		{
			FirstPersonCameraComponent->SetFieldOfView(FMath::Lerp(FirstPersonCameraComponent->FieldOfView, 
				90.0f, 0.1f));
			HoldComp->SetRelativeLocation(FVector(0.0f, 50.0f, 50.0f));
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax = 179.90000002f;
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin = -179.90000002f;
			CurrentItem->RotateActor();
		}
		else
		{
			FirstPersonCameraComponent->SetFieldOfView(FMath::Lerp(FirstPersonCameraComponent->FieldOfView,
				45.0f, 0.1f));
		}
	}
	else {
		FirstPersonCameraComponent->SetFieldOfView(FMath::Lerp(FirstPersonCameraComponent->FieldOfView,
			90.0f, 0.1f));
		if (bHoldingItem)
		{
			HoldComp->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
		}
	}
}

bool AMyProjectCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AMyProjectCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AMyProjectCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AMyProjectCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}
