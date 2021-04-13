// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef UXTOOLS_UxtBackPlateComponent_generated_h
#error "UxtBackPlateComponent.generated.h already included, missing '#pragma once' in UxtBackPlateComponent.h"
#endif
#define UXTOOLS_UxtBackPlateComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultBackPlateSize); \
	DECLARE_FUNCTION(execGetDefaultBackPlateDepth); \
	DECLARE_FUNCTION(execSetBackPlateMaterial); \
	DECLARE_FUNCTION(execGetBackPlateMaterial);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultBackPlateSize); \
	DECLARE_FUNCTION(execGetDefaultBackPlateDepth); \
	DECLARE_FUNCTION(execSetBackPlateMaterial); \
	DECLARE_FUNCTION(execGetBackPlateMaterial);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtBackPlateComponent(); \
	friend struct Z_Construct_UClass_UUxtBackPlateComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBackPlateComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBackPlateComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUxtBackPlateComponent(); \
	friend struct Z_Construct_UClass_UUxtBackPlateComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBackPlateComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBackPlateComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBackPlateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBackPlateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBackPlateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBackPlateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBackPlateComponent(UUxtBackPlateComponent&&); \
	NO_API UUxtBackPlateComponent(const UUxtBackPlateComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBackPlateComponent(UUxtBackPlateComponent&&); \
	NO_API UUxtBackPlateComponent(const UUxtBackPlateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBackPlateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBackPlateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtBackPlateComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(UUxtBackPlateComponent, Material); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(UUxtBackPlateComponent, MaterialInstance); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_17_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtBackPlateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
