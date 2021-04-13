// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtToggleGroupComponent;
class UUxtToggleStateComponent;
#ifdef UXTOOLS_UxtToggleGroupComponent_generated_h
#error "UxtToggleGroupComponent.generated.h already included, missing '#pragma once' in UxtToggleGroupComponent.h"
#endif
#define UXTOOLS_UxtToggleGroupComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_18_DELEGATE \
struct _Script_UXTools_eventUxtToggleGroupSelectionChangedDelegate_Parms \
{ \
	UUxtToggleGroupComponent* ToggleGroup; \
}; \
static inline void FUxtToggleGroupSelectionChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtToggleGroupSelectionChangedDelegate, UUxtToggleGroupComponent* ToggleGroup) \
{ \
	_Script_UXTools_eventUxtToggleGroupSelectionChangedDelegate_Parms Parms; \
	Parms.ToggleGroup=ToggleGroup; \
	UxtToggleGroupSelectionChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnToggled); \
	DECLARE_FUNCTION(execGetToggleStateIndex); \
	DECLARE_FUNCTION(execGetGroupCount); \
	DECLARE_FUNCTION(execEmptyGroup); \
	DECLARE_FUNCTION(execRemoveToggleState); \
	DECLARE_FUNCTION(execInsertToggleState); \
	DECLARE_FUNCTION(execAddToggleState); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnToggled); \
	DECLARE_FUNCTION(execGetToggleStateIndex); \
	DECLARE_FUNCTION(execGetGroupCount); \
	DECLARE_FUNCTION(execEmptyGroup); \
	DECLARE_FUNCTION(execRemoveToggleState); \
	DECLARE_FUNCTION(execInsertToggleState); \
	DECLARE_FUNCTION(execAddToggleState); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtToggleGroupComponent(); \
	friend struct Z_Construct_UClass_UUxtToggleGroupComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtToggleGroupComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtToggleGroupComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUxtToggleGroupComponent(); \
	friend struct Z_Construct_UClass_UUxtToggleGroupComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtToggleGroupComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtToggleGroupComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtToggleGroupComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtToggleGroupComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtToggleGroupComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtToggleGroupComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtToggleGroupComponent(UUxtToggleGroupComponent&&); \
	NO_API UUxtToggleGroupComponent(const UUxtToggleGroupComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtToggleGroupComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtToggleGroupComponent(UUxtToggleGroupComponent&&); \
	NO_API UUxtToggleGroupComponent(const UUxtToggleGroupComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtToggleGroupComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtToggleGroupComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtToggleGroupComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectedIndex() { return STRUCT_OFFSET(UUxtToggleGroupComponent, SelectedIndex); } \
	FORCEINLINE static uint32 __PPO__ToggleReferences() { return STRUCT_OFFSET(UUxtToggleGroupComponent, ToggleReferences); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_25_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtToggleGroupComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleGroupComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
