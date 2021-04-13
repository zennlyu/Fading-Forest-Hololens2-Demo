// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtTextRenderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTextRenderComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtTextRenderComponent::StaticRegisterNativesUUxtTextRenderComponent()
	{
	}
	UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister()
	{
		return UUxtTextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTextRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextRenderComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A text render component which automatically configures assets and properties best suited for text rendering in UX Tools.\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Controls/UxtTextRenderComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextRenderComponent.h" },
		{ "ToolTip", "A text render component which automatically configures assets and properties best suited for text rendering in UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTextRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtTextRenderComponent_Statics::ClassParams = {
		&UUxtTextRenderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTextRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtTextRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtTextRenderComponent, 2601005426);
	template<> UXTOOLS_API UClass* StaticClass<UUxtTextRenderComponent>()
	{
		return UUxtTextRenderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtTextRenderComponent(Z_Construct_UClass_UUxtTextRenderComponent, &UUxtTextRenderComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtTextRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTextRenderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
