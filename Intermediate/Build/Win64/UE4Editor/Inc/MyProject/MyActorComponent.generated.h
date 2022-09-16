// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef MYPROJECT_MyActorComponent_generated_h
#error "MyActorComponent.generated.h already included, missing '#pragma once' in MyActorComponent.h"
#endif
#define MYPROJECT_MyActorComponent_generated_h

#define MyProject_Source_MyProject_MyActorComponent_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_MyActorComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define MyProject_Source_MyProject_MyActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define MyProject_Source_MyProject_MyActorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyActorComponent(); \
	friend struct Z_Construct_UClass_UMyActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMyActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyActorComponent)


#define MyProject_Source_MyProject_MyActorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMyActorComponent(); \
	friend struct Z_Construct_UClass_UMyActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMyActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyActorComponent)


#define MyProject_Source_MyProject_MyActorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyActorComponent(UMyActorComponent&&); \
	NO_API UMyActorComponent(const UMyActorComponent&); \
public:


#define MyProject_Source_MyProject_MyActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyActorComponent(UMyActorComponent&&); \
	NO_API UMyActorComponent(const UMyActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyActorComponent)


#define MyProject_Source_MyProject_MyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefHealth() { return STRUCT_OFFSET(UMyActorComponent, DefHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UMyActorComponent, Health); }


#define MyProject_Source_MyProject_MyActorComponent_h_10_PROLOG
#define MyProject_Source_MyProject_MyActorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActorComponent_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyActorComponent_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyActorComponent_h_13_INCLASS \
	MyProject_Source_MyProject_MyActorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyActorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyActorComponent_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActorComponent_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UMyActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
