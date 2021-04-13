// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
#ifdef UXTOOLS_UxtTooltipActor_generated_h
#error "UxtTooltipActor.generated.h already included, missing '#pragma once' in UxtTooltipActor.h"
#endif
#define UXTOOLS_UxtTooltipActor_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execSetTarget);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execSetTarget);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtTooltipActor(); \
	friend struct Z_Construct_UClass_AUxtTooltipActor_Statics; \
public: \
	DECLARE_CLASS(AUxtTooltipActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtTooltipActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAUxtTooltipActor(); \
	friend struct Z_Construct_UClass_AUxtTooltipActor_Statics; \
public: \
	DECLARE_CLASS(AUxtTooltipActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtTooltipActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtTooltipActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtTooltipActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtTooltipActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtTooltipActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtTooltipActor(AUxtTooltipActor&&); \
	NO_API AUxtTooltipActor(const AUxtTooltipActor&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtTooltipActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtTooltipActor(AUxtTooltipActor&&); \
	NO_API AUxtTooltipActor(const AUxtTooltipActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtTooltipActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtTooltipActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtTooltipActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(AUxtTooltipActor, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__TooltipWidgetComponent() { return STRUCT_OFFSET(AUxtTooltipActor, TooltipWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__BackPlate() { return STRUCT_OFFSET(AUxtTooltipActor, BackPlate); } \
	FORCEINLINE static uint32 __PPO__bIsBillboarding() { return STRUCT_OFFSET(AUxtTooltipActor, bIsBillboarding); } \
	FORCEINLINE static uint32 __PPO__bIsAutoAnchoring() { return STRUCT_OFFSET(AUxtTooltipActor, bIsAutoAnchoring); } \
	FORCEINLINE static uint32 __PPO__SplineMeshComponent() { return STRUCT_OFFSET(AUxtTooltipActor, SplineMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TooltipTarget() { return STRUCT_OFFSET(AUxtTooltipActor, TooltipTarget); } \
	FORCEINLINE static uint32 __PPO__Margin() { return STRUCT_OFFSET(AUxtTooltipActor, Margin); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_48_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UxtTooltipActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtTooltipActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
