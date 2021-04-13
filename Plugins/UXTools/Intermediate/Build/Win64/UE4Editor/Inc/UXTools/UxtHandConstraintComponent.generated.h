// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
struct FQuat;
struct FVector;
struct FBox;
#ifdef UXTOOLS_UxtHandConstraintComponent_generated_h
#error "UxtHandConstraintComponent.generated.h already included, missing '#pragma once' in UxtHandConstraintComponent.h"
#endif
#define UXTOOLS_UxtHandConstraintComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_54_DELEGATE \
struct _Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms \
{ \
	EControllerHand TrackedHand; \
}; \
static inline void FUxtHandConstraintEndTrackingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintEndTrackingDelegate, EControllerHand TrackedHand) \
{ \
	_Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms Parms; \
	Parms.TrackedHand=TrackedHand; \
	UxtHandConstraintEndTrackingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_53_DELEGATE \
struct _Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms \
{ \
	EControllerHand TrackedHand; \
}; \
static inline void FUxtHandConstraintBeginTrackingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintBeginTrackingDelegate, EControllerHand TrackedHand) \
{ \
	_Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms Parms; \
	Parms.TrackedHand=TrackedHand; \
	UxtHandConstraintBeginTrackingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_52_DELEGATE \
static inline void FUxtHandConstraintDeactivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintDeactivatedDelegate) \
{ \
	UxtHandConstraintDeactivatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_51_DELEGATE \
static inline void FUxtHandConstraintActivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintActivatedDelegate) \
{ \
	UxtHandConstraintActivatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHandUsableForConstraint); \
	DECLARE_FUNCTION(execGetGoalRotation); \
	DECLARE_FUNCTION(execGetGoalLocation); \
	DECLARE_FUNCTION(execIsConstraintActive); \
	DECLARE_FUNCTION(execGetHandBounds); \
	DECLARE_FUNCTION(execGetTrackedHand);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHandUsableForConstraint); \
	DECLARE_FUNCTION(execGetGoalRotation); \
	DECLARE_FUNCTION(execGetGoalLocation); \
	DECLARE_FUNCTION(execIsConstraintActive); \
	DECLARE_FUNCTION(execGetHandBounds); \
	DECLARE_FUNCTION(execGetTrackedHand);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtHandConstraintComponent(); \
	friend struct Z_Construct_UClass_UUxtHandConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtHandConstraintComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandConstraintComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUUxtHandConstraintComponent(); \
	friend struct Z_Construct_UClass_UUxtHandConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtHandConstraintComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandConstraintComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtHandConstraintComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtHandConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandConstraintComponent(UUxtHandConstraintComponent&&); \
	NO_API UUxtHandConstraintComponent(const UUxtHandConstraintComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandConstraintComponent(UUxtHandConstraintComponent&&); \
	NO_API UUxtHandConstraintComponent(const UUxtHandConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandConstraintComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtHandConstraintComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedHand() { return STRUCT_OFFSET(UUxtHandConstraintComponent, TrackedHand); } \
	FORCEINLINE static uint32 __PPO__HandBounds() { return STRUCT_OFFSET(UUxtHandConstraintComponent, HandBounds); } \
	FORCEINLINE static uint32 __PPO__bIsConstraintActive() { return STRUCT_OFFSET(UUxtHandConstraintComponent, bIsConstraintActive); } \
	FORCEINLINE static uint32 __PPO__GoalLocation() { return STRUCT_OFFSET(UUxtHandConstraintComponent, GoalLocation); } \
	FORCEINLINE static uint32 __PPO__GoalRotation() { return STRUCT_OFFSET(UUxtHandConstraintComponent, GoalRotation); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_65_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtHandConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h


#define FOREACH_ENUM_EUXTHANDCONSTRAINTROTATIONMODE(op) \
	op(EUxtHandConstraintRotationMode::None) \
	op(EUxtHandConstraintRotationMode::LookAtCamera) \
	op(EUxtHandConstraintRotationMode::HandRotation) 

enum class EUxtHandConstraintRotationMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintRotationMode>();

#define FOREACH_ENUM_EUXTHANDCONSTRAINTOFFSETMODE(op) \
	op(EUxtHandConstraintOffsetMode::LookAtCamera) \
	op(EUxtHandConstraintOffsetMode::HandRotation) 

enum class EUxtHandConstraintOffsetMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintOffsetMode>();

#define FOREACH_ENUM_EUXTHANDCONSTRAINTZONE(op) \
	op(EUxtHandConstraintZone::UlnarSide) \
	op(EUxtHandConstraintZone::RadialSide) \
	op(EUxtHandConstraintZone::AboveFingerTips) \
	op(EUxtHandConstraintZone::BelowWrist) 

enum class EUxtHandConstraintZone : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintZone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
