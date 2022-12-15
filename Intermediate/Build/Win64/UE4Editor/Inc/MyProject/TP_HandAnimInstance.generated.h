// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGrip_Code : uint8;
#ifdef MYPROJECT_TP_HandAnimInstance_generated_h
#error "TP_HandAnimInstance.generated.h already included, missing '#pragma once' in TP_HandAnimInstance.h"
#endif
#define MYPROJECT_TP_HandAnimInstance_generated_h

#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGripState);


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGripState);


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_HandAnimInstance(); \
	friend struct Z_Construct_UClass_UTP_HandAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTP_HandAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTP_HandAnimInstance)


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTP_HandAnimInstance(); \
	friend struct Z_Construct_UClass_UTP_HandAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTP_HandAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTP_HandAnimInstance)


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTP_HandAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_HandAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_HandAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_HandAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_HandAnimInstance(UTP_HandAnimInstance&&); \
	NO_API UTP_HandAnimInstance(const UTP_HandAnimInstance&); \
public:


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_HandAnimInstance(UTP_HandAnimInstance&&); \
	NO_API UTP_HandAnimInstance(const UTP_HandAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_HandAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_HandAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_HandAnimInstance)


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentGripState() { return STRUCT_OFFSET(UTP_HandAnimInstance, CurrentGripState); }


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_13_PROLOG
#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_INCLASS \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_HandAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_HandAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UTP_HandAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TP_HandAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
