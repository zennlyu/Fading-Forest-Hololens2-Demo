// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class UActorComponent;
struct FVector;
class UPrimitiveComponent;
class UObject;
#ifdef UXTOOLS_UxtNearPointerComponent_generated_h
#error "UxtNearPointerComponent.generated.h already included, missing '#pragma once' in UxtNearPointerComponent.h"
#endif
#define UXTOOLS_UxtNearPointerComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPokePointerRadius); \
	DECLARE_FUNCTION(execGetPokePointerTransform); \
	DECLARE_FUNCTION(execGetGrabPointerTransform); \
	DECLARE_FUNCTION(execGetIsPoking); \
	DECLARE_FUNCTION(execIsGrabbing); \
	DECLARE_FUNCTION(execSetFocusedPokeTarget); \
	DECLARE_FUNCTION(execSetFocusedGrabTarget); \
	DECLARE_FUNCTION(execGetFocusedPokePrimitive); \
	DECLARE_FUNCTION(execGetFocusedGrabPrimitive); \
	DECLARE_FUNCTION(execGetFocusedPokeTarget); \
	DECLARE_FUNCTION(execGetFocusedGrabTarget);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPokePointerRadius); \
	DECLARE_FUNCTION(execGetPokePointerTransform); \
	DECLARE_FUNCTION(execGetGrabPointerTransform); \
	DECLARE_FUNCTION(execGetIsPoking); \
	DECLARE_FUNCTION(execIsGrabbing); \
	DECLARE_FUNCTION(execSetFocusedPokeTarget); \
	DECLARE_FUNCTION(execSetFocusedGrabTarget); \
	DECLARE_FUNCTION(execGetFocusedPokePrimitive); \
	DECLARE_FUNCTION(execGetFocusedGrabPrimitive); \
	DECLARE_FUNCTION(execGetFocusedPokeTarget); \
	DECLARE_FUNCTION(execGetFocusedGrabTarget);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtNearPointerComponent(); \
	friend struct Z_Construct_UClass_UUxtNearPointerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtNearPointerComponent, UUxtPointerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtNearPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUxtNearPointerComponent(); \
	friend struct Z_Construct_UClass_UUxtNearPointerComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtNearPointerComponent, UUxtPointerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtNearPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtNearPointerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtNearPointerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtNearPointerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtNearPointerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtNearPointerComponent(UUxtNearPointerComponent&&); \
	NO_API UUxtNearPointerComponent(const UUxtNearPointerComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtNearPointerComponent(UUxtNearPointerComponent&&); \
	NO_API UUxtNearPointerComponent(const UUxtNearPointerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtNearPointerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtNearPointerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtNearPointerComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParameterCollection() { return STRUCT_OFFSET(UUxtNearPointerComponent, ParameterCollection); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_25_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtNearPointerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
