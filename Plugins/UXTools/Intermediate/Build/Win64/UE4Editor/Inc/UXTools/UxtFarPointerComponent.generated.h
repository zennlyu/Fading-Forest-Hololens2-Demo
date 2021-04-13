// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtFarPointerComponent;
struct FVector;
class UPrimitiveComponent;
struct FQuat;
#ifdef UXTOOLS_UxtFarPointerComponent_generated_h
#error "UxtFarPointerComponent.generated.h already included, missing '#pragma once' in UxtFarPointerComponent.h"
#endif
#define UXTOOLS_UxtFarPointerComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_20_DELEGATE \
struct _Script_UXTools_eventUxtFarPointerDisabledDelegate_Parms \
{ \
	UUxtFarPointerComponent* FarPointer; \
}; \
static inline void FUxtFarPointerDisabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtFarPointerDisabledDelegate, UUxtFarPointerComponent* FarPointer) \
{ \
	_Script_UXTools_eventUxtFarPointerDisabledDelegate_Parms Parms; \
	Parms.FarPointer=FarPointer; \
	UxtFarPointerDisabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_19_DELEGATE \
struct _Script_UXTools_eventUxtFarPointerEnabledDelegate_Parms \
{ \
	UUxtFarPointerComponent* FarPointer; \
}; \
static inline void FUxtFarPointerEnabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtFarPointerEnabledDelegate, UUxtFarPointerComponent* FarPointer) \
{ \
	_Script_UXTools_eventUxtFarPointerEnabledDelegate_Parms Parms; \
	Parms.FarPointer=FarPointer; \
	UxtFarPointerEnabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execGetHitNormal); \
	DECLARE_FUNCTION(execGetHitPoint); \
	DECLARE_FUNCTION(execGetHitPrimitive); \
	DECLARE_FUNCTION(execGetRayStart); \
	DECLARE_FUNCTION(execGetPointerOrientation); \
	DECLARE_FUNCTION(execGetPointerOrigin);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execGetHitNormal); \
	DECLARE_FUNCTION(execGetHitPoint); \
	DECLARE_FUNCTION(execGetHitPrimitive); \
	DECLARE_FUNCTION(execGetRayStart); \
	DECLARE_FUNCTION(execGetPointerOrientation); \
	DECLARE_FUNCTION(execGetPointerOrigin);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtFarPointerComponent(); \
	friend struct Z_Construct_UClass_UUxtFarPointerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFarPointerComponent, UUxtPointerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFarPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUUxtFarPointerComponent(); \
	friend struct Z_Construct_UClass_UUxtFarPointerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFarPointerComponent, UUxtPointerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFarPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarPointerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarPointerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarPointerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarPointerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarPointerComponent(UUxtFarPointerComponent&&); \
	NO_API UUxtFarPointerComponent(const UUxtFarPointerComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarPointerComponent(UUxtFarPointerComponent&&); \
	NO_API UUxtFarPointerComponent(const UUxtFarPointerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarPointerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarPointerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtFarPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParameterCollection() { return STRUCT_OFFSET(UUxtFarPointerComponent, ParameterCollection); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_26_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFarPointerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtFarPointerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
