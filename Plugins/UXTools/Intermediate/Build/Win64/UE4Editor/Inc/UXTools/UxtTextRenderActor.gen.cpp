// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtTextRenderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTextRenderActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtTextRenderActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtTextRenderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister();
// End Cross Module References
	void AUxtTextRenderActor::StaticRegisterNativesAUxtTextRenderActor()
	{
	}
	UClass* Z_Construct_UClass_AUxtTextRenderActor_NoRegister()
	{
		return AUxtTextRenderActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtTextRenderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtTextRenderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTextRenderActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A text render actor which automatically wraps the UUxtTextRenderComponent.\n */" },
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Controls/UxtTextRenderActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextRenderActor.h" },
		{ "ToolTip", "A text render actor which automatically wraps the UUxtTextRenderComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTextRenderActor_Statics::NewProp_TextRender_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Uxt Text Render" },
		{ "Comment", "/** Component to render a text in 3d with a font */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextRenderActor.h" },
		{ "ToolTip", "Component to render a text in 3d with a font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTextRenderActor_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTextRenderActor, TextRender), Z_Construct_UClass_UUxtTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTextRenderActor_Statics::NewProp_TextRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTextRenderActor_Statics::NewProp_TextRender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtTextRenderActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTextRenderActor_Statics::NewProp_TextRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtTextRenderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtTextRenderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtTextRenderActor_Statics::ClassParams = {
		&AUxtTextRenderActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUxtTextRenderActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTextRenderActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtTextRenderActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTextRenderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtTextRenderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtTextRenderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtTextRenderActor, 1825566466);
	template<> UXTOOLS_API UClass* StaticClass<AUxtTextRenderActor>()
	{
		return AUxtTextRenderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtTextRenderActor(Z_Construct_UClass_AUxtTextRenderActor, &AUxtTextRenderActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtTextRenderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtTextRenderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
