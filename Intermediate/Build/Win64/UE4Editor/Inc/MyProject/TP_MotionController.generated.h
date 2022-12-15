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
struct FRotator;
#ifdef MYPROJECT_TP_MotionController_generated_h
#error "TP_MotionController.generated.h already included, missing '#pragma once' in TP_MotionController.h"
#endif
#define MYPROJECT_TP_MotionController_generated_h

#define MyProject_Source_MyProject_TP_MotionController_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_TP_MotionController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHandAnimation); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execRumbleController); \
	DECLARE_FUNCTION(execUpdateRoomScaleOutline); \
	DECLARE_FUNCTION(execSetupRoomScaleOutline); \
	DECLARE_FUNCTION(execGetTeleportDestination); \
	DECLARE_FUNCTION(execUpdateArcEndPoint); \
	DECLARE_FUNCTION(execUpdateArcSpline); \
	DECLARE_FUNCTION(execClearArc); \
	DECLARE_FUNCTION(execDisableTeleporter); \
	DECLARE_FUNCTION(execActivateTeleporter); \
	DECLARE_FUNCTION(execReleaseActor); \
	DECLARE_FUNCTION(execGrabActor); \
	DECLARE_FUNCTION(execGetActorNearHand);


#define MyProject_Source_MyProject_TP_MotionController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHandAnimation); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execRumbleController); \
	DECLARE_FUNCTION(execUpdateRoomScaleOutline); \
	DECLARE_FUNCTION(execSetupRoomScaleOutline); \
	DECLARE_FUNCTION(execGetTeleportDestination); \
	DECLARE_FUNCTION(execUpdateArcEndPoint); \
	DECLARE_FUNCTION(execUpdateArcSpline); \
	DECLARE_FUNCTION(execClearArc); \
	DECLARE_FUNCTION(execDisableTeleporter); \
	DECLARE_FUNCTION(execActivateTeleporter); \
	DECLARE_FUNCTION(execReleaseActor); \
	DECLARE_FUNCTION(execGrabActor); \
	DECLARE_FUNCTION(execGetActorNearHand);


#define MyProject_Source_MyProject_TP_MotionController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_MotionController(); \
	friend struct Z_Construct_UClass_ATP_MotionController_Statics; \
public: \
	DECLARE_CLASS(ATP_MotionController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATP_MotionController)


#define MyProject_Source_MyProject_TP_MotionController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATP_MotionController(); \
	friend struct Z_Construct_UClass_ATP_MotionController_Statics; \
public: \
	DECLARE_CLASS(ATP_MotionController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ATP_MotionController)


#define MyProject_Source_MyProject_TP_MotionController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_MotionController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_MotionController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_MotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_MotionController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_MotionController(ATP_MotionController&&); \
	NO_API ATP_MotionController(const ATP_MotionController&); \
public:


#define MyProject_Source_MyProject_TP_MotionController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_MotionController(ATP_MotionController&&); \
	NO_API ATP_MotionController(const ATP_MotionController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_MotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_MotionController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_MotionController)


#define MyProject_Source_MyProject_TP_MotionController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ATP_MotionController, RootScene); } \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(ATP_MotionController, MotionController); } \
	FORCEINLINE static uint32 __PPO__HandMesh() { return STRUCT_OFFSET(ATP_MotionController, HandMesh); } \
	FORCEINLINE static uint32 __PPO__ArcDirection() { return STRUCT_OFFSET(ATP_MotionController, ArcDirection); } \
	FORCEINLINE static uint32 __PPO__ArcSpline() { return STRUCT_OFFSET(ATP_MotionController, ArcSpline); } \
	FORCEINLINE static uint32 __PPO__GrabShpere() { return STRUCT_OFFSET(ATP_MotionController, GrabShpere); } \
	FORCEINLINE static uint32 __PPO__ArcEndPoint() { return STRUCT_OFFSET(ATP_MotionController, ArcEndPoint); } \
	FORCEINLINE static uint32 __PPO__TeleportCylinder() { return STRUCT_OFFSET(ATP_MotionController, TeleportCylinder); } \
	FORCEINLINE static uint32 __PPO__Ring() { return STRUCT_OFFSET(ATP_MotionController, Ring); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(ATP_MotionController, Arrow); } \
	FORCEINLINE static uint32 __PPO__RoomScaleMesh() { return STRUCT_OFFSET(ATP_MotionController, RoomScaleMesh); } \
	FORCEINLINE static uint32 __PPO__CurrentGripState() { return STRUCT_OFFSET(ATP_MotionController, CurrentGripState); } \
	FORCEINLINE static uint32 __PPO__AttachedActor() { return STRUCT_OFFSET(ATP_MotionController, AttachedActor); } \
	FORCEINLINE static uint32 __PPO__bIsTeleporterActive() { return STRUCT_OFFSET(ATP_MotionController, bIsTeleporterActive); } \
	FORCEINLINE static uint32 __PPO__SplineMeshes() { return STRUCT_OFFSET(ATP_MotionController, SplineMeshes); } \
	FORCEINLINE static uint32 __PPO__bLastFrameValidDestination() { return STRUCT_OFFSET(ATP_MotionController, bLastFrameValidDestination); } \
	FORCEINLINE static uint32 __PPO__bIsRoomScale() { return STRUCT_OFFSET(ATP_MotionController, bIsRoomScale); } \
	FORCEINLINE static uint32 __PPO__TeleportDestination() { return STRUCT_OFFSET(ATP_MotionController, TeleportDestination); } \
	FORCEINLINE static uint32 __PPO__bIsValidTeleportDestination() { return STRUCT_OFFSET(ATP_MotionController, bIsValidTeleportDestination); } \
	FORCEINLINE static uint32 __PPO__bWantsToGrip() { return STRUCT_OFFSET(ATP_MotionController, bWantsToGrip); } \
	FORCEINLINE static uint32 __PPO__TeleportRotation() { return STRUCT_OFFSET(ATP_MotionController, TeleportRotation); } \
	FORCEINLINE static uint32 __PPO__TeleportLaunchVelocity() { return STRUCT_OFFSET(ATP_MotionController, TeleportLaunchVelocity); } \
	FORCEINLINE static uint32 __PPO__InitialControllerRotation() { return STRUCT_OFFSET(ATP_MotionController, InitialControllerRotation); } \
	FORCEINLINE static uint32 __PPO__VRHapticEffect() { return STRUCT_OFFSET(ATP_MotionController, VRHapticEffect); } \
	FORCEINLINE static uint32 __PPO__BeamMesh() { return STRUCT_OFFSET(ATP_MotionController, BeamMesh); } \
	FORCEINLINE static uint32 __PPO__BeamMaterial() { return STRUCT_OFFSET(ATP_MotionController, BeamMaterial); }


#define MyProject_Source_MyProject_TP_MotionController_h_10_PROLOG
#define MyProject_Source_MyProject_TP_MotionController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_MotionController_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_MotionController_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_TP_MotionController_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_TP_MotionController_h_13_INCLASS \
	MyProject_Source_MyProject_TP_MotionController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_TP_MotionController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_TP_MotionController_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_TP_MotionController_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_TP_MotionController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_MotionController_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_TP_MotionController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ATP_MotionController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_TP_MotionController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
