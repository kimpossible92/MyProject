// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TP_VirtualRealityPawn_Motion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VirtualRealityPawn_Motion() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATP_VirtualRealityPawn_Motion::execTeleportActor)
	{
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportActor(Z_Param_MotionController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_VirtualRealityPawn_Motion::execExecuteTeleportation)
	{
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteTeleportation(Z_Param_MotionController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_VirtualRealityPawn_Motion::execGetRotationFromInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightAxis);
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationFromInput(Z_Param_UpAxis,Z_Param_RightAxis,Z_Param_MotionController);
		P_NATIVE_END;
	}
	void ATP_VirtualRealityPawn_Motion::StaticRegisterNativesATP_VirtualRealityPawn_Motion()
	{
		UClass* Class = ATP_VirtualRealityPawn_Motion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTeleportation", &ATP_VirtualRealityPawn_Motion::execExecuteTeleportation },
			{ "GetRotationFromInput", &ATP_VirtualRealityPawn_Motion::execGetRotationFromInput },
			{ "TeleportActor", &ATP_VirtualRealityPawn_Motion::execTeleportActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, nullptr, "ExecuteTeleportation", nullptr, nullptr, sizeof(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms
		{
			float UpAxis;
			float RightAxis;
			ATP_MotionController* MotionController;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, UpAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, nullptr, "GetRotationFromInput", nullptr, nullptr, sizeof(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, nullptr, "TeleportActor", nullptr, nullptr, sizeof(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister()
	{
		return ATP_VirtualRealityPawn_Motion::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRollToRotate_MetaData[];
#endif
		static void NewProp_bUseControllerRollToRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRollToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftStickDown_MetaData[];
#endif
		static void NewProp_bLeftStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightStickDown_MetaData[];
#endif
		static void NewProp_bRightStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbDeadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbDeadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportFadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporting_MetaData[];
#endif
		static void NewProp_bIsTeleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation, "ExecuteTeleportation" }, // 176011320
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput, "GetRotationFromInput" }, // 3007495562
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor, "TeleportActor" }, // 4178971928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_VirtualRealityPawn_Motion.h" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bUseControllerRollToRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate = { "bUseControllerRollToRotate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, DefaultPlayerHeight), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bLeftStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown = { "bLeftStickDown", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bRightStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown = { "bRightStickDown", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone = { "ThumbDeadzone", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, ThumbDeadzone), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, TeleportFadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bIsTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting = { "bIsTeleporting", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RightController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, LeftController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera = { "VRCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase = { "CameraBase", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, CameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VirtualRealityPawn_Motion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams = {
		&ATP_VirtualRealityPawn_Motion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VirtualRealityPawn_Motion, 955845346);
	template<> MYPROJECT_API UClass* StaticClass<ATP_VirtualRealityPawn_Motion>()
	{
		return ATP_VirtualRealityPawn_Motion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VirtualRealityPawn_Motion(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, &ATP_VirtualRealityPawn_Motion::StaticClass, TEXT("/Script/MyProject"), TEXT("ATP_VirtualRealityPawn_Motion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VirtualRealityPawn_Motion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
