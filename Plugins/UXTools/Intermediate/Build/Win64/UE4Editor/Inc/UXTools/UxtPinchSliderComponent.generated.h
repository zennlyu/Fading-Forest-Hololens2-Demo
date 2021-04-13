// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPinchSliderComponent;
class UUxtPointerComponent;
enum class EUxtSliderState : uint8;
class UStaticMeshComponent;
#ifdef UXTOOLS_UxtPinchSliderComponent_generated_h
#error "UxtPinchSliderComponent.generated.h already included, missing '#pragma once' in UxtPinchSliderComponent.h"
#endif
#define UXTOOLS_UxtPinchSliderComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_50_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderDisableDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
}; \
static inline void FUxtPinchSliderDisableDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderDisableDelegate, UUxtPinchSliderComponent* Slider) \
{ \
	_Script_UXTools_eventUxtPinchSliderDisableDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	UxtPinchSliderDisableDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_49_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEnableDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
}; \
static inline void FUxtPinchSliderEnableDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEnableDelegate, UUxtPinchSliderComponent* Slider) \
{ \
	_Script_UXTools_eventUxtPinchSliderEnableDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	UxtPinchSliderEnableDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_48_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderEndGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEndGrabDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderEndGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	float NewValue; \
}; \
static inline void FUxtPinchSliderUpdateValueDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateValueDelegate, UUxtPinchSliderComponent* Slider, float NewValue) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.NewValue=NewValue; \
	UxtPinchSliderUpdateValueDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_45_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderBeginGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderBeginGrabDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderBeginGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_43_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtPinchSliderEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEndFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtPinchSliderEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_41_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_39_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtPinchSliderBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderBeginFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtPinchSliderBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_37_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	EUxtSliderState NewState; \
}; \
static inline void FUxtPinchSliderUpdateStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateStateDelegate, UUxtPinchSliderComponent* Slider, EUxtSliderState NewState) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.NewState=NewState; \
	UxtPinchSliderUpdateStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execGetCollisionProfile); \
	DECLARE_FUNCTION(execSetSmoothing); \
	DECLARE_FUNCTION(execGetSmoothing); \
	DECLARE_FUNCTION(execSetNumSteps); \
	DECLARE_FUNCTION(execGetNumSteps); \
	DECLARE_FUNCTION(execSetUseSteppedMovement); \
	DECLARE_FUNCTION(execGetUseSteppedMovement); \
	DECLARE_FUNCTION(execSetValueUpperBound); \
	DECLARE_FUNCTION(execGetValueUpperBound); \
	DECLARE_FUNCTION(execSetValueLowerBound); \
	DECLARE_FUNCTION(execGetValueLowerBound); \
	DECLARE_FUNCTION(execSetTrackLength); \
	DECLARE_FUNCTION(execGetTrackLength); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetState);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execGetCollisionProfile); \
	DECLARE_FUNCTION(execSetSmoothing); \
	DECLARE_FUNCTION(execGetSmoothing); \
	DECLARE_FUNCTION(execSetNumSteps); \
	DECLARE_FUNCTION(execGetNumSteps); \
	DECLARE_FUNCTION(execSetUseSteppedMovement); \
	DECLARE_FUNCTION(execGetUseSteppedMovement); \
	DECLARE_FUNCTION(execSetValueUpperBound); \
	DECLARE_FUNCTION(execGetValueUpperBound); \
	DECLARE_FUNCTION(execSetValueLowerBound); \
	DECLARE_FUNCTION(execGetValueLowerBound); \
	DECLARE_FUNCTION(execSetTrackLength); \
	DECLARE_FUNCTION(execGetTrackLength); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetState);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtPinchSliderComponent(); \
	friend struct Z_Construct_UClass_UUxtPinchSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPinchSliderComponent, UUxtUIElementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPinchSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPinchSliderComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUUxtPinchSliderComponent(); \
	friend struct Z_Construct_UClass_UUxtPinchSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPinchSliderComponent, UUxtUIElementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPinchSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPinchSliderComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPinchSliderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPinchSliderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPinchSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPinchSliderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPinchSliderComponent(UUxtPinchSliderComponent&&); \
	NO_API UUxtPinchSliderComponent(const UUxtPinchSliderComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPinchSliderComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPinchSliderComponent(UUxtPinchSliderComponent&&); \
	NO_API UUxtPinchSliderComponent(const UUxtPinchSliderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPinchSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPinchSliderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtPinchSliderComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Visuals() { return STRUCT_OFFSET(UUxtPinchSliderComponent, Visuals); } \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(UUxtPinchSliderComponent, Value); } \
	FORCEINLINE static uint32 __PPO__TrackLength() { return STRUCT_OFFSET(UUxtPinchSliderComponent, TrackLength); } \
	FORCEINLINE static uint32 __PPO__ValueLowerBound() { return STRUCT_OFFSET(UUxtPinchSliderComponent, ValueLowerBound); } \
	FORCEINLINE static uint32 __PPO__ValueUpperBound() { return STRUCT_OFFSET(UUxtPinchSliderComponent, ValueUpperBound); } \
	FORCEINLINE static uint32 __PPO__bUseSteppedMovement() { return STRUCT_OFFSET(UUxtPinchSliderComponent, bUseSteppedMovement); } \
	FORCEINLINE static uint32 __PPO__NumSteps() { return STRUCT_OFFSET(UUxtPinchSliderComponent, NumSteps); } \
	FORCEINLINE static uint32 __PPO__Smoothing() { return STRUCT_OFFSET(UUxtPinchSliderComponent, Smoothing); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(UUxtPinchSliderComponent, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(UUxtPinchSliderComponent, BoxComponent); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_57_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPinchSliderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h


#define FOREACH_ENUM_EUXTSLIDERSTATE(op) \
	op(EUxtSliderState::Default) \
	op(EUxtSliderState::Focused) \
	op(EUxtSliderState::Grabbed) \
	op(EUxtSliderState::Disabled) 

enum class EUxtSliderState : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtSliderState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
