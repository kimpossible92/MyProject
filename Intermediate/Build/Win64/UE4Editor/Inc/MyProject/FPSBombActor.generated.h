// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_FPSBombActor_generated_h
#error "FPSBombActor.generated.h already included, missing '#pragma once' in FPSBombActor.h"
#endif
#define MYPROJECT_FPSBombActor_generated_h

#define MyProject_Source_MyProject_FPSBombActor_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_FPSBombActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplode);


#define MyProject_Source_MyProject_FPSBombActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplode);


#define MyProject_Source_MyProject_FPSBombActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSBombActor(); \
	friend struct Z_Construct_UClass_AFPSBombActor_Statics; \
public: \
	DECLARE_CLASS(AFPSBombActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSBombActor)


#define MyProject_Source_MyProject_FPSBombActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSBombActor(); \
	friend struct Z_Construct_UClass_AFPSBombActor_Statics; \
public: \
	DECLARE_CLASS(AFPSBombActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSBombActor)


#define MyProject_Source_MyProject_FPSBombActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSBombActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBombActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBombActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBombActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBombActor(AFPSBombActor&&); \
	NO_API AFPSBombActor(const AFPSBombActor&); \
public:


#define MyProject_Source_MyProject_FPSBombActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBombActor(AFPSBombActor&&); \
	NO_API AFPSBombActor(const AFPSBombActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBombActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBombActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSBombActor)


#define MyProject_Source_MyProject_FPSBombActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplodeDelay() { return STRUCT_OFFSET(AFPSBombActor, ExplodeDelay); } \
	FORCEINLINE static uint32 __PPO__ExplosionTemplate() { return STRUCT_OFFSET(AFPSBombActor, ExplosionTemplate); }


#define MyProject_Source_MyProject_FPSBombActor_h_9_PROLOG
#define MyProject_Source_MyProject_FPSBombActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_FPSBombActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_FPSBombActor_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_FPSBombActor_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_FPSBombActor_h_12_INCLASS \
	MyProject_Source_MyProject_FPSBombActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_FPSBombActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_FPSBombActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_FPSBombActor_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_FPSBombActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_FPSBombActor_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_FPSBombActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AFPSBombActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_FPSBombActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
