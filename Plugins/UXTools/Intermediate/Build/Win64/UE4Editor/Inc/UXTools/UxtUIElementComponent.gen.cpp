// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtUIElementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtUIElementComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtUIElementVisibility();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUIElementHideDelegate_Parms
		{
			UUxtUIElementComponent* UIElement;
			bool bShouldAffectLayout;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIElement;
		static void NewProp_bShouldAffectLayout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAffectLayout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUIElementHideDelegate_Parms, UIElement), Z_Construct_UClass_UUxtUIElementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtUIElementHideDelegate_Parms*)Obj)->bShouldAffectLayout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout = { "bShouldAffectLayout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtUIElementHideDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUIElementHideDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtUIElementHideDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUIElementShowDelegate_Parms
		{
			UUxtUIElementComponent* UIElement;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUIElementShowDelegate_Parms, UIElement), Z_Construct_UClass_UUxtUIElementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUIElementShowDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtUIElementShowDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EUxtUIElementVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtUIElementVisibility"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtUIElementVisibility>()
	{
		return EUxtUIElementVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtUIElementVisibility(EUxtUIElementVisibility_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtUIElementVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Hash() { return 1627778339U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtUIElementVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtUIElementVisibility"), 0, Get_Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtUIElementVisibility::Show", (int64)EUxtUIElementVisibility::Show },
				{ "EUxtUIElementVisibility::Hide", (int64)EUxtUIElementVisibility::Hide },
				{ "EUxtUIElementVisibility::LayoutOnly", (int64)EUxtUIElementVisibility::LayoutOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hide.Comment", "/** The element is hidden */" },
				{ "Hide.Name", "EUxtUIElementVisibility::Hide" },
				{ "Hide.ToolTip", "The element is hidden" },
				{ "LayoutOnly.Comment", "/** The element is hidden but should affect layout */" },
				{ "LayoutOnly.Name", "EUxtUIElementVisibility::LayoutOnly" },
				{ "LayoutOnly.ToolTip", "The element is hidden but should affect layout" },
				{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
				{ "Show.Comment", "/** The element is shown */" },
				{ "Show.Name", "EUxtUIElementVisibility::Show" },
				{ "Show.ToolTip", "The element is shown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtUIElementVisibility",
				"EUxtUIElementVisibility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execRefreshUIElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshUIElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execSetUIVisibility)
	{
		P_GET_ENUM(EUxtUIElementVisibility,Z_Param_NewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIVisibility(EUxtUIElementVisibility(Z_Param_NewVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execGetUIVisibilityInHierarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtUIElementVisibility*)Z_Param__Result=P_THIS->GetUIVisibilityInHierarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execGetUIVisibilitySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtUIElementVisibility*)Z_Param__Result=P_THIS->GetUIVisibilitySelf();
		P_NATIVE_END;
	}
	void UUxtUIElementComponent::StaticRegisterNativesUUxtUIElementComponent()
	{
		UClass* Class = UUxtUIElementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUIVisibilityInHierarchy", &UUxtUIElementComponent::execGetUIVisibilityInHierarchy },
			{ "GetUIVisibilitySelf", &UUxtUIElementComponent::execGetUIVisibilitySelf },
			{ "RefreshUIElement", &UUxtUIElementComponent::execRefreshUIElement },
			{ "SetUIVisibility", &UUxtUIElementComponent::execSetUIVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics
	{
		struct UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms
		{
			EUxtUIElementVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Get the element's visibility in the scene. */" },
		{ "DisplayName", "Get UI Visibility in Hierarchy" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Get the element's visibility in the scene." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "GetUIVisibilityInHierarchy", nullptr, nullptr, sizeof(UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms), Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics
	{
		struct UxtUIElementComponent_eventGetUIVisibilitySelf_Parms
		{
			EUxtUIElementVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventGetUIVisibilitySelf_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Get the element's visibility. This does not reflect if the element is visible in the scene. */" },
		{ "DisplayName", "Get UI Visibility Self" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Get the element's visibility. This does not reflect if the element is visible in the scene." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "GetUIVisibilitySelf", nullptr, nullptr, sizeof(UxtUIElementComponent_eventGetUIVisibilitySelf_Parms), Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Refresh the element's visibility. This is only necessary after changing the element's parent actor when this is not the root\n\x09 * component of the actor. */" },
		{ "DisplayName", "Refresh UI Element" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Refresh the element's visibility. This is only necessary after changing the element's parent actor when this is not the root\ncomponent of the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "RefreshUIElement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics
	{
		struct UxtUIElementComponent_eventSetUIVisibility_Parms
		{
			EUxtUIElementVisibility NewVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventSetUIVisibility_Parms, NewVisibility), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Set the element's visibility. The element will not be visible in the scene if it's parent is hidden. */" },
		{ "DisplayName", "Set UI Visibility" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Set the element's visibility. The element will not be visible in the scene if it's parent is hidden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "SetUIVisibility", nullptr, nullptr, sizeof(UxtUIElementComponent_eventSetUIVisibility_Parms), Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtUIElementComponent_NoRegister()
	{
		return UUxtUIElementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtUIElementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShowElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHideElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideElement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtUIElementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtUIElementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy, "GetUIVisibilityInHierarchy" }, // 3754774396
		{ &Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf, "GetUIVisibilitySelf" }, // 1255617153
		{ &Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement, "RefreshUIElement" }, // 1335532870
		{ &Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility, "SetUIVisibility" }, // 2702519592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Controls visibility of a UI element in the scene.\n *\n * Parent-child relationships are managed via actor attachments. If the parent is hidden, all of its children will be hidden.\n * It is recommended to have the UxtUIElementComponent as the root component as the actor as this allows it to automatically update\n * if the actor is attached to a new parent actor. If it is not the root component, RefreshUIElement() will need to be called manually\n * after attaching a new parent actor.\n *\n * Note: Manually changing actor visibility will not affect child UI elements and may lead to unwanted behavior.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtUIElementComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Controls visibility of a UI element in the scene.\n\nParent-child relationships are managed via actor attachments. If the parent is hidden, all of its children will be hidden.\nIt is recommended to have the UxtUIElementComponent as the root component as the actor as this allows it to automatically update\nif the actor is attached to a new parent actor. If it is not the root component, RefreshUIElement() will need to be called manually\nafter attaching a new parent actor.\n\nNote: Manually changing actor visibility will not affect child UI elements and may lead to unwanted behavior." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Event raised when the element is shown. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Event raised when the element is shown." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement = { "OnShowElement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, OnShowElement), Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Event raised when the element is hidden. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Event raised when the element is hidden." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement = { "OnHideElement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, OnHideElement), Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** The element's visibility. */" },
		{ "DisplayName", "UI Visibility" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "The element's visibility." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, Visibility), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtUIElementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtUIElementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtUIElementComponent_Statics::ClassParams = {
		&UUxtUIElementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtUIElementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtUIElementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtUIElementComponent, 1523350404);
	template<> UXTOOLS_API UClass* StaticClass<UUxtUIElementComponent>()
	{
		return UUxtUIElementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtUIElementComponent(Z_Construct_UClass_UUxtUIElementComponent, &UUxtUIElementComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtUIElementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtUIElementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
