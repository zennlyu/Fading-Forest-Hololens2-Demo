// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
struct FQuat;
struct FVector;
enum class EUxtHandJoint : uint8;
#ifdef UXTOOLS_UxtHandTrackingFunctionLibrary_generated_h
#error "UxtHandTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in UxtHandTrackingFunctionLibrary.h"
#endif
#define UXTOOLS_UxtHandTrackingFunctionLibrary_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHandTracked); \
	DECLARE_FUNCTION(execGetIsHandSelectPressed); \
	DECLARE_FUNCTION(execGetIsHandGrabbing); \
	DECLARE_FUNCTION(execGetHandPointerPose); \
	DECLARE_FUNCTION(execGetHandJointState);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHandTracked); \
	DECLARE_FUNCTION(execGetIsHandSelectPressed); \
	DECLARE_FUNCTION(execGetIsHandGrabbing); \
	DECLARE_FUNCTION(execGetHandPointerPose); \
	DECLARE_FUNCTION(execGetHandJointState);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandTrackingFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUxtHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandTrackingFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtHandTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandTrackingFunctionLibrary(UUxtHandTrackingFunctionLibrary&&); \
	NO_API UUxtHandTrackingFunctionLibrary(const UUxtHandTrackingFunctionLibrary&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandTrackingFunctionLibrary(UUxtHandTrackingFunctionLibrary&&); \
	NO_API UUxtHandTrackingFunctionLibrary(const UUxtHandTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtHandTrackingFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_16_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtHandTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_HandTracking_UxtHandTrackingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
