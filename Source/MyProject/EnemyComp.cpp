// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyComp.h"

// Sets default values for this component's properties
UEnemyComp::UEnemyComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	the100 = 30.0f;
	// ...
}


// Called when the game starts
void UEnemyComp::BeginPlay()
{
	Super::BeginPlay(); 
	
}


// Called every frame
void UEnemyComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

