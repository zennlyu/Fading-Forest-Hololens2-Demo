// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFixedRotationToWorldConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFixedRotationToWorldConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtFixedRotationToWorldConstraint::StaticRegisterNativesUUxtFixedRotationToWorldConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_NoRegister()
	{
		return UUxtFixedRotationToWorldConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for fixing the rotation of a manipulated object relative to the world\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFixedRotationToWorldConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedRotationToWorldConstraint.h" },
		{ "ToolTip", "Component for fixing the rotation of a manipulated object relative to the world\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFixedRotationToWorldConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::ClassParams = {
		&UUxtFixedRotationToWorldConstraint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFixedRotationToWorldConstraint, 694412121);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFixedRotationToWorldConstraint>()
	{
		return UUxtFixedRotationToWorldConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFixedRotationToWorldConstraint(Z_Construct_UClass_UUxtFixedRotationToWorldConstraint, &UUxtFixedRotationToWorldConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFixedRotationToWorldConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFixedRotationToWorldConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
