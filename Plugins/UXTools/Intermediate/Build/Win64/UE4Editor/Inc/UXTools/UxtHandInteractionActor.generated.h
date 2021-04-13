// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EControllerHand : uint8;
#ifdef UXTOOLS_UxtHandInteractionActor_generated_h
#error "UxtHandInteractionActor.generated.h already included, missing '#pragma once' in UxtHandInteractionActor.h"
#endif
#define UXTOOLS_UxtHandInteractionActor_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandAngularVelocity); \
	DECLARE_FUNCTION(execGetHandVelocity); \
	DECLARE_FUNCTION(execSetRayLength); \
	DECLARE_FUNCTION(execGetRayLength); \
	DECLARE_FUNCTION(execSetRayStartOffset); \
	DECLARE_FUNCTION(execGetRayStartOffset); \
	DECLARE_FUNCTION(execSetPokeRadius); \
	DECLARE_FUNCTION(execGetPokeRadius); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execSetHand); \
	DECLARE_FUNCTION(execGetHand);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandAngularVelocity); \
	DECLARE_FUNCTION(execGetHandVelocity); \
	DECLARE_FUNCTION(execSetRayLength); \
	DECLARE_FUNCTION(execGetRayLength); \
	DECLARE_FUNCTION(execSetRayStartOffset); \
	DECLARE_FUNCTION(execGetRayStartOffset); \
	DECLARE_FUNCTION(execSetPokeRadius); \
	DECLARE_FUNCTION(execGetPokeRadius); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execSetHand); \
	DECLARE_FUNCTION(execGetHand);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtHandInteractionActor(); \
	friend struct Z_Construct_UClass_AUxtHandInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AUxtHandInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtHandInteractionActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAUxtHandInteractionActor(); \
	friend struct Z_Construct_UClass_AUxtHandInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AUxtHandInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtHandInteractionActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtHandInteractionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtHandInteractionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtHandInteractionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtHandInteractionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtHandInteractionActor(AUxtHandInteractionActor&&); \
	NO_API AUxtHandInteractionActor(const AUxtHandInteractionActor&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtHandInteractionActor(AUxtHandInteractionActor&&); \
	NO_API AUxtHandInteractionActor(const AUxtHandInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtHandInteractionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtHandInteractionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtHandInteractionActor)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Hand() { return STRUCT_OFFSET(AUxtHandInteractionActor, Hand); } \
	FORCEINLINE static uint32 __PPO__RayStartOffset() { return STRUCT_OFFSET(AUxtHandInteractionActor, RayStartOffset); } \
	FORCEINLINE static uint32 __PPO__RayLength() { return STRUCT_OFFSET(AUxtHandInteractionActor, RayLength); } \
	FORCEINLINE static uint32 __PPO__PokeRadius() { return STRUCT_OFFSET(AUxtHandInteractionActor, PokeRadius); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(AUxtHandInteractionActor, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__NearPointer() { return STRUCT_OFFSET(AUxtHandInteractionActor, NearPointer); } \
	FORCEINLINE static uint32 __PPO__FarPointer() { return STRUCT_OFFSET(AUxtHandInteractionActor, FarPointer); } \
	FORCEINLINE static uint32 __PPO__ProximityTrigger() { return STRUCT_OFFSET(AUxtHandInteractionActor, ProximityTrigger); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_25_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtHandInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
