// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtButtonBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtButtonBrush() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonBrush();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonAudioBrush();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FUxtButtonBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtButtonBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonBrush"), sizeof(FUxtButtonBrush), Get_Z_Construct_UScriptStruct_FUxtButtonBrush_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonBrush>()
{
	return FUxtButtonBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtButtonBrush(FUxtButtonBrush::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtButtonBrush"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonBrush
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtButtonBrush")),new UScriptStruct::TCppStructOps<FUxtButtonBrush>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtButtonBrush;
	struct Z_Construct_UScriptStruct_FUxtButtonBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Visuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing categorized button assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing categorized button assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonBrush>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData[] = {
		{ "Category", "Uxt Button Brush" },
		{ "Comment", "/** Structure for button visuals. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure for button visuals." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonBrush, Visuals), Z_Construct_UScriptStruct_FUxtButtonVisualsBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Uxt Button Brush" },
		{ "Comment", "/** Structure for button audio. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure for button audio." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonBrush, Audio), Z_Construct_UScriptStruct_FUxtButtonAudioBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonBrush",
		sizeof(FUxtButtonBrush),
		alignof(FUxtButtonBrush),
		Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtButtonBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtButtonBrush"), sizeof(FUxtButtonBrush), Get_Z_Construct_UScriptStruct_FUxtButtonBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtButtonBrush_Hash() { return 2323784328U; }
class UScriptStruct* FUxtButtonAudioBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonAudioBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonAudioBrush"), sizeof(FUxtButtonAudioBrush), Get_Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonAudioBrush>()
{
	return FUxtButtonAudioBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtButtonAudioBrush(FUxtButtonAudioBrush::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtButtonAudioBrush"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonAudioBrush
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonAudioBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtButtonAudioBrush")),new UScriptStruct::TCppStructOps<FUxtButtonAudioBrush>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtButtonAudioBrush;
	struct Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasedSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing button audio assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing button audio assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonAudioBrush>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData[] = {
		{ "Category", "Uxt Button Audio Brush" },
		{ "Comment", "/** The sound which plays when a button is pressed. This sound is spatialized. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The sound which plays when a button is pressed. This sound is spatialized." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonAudioBrush, PressedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData[] = {
		{ "Category", "Uxt Button Audio Brush" },
		{ "Comment", "/** The sound which plays when a button is released. This sound is spatialized. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The sound which plays when a button is released. This sound is spatialized." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound = { "ReleasedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonAudioBrush, ReleasedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonAudioBrush",
		sizeof(FUxtButtonAudioBrush),
		alignof(FUxtButtonAudioBrush),
		Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonAudioBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtButtonAudioBrush"), sizeof(FUxtButtonAudioBrush), Get_Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Hash() { return 1536789965U; }
class UScriptStruct* FUxtButtonVisualsBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonVisualsBrush"), sizeof(FUxtButtonVisualsBrush), Get_Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonVisualsBrush>()
{
	return FUxtButtonVisualsBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtButtonVisualsBrush(FUxtButtonVisualsBrush::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtButtonVisualsBrush"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonVisualsBrush
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtButtonVisualsBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtButtonVisualsBrush")),new UScriptStruct::TCppStructOps<FUxtButtonVisualsBrush>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtButtonVisualsBrush;
	struct Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlatePulseLeftMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlatePulseLeftMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlatePulseRightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlatePulseRightMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PulseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PulseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PulseFadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PulseFadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFocusSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IconFocusSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFocusCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconFocusCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TogglePlateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TogglePlateMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing button visual assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing button visual assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonVisualsBrush>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button back plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial = { "BackPlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, BackPlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The mesh used for the button back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The mesh used for the button back plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh = { "BackPlateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, BackPlateMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button front plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial = { "FrontPlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The mesh used for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The mesh used for the button front plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh = { "FrontPlateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlateMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Handle to the default left pulse materials to use for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Handle to the default left pulse materials to use for the button front plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial = { "FrontPlatePulseLeftMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlatePulseLeftMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Handle to the default right pulse materials to use for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Handle to the default right pulse materials to use for the button front plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial = { "FrontPlatePulseRightMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlatePulseRightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** How long it takes the front plate pulse to animate in size in seconds. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "How long it takes the front plate pulse to animate in size in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime = { "PulseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, PulseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** How long it takes the front plate pulse to fade out in seconds. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "How long it takes the front plate pulse to fade out in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime = { "PulseFadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, PulseFadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** When a button is focused, how quickly the icon animates to the focused location. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "When a button is focused, how quickly the icon animates to the focused location." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed = { "IconFocusSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, IconFocusSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Curve which describes the motion of the focus animation. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Curve which describes the motion of the focus animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve = { "IconFocusCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, IconFocusCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button toggle plate. Note, all buttons may not have a toggle plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button toggle plate. Note, all buttons may not have a toggle plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial = { "TogglePlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, TogglePlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonVisualsBrush",
		sizeof(FUxtButtonVisualsBrush),
		alignof(FUxtButtonVisualsBrush),
		Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtButtonVisualsBrush"), sizeof(FUxtButtonVisualsBrush), Get_Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Hash() { return 779481594U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
