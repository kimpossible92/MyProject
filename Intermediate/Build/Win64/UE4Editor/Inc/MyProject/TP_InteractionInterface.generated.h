// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef MYPROJECT_TP_InteractionInterface_generated_h
#error "TP_InteractionInterface.generated.h already included, missing '#pragma once' in TP_InteractionInterface.h"
#endif
#define MYPROJECT_TP_InteractionInterface_generated_h

#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_RPC_WRAPPERS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_EVENT_PARMS \
	struct TP_InteractionInterface_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UTP_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_InteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UTP_InteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_InteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UTP_InteractionInterface(UTP_InteractionInterface&&); \
	MYPROJECT_API UTP_InteractionInterface(const UTP_InteractionInterface&); \
public:


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UTP_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API UTP_InteractionInterface(UTP_InteractionInterface&&); \
	MYPROJECT_API UTP_InteractionInterface(const UTP_InteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UTP_InteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_InteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_InteractionInterface)


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTP_InteractionInterface(); \
	friend struct Z_Construct_UClass_UTP_InteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UTP_InteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(UTP_InteractionInterface)


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITP_InteractionInterface() {} \
public: \
	typedef UTP_InteractionInterface UClassType; \
	typedef ITP_InteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Source_MyProject_TP_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITP_InteractionInterface() {} \
public: \
	typedef UTP_InteractionInterface UClassType; \
	typedef ITP_InteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Source_MyProject_TP_InteractionInterface_h_10_PROLOG \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_EVENT_PARMS


#define MyProject_Source_MyProject_TP_InteractionInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_InteractionInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_TP_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UTP_InteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TP_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
