// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGrabTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGrabTarget() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtGrabTarget::execIsGrabFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrabFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtGrabTarget::IsGrabFocusable(const UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsGrabFocusable instead.");
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUxtGrabTarget::StaticRegisterNativesUUxtGrabTarget()
	{
		UClass* Class = UUxtGrabTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGrabFocusable", &IUxtGrabTarget::execIsGrabFocusable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventIsGrabFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabTarget_eventIsGrabFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "IsGrabFocusable", nullptr, nullptr, sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister()
	{
		return UUxtGrabTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable, "IsGrabFocusable" }, // 681199876
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtGrabTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams = {
		&UUxtGrabTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtGrabTarget, 3487404464);
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabTarget>()
	{
		return UUxtGrabTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtGrabTarget(Z_Construct_UClass_UUxtGrabTarget, &UUxtGrabTarget::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtGrabTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabTarget);
	static FName NAME_UUxtGrabTarget_IsGrabFocusable = FName(TEXT("IsGrabFocusable"));
	bool IUxtGrabTarget::Execute_IsGrabFocusable(const UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_IsGrabFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsGrabFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
