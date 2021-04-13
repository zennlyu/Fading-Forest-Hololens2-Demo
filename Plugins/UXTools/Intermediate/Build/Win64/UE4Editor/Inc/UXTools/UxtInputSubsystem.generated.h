// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class UUxtNearPointerComponent;
class UUxtFarPointerComponent;
class UObject;
class UInterface;
#ifdef UXTOOLS_UxtInputSubsystem_generated_h
#error "UxtInputSubsystem.generated.h already included, missing '#pragma once' in UxtInputSubsystem.h"
#endif
#define UXTOOLS_UxtInputSubsystem_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaiseEndPoke); \
	DECLARE_FUNCTION(execRaiseUpdatePoke); \
	DECLARE_FUNCTION(execRaiseBeginPoke); \
	DECLARE_FUNCTION(execRaiseExitPokeFocus); \
	DECLARE_FUNCTION(execRaiseUpdatePokeFocus); \
	DECLARE_FUNCTION(execRaiseEnterPokeFocus); \
	DECLARE_FUNCTION(execRaiseEndGrab); \
	DECLARE_FUNCTION(execRaiseUpdateGrab); \
	DECLARE_FUNCTION(execRaiseBeginGrab); \
	DECLARE_FUNCTION(execRaiseExitGrabFocus); \
	DECLARE_FUNCTION(execRaiseUpdateGrabFocus); \
	DECLARE_FUNCTION(execRaiseEnterGrabFocus); \
	DECLARE_FUNCTION(execRaiseFarReleased); \
	DECLARE_FUNCTION(execRaiseFarDragged); \
	DECLARE_FUNCTION(execRaiseFarPressed); \
	DECLARE_FUNCTION(execRaiseExitFarFocus); \
	DECLARE_FUNCTION(execRaiseUpdatedFarFocus); \
	DECLARE_FUNCTION(execRaiseEnterFarFocus); \
	DECLARE_FUNCTION(execUnregisterHandler); \
	DECLARE_FUNCTION(execRegisterHandler);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaiseEndPoke); \
	DECLARE_FUNCTION(execRaiseUpdatePoke); \
	DECLARE_FUNCTION(execRaiseBeginPoke); \
	DECLARE_FUNCTION(execRaiseExitPokeFocus); \
	DECLARE_FUNCTION(execRaiseUpdatePokeFocus); \
	DECLARE_FUNCTION(execRaiseEnterPokeFocus); \
	DECLARE_FUNCTION(execRaiseEndGrab); \
	DECLARE_FUNCTION(execRaiseUpdateGrab); \
	DECLARE_FUNCTION(execRaiseBeginGrab); \
	DECLARE_FUNCTION(execRaiseExitGrabFocus); \
	DECLARE_FUNCTION(execRaiseUpdateGrabFocus); \
	DECLARE_FUNCTION(execRaiseEnterGrabFocus); \
	DECLARE_FUNCTION(execRaiseFarReleased); \
	DECLARE_FUNCTION(execRaiseFarDragged); \
	DECLARE_FUNCTION(execRaiseFarPressed); \
	DECLARE_FUNCTION(execRaiseExitFarFocus); \
	DECLARE_FUNCTION(execRaiseUpdatedFarFocus); \
	DECLARE_FUNCTION(execRaiseEnterFarFocus); \
	DECLARE_FUNCTION(execUnregisterHandler); \
	DECLARE_FUNCTION(execRegisterHandler);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtInputSubsystem(); \
	friend struct Z_Construct_UClass_UUxtInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUxtInputSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtInputSubsystem)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUUxtInputSubsystem(); \
	friend struct Z_Construct_UClass_UUxtInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUxtInputSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtInputSubsystem)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtInputSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtInputSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtInputSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtInputSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtInputSubsystem(UUxtInputSubsystem&&); \
	NO_API UUxtInputSubsystem(const UUxtInputSubsystem&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtInputSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtInputSubsystem(UUxtInputSubsystem&&); \
	NO_API UUxtInputSubsystem(const UUxtInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtInputSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtInputSubsystem)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_21_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtInputSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Input_UxtInputSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
