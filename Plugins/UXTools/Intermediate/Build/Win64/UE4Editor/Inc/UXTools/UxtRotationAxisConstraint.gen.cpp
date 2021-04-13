// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtRotationAxisConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtRotationAxisConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRotationAxisConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRotationAxisConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtRotationAxisConstraint::StaticRegisterNativesUUxtRotationAxisConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtRotationAxisConstraint_NoRegister()
	{
		return UUxtRotationAxisConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtRotationAxisConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintOnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConstraintOnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpaceForConstraint_MetaData[];
#endif
		static void NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpaceForConstraint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for limiting the rotation axes for Manipulator\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Component for limiting the rotation axes for Manipulator\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_ConstraintOnRotation_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtAxisFlags" },
		{ "Category", "Uxt Constraint|Rotation Axis" },
		{ "Comment", "/** Defines the axis the rotation constraint should be applied to. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Defines the axis the rotation constraint should be applied to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_ConstraintOnRotation = { "ConstraintOnRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRotationAxisConstraint, ConstraintOnRotation), METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_ConstraintOnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_ConstraintOnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData[] = {
		{ "Category", "Uxt Constraint|Rotation Axis" },
		{ "Comment", "/** Use local or global space for constraint calculations*/" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Use local or global space for constraint calculations" },
	};
#endif
	void Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj)
	{
		((UUxtRotationAxisConstraint*)Obj)->bUseLocalSpaceForConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint = { "bUseLocalSpaceForConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtRotationAxisConstraint), &Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_ConstraintOnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtRotationAxisConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::ClassParams = {
		&UUxtRotationAxisConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtRotationAxisConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtRotationAxisConstraint, 3856056424);
	template<> UXTOOLS_API UClass* StaticClass<UUxtRotationAxisConstraint>()
	{
		return UUxtRotationAxisConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtRotationAxisConstraint(Z_Construct_UClass_UUxtRotationAxisConstraint, &UUxtRotationAxisConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtRotationAxisConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtRotationAxisConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
