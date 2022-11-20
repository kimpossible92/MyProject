// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT_TP_TwinStickProjectile_generated_h
#error "TP_TwinStickProjectile.generated.h already included, missing '#pragma once' in TP_TwinStickProjectile.h"
#endif
#define MYPROJECT_TP_TwinStickProjectile_generated_h

#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_TwinStickProjectile(); \
	friend struct Z_Construct_UClass_ATP_TwinStickProjectile_Statics; \
public: \
	DECLARE_CLASS(ATP_TwinStickProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATP_TwinStickProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATP_TwinStickProjectile(); \
	friend struct Z_Construct_UClass_ATP_TwinStickProjectile_Statics; \
public: \
	DECLARE_CLASS(ATP_TwinStickProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATP_TwinStickProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_TwinStickProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_TwinStickProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_TwinStickProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_TwinStickProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_TwinStickProjectile(ATP_TwinStickProjectile&&); \
	NO_API ATP_TwinStickProjectile(const ATP_TwinStickProjectile&); \
public:


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_TwinStickProjectile(ATP_TwinStickProjectile&&); \
	NO_API ATP_TwinStickProjectile(const ATP_TwinStickProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_TwinStickProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_TwinStickProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_TwinStickProjectile)


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATP_TwinStickProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATP_TwinStickProjectile, ProjectileMovement); }


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_12_PROLOG
#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_INCLASS \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ATP_TwinStickProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TP_TwinStick_TP_TwinStickProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
