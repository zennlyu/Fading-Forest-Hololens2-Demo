// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBasePressableButtonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBasePressableButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtBasePressableButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtBasePressableButtonActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtCollectionObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtBasePressableButtonActor::execGetFarTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IUxtFarTarget>*)Z_Param__Result=P_THIS->GetFarTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtBasePressableButtonActor::execGetPokeTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IUxtPokeTarget>*)Z_Param__Result=P_THIS->GetPokeTarget_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AUxtBasePressableButtonActor_GetFarTarget = FName(TEXT("GetFarTarget"));
	TScriptInterface<IUxtFarTarget> AUxtBasePressableButtonActor::GetFarTarget()
	{
		UxtBasePressableButtonActor_eventGetFarTarget_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AUxtBasePressableButtonActor_GetFarTarget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUxtBasePressableButtonActor_GetPokeTarget = FName(TEXT("GetPokeTarget"));
	TScriptInterface<IUxtPokeTarget> AUxtBasePressableButtonActor::GetPokeTarget()
	{
		UxtBasePressableButtonActor_eventGetPokeTarget_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AUxtBasePressableButtonActor_GetPokeTarget),&Parms);
		return Parms.ReturnValue;
	}
	void AUxtBasePressableButtonActor::StaticRegisterNativesAUxtBasePressableButtonActor()
	{
		UClass* Class = AUxtBasePressableButtonActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFarTarget", &AUxtBasePressableButtonActor::execGetFarTarget },
			{ "GetPokeTarget", &AUxtBasePressableButtonActor::execGetPokeTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBasePressableButtonActor_eventGetFarTarget_Parms, ReturnValue), Z_Construct_UClass_UUxtFarTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Returns UUxtPressableButtonComponent as the far target. **/" },
		{ "ModuleRelativePath", "Public/Controls/UxtBasePressableButtonActor.h" },
		{ "ToolTip", "Returns UUxtPressableButtonComponent as the far target. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtBasePressableButtonActor, nullptr, "GetFarTarget", nullptr, nullptr, sizeof(UxtBasePressableButtonActor_eventGetFarTarget_Parms), Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBasePressableButtonActor_eventGetPokeTarget_Parms, ReturnValue), Z_Construct_UClass_UUxtPokeTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Returns UUxtPressableButtonComponent as the poke target. **/" },
		{ "ModuleRelativePath", "Public/Controls/UxtBasePressableButtonActor.h" },
		{ "ToolTip", "Returns UUxtPressableButtonComponent as the poke target. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtBasePressableButtonActor, nullptr, "GetPokeTarget", nullptr, nullptr, sizeof(UxtBasePressableButtonActor_eventGetPokeTarget_Parms), Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtBasePressableButtonActor_NoRegister()
	{
		return AUxtBasePressableButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtBasePressableButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtBasePressableButtonActor_GetFarTarget, "GetFarTarget" }, // 3075134072
		{ &Z_Construct_UFunction_AUxtBasePressableButtonActor_GetPokeTarget, "GetPokeTarget" }, // 2818359380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Abstract base class for all pressable button actors. Ensures a UUxtPressableButtonComponent as the root component.\n */" },
		{ "IncludePath", "Controls/UxtBasePressableButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBasePressableButtonActor.h" },
		{ "ToolTip", "Abstract base class for all pressable button actors. Ensures a UUxtPressableButtonComponent as the root component." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::NewProp_ButtonComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Handle to the root button component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtBasePressableButtonActor.h" },
		{ "ToolTip", "Handle to the root button component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::NewProp_ButtonComponent = { "ButtonComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtBasePressableButtonActor, ButtonComponent), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::NewProp_ButtonComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::NewProp_ButtonComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::NewProp_ButtonComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtCollectionObject_NoRegister, (int32)VTABLE_OFFSET(AUxtBasePressableButtonActor, IUxtCollectionObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtBasePressableButtonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::ClassParams = {
		&AUxtBasePressableButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtBasePressableButtonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtBasePressableButtonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtBasePressableButtonActor, 311664612);
	template<> UXTOOLS_API UClass* StaticClass<AUxtBasePressableButtonActor>()
	{
		return AUxtBasePressableButtonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtBasePressableButtonActor(Z_Construct_UClass_AUxtBasePressableButtonActor, &AUxtBasePressableButtonActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtBasePressableButtonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtBasePressableButtonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
