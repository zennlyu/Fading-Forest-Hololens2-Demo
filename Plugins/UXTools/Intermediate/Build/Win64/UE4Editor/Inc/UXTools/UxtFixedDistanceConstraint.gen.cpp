// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFixedDistanceConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFixedDistanceConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void UUxtFixedDistanceConstraint::StaticRegisterNativesUUxtFixedDistanceConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint_NoRegister()
	{
		return UUxtFixedDistanceConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Constraint to fix the object distance from another object.\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n * If necessary, configure the object to constrain to. This will default to the head if not set.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ToolTip", "Constraint to fix the object distance from another object.\n\nUsage:\nAttach to actor that the constraint should be applied to.\nIf necessary, configure the object to constrain to. This will default to the head if not set." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData[] = {
		{ "Category", "Uxt Constraint|Fixed Distance" },
		{ "Comment", "/** Component to fix distance to. Defaults to the head. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ToolTip", "Component to fix distance to. Defaults to the head." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent = { "ConstraintComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFixedDistanceConstraint, ConstraintComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFixedDistanceConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::ClassParams = {
		&UUxtFixedDistanceConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFixedDistanceConstraint, 4236181322);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFixedDistanceConstraint>()
	{
		return UUxtFixedDistanceConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFixedDistanceConstraint(Z_Construct_UClass_UUxtFixedDistanceConstraint, &UUxtFixedDistanceConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFixedDistanceConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFixedDistanceConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
