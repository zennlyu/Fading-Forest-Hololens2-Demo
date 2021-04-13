// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
class UUxtNearPointerComponent;
class UUxtFarPointerComponent;
struct FTransform;
struct FVector;
struct FRotator;
#ifdef UXTOOLS_UxtGrabTargetComponent_generated_h
#error "UxtGrabTargetComponent.generated.h already included, missing '#pragma once' in UxtGrabTargetComponent.h"
#endif
#define UXTOOLS_UxtGrabTargetComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtGrabPointerData>();

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_155_DELEGATE \
struct _Script_UXTools_eventUxtEndGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtEndGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEndGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtEndGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtEndGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_153_DELEGATE \
struct _Script_UXTools_eventUxtUpdateGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtUpdateGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtUpdateGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtUpdateGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_151_DELEGATE \
struct _Script_UXTools_eventUxtBeginGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtBeginGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBeginGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtBeginGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtBeginGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_148_DELEGATE \
struct _Script_UXTools_eventUxtExitGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtExitGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtExitGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtExitGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtExitGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_145_DELEGATE \
struct _Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtUpdateGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtUpdateGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_142_DELEGATE \
struct _Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtEnterGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEnterGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtEnterGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_138_DELEGATE \
struct _Script_UXTools_eventUxtExitFarFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtFarPointerComponent* Pointer; \
}; \
static inline void FUxtExitFarFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtExitFarFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtFarPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtExitFarFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtExitFarFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_135_DELEGATE \
struct _Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtFarPointerComponent* Pointer; \
}; \
static inline void FUxtUpdateFarFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateFarFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtFarPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtUpdateFarFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_132_DELEGATE \
struct _Script_UXTools_eventUxtEnterFarFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtFarPointerComponent* Pointer; \
}; \
static inline void FUxtEnterFarFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEnterFarFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtFarPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtEnterFarFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtEnterFarFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGripTransform); \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetGrabPointTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGripTransform); \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetGrabPointTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_74_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabPointerDataFunctionLibrary>();

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execForceEndGrab); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execForceEndGrab); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtGrabTargetComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrabPointers() { return STRUCT_OFFSET(UUxtGrabTargetComponent, GrabPointers); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_165_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
