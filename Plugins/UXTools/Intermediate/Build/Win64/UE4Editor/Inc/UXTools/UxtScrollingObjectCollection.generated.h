// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUxtPaginateResult : uint8;
struct FScrollingCollectionProperties;
class UUxtBackPlateComponent;
enum class EUxtScrollDirection : uint8;
class AActor;
#ifdef UXTOOLS_UxtScrollingObjectCollection_generated_h
#error "UxtScrollingObjectCollection.generated.h already included, missing '#pragma once' in UxtScrollingObjectCollection.h"
#endif
#define UXTOOLS_UxtScrollingObjectCollection_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_76_DELEGATE \
struct _Script_UXTools_eventUxtScrollingObjectCollectionOnPaginationEnd_Parms \
{ \
	EUxtPaginateResult Result; \
}; \
static inline void FUxtScrollingObjectCollectionOnPaginationEnd_DelegateWrapper(const FScriptDelegate& UxtScrollingObjectCollectionOnPaginationEnd, EUxtPaginateResult Result) \
{ \
	_Script_UXTools_eventUxtScrollingObjectCollectionOnPaginationEnd_Parms Parms; \
	Parms.Result=Result; \
	UxtScrollingObjectCollectionOnPaginationEnd.ProcessDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_75_DELEGATE \
struct _Script_UXTools_eventUxtScrollingObjectCollectionUpdated_Parms \
{ \
	FScrollingCollectionProperties Properties; \
}; \
static inline void FUxtScrollingObjectCollectionUpdated_DelegateWrapper(const FMulticastScriptDelegate& UxtScrollingObjectCollectionUpdated, FScrollingCollectionProperties const& Properties) \
{ \
	_Script_UXTools_eventUxtScrollingObjectCollectionUpdated_Parms Parms; \
	Parms.Properties=Properties; \
	UxtScrollingObjectCollectionUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckScrollOrClickFarPointer); \
	DECLARE_FUNCTION(execCheckScrollOrClick); \
	DECLARE_FUNCTION(execSetBackPlate); \
	DECLARE_FUNCTION(execGetScrollDirection); \
	DECLARE_FUNCTION(execAddActorToCollection); \
	DECLARE_FUNCTION(execMoveByItems); \
	DECLARE_FUNCTION(execPageBy); \
	DECLARE_FUNCTION(execSetTiers);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckScrollOrClickFarPointer); \
	DECLARE_FUNCTION(execCheckScrollOrClick); \
	DECLARE_FUNCTION(execSetBackPlate); \
	DECLARE_FUNCTION(execGetScrollDirection); \
	DECLARE_FUNCTION(execAddActorToCollection); \
	DECLARE_FUNCTION(execMoveByItems); \
	DECLARE_FUNCTION(execPageBy); \
	DECLARE_FUNCTION(execSetTiers);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtScrollingObjectCollection(); \
	friend struct Z_Construct_UClass_UUxtScrollingObjectCollection_Statics; \
public: \
	DECLARE_CLASS(UUxtScrollingObjectCollection, UUxtBaseObjectCollection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtScrollingObjectCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtScrollingObjectCollection*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUUxtScrollingObjectCollection(); \
	friend struct Z_Construct_UClass_UUxtScrollingObjectCollection_Statics; \
public: \
	DECLARE_CLASS(UUxtScrollingObjectCollection, UUxtBaseObjectCollection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtScrollingObjectCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtScrollingObjectCollection*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtScrollingObjectCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtScrollingObjectCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtScrollingObjectCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtScrollingObjectCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtScrollingObjectCollection(UUxtScrollingObjectCollection&&); \
	NO_API UUxtScrollingObjectCollection(const UUxtScrollingObjectCollection&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtScrollingObjectCollection(UUxtScrollingObjectCollection&&); \
	NO_API UUxtScrollingObjectCollection(const UUxtScrollingObjectCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtScrollingObjectCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtScrollingObjectCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtScrollingObjectCollection)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PokeTarget() { return STRUCT_OFFSET(UUxtScrollingObjectCollection, PokeTarget); } \
	FORCEINLINE static uint32 __PPO__FarTarget() { return STRUCT_OFFSET(UUxtScrollingObjectCollection, FarTarget); } \
	FORCEINLINE static uint32 __PPO__Tiers() { return STRUCT_OFFSET(UUxtScrollingObjectCollection, Tiers); } \
	FORCEINLINE static uint32 __PPO__BackPlate() { return STRUCT_OFFSET(UUxtScrollingObjectCollection, BackPlate); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_81_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtScrollingObjectCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtScrollingObjectCollection_h


#define FOREACH_ENUM_EINTERACTIONTYPEBITS(op) \
	op(EInteractionTypeBits::NearInteraction) \
	op(EInteractionTypeBits::FarInteraction) \
	op(EInteractionTypeBits::TouchInteraction) 

enum class EInteractionTypeBits;
template<> UXTOOLS_API UEnum* StaticEnum<EInteractionTypeBits>();

#define FOREACH_ENUM_EUXTPAGINATERESULT(op) \
	op(EUxtPaginateResult::Success) \
	op(EUxtPaginateResult::Failed_ConcurrentOperation) \
	op(EUxtPaginateResult::Failed_ConcurrentInteraction) 

enum class EUxtPaginateResult : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtPaginateResult>();

#define FOREACH_ENUM_EUXTSCROLLDIRECTION(op) \
	op(EUxtScrollDirection::UpAndDown) \
	op(EUxtScrollDirection::LeftAndRight) 

enum class EUxtScrollDirection : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtScrollDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
