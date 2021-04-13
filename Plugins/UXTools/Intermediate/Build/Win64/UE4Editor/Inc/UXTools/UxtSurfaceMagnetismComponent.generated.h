// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtSurfaceMagnetismComponent;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtSurfaceMagnetismComponent_generated_h
#error "UxtSurfaceMagnetismComponent.generated.h already included, missing '#pragma once' in UxtSurfaceMagnetismComponent.h"
#endif
#define UXTOOLS_UxtSurfaceMagnetismComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_16_DELEGATE \
struct _Script_UXTools_eventUxtOnMagnetismEnded_Parms \
{ \
	UUxtSurfaceMagnetismComponent* SurfaceMagnetism; \
}; \
static inline void FUxtOnMagnetismEnded_DelegateWrapper(const FMulticastScriptDelegate& UxtOnMagnetismEnded, UUxtSurfaceMagnetismComponent* SurfaceMagnetism) \
{ \
	_Script_UXTools_eventUxtOnMagnetismEnded_Parms Parms; \
	Parms.SurfaceMagnetism=SurfaceMagnetism; \
	UxtOnMagnetismEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_15_DELEGATE \
struct _Script_UXTools_eventUxtOnMagnetismStarted_Parms \
{ \
	UUxtSurfaceMagnetismComponent* SurfaceMagnetism; \
}; \
static inline void FUxtOnMagnetismStarted_DelegateWrapper(const FMulticastScriptDelegate& UxtOnMagnetismStarted, UUxtSurfaceMagnetismComponent* SurfaceMagnetism) \
{ \
	_Script_UXTools_eventUxtOnMagnetismStarted_Parms Parms; \
	Parms.SurfaceMagnetism=SurfaceMagnetism; \
	UxtOnMagnetismStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTargetComponent); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execIsGrabbed);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTargetComponent); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execIsGrabbed);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtSurfaceMagnetismComponent(); \
	friend struct Z_Construct_UClass_UUxtSurfaceMagnetismComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtSurfaceMagnetismComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtSurfaceMagnetismComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtSurfaceMagnetismComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUxtSurfaceMagnetismComponent(); \
	friend struct Z_Construct_UClass_UUxtSurfaceMagnetismComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtSurfaceMagnetismComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtSurfaceMagnetismComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtSurfaceMagnetismComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtSurfaceMagnetismComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtSurfaceMagnetismComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtSurfaceMagnetismComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtSurfaceMagnetismComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtSurfaceMagnetismComponent(UUxtSurfaceMagnetismComponent&&); \
	NO_API UUxtSurfaceMagnetismComponent(const UUxtSurfaceMagnetismComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtSurfaceMagnetismComponent(UUxtSurfaceMagnetismComponent&&); \
	NO_API UUxtSurfaceMagnetismComponent(const UUxtSurfaceMagnetismComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtSurfaceMagnetismComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtSurfaceMagnetismComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtSurfaceMagnetismComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetComponent() { return STRUCT_OFFSET(UUxtSurfaceMagnetismComponent, TargetComponent); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_22_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtSurfaceMagnetismComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtSurfaceMagnetismComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
