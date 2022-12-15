// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TP_HandAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_HandAnimInstance() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UTP_HandAnimInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UTP_HandAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EGrip_Code();
// End Cross Module References
	DEFINE_FUNCTION(UTP_HandAnimInstance::execSetGripState)
	{
		P_GET_ENUM(EGrip_Code,Z_Param_GripState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripState(EGrip_Code(Z_Param_GripState));
		P_NATIVE_END;
	}
	void UTP_HandAnimInstance::StaticRegisterNativesUTP_HandAnimInstance()
	{
		UClass* Class = UTP_HandAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGripState", &UTP_HandAnimInstance::execSetGripState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics
	{
		struct TP_HandAnimInstance_eventSetGripState_Parms
		{
			EGrip_Code GripState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState = { "GripState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TP_HandAnimInstance_eventSetGripState_Parms, GripState), Z_Construct_UEnum_MyProject_EGrip_Code, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_HandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_HandAnimInstance, nullptr, "SetGripState", nullptr, nullptr, sizeof(TP_HandAnimInstance_eventSetGripState_Parms), Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTP_HandAnimInstance_NoRegister()
	{
		return UTP_HandAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_HandAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGripState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGripState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_HandAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_HandAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState, "SetGripState" }, // 2953564265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TP_HandAnimInstance.h" },
		{ "ModuleRelativePath", "TP_HandAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_HandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState = { "CurrentGripState", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTP_HandAnimInstance, CurrentGripState), Z_Construct_UEnum_MyProject_EGrip_Code, METADATA_PARAMS(Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_HandAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_HandAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::ClassParams = {
		&UTP_HandAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_HandAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_HandAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_HandAnimInstance, 2595329263);
	template<> MYPROJECT_API UClass* StaticClass<UTP_HandAnimInstance>()
	{
		return UTP_HandAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_HandAnimInstance(Z_Construct_UClass_UTP_HandAnimInstance, &UTP_HandAnimInstance::StaticClass, TEXT("/Script/MyProject"), TEXT("UTP_HandAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_HandAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
