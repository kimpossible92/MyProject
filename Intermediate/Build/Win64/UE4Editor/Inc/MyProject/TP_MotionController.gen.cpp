// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TP_MotionController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_MotionController() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_MotionController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EGrip_Code();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATP_MotionController::execUpdateHandAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execRumbleController)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RumbleController(Z_Param_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execUpdateRoomScaleOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRoomScaleOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execSetupRoomScaleOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRoomScaleOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execGetTeleportDestination)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_MyRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTeleportDestination(Z_Param_Out_MyLocation,Z_Param_Out_MyRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execUpdateArcEndPoint)
	{
		P_GET_UBOOL(Z_Param_ValidLocationFound);
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateArcEndPoint(Z_Param_ValidLocationFound,Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execUpdateArcSpline)
	{
		P_GET_UBOOL(Z_Param_FoundValidLocation);
		P_GET_TARRAY(FVector,Z_Param_SplinePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateArcSpline(Z_Param_FoundValidLocation,Z_Param_SplinePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execClearArc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearArc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execDisableTeleporter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTeleporter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execActivateTeleporter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTeleporter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execReleaseActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execGrabActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_MotionController::execGetActorNearHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand();
		P_NATIVE_END;
	}
	void ATP_MotionController::StaticRegisterNativesATP_MotionController()
	{
		UClass* Class = ATP_MotionController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTeleporter", &ATP_MotionController::execActivateTeleporter },
			{ "ClearArc", &ATP_MotionController::execClearArc },
			{ "DisableTeleporter", &ATP_MotionController::execDisableTeleporter },
			{ "GetActorNearHand", &ATP_MotionController::execGetActorNearHand },
			{ "GetTeleportDestination", &ATP_MotionController::execGetTeleportDestination },
			{ "GrabActor", &ATP_MotionController::execGrabActor },
			{ "OnComponentBeginOverlap", &ATP_MotionController::execOnComponentBeginOverlap },
			{ "ReleaseActor", &ATP_MotionController::execReleaseActor },
			{ "RumbleController", &ATP_MotionController::execRumbleController },
			{ "SetupRoomScaleOutline", &ATP_MotionController::execSetupRoomScaleOutline },
			{ "UpdateArcEndPoint", &ATP_MotionController::execUpdateArcEndPoint },
			{ "UpdateArcSpline", &ATP_MotionController::execUpdateArcSpline },
			{ "UpdateHandAnimation", &ATP_MotionController::execUpdateHandAnimation },
			{ "UpdateRoomScaleOutline", &ATP_MotionController::execUpdateRoomScaleOutline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "ActivateTeleporter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"VRTemplate|Teleportation\")\n//\x09""bool TraceTeleportDestination(TArray<FVector>& TracePoints, FVector& NavMeshLocation, FVector& TraceLocation);\n" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"VRTemplate|Teleportation\")\n       bool TraceTeleportDestination(TArray<FVector>& TracePoints, FVector& NavMeshLocation, FVector& TraceLocation);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "ClearArc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ClearArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "DisableTeleporter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_DisableTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics
	{
		struct TP_MotionController_eventGetActorNearHand_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventGetActorNearHand_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "GetActorNearHand", nullptr, nullptr, sizeof(TP_MotionController_eventGetActorNearHand_Parms), Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GetActorNearHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics
	{
		struct TP_MotionController_eventGetTeleportDestination_Parms
		{
			FVector MyLocation;
			FRotator MyRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyRotation = { "MyRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventGetTeleportDestination_Parms, MyRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyLocation = { "MyLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventGetTeleportDestination_Parms, MyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "GetTeleportDestination", nullptr, nullptr, sizeof(TP_MotionController_eventGetTeleportDestination_Parms), Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "GrabActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GrabActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GrabActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics
	{
		struct TP_MotionController_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_MotionController_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TP_MotionController_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(TP_MotionController_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "ReleaseActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ReleaseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics
	{
		struct TP_MotionController_eventRumbleController_Parms
		{
			float Intensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventRumbleController_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "RumbleController", nullptr, nullptr, sizeof(TP_MotionController_eventRumbleController_Parms), Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_RumbleController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|RoomScale" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "SetupRoomScaleOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics
	{
		struct TP_MotionController_eventUpdateArcEndPoint_Parms
		{
			bool ValidLocationFound;
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_ValidLocationFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidLocationFound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventUpdateArcEndPoint_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound_SetBit(void* Obj)
	{
		((TP_MotionController_eventUpdateArcEndPoint_Parms*)Obj)->ValidLocationFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound = { "ValidLocationFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TP_MotionController_eventUpdateArcEndPoint_Parms), &Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "UpdateArcEndPoint", nullptr, nullptr, sizeof(TP_MotionController_eventUpdateArcEndPoint_Parms), Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics
	{
		struct TP_MotionController_eventUpdateArcSpline_Parms
		{
			bool FoundValidLocation;
			TArray<FVector> SplinePoints;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplinePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplinePoints_Inner;
		static void NewProp_FoundValidLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FoundValidLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints = { "SplinePoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_MotionController_eventUpdateArcSpline_Parms, SplinePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints_Inner = { "SplinePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation_SetBit(void* Obj)
	{
		((TP_MotionController_eventUpdateArcSpline_Parms*)Obj)->FoundValidLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation = { "FoundValidLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TP_MotionController_eventUpdateArcSpline_Parms), &Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "UpdateArcSpline", nullptr, nullptr, sizeof(TP_MotionController_eventUpdateArcSpline_Parms), Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "UpdateHandAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|RoomScale" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, nullptr, "UpdateRoomScaleOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_MotionController_NoRegister()
	{
		return ATP_MotionController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_MotionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRHapticEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRHapticEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialControllerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialControllerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToGrip_MetaData[];
#endif
		static void NewProp_bWantsToGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidTeleportDestination_MetaData[];
#endif
		static void NewProp_bIsValidTeleportDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidTeleportDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRoomScale_MetaData[];
#endif
		static void NewProp_bIsRoomScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRoomScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastFrameValidDestination_MetaData[];
#endif
		static void NewProp_bLastFrameValidDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastFrameValidDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporterActive_MetaData[];
#endif
		static void NewProp_bIsTeleporterActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporterActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGripState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGripState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomScaleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomScaleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportCylinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportCylinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcEndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcEndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabShpere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabShpere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_MotionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_MotionController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter, "ActivateTeleporter" }, // 1507299215
		{ &Z_Construct_UFunction_ATP_MotionController_ClearArc, "ClearArc" }, // 3794969585
		{ &Z_Construct_UFunction_ATP_MotionController_DisableTeleporter, "DisableTeleporter" }, // 684462894
		{ &Z_Construct_UFunction_ATP_MotionController_GetActorNearHand, "GetActorNearHand" }, // 1504820395
		{ &Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination, "GetTeleportDestination" }, // 1461741602
		{ &Z_Construct_UFunction_ATP_MotionController_GrabActor, "GrabActor" }, // 2629668261
		{ &Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 2445269499
		{ &Z_Construct_UFunction_ATP_MotionController_ReleaseActor, "ReleaseActor" }, // 3512711675
		{ &Z_Construct_UFunction_ATP_MotionController_RumbleController, "RumbleController" }, // 2989555038
		{ &Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline, "SetupRoomScaleOutline" }, // 4001289339
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint, "UpdateArcEndPoint" }, // 1889095120
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline, "UpdateArcSpline" }, // 2230520397
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation, "UpdateHandAnimation" }, // 3791912971
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline, "UpdateRoomScaleOutline" }, // 860571432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_MotionController.h" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial = { "BeamMaterial", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, BeamMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh = { "BeamMesh", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, BeamMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect = { "VRHapticEffect", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, VRHapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation = { "InitialControllerRotation", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, InitialControllerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity = { "TeleportLaunchVelocity", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, TeleportLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation = { "TeleportRotation", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bWantsToGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip = { "bWantsToGrip", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsValidTeleportDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination = { "bIsValidTeleportDestination", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination = { "TeleportDestination", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, TeleportDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsRoomScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale = { "bIsRoomScale", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bLastFrameValidDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination = { "bLastFrameValidDestination", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x004000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, SplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsTeleporterActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive = { "bIsTeleporterActive", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "Comment", "// SomWorks :D // Variables Initialization //\n" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "SomWorks :D  Variables Initialization" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState = { "CurrentGripState", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, CurrentGripState), Z_Construct_UEnum_MyProject_EGrip_Code, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh = { "RoomScaleMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, RoomScaleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, Arrow), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, Ring), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder = { "TeleportCylinder", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, TeleportCylinder), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint = { "ArcEndPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, ArcEndPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere = { "GrabShpere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, GrabShpere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline = { "ArcSpline", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, ArcSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, ArcDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, HandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "Comment", "// SomWorks :D // Components Initialization\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "SomWorks :D  Components Initialization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_MotionController, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_MotionController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_MotionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_MotionController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_MotionController_Statics::ClassParams = {
		&ATP_MotionController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_MotionController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_MotionController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_MotionController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_MotionController, 3580242697);
	template<> MYPROJECT_API UClass* StaticClass<ATP_MotionController>()
	{
		return ATP_MotionController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_MotionController(Z_Construct_UClass_ATP_MotionController, &ATP_MotionController::StaticClass, TEXT("/Script/MyProject"), TEXT("ATP_MotionController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_MotionController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
