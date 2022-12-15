// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_HandAnimInstance.h"

UTP_HandAnimInstance::UTP_HandAnimInstance()
{
	CurrentGripState = EGrip_Code::Open;
}

void UTP_HandAnimInstance::SetGripState(EGrip_Code GripState)
{
	CurrentGripState = GripState;
}