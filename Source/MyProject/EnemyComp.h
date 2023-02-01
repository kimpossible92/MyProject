// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UEnemyComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyComp();

protected:
	// Called when the game starts

	virtual void BeginPlay() override;
	
public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	bool Itime;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:
	UPROPERTY() APawn*
		plpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FQuat sr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector sv;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float kxz;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float the100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		bool rb;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector plLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GetActorLocationXY;
		
};
