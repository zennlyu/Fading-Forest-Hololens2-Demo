// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FVector;
enum class EUxtPokeBehaviour : uint8;
#ifdef UXTOOLS_UxtPokeTarget_generated_h
#error "UxtPokeTarget.generated.h already included, missing '#pragma once' in UxtPokeTarget.h"
#endif
#define UXTOOLS_UxtPokeTarget_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_RPC_WRAPPERS \
	virtual bool GetClosestPoint_Implementation(const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal) const { return false; }; \
	virtual EUxtPokeBehaviour GetPokeBehaviour_Implementation() const { return (EUxtPokeBehaviour)0; }; \
	virtual bool IsPokeFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execGetClosestPoint); \
	DECLARE_FUNCTION(execGetPokeBehaviour); \
	DECLARE_FUNCTION(execIsPokeFocusable);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetClosestPoint_Implementation(const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal) const { return false; }; \
	virtual EUxtPokeBehaviour GetPokeBehaviour_Implementation() const { return (EUxtPokeBehaviour)0; }; \
	virtual bool IsPokeFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execGetClosestPoint); \
	DECLARE_FUNCTION(execGetPokeBehaviour); \
	DECLARE_FUNCTION(execIsPokeFocusable);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_EVENT_PARMS \
	struct UxtPokeTarget_eventGetClosestPoint_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		FVector Point; \
		FVector OutClosestPoint; \
		FVector OutNormal; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeTarget_eventGetClosestPoint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtPokeTarget_eventGetPokeBehaviour_Parms \
	{ \
		EUxtPokeBehaviour ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeTarget_eventGetPokeBehaviour_Parms() \
			: ReturnValue((EUxtPokeBehaviour)0) \
		{ \
		} \
	}; \
	struct UxtPokeTarget_eventIsPokeFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeTarget_eventIsPokeFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_CALLBACK_WRAPPERS
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeTarget(UUxtPokeTarget&&); \
	NO_API UUxtPokeTarget(const UUxtPokeTarget&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeTarget(UUxtPokeTarget&&); \
	NO_API UUxtPokeTarget(const UUxtPokeTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeTarget)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtPokeTarget(); \
	friend struct Z_Construct_UClass_UUxtPokeTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtPokeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPokeTarget)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_GENERATED_UINTERFACE_BODY() \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtPokeTarget() {} \
public: \
	typedef UUxtPokeTarget UClassType; \
	typedef IUxtPokeTarget ThisClass; \
	static bool Execute_GetClosestPoint(const UObject* O, const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal); \
	static EUxtPokeBehaviour Execute_GetPokeBehaviour(const UObject* O); \
	static bool Execute_IsPokeFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtPokeTarget() {} \
public: \
	typedef UUxtPokeTarget UClassType; \
	typedef IUxtPokeTarget ThisClass; \
	static bool Execute_GetClosestPoint(const UObject* O, const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal); \
	static EUxtPokeBehaviour Execute_GetPokeBehaviour(const UObject* O); \
	static bool Execute_IsPokeFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_24_PROLOG \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_EVENT_PARMS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_CALLBACK_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPokeTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h


#define FOREACH_ENUM_EUXTPOKEBEHAVIOUR(op) \
	op(EUxtPokeBehaviour::FrontFace) \
	op(EUxtPokeBehaviour::Volume) 

enum class EUxtPokeBehaviour : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtPokeBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
