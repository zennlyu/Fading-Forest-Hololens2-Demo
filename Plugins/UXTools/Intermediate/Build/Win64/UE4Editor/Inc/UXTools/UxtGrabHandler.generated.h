// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtNearPointerComponent;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtGrabHandler_generated_h
#error "UxtGrabHandler.generated.h already included, missing '#pragma once' in UxtGrabHandler.h"
#endif
#define UXTOOLS_UxtGrabHandler_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_RPC_WRAPPERS \
	virtual void OnEndGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool CanHandleGrab_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateGrab); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnExitGrabFocus); \
	DECLARE_FUNCTION(execOnUpdateGrabFocus); \
	DECLARE_FUNCTION(execOnEnterGrabFocus); \
	DECLARE_FUNCTION(execCanHandleGrab);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool CanHandleGrab_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateGrab); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnExitGrabFocus); \
	DECLARE_FUNCTION(execOnUpdateGrabFocus); \
	DECLARE_FUNCTION(execOnEnterGrabFocus); \
	DECLARE_FUNCTION(execCanHandleGrab);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_EVENT_PARMS \
	struct UxtGrabHandler_eventCanHandleGrab_Parms \
	{ \
		UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtGrabHandler_eventCanHandleGrab_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtGrabHandler_eventOnBeginGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabHandler_eventOnEndGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabHandler_eventOnEnterGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabHandler_eventOnExitGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabHandler_eventOnUpdateGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabHandler_eventOnUpdateGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	};


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_CALLBACK_WRAPPERS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabHandler(UUxtGrabHandler&&); \
	NO_API UUxtGrabHandler(const UUxtGrabHandler&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabHandler(UUxtGrabHandler&&); \
	NO_API UUxtGrabHandler(const UUxtGrabHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtGrabHandler(); \
	friend struct Z_Construct_UClass_UUxtGrabHandler_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtGrabHandler() {} \
public: \
	typedef UUxtGrabHandler UClassType; \
	typedef IUxtGrabHandler ThisClass; \
	static bool Execute_CanHandleGrab(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtGrabHandler() {} \
public: \
	typedef UUxtGrabHandler UClassType; \
	typedef IUxtGrabHandler ThisClass; \
	static bool Execute_CanHandleGrab(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_15_PROLOG \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_EVENT_PARMS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
