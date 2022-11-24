// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActor.generated.h"

UCLASS()
class MYPROJECT_API AEnemyActor : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AEnemyActor();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void ChoiseGun();
	float dt,resetTime,reset, pd,kxz,the100;
	float cDist;
	FVector plLocation;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* NewAnimation;
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UPROPERTY()
		APawn* plpawn;
	UPROPERTY(EditAnywhere)
	bool rb;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = Gameplay)
		bool Itime;
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* MyCollisionSphere;
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh; 
	FQuat sr;
	float sradius;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
