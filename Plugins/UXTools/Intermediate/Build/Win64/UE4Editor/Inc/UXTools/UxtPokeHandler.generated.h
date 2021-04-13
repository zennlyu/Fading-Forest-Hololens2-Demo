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
#ifdef UXTOOLS_UxtPokeHandler_generated_h
#error "UxtPokeHandler.generated.h already included, missing '#pragma once' in UxtPokeHandler.h"
#endif
#define UXTOOLS_UxtPokeHandler_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_RPC_WRAPPERS \
	virtual void OnEndPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool CanHandlePoke_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndPoke); \
	DECLARE_FUNCTION(execOnUpdatePoke); \
	DECLARE_FUNCTION(execOnBeginPoke); \
	DECLARE_FUNCTION(execOnExitPokeFocus); \
	DECLARE_FUNCTION(execOnUpdatePokeFocus); \
	DECLARE_FUNCTION(execOnEnterPokeFocus); \
	DECLARE_FUNCTION(execCanHandlePoke);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool CanHandlePoke_Implementation(UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndPoke); \
	DECLARE_FUNCTION(execOnUpdatePoke); \
	DECLARE_FUNCTION(execOnBeginPoke); \
	DECLARE_FUNCTION(execOnExitPokeFocus); \
	DECLARE_FUNCTION(execOnUpdatePokeFocus); \
	DECLARE_FUNCTION(execOnEnterPokeFocus); \
	DECLARE_FUNCTION(execCanHandlePoke);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_EVENT_PARMS \
	struct UxtPokeHandler_eventCanHandlePoke_Parms \
	{ \
		UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeHandler_eventCanHandlePoke_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtPokeHandler_eventOnBeginPoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeHandler_eventOnEndPoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeHandler_eventOnEnterPokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeHandler_eventOnExitPokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeHandler_eventOnUpdatePoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeHandler_eventOnUpdatePokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	};


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_CALLBACK_WRAPPERS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeHandler(UUxtPokeHandler&&); \
	NO_API UUxtPokeHandler(const UUxtPokeHandler&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeHandler(UUxtPokeHandler&&); \
	NO_API UUxtPokeHandler(const UUxtPokeHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtPokeHandler(); \
	friend struct Z_Construct_UClass_UUxtPokeHandler_Statics; \
public: \
	DECLARE_CLASS(UUxtPokeHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPokeHandler)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtPokeHandler() {} \
public: \
	typedef UUxtPokeHandler UClassType; \
	typedef IUxtPokeHandler ThisClass; \
	static bool Execute_CanHandlePoke(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtPokeHandler() {} \
public: \
	typedef UUxtPokeHandler UClassType; \
	typedef IUxtPokeHandler ThisClass; \
	static bool Execute_CanHandlePoke(const UObject* O, UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_15_PROLOG \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_EVENT_PARMS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPokeHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
