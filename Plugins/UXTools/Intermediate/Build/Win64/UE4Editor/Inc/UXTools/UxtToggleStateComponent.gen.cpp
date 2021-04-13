// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtToggleStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtToggleStateComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtToggledDelegate_Parms
		{
			UUxtToggleStateComponent* ToggleState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtToggledDelegate_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtToggledDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtToggledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtToggleStateComponent::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleStateComponent::execSetIsChecked)
	{
		P_GET_UBOOL(Z_Param_IsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsChecked(Z_Param_IsChecked);
		P_NATIVE_END;
	}
	void UUxtToggleStateComponent::StaticRegisterNativesUUxtToggleStateComponent()
	{
		UClass* Class = UUxtToggleStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsChecked", &UUxtToggleStateComponent::execIsChecked },
			{ "SetIsChecked", &UUxtToggleStateComponent::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics
	{
		struct UxtToggleStateComponent_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtToggleStateComponent_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleStateComponent_eventIsChecked_Parms), &Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Accessor to the checked flag. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Accessor to the checked flag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleStateComponent, nullptr, "IsChecked", nullptr, nullptr, sizeof(UxtToggleStateComponent_eventIsChecked_Parms), Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics
	{
		struct UxtToggleStateComponent_eventSetIsChecked_Parms
		{
			bool IsChecked;
		};
		static void NewProp_IsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked_SetBit(void* Obj)
	{
		((UxtToggleStateComponent_eventSetIsChecked_Parms*)Obj)->IsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked = { "IsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleStateComponent_eventSetIsChecked_Parms), &Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Mutates the checked flag and broadcasts events if the state changes.  */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Mutates the checked flag and broadcasts events if the state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleStateComponent, nullptr, "SetIsChecked", nullptr, nullptr, sizeof(UxtToggleStateComponent_eventSetIsChecked_Parms), Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister()
	{
		return UUxtToggleStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtToggleStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnToggled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToggled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChecked_MetaData[];
#endif
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtToggleStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtToggleStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked, "IsChecked" }, // 3017308250
		{ &Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked, "SetIsChecked" }, // 3550310443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component which holds the state, methods, and delegates responsible for controls with binary states.\n */" },
		{ "HideCategories", "Materials" },
		{ "IncludePath", "Controls/UxtToggleStateComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Component which holds the state, methods, and delegates responsible for controls with binary states." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData[] = {
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Event which broadcasts when the checked state changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Event which broadcasts when the checked state changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled = { "OnToggled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtToggleStateComponent, OnToggled), Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData[] = {
		{ "BlueprintGetter", "IsChecked" },
		{ "BlueprintSetter", "SetIsChecked" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** The current toggled state, true if checked, false is not checked. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "The current toggled state, true if checked, false is not checked." },
	};
#endif
	void Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((UUxtToggleStateComponent*)Obj)->bIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtToggleStateComponent), &Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtToggleStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtToggleStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::ClassParams = {
		&UUxtToggleStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtToggleStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtToggleStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtToggleStateComponent, 688918832);
	template<> UXTOOLS_API UClass* StaticClass<UUxtToggleStateComponent>()
	{
		return UUxtToggleStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtToggleStateComponent(Z_Construct_UClass_UUxtToggleStateComponent, &UUxtToggleStateComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtToggleStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtToggleStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
