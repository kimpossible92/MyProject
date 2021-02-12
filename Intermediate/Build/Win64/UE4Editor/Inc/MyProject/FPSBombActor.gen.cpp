// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/FPSBombActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBombActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AFPSBombActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AFPSBombActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSBombActor::execExplode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explode();
		P_NATIVE_END;
	}
	void AFPSBombActor::StaticRegisterNativesAFPSBombActor()
	{
		UClass* Class = AFPSBombActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explode", &AFPSBombActor::execExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSBombActor_Explode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBombActor_Explode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSBombActor_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSBombActor, nullptr, "Explode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSBombActor_Explode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBombActor_Explode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSBombActor_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSBombActor_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSBombActor_NoRegister()
	{
		return AFPSBombActor::StaticClass();
	}
	struct Z_Construct_UClass_AFPSBombActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplodeDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSBombActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSBombActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSBombActor_Explode, "Explode" }, // 2210359683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBombActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPSBombActor.h" },
		{ "ModuleRelativePath", "FPSBombActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplosionTemplate_MetaData[] = {
		{ "Category", "BombActor" },
		{ "ModuleRelativePath", "FPSBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplosionTemplate = { "ExplosionTemplate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSBombActor, ExplosionTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplosionTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplosionTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplodeDelay_MetaData[] = {
		{ "Category", "BombActor" },
		{ "ModuleRelativePath", "FPSBombActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplodeDelay = { "ExplodeDelay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSBombActor, ExplodeDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplodeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplodeDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSBombActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplosionTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBombActor_Statics::NewProp_ExplodeDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSBombActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSBombActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSBombActor_Statics::ClassParams = {
		&AFPSBombActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSBombActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBombActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSBombActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBombActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSBombActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSBombActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSBombActor, 2129520678);
	template<> MYPROJECT_API UClass* StaticClass<AFPSBombActor>()
	{
		return AFPSBombActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSBombActor(Z_Construct_UClass_AFPSBombActor, &AFPSBombActor::StaticClass, TEXT("/Script/MyProject"), TEXT("AFPSBombActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSBombActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
