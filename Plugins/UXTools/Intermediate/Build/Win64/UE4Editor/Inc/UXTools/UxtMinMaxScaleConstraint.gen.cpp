// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtMinMaxScaleConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtMinMaxScaleConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMinMaxScaleConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMinMaxScaleConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtMinMaxScaleConstraint::StaticRegisterNativesUUxtMinMaxScaleConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtMinMaxScaleConstraint_NoRegister()
	{
		return UUxtMinMaxScaleConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialScale_MetaData[];
#endif
		static void NewProp_bRelativeToInitialScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Constraint that limits the min/max scale.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtMinMaxScaleConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMinMaxScaleConstraint.h" },
		{ "ToolTip", "Constraint that limits the min/max scale." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MinScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtAxisFlags" },
		{ "Category", "Uxt Constraint|Min Max Scale" },
		{ "Comment", "/** Minimum scale allowed */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMinMaxScaleConstraint.h" },
		{ "ToolTip", "Minimum scale allowed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtMinMaxScaleConstraint, MinScale), METADATA_PARAMS(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtAxisFlags" },
		{ "Category", "Uxt Constraint|Min Max Scale" },
		{ "Comment", "/** Maximum scale allowed */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMinMaxScaleConstraint.h" },
		{ "ToolTip", "Maximum scale allowed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtMinMaxScaleConstraint, MaxScale), METADATA_PARAMS(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale_MetaData[] = {
		{ "Category", "Uxt Constraint|Min Max Scale" },
		{ "Comment", "/** Whether the min/max values should be relative to the scale at interaction start. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMinMaxScaleConstraint.h" },
		{ "ToolTip", "Whether the min/max values should be relative to the scale at interaction start." },
	};
#endif
	void Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale_SetBit(void* Obj)
	{
		((UUxtMinMaxScaleConstraint*)Obj)->bRelativeToInitialScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale = { "bRelativeToInitialScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtMinMaxScaleConstraint), &Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::NewProp_bRelativeToInitialScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtMinMaxScaleConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::ClassParams = {
		&UUxtMinMaxScaleConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtMinMaxScaleConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtMinMaxScaleConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtMinMaxScaleConstraint, 380198912);
	template<> UXTOOLS_API UClass* StaticClass<UUxtMinMaxScaleConstraint>()
	{
		return UUxtMinMaxScaleConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtMinMaxScaleConstraint(Z_Construct_UClass_UUxtMinMaxScaleConstraint, &UUxtMinMaxScaleConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtMinMaxScaleConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtMinMaxScaleConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
