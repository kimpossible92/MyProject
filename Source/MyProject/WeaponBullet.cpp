// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBullet.h"

// Sets default values
AWeaponBullet::AWeaponBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ReloadSpeed=0.3f;
	AttachSock="";
	Named="";
	ItemTypes = TEnumAsByte<weapType> (weapType::Handgun_A);
	IsStackabled=true;
	StackSized=2;
	MaxStackSize=2;
	Classed = this;
	_weapclass = TEnumAsByte<weapclass>(weapclass::Handgun);
	_weapType = TEnumAsByte<weapType>(weapType::Handgun_A);
}

// Called when the game starts or when spawned
void AWeaponBullet::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWeaponBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

