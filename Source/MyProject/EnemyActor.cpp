// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"
#include "MyProjectCharacter.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Tags = { "enemy" };
	PrimaryActorTick.bCanEverTick = true;
	reset = 0.1f;
	resetTime = 0.1f; 
	cDist = 1500.0f;
	the100 = 30.0f;
	sradius = 60.0f;
	MyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Component"));
	MyCollisionSphere->InitSphereRadius(sradius);
	MyCollisionSphere->SetCollisionProfileName("Trigger");
	RootComponent = MyCollisionSphere;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh")); 
	Mesh->SetupAttachment(RootComponent);
	MyCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, & AEnemyActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemyActor::ChoiseGun()
{
    
}

void AEnemyActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		
	}
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	dt = DeltaTime;
	DrawDebugSphere(GetWorld(), GetActorLocation(), sradius, 20, FColor::Purple, false, -1, 0, 1);
	plpawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	plLocation = plpawn->GetActorLocation();
	pd = plpawn->GetDistanceTo(this);
	if (resetTime <= 0.0f) {
		if (pd <= cDist) { resetTime = reset; }
	}
	else { resetTime -= dt; }
	FHitResult hitres;
	FVector sv = GetActorLocation();
	FVector svEnd = sv;
	svEnd.X += 40.f;
	svEnd.Y += 40.f;
	svEnd.Z -= 160.f;
	FCollisionQueryParams collisionParams;
	DrawDebugLine(GetWorld(), sv, svEnd, FColor::Blue, false, 1, 0, 1);
	bool ishit = GetWorld()->LineTraceSingleByChannel(hitres, sv, svEnd, ECC_Visibility, collisionParams);
	if (pd <= cDist && resetTime == reset&&ishit)
	{
		if (hitres.bBlockingHit) {
			if (GEngine) {
				//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("hit:%s"), *hitres.GetActor()->GetName()));
			}
		}
		sr.X = 0; sr.Y = 0;
		if (plLocation.X > GetActorLocation().X)
		{
			kxz = 1.0f;
			sv.X += kxz * the100;
			if (plLocation.Y > GetActorLocation().Y)
			{
				kxz = 1.0f;
				sv.Y += kxz * the100;
			}
			else if (plLocation.Y < GetActorLocation().Y) 
			{
				kxz = -1.0f;
				sv.Y += kxz * the100;
			}
			else
			{
			}
		}
		else if (plLocation.X < GetActorLocation().X)
		{
			kxz = -1.0f;
			sv.X += kxz * the100;
			if (plLocation.Y > GetActorLocation().Y)
			{
				kxz = 1.0f;
				sv.Y += kxz * the100;
			}
			else if (plLocation.Y < GetActorLocation().Y)
			{
				kxz = -1.0f;
				sv.Y += kxz * the100;
			}
			else
			{
				sr.Z = -270;
			}
		}
		else if (plLocation.Y > GetActorLocation().Y)
		{
			kxz = 1.0f;
			sv.Y += kxz * the100;
			if (plLocation.X > GetActorLocation().X)
			{
				kxz = 1.0f;
				sv.X += kxz * the100;
			}
			else if (plLocation.X < GetActorLocation().X)
			{
				kxz = -1.0f;
				sv.X += kxz * the100;
			}
			else
			{
				sr.Z = 0;
			}
		}
		else if (plLocation.Y < GetActorLocation().Y)
		{
			kxz = -1.0f;
			sv.Y += kxz * the100;
			if (plLocation.X > GetActorLocation().X)
			{
				kxz = 1.0f;
				sv.X += kxz * the100;
			}
			else if (plLocation.X < GetActorLocation().X)
			{
				kxz = -1.0f;
				sv.X += kxz * the100;
			}
			else
			{
			}
		}
		rb = true;
	}
	SetActorLocation(sv);
}

void AEnemyActor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		auto DamageActor = Cast<AMyProjectCharacter>(OtherActor);//
		if (DamageActor) 
		{
			//UGameInstance* GameInstance = GetGameInstance(GetWorld()->GetGameInstance());
		}
	}
}