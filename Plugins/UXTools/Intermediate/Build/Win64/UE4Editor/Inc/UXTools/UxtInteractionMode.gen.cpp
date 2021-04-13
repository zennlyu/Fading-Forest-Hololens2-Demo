// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtInteractionMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInteractionMode() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtGrabMode();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode();
// End Cross Module References
	static UEnum* EUxtGrabMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtGrabMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtGrabMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtGrabMode>()
	{
		return EUxtGrabMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtGrabMode(EUxtGrabMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtGrabMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtGrabMode_Hash() { return 205491075U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtGrabMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtGrabMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtGrabMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtGrabMode::None", (int64)EUxtGrabMode::None },
				{ "EUxtGrabMode::OneHanded", (int64)EUxtGrabMode::OneHanded },
				{ "EUxtGrabMode::TwoHanded", (int64)EUxtGrabMode::TwoHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Grab modes supported */" },
				{ "ModuleRelativePath", "Public/Interactions/UxtInteractionMode.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtGrabMode::None" },
				{ "OneHanded.Comment", "/** Grab objects with one hand */" },
				{ "OneHanded.Name", "EUxtGrabMode::OneHanded" },
				{ "OneHanded.ToolTip", "Grab objects with one hand" },
				{ "ToolTip", "Grab modes supported" },
				{ "TwoHanded.Comment", "/** Grab objects with two hands */" },
				{ "TwoHanded.Name", "EUxtGrabMode::TwoHanded" },
				{ "TwoHanded.ToolTip", "Grab objects with two hands" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtGrabMode",
				"EUxtGrabMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUxtInteractionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtInteractionMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtInteractionMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtInteractionMode>()
	{
		return EUxtInteractionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtInteractionMode(EUxtInteractionMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtInteractionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtInteractionMode_Hash() { return 2606883142U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtInteractionMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtInteractionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtInteractionMode::None", (int64)EUxtInteractionMode::None },
				{ "EUxtInteractionMode::Near", (int64)EUxtInteractionMode::Near },
				{ "EUxtInteractionMode::Far", (int64)EUxtInteractionMode::Far },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Interaction modes supported */" },
				{ "Far.Comment", "/** Interact with far targets (see IUxtFarTarget) */" },
				{ "Far.Name", "EUxtInteractionMode::Far" },
				{ "Far.ToolTip", "Interact with far targets (see IUxtFarTarget)" },
				{ "ModuleRelativePath", "Public/Interactions/UxtInteractionMode.h" },
				{ "Near.Comment", "/** Interact with poke and grab targets (see IUxtPokeTarget and IUxtGrabTarget) */" },
				{ "Near.Name", "EUxtInteractionMode::Near" },
				{ "Near.ToolTip", "Interact with poke and grab targets (see IUxtPokeTarget and IUxtGrabTarget)" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtInteractionMode::None" },
				{ "ToolTip", "Interaction modes supported" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtInteractionMode",
				"EUxtInteractionMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
