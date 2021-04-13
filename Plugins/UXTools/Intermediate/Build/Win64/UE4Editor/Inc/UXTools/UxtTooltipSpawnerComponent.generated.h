// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtTooltipSpawnerComponent_generated_h
#error "UxtTooltipSpawnerComponent.generated.h already included, missing '#pragma once' in UxtTooltipSpawnerComponent.h"
#endif
#define UXTOOLS_UxtTooltipSpawnerComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_20_DELEGATE \
static inline void FOnHideTooltip_DelegateWrapper(const FMulticastScriptDelegate& OnHideTooltip) \
{ \
	OnHideTooltip.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_19_DELEGATE \
static inline void FOnShowTooltip_DelegateWrapper(const FMulticastScriptDelegate& OnShowTooltip) \
{ \
	OnShowTooltip.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_RPC_WRAPPERS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtTooltipSpawnerComponent(); \
	friend struct Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTooltipSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTooltipSpawnerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTooltipSpawnerComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUUxtTooltipSpawnerComponent(); \
	friend struct Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtTooltipSpawnerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtTooltipSpawnerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtTooltipSpawnerComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtTooltipSpawnerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtTooltipSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTooltipSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTooltipSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTooltipSpawnerComponent(UUxtTooltipSpawnerComponent&&); \
	NO_API UUxtTooltipSpawnerComponent(const UUxtTooltipSpawnerComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtTooltipSpawnerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtTooltipSpawnerComponent(UUxtTooltipSpawnerComponent&&); \
	NO_API UUxtTooltipSpawnerComponent(const UUxtTooltipSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtTooltipSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtTooltipSpawnerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtTooltipSpawnerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AppearType() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, AppearType); } \
	FORCEINLINE static uint32 __PPO__VanishType() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, VanishType); } \
	FORCEINLINE static uint32 __PPO__RemainType() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, RemainType); } \
	FORCEINLINE static uint32 __PPO__AppearDelay() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, AppearDelay); } \
	FORCEINLINE static uint32 __PPO__VanishDelay() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, VanishDelay); } \
	FORCEINLINE static uint32 __PPO__Lifetime() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Lifetime); } \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__TooltipText() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, TooltipText); } \
	FORCEINLINE static uint32 __PPO__Pivot() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Pivot); } \
	FORCEINLINE static uint32 __PPO__bIsAutoAnchoring() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, bIsAutoAnchoring); } \
	FORCEINLINE static uint32 __PPO__WidgetScale() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, WidgetScale); } \
	FORCEINLINE static uint32 __PPO__Margin() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Margin); } \
	FORCEINLINE static uint32 __PPO__SpawnedTooltip() { return STRUCT_OFFSET(UUxtTooltipSpawnerComponent, SpawnedTooltip); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_64_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UxtTooltipSpawnerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtTooltipSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Tooltips_UxtTooltipSpawnerComponent_h


#define FOREACH_ENUM_EUXTTOOLTIPREMAINTYPE(op) \
	op(EUxtTooltipRemainType::Indefinite) \
	op(EUxtTooltipRemainType::Timeout) 

enum class EUxtTooltipRemainType : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipRemainType>();

#define FOREACH_ENUM_EUXTTOOLTIPAPPEARTYPE(op) \
	op(EUxtTooltipAppearType::AppearOnFocusEnter) \
	op(EUxtTooltipAppearType::AppearOnTap) 

enum class EUxtTooltipAppearType : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipAppearType>();

#define FOREACH_ENUM_EUXTTOOLTIPVANISHTYPE(op) \
	op(EUxtTooltipVanishType::VanishOnFocusExit) \
	op(EUxtTooltipVanishType::VanishOnTap) 

enum class EUxtTooltipVanishType : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipVanishType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
