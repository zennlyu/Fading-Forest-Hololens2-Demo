// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtUIElementComponent;
enum class EUxtUIElementVisibility : uint8;
#ifdef UXTOOLS_UxtUIElementComponent_generated_h
#error "UxtUIElementComponent.generated.h already included, missing '#pragma once' in UxtUIElementComponent.h"
#endif
#define UXTOOLS_UxtUIElementComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_24_DELEGATE \
struct _Script_UXTools_eventUxtUIElementHideDelegate_Parms \
{ \
	UUxtUIElementComponent* UIElement; \
	bool bShouldAffectLayout; \
}; \
static inline void FUxtUIElementHideDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUIElementHideDelegate, UUxtUIElementComponent* UIElement, bool bShouldAffectLayout) \
{ \
	_Script_UXTools_eventUxtUIElementHideDelegate_Parms Parms; \
	Parms.UIElement=UIElement; \
	Parms.bShouldAffectLayout=bShouldAffectLayout ? true : false; \
	UxtUIElementHideDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_23_DELEGATE \
struct _Script_UXTools_eventUxtUIElementShowDelegate_Parms \
{ \
	UUxtUIElementComponent* UIElement; \
}; \
static inline void FUxtUIElementShowDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUIElementShowDelegate, UUxtUIElementComponent* UIElement) \
{ \
	_Script_UXTools_eventUxtUIElementShowDelegate_Parms Parms; \
	Parms.UIElement=UIElement; \
	UxtUIElementShowDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshUIElement); \
	DECLARE_FUNCTION(execSetUIVisibility); \
	DECLARE_FUNCTION(execGetUIVisibilityInHierarchy); \
	DECLARE_FUNCTION(execGetUIVisibilitySelf);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshUIElement); \
	DECLARE_FUNCTION(execSetUIVisibility); \
	DECLARE_FUNCTION(execGetUIVisibilityInHierarchy); \
	DECLARE_FUNCTION(execGetUIVisibilitySelf);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtUIElementComponent(); \
	friend struct Z_Construct_UClass_UUxtUIElementComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtUIElementComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtUIElementComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUUxtUIElementComponent(); \
	friend struct Z_Construct_UClass_UUxtUIElementComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtUIElementComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtUIElementComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtUIElementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtUIElementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtUIElementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtUIElementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtUIElementComponent(UUxtUIElementComponent&&); \
	NO_API UUxtUIElementComponent(const UUxtUIElementComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtUIElementComponent(UUxtUIElementComponent&&); \
	NO_API UUxtUIElementComponent(const UUxtUIElementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtUIElementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtUIElementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtUIElementComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Visibility() { return STRUCT_OFFSET(UUxtUIElementComponent, Visibility); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_36_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtUIElementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h


#define FOREACH_ENUM_EUXTUIELEMENTVISIBILITY(op) \
	op(EUxtUIElementVisibility::Show) \
	op(EUxtUIElementVisibility::Hide) \
	op(EUxtUIElementVisibility::LayoutOnly) 

enum class EUxtUIElementVisibility : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtUIElementVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
