// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
struct FUxtButtonBrush;
struct FUxtTextBrush;
struct FUxtIconBrush;
struct FVector;
#ifdef UXTOOLS_UxtPressableButtonActor_generated_h
#error "UxtPressableButtonActor.generated.h already included, missing '#pragma once' in UxtPressableButtonActor.h"
#endif
#define UXTOOLS_UxtPressableButtonActor_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonDisabled); \
	DECLARE_FUNCTION(execOnButtonEnabled); \
	DECLARE_FUNCTION(execOnBeginFocus); \
	DECLARE_FUNCTION(execOnButtonReleased); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execSetButtonBrush); \
	DECLARE_FUNCTION(execGetButtonBrush); \
	DECLARE_FUNCTION(execSetLabelTextBrush); \
	DECLARE_FUNCTION(execGetLabelTextBrush); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetIconBrush); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execSetIsPlated); \
	DECLARE_FUNCTION(execIsPlated); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetMillimeterSize); \
	DECLARE_FUNCTION(execGetMillimeterSize); \
	DECLARE_FUNCTION(execIsPulsing); \
	DECLARE_FUNCTION(execBeginPulse); \
	DECLARE_FUNCTION(execConstructLabel); \
	DECLARE_FUNCTION(execConstructIcon); \
	DECLARE_FUNCTION(execConstructVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonDisabled); \
	DECLARE_FUNCTION(execOnButtonEnabled); \
	DECLARE_FUNCTION(execOnBeginFocus); \
	DECLARE_FUNCTION(execOnButtonReleased); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execSetButtonBrush); \
	DECLARE_FUNCTION(execGetButtonBrush); \
	DECLARE_FUNCTION(execSetLabelTextBrush); \
	DECLARE_FUNCTION(execGetLabelTextBrush); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetIconBrush); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execSetIsPlated); \
	DECLARE_FUNCTION(execIsPlated); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetMillimeterSize); \
	DECLARE_FUNCTION(execGetMillimeterSize); \
	DECLARE_FUNCTION(execIsPulsing); \
	DECLARE_FUNCTION(execBeginPulse); \
	DECLARE_FUNCTION(execConstructLabel); \
	DECLARE_FUNCTION(execConstructIcon); \
	DECLARE_FUNCTION(execConstructVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtPressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableButtonActor, AUxtBasePressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAUxtPressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableButtonActor, AUxtBasePressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtPressableButtonActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtPressableButtonActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableButtonActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableButtonActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableButtonActor(AUxtPressableButtonActor&&); \
	NO_API AUxtPressableButtonActor(const AUxtPressableButtonActor&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableButtonActor(AUxtPressableButtonActor&&); \
	NO_API AUxtPressableButtonActor(const AUxtPressableButtonActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableButtonActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableButtonActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUxtPressableButtonActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MillimeterSize() { return STRUCT_OFFSET(AUxtPressableButtonActor, MillimeterSize); } \
	FORCEINLINE static uint32 __PPO__bIsPlated() { return STRUCT_OFFSET(AUxtPressableButtonActor, bIsPlated); } \
	FORCEINLINE static uint32 __PPO__IconBrush() { return STRUCT_OFFSET(AUxtPressableButtonActor, IconBrush); } \
	FORCEINLINE static uint32 __PPO__Label() { return STRUCT_OFFSET(AUxtPressableButtonActor, Label); } \
	FORCEINLINE static uint32 __PPO__LabelTextBrush() { return STRUCT_OFFSET(AUxtPressableButtonActor, LabelTextBrush); } \
	FORCEINLINE static uint32 __PPO__ButtonBrush() { return STRUCT_OFFSET(AUxtPressableButtonActor, ButtonBrush); } \
	FORCEINLINE static uint32 __PPO__BackPlatePivotComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, BackPlatePivotComponent); } \
	FORCEINLINE static uint32 __PPO__BackPlateMeshComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, BackPlateMeshComponent); } \
	FORCEINLINE static uint32 __PPO__FrontPlatePivotComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlatePivotComponent); } \
	FORCEINLINE static uint32 __PPO__FrontPlateCenterComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlateCenterComponent); } \
	FORCEINLINE static uint32 __PPO__FrontPlateMeshComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlateMeshComponent); } \
	FORCEINLINE static uint32 __PPO__IconComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, IconComponent); } \
	FORCEINLINE static uint32 __PPO__LabelComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, LabelComponent); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AUxtPressableButtonActor, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__PrePulseMaterial() { return STRUCT_OFFSET(AUxtPressableButtonActor, PrePulseMaterial); } \
	FORCEINLINE static uint32 __PPO__PulseMaterialInstance() { return STRUCT_OFFSET(AUxtPressableButtonActor, PulseMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__bCanEditIconBrush() { return STRUCT_OFFSET(AUxtPressableButtonActor, bCanEditIconBrush); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_24_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtPressableButtonActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
