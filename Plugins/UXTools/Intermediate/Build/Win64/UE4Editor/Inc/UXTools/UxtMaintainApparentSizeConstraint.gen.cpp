// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtMaintainApparentSizeConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtMaintainApparentSizeConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtMaintainApparentSizeConstraint::StaticRegisterNativesUUxtMaintainApparentSizeConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_NoRegister()
	{
		return UUxtMaintainApparentSizeConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Constraint to maintain the apparent size of the object to the user.\n\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtMaintainApparentSizeConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMaintainApparentSizeConstraint.h" },
		{ "ToolTip", "Constraint to maintain the apparent size of the object to the user.\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtMaintainApparentSizeConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::ClassParams = {
		&UUxtMaintainApparentSizeConstraint::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtMaintainApparentSizeConstraint, 914660054);
	template<> UXTOOLS_API UClass* StaticClass<UUxtMaintainApparentSizeConstraint>()
	{
		return UUxtMaintainApparentSizeConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtMaintainApparentSizeConstraint(Z_Construct_UClass_UUxtMaintainApparentSizeConstraint, &UUxtMaintainApparentSizeConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtMaintainApparentSizeConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtMaintainApparentSizeConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
