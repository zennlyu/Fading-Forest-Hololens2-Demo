// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtFollowComponent_generated_h
#error "UxtFollowComponent.generated.h already included, missing '#pragma once' in UxtFollowComponent.h"
#endif
#define UXTOOLS_UxtFollowComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecenter);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecenter);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtFollowComponent(); \
	friend struct Z_Construct_UClass_UUxtFollowComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFollowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFollowComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUUxtFollowComponent(); \
	friend struct Z_Construct_UClass_UUxtFollowComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFollowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFollowComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFollowComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFollowComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFollowComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFollowComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFollowComponent(UUxtFollowComponent&&); \
	NO_API UUxtFollowComponent(const UUxtFollowComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFollowComponent(UUxtFollowComponent&&); \
	NO_API UUxtFollowComponent(const UUxtFollowComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFollowComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFollowComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtFollowComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFollowComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h


#define FOREACH_ENUM_EUXTFOLLOWORIENTBEHAVIOR(op) \
	op(FaceCamera) \
	op(WorldLock) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
