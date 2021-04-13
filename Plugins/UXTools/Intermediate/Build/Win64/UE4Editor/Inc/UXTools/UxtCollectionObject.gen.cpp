// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtCollectionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtCollectionObject() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtCollectionObject_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtCollectionObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtCollectionObject::execGetFarTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IUxtFarTarget>*)Z_Param__Result=P_THIS->GetFarTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtCollectionObject::execGetPokeTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IUxtPokeTarget>*)Z_Param__Result=P_THIS->GetPokeTarget_Implementation();
		P_NATIVE_END;
	}
	TScriptInterface<IUxtFarTarget> IUxtCollectionObject::GetFarTarget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFarTarget instead.");
		UxtCollectionObject_eventGetFarTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IUxtPokeTarget> IUxtCollectionObject::GetPokeTarget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPokeTarget instead.");
		UxtCollectionObject_eventGetPokeTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUxtCollectionObject::StaticRegisterNativesUUxtCollectionObject()
	{
		UClass* Class = UUxtCollectionObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFarTarget", &IUxtCollectionObject::execGetFarTarget },
			{ "GetPokeTarget", &IUxtCollectionObject::execGetPokeTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtCollectionObject_eventGetFarTarget_Parms, ReturnValue), Z_Construct_UClass_UUxtFarTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Collection Object" },
		{ "ModuleRelativePath", "Public/Controls/UxtCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtCollectionObject, nullptr, "GetFarTarget", nullptr, nullptr, sizeof(UxtCollectionObject_eventGetFarTarget_Parms), Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtCollectionObject_eventGetPokeTarget_Parms, ReturnValue), Z_Construct_UClass_UUxtPokeTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Collection Object" },
		{ "ModuleRelativePath", "Public/Controls/UxtCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtCollectionObject, nullptr, "GetPokeTarget", nullptr, nullptr, sizeof(UxtCollectionObject_eventGetPokeTarget_Parms), Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtCollectionObject_NoRegister()
	{
		return UUxtCollectionObject::StaticClass();
	}
	struct Z_Construct_UClass_UUxtCollectionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtCollectionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtCollectionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtCollectionObject_GetFarTarget, "GetFarTarget" }, // 2721139452
		{ &Z_Construct_UFunction_UUxtCollectionObject_GetPokeTarget, "GetPokeTarget" }, // 3904948709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtCollectionObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtCollectionObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtCollectionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtCollectionObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtCollectionObject_Statics::ClassParams = {
		&UUxtCollectionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtCollectionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtCollectionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtCollectionObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtCollectionObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtCollectionObject, 316075471);
	template<> UXTOOLS_API UClass* StaticClass<UUxtCollectionObject>()
	{
		return UUxtCollectionObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtCollectionObject(Z_Construct_UClass_UUxtCollectionObject, &UUxtCollectionObject::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtCollectionObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtCollectionObject);
	static FName NAME_UUxtCollectionObject_GetFarTarget = FName(TEXT("GetFarTarget"));
	TScriptInterface<IUxtFarTarget> IUxtCollectionObject::Execute_GetFarTarget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtCollectionObject::StaticClass()));
		UxtCollectionObject_eventGetFarTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtCollectionObject_GetFarTarget);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtCollectionObject*)(O->GetNativeInterfaceAddress(UUxtCollectionObject::StaticClass())))
		{
			Parms.ReturnValue = I->GetFarTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtCollectionObject_GetPokeTarget = FName(TEXT("GetPokeTarget"));
	TScriptInterface<IUxtPokeTarget> IUxtCollectionObject::Execute_GetPokeTarget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtCollectionObject::StaticClass()));
		UxtCollectionObject_eventGetPokeTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtCollectionObject_GetPokeTarget);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtCollectionObject*)(O->GetNativeInterfaceAddress(UUxtCollectionObject::StaticClass())))
		{
			Parms.ReturnValue = I->GetPokeTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
