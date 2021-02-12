// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"

AMyProjectProjectile::AMyProjectProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AMyProjectProjectile::OnHit);		// set up a notification for when this component hits something blocking
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AMyProjectProjectile::OnOverlapBegin);
	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	Mesh->SetupAttachment(RootComponent);
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AMyProjectProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugSphere(GetWorld(), GetActorLocation(), 10.f, 20, FColor::Purple, false, -1, 0, 1);
}

void AMyProjectProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		FVector Scale = OtherComp->GetComponentScale();
		Scale *= 0.8f;
		if (Scale.GetMin() < 0.5f) {
			OtherActor->Destroy();
		}
		else { OtherComp->SetWorldScale3D(Scale); }
	 	UMaterialInstanceDynamic* MyInst = OtherComp->CreateAndSetMaterialInstanceDynamic(0);
		if (MyInst) {
			MyInst->SetVectorParameterValue("Color", FLinearColor::MakeRandomColor());
		}
	}
	Destroy();
}
void AMyProjectProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		
	}
}
