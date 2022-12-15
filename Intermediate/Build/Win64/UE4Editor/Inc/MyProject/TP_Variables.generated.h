// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_TP_Variables_generated_h
#error "TP_Variables.generated.h already included, missing '#pragma once' in TP_Variables.h"
#endif
#define MYPROJECT_TP_Variables_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TP_Variables_h


#define FOREACH_ENUM_EGRIP_CODE(op) \
	op(EGrip_Code::Open) \
	op(EGrip_Code::CanGrab) \
	op(EGrip_Code::Grab) 

enum class EGrip_Code : uint8;
template<> MYPROJECT_API UEnum* StaticEnum<EGrip_Code>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
