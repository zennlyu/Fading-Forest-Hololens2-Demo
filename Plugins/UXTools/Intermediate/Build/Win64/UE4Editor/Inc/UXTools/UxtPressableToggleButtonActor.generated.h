// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtToggleStateComponent;
#ifdef UXTOOLS_UxtPressableToggleButtonActor_generated_h
#error "UxtPressableToggleButtonActor.generated.h already included, missing '#pragma once' in UxtPressableToggleButtonActor.h"
#endif
#define UXTOOLS_UxtPressableToggleButtonActor_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonToggled); \
	DECLARE_FUNCTION(execRemoveTogglePlate); \
	DECLARE_FUNCTION(execSetIsInitiallyChecked); \
	DECLARE_FUNCTION(execIsInitiallyChecked); \
	DECLARE_FUNCTION(execUpdateToggleVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonToggled); \
	DECLARE_FUNCTION(execRemoveTogglePlate); \
	DECLARE_FUNCTION(execSetIsInitiallyChecked); \
	DECLARE_FUNCTION(execIsInitiallyChecked); \
	DECLARE_FUNCTION(execUpdateToggleVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtPressableToggleButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableToggleButtonActor, AUxtPressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableToggleButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAUxtPressableToggleButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableToggleButtonActor, AUxtPressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableToggleButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtPressableToggleButtonActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtPressableToggleButtonActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableToggleButtonActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableToggleButtonActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableToggleButtonActor(AUxtPressableToggleButtonActor&&); \
	NO_API AUxtPressableToggleButtonActor(const AUxtPressableToggleButtonActor&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableToggleButtonActor(AUxtPressableToggleButtonActor&&); \
	NO_API AUxtPressableToggleButtonActor(const AUxtPressableToggleButtonActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableToggleButtonActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableToggleButtonActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUxtPressableToggleButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsInitiallyChecked() { return STRUCT_OFFSET(AUxtPressableToggleButtonActor, bIsInitiallyChecked); } \
	FORCEINLINE static uint32 __PPO__bToggleOnRelease() { return STRUCT_OFFSET(AUxtPressableToggleButtonActor, bToggleOnRelease); } \
	FORCEINLINE static uint32 __PPO__ToggleStateComponent() { return STRUCT_OFFSET(AUxtPressableToggleButtonActor, ToggleStateComponent); } \
	FORCEINLINE static uint32 __PPO__TogglePlateComponent() { return STRUCT_OFFSET(AUxtPressableToggleButtonActor, TogglePlateComponent); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_18_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtPressableToggleButtonActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
