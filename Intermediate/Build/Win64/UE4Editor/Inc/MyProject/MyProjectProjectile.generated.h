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
struct FHitResult;
struct FVector;
#ifdef MYPROJECT_MyProjectProjectile_generated_h
#error "MyProjectProjectile.generated.h already included, missing '#pragma once' in MyProjectProjectile.h"
#endif
#define MYPROJECT_MyProjectProjectile_generated_h

#define MyProject_Source_MyProject_MyProjectProjectile_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_MyProjectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_MyProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_MyProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject_Source_MyProject_MyProjectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject_Source_MyProject_MyProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public:


#define MyProject_Source_MyProject_MyProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectProjectile)


#define MyProject_Source_MyProject_MyProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProjectProjectile, ProjectileMovement); }


#define MyProject_Source_MyProject_MyProjectProjectile_h_9_PROLOG
#define MyProject_Source_MyProject_MyProjectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_INCLASS \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
