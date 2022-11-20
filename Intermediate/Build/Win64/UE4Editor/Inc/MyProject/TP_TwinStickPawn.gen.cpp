// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TP_TwinStick/TP_TwinStickPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TwinStickPawn() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_TwinStickPawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATP_TwinStickPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATP_TwinStickPawn::StaticRegisterNativesATP_TwinStickPawn()
	{
	}
	UClass* Z_Construct_UClass_ATP_TwinStickPawn_NoRegister()
	{
		return ATP_TwinStickPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATP_TwinStickPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_TwinStickPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* How fast the weapon will fire */" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/* The mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TwinStick/TP_TwinStickPawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP_TwinStickPawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_ShipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_TwinStickPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_VectorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TwinStickPawn_Statics::NewProp_ShipMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_TwinStickPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TwinStickPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_TwinStickPawn_Statics::ClassParams = {
		&ATP_TwinStickPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP_TwinStickPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATP_TwinStickPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TwinStickPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_TwinStickPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_TwinStickPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_TwinStickPawn, 2833618155);
	template<> MYPROJECT_API UClass* StaticClass<ATP_TwinStickPawn>()
	{
		return ATP_TwinStickPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_TwinStickPawn(Z_Construct_UClass_ATP_TwinStickPawn, &ATP_TwinStickPawn::StaticClass, TEXT("/Script/MyProject"), TEXT("ATP_TwinStickPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TwinStickPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
