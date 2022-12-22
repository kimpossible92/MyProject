// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBullet.generated.h"

UENUM()
enum weapclass {
	Handgun UMETA(DisplayName = "Handgun_"),
	Shotgun UMETA(DisplayName = "Shotgun_"),
	GrenadeGun UMETA(DisplayName = "GrenadeGun_"),
	RocketLauncher UMETA(DisplayName = "RocketLauncher_"),
};
UENUM()
enum weapType {
	Handgun_A  UMETA(DisplayName = "Handgun_A"),
	Handgun_B  UMETA(DisplayName = "Handgun_B"),
	Handgun_C  UMETA(DisplayName = "Handgun_C"),
	Handgun_D   UMETA(DisplayName = "Handgun_D"),
	Magnum_A  UMETA(DisplayName = "Magnum_A"),
	Shotgun_A  UMETA(DisplayName = "Shotgun_A"),
	GrenadeGun_A UMETA(DisplayName = "GrenadeGun_A"),
	RocketLauncher_A UMETA(DisplayName = "RocketLauncher_A"),
};
UCLASS()
class MYPROJECT_API AWeaponBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//weapon params
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
	float FireSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		float ReloadSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		FName AttachSock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		FName Named;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		TEnumAsByte<weapType> ItemTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		bool IsStackabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		int StackSized;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		int MaxStackSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Actor)
		class AActor* Classed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	TEnumAsByte<weapclass> _weapclass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	TEnumAsByte<weapType> _weapType;
};
