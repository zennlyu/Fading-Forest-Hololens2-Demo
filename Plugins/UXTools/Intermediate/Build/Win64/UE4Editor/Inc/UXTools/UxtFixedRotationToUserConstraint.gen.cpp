// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFixedRotationToUserConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFixedRotationToUserConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToUserConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToUserConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtFixedRotationToUserConstraint::StaticRegisterNativesUUxtFixedRotationToUserConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtFixedRotationToUserConstraint_NoRegister()
	{
		return UUxtFixedRotationToUserConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeRoll_MetaData[];
#endif
		static void NewProp_bExcludeRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for fixing the rotation of a manipulated object relative to the user\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFixedRotationToUserConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedRotationToUserConstraint.h" },
		{ "ToolTip", "Component for fixing the rotation of a manipulated object relative to the user\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll_MetaData[] = {
		{ "Category", "Uxt Constraint|Fixed Rotation To User" },
		{ "Comment", "/** Should roll be excluded from locking to the users orientation */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedRotationToUserConstraint.h" },
		{ "ToolTip", "Should roll be excluded from locking to the users orientation" },
	};
#endif
	void Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll_SetBit(void* Obj)
	{
		((UUxtFixedRotationToUserConstraint*)Obj)->bExcludeRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll = { "bExcludeRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFixedRotationToUserConstraint), &Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::NewProp_bExcludeRoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFixedRotationToUserConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::ClassParams = {
		&UUxtFixedRotationToUserConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFixedRotationToUserConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFixedRotationToUserConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFixedRotationToUserConstraint, 2817923740);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFixedRotationToUserConstraint>()
	{
		return UUxtFixedRotationToUserConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFixedRotationToUserConstraint(Z_Construct_UClass_UUxtFixedRotationToUserConstraint, &UUxtFixedRotationToUserConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFixedRotationToUserConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFixedRotationToUserConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
