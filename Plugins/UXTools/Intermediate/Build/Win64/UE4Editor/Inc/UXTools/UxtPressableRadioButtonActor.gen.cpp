// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableRadioButtonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableRadioButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AUxtPressableRadioButtonActor::StaticRegisterNativesAUxtPressableRadioButtonActor()
	{
	}
	UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor_NoRegister()
	{
		return AUxtPressableRadioButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterIconComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterIconComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableToggleButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a circle icon. Radio buttons\n * are normally used in groups alongside the UUxtToggleGroupComponent.\n */" },
		{ "IncludePath", "Controls/UxtPressableRadioButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableRadioButtonActor.h" },
		{ "ToolTip", "A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a circle icon. Radio buttons\nare normally used in groups alongside the UUxtToggleGroupComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Displays the radio button's center icon which gets toggled on and off. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableRadioButtonActor.h" },
		{ "ToolTip", "Displays the radio button's center icon which gets toggled on and off." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent = { "CenterIconComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableRadioButtonActor, CenterIconComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableRadioButtonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::ClassParams = {
		&AUxtPressableRadioButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtPressableRadioButtonActor, 313454320);
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableRadioButtonActor>()
	{
		return AUxtPressableRadioButtonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtPressableRadioButtonActor(Z_Construct_UClass_AUxtPressableRadioButtonActor, &AUxtPressableRadioButtonActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtPressableRadioButtonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableRadioButtonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
