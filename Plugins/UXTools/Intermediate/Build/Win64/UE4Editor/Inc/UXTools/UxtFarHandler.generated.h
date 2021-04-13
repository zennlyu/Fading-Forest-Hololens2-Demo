// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtFarPointerComponent;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtFarHandler_generated_h
#error "UxtFarHandler.generated.h already included, missing '#pragma once' in UxtFarHandler.h"
#endif
#define UXTOOLS_UxtFarHandler_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_RPC_WRAPPERS \
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarDragged_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnExitFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnUpdatedFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnEnterFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual bool CanHandleFar_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnFarReleased); \
	DECLARE_FUNCTION(execOnFarDragged); \
	DECLARE_FUNCTION(execOnFarPressed); \
	DECLARE_FUNCTION(execOnExitFarFocus); \
	DECLARE_FUNCTION(execOnUpdatedFarFocus); \
	DECLARE_FUNCTION(execOnEnterFarFocus); \
	DECLARE_FUNCTION(execCanHandleFar);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarDragged_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnExitFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnUpdatedFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnEnterFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual bool CanHandleFar_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnFarReleased); \
	DECLARE_FUNCTION(execOnFarDragged); \
	DECLARE_FUNCTION(execOnFarPressed); \
	DECLARE_FUNCTION(execOnExitFarFocus); \
	DECLARE_FUNCTION(execOnUpdatedFarFocus); \
	DECLARE_FUNCTION(execOnEnterFarFocus); \
	DECLARE_FUNCTION(execCanHandleFar);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_EVENT_PARMS \
	struct UxtFarHandler_eventCanHandleFar_Parms \
	{ \
		UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtFarHandler_eventCanHandleFar_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtFarHandler_eventOnEnterFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarHandler_eventOnExitFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarHandler_eventOnFarDragged_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarHandler_eventOnFarPressed_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarHandler_eventOnFarReleased_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarHandler_eventOnUpdatedFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	};


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_CALLBACK_WRAPPERS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarHandler(UUxtFarHandler&&); \
	NO_API UUxtFarHandler(const UUxtFarHandler&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarHandler(UUxtFarHandler&&); \
	NO_API UUxtFarHandler(const UUxtFarHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtFarHandler(); \
	friend struct Z_Construct_UClass_UUxtFarHandler_Statics; \
public: \
	DECLARE_CLASS(UUxtFarHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFarHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtFarHandler() {} \
public: \
	typedef UUxtFarHandler UClassType; \
	typedef IUxtFarHandler ThisClass; \
	static bool Execute_CanHandleFar(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtFarHandler() {} \
public: \
	typedef UUxtFarHandler UClassType; \
	typedef IUxtFarHandler ThisClass; \
	static bool Execute_CanHandleFar(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_15_PROLOG \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_EVENT_PARMS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFarHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
