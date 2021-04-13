// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtTouchableVolumeComponent;
class UUxtNearPointerComponent;
class UObject;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtTouchableVolumeComponent_generated_h
#error "UxtTouchableVolumeComponent.generated.h already included, missing '#pragma once' in UxtTouchableVolumeComponent.h"
#endif
#define UXTOOLS_UxtTouchableVolumeComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_37_DELEGATE \
struct _Script_UXTools_eventUxtVolumeDisabledDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
}; \
static inline void FUxtVolumeDisabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeDisabledDelegate, UUxtTouchableVolumeComponent* Volume) \
{ \
	_Script_UXTools_eventUxtVolumeDisabledDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	UxtVolumeDisabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_36_DELEGATE \
struct _Script_UXTools_eventUxtVolumeEnabledDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
}; \
static inline void FUxtVolumeEnabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeEnabledDelegate, UUxtTouchableVolumeComponent* Volume) \
{ \
	_Script_UXTools_eventUxtVolumeEnabledDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	UxtVolumeEnabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_35_DELEGATE \
struct _Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtVolumeEndPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeEndPokeDelegate, UUxtTouchableVolumeComponent* Volume, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	UxtVolumeEndPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_33_DELEGATE \
struct _Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtVolumeUpdatePokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeUpdatePokeDelegate, UUxtTouchableVolumeComponent* Volume, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	UxtVolumeUpdatePokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_31_DELEGATE \
struct _Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtVolumeBeginPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeBeginPokeDelegate, UUxtTouchableVolumeComponent* Volume, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	UxtVolumeBeginPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_29_DELEGATE \
struct _Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UObject* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtVolumeEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeEndFocusDelegate, UUxtTouchableVolumeComponent* Volume, UObject* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtVolumeEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_27_DELEGATE \
struct _Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UObject* Pointer; \
}; \
static inline void FUxtVolumeUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeUpdateFocusDelegate, UUxtTouchableVolumeComponent* Volume, UObject* Pointer) \
{ \
	_Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	UxtVolumeUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_26_DELEGATE \
struct _Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms \
{ \
	UUxtTouchableVolumeComponent* Volume; \
	UObject* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtVolumeBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtVolumeBeginFocusDelegate, UUxtTouchableVolumeComponent* Volume, UObject* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtVolumeBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInputTouchLeaveHandler); \
	DECLARE_FUNCTION(execOnInputTouchEndHandler); \
	DECLARE_FUNCTION(execOnInputTouchBeginHandler); \
	DECLARE_FUNCTION(execSetEnabled);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInputTouchLeaveHandler); \
	DECLARE_FUNCTION(execOnInputTouchEndHandler); \
	DECLARE_FUNCTION(execOnInputTouchBeginHandler); \
	DECLARE_FUNCTION(execSetEnabled);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtTouchableVolumeComponent(); \
	friend struct Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTouchableVolumeComponent, UUxtUIElementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTouchableVolumeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTouchableVolumeComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUUxtTouchableVolumeComponent(); \
	friend struct Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTouchableVolumeComponent, UUxtUIElementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTouchableVolumeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTouchableVolumeComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtTouchableVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtTouchableVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTouchableVolumeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTouchableVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTouchableVolumeComponent(UUxtTouchableVolumeComponent&&); \
	NO_API UUxtTouchableVolumeComponent(const UUxtTouchableVolumeComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtTouchableVolumeComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTouchableVolumeComponent(UUxtTouchableVolumeComponent&&); \
	NO_API UUxtTouchableVolumeComponent(const UUxtTouchableVolumeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTouchableVolumeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTouchableVolumeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtTouchableVolumeComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_42_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtTouchableVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
