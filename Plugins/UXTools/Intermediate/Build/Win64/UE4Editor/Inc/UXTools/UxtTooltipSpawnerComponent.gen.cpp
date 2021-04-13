// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Tooltips/UxtTooltipSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTooltipSpawnerComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipRemainType();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipAppearType();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipVanishType();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTooltipSpawnerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTooltipSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtTooltipActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "OnHideTooltip__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "OnShowTooltip__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EUxtTooltipRemainType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTooltipRemainType, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTooltipRemainType"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipRemainType>()
	{
		return EUxtTooltipRemainType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtTooltipRemainType(EUxtTooltipRemainType_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtTooltipRemainType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtTooltipRemainType_Hash() { return 2113989535U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipRemainType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtTooltipRemainType"), 0, Get_Z_Construct_UEnum_UXTools_EUxtTooltipRemainType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtTooltipRemainType::Indefinite", (int64)EUxtTooltipRemainType::Indefinite },
				{ "EUxtTooltipRemainType::Timeout", (int64)EUxtTooltipRemainType::Timeout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** RemainType sets whether the tooltip uses the Lifetime to automatically destroy itself or if it stays on indefinitely. */" },
				{ "Indefinite.Comment", "/** The tooltip will remain indefinitely. */" },
				{ "Indefinite.Name", "EUxtTooltipRemainType::Indefinite" },
				{ "Indefinite.ToolTip", "The tooltip will remain indefinitely." },
				{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
				{ "Timeout.Comment", "/** The tooltip will use the Lifetime value as its timeout. */" },
				{ "Timeout.Name", "EUxtTooltipRemainType::Timeout" },
				{ "Timeout.ToolTip", "The tooltip will use the Lifetime value as its timeout." },
				{ "ToolTip", "RemainType sets whether the tooltip uses the Lifetime to automatically destroy itself or if it stays on indefinitely." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtTooltipRemainType",
				"EUxtTooltipRemainType",
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
	static UEnum* EUxtTooltipAppearType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTooltipAppearType, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTooltipAppearType"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipAppearType>()
	{
		return EUxtTooltipAppearType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtTooltipAppearType(EUxtTooltipAppearType_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtTooltipAppearType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtTooltipAppearType_Hash() { return 358060009U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipAppearType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtTooltipAppearType"), 0, Get_Z_Construct_UEnum_UXTools_EUxtTooltipAppearType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtTooltipAppearType::AppearOnFocusEnter", (int64)EUxtTooltipAppearType::AppearOnFocusEnter },
				{ "EUxtTooltipAppearType::AppearOnTap", (int64)EUxtTooltipAppearType::AppearOnTap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AppearOnFocusEnter.Comment", "/** The tooltip will appear when the focus comes to this component. */" },
				{ "AppearOnFocusEnter.Name", "EUxtTooltipAppearType::AppearOnFocusEnter" },
				{ "AppearOnFocusEnter.ToolTip", "The tooltip will appear when the focus comes to this component." },
				{ "AppearOnTap.Comment", "/** The tooltip will appear when this component is tapped/clicked. */" },
				{ "AppearOnTap.Name", "EUxtTooltipAppearType::AppearOnTap" },
				{ "AppearOnTap.ToolTip", "The tooltip will appear when this component is tapped/clicked." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Appear Type is to set the action that triggers the tooltip to be spawned. */" },
				{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
				{ "ToolTip", "Appear Type is to set the action that triggers the tooltip to be spawned." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtTooltipAppearType",
				"EUxtTooltipAppearType",
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
	static UEnum* EUxtTooltipVanishType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTooltipVanishType, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTooltipVanishType"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTooltipVanishType>()
	{
		return EUxtTooltipVanishType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtTooltipVanishType(EUxtTooltipVanishType_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtTooltipVanishType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtTooltipVanishType_Hash() { return 4245857091U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtTooltipVanishType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtTooltipVanishType"), 0, Get_Z_Construct_UEnum_UXTools_EUxtTooltipVanishType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtTooltipVanishType::VanishOnFocusExit", (int64)EUxtTooltipVanishType::VanishOnFocusExit },
				{ "EUxtTooltipVanishType::VanishOnTap", (int64)EUxtTooltipVanishType::VanishOnTap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** The Vanish Type sets what action makes the tooltip vanish. */" },
				{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
				{ "ToolTip", "The Vanish Type sets what action makes the tooltip vanish." },
				{ "VanishOnFocusExit.Comment", "/** The tooltip will vanish it loses focus. */" },
				{ "VanishOnFocusExit.Name", "EUxtTooltipVanishType::VanishOnFocusExit" },
				{ "VanishOnFocusExit.ToolTip", "The tooltip will vanish it loses focus." },
				{ "VanishOnTap.Comment", "/** The tooltip will vanish when it is being tapped/clicked on. */" },
				{ "VanishOnTap.Name", "EUxtTooltipVanishType::VanishOnTap" },
				{ "VanishOnTap.ToolTip", "The tooltip will vanish when it is being tapped/clicked on." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtTooltipVanishType",
				"EUxtTooltipVanishType",
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
	void UUxtTooltipSpawnerComponent::StaticRegisterNativesUUxtTooltipSpawnerComponent()
	{
	}
	UClass* Z_Construct_UClass_UUxtTooltipSpawnerComponent_NoRegister()
	{
		return UUxtTooltipSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShowTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowTooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHideTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideTooltip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppearType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppearType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppearType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VanishType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanishType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VanishType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemainType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RemainType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppearDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AppearDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanishDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VanishDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TooltipText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoAnchoring_MetaData[];
#endif
		static void NewProp_bIsAutoAnchoring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoAnchoring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools - Experimental" },
		{ "Comment", "/**\n *  Component used to \"script\" the behavior of a dynamic tooltip.\n *  This can be useful if your scene contains multiple tooltips and you don't want to create/render them all at once.\n *\n *  It's possible to configure upon what action the tooltip spawns/unspawn.\n *\n *  Different delays and lifetime can be configured.\n *\n *  OnHide and OnShow are broadcast when the tooltip is created/destroyed.\n *\n *  The Pivot can be used to offset the spawned tooltip.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Component used to \"script\" the behavior of a dynamic tooltip.\nThis can be useful if your scene contains multiple tooltips and you don't want to create/render them all at once.\n\nIt's possible to configure upon what action the tooltip spawns/unspawn.\n\nDifferent delays and lifetime can be configured.\n\nOnHide and OnShow are broadcast when the tooltip is created/destroyed.\n\nThe Pivot can be used to offset the spawned tooltip." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnShowTooltip_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Delegate to drive OnShow events. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Delegate to drive OnShow events." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnShowTooltip = { "OnShowTooltip", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, OnShowTooltip), Z_Construct_UDelegateFunction_UXTools_OnShowTooltip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnShowTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnShowTooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnHideTooltip_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Delegate to drive OnHide events. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Delegate to drive OnHide events." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnHideTooltip = { "OnHideTooltip", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, OnHideTooltip), Z_Construct_UDelegateFunction_UXTools_OnHideTooltip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnHideTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnHideTooltip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script what will spawn the tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script what will spawn the tooltip." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType = { "AppearType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, AppearType), Z_Construct_UEnum_UXTools_EUxtTooltipAppearType, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script what will make the tooltip vanish. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script what will make the tooltip vanish." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType = { "VanishType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, VanishType), Z_Construct_UEnum_UXTools_EUxtTooltipVanishType, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script whether the tooltip remains indefinitely or if it uses the Lifetime parameter to timeout. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script whether the tooltip remains indefinitely or if it uses the Lifetime parameter to timeout." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType = { "RemainType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, RemainType), Z_Construct_UEnum_UXTools_EUxtTooltipRemainType, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearDelay_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script a delay before spawning the tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script a delay before spawning the tooltip." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearDelay = { "AppearDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, AppearDelay), METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishDelay_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script a delay before the tooltip vanishes. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script a delay before the tooltip vanishes." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishDelay = { "VanishDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, VanishDelay), METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script how long the tooltip will be spawned for. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script how long the tooltip will be spawned for." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Lifetime), METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script what widget class to use on this tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script what widget class to use on this tooltip." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_TooltipText_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Parameter to script what text to use when no widget class has been set. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Parameter to script what text to use when no widget class has been set." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_TooltipText = { "TooltipText", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, TooltipText), METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_TooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_TooltipText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Pivot_MetaData[] = {
		{ "AllowedClasses", "SceneComponent" },
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** An offset to specify where the tooltip will be spawned. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "An offset to specify where the tooltip will be spawned." },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Pivot), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Overrides the auto anchor on the spawned tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Overrides the auto anchor on the spawned tooltip." },
	};
#endif
	void Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring_SetBit(void* Obj)
	{
		((UUxtTooltipSpawnerComponent*)Obj)->bIsAutoAnchoring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring = { "bIsAutoAnchoring", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtTooltipSpawnerComponent), &Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetScale_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Scales the widget. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Scales the widget." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetScale = { "WidgetScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, WidgetScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Uxt Tooltip Spawner - Experimental" },
		{ "Comment", "/** Margin adds a small margin around the text. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Margin adds a small margin around the text." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, Margin), METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_SpawnedTooltip_MetaData[] = {
		{ "Comment", "/** Runtime variables */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipSpawnerComponent.h" },
		{ "ToolTip", "Runtime variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_SpawnedTooltip = { "SpawnedTooltip", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTooltipSpawnerComponent, SpawnedTooltip), Z_Construct_UClass_AUxtTooltipActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_SpawnedTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_SpawnedTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnShowTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_OnHideTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_RemainType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_AppearDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_VanishDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_TooltipText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_bIsAutoAnchoring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_WidgetScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::NewProp_SpawnedTooltip,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtGrabTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtGrabTarget), false },
			{ Z_Construct_UClass_UUxtGrabHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtGrabHandler), false },
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtFarTarget), false },
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtFarHandler), false },
			{ Z_Construct_UClass_UUxtPokeTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtPokeTarget), false },
			{ Z_Construct_UClass_UUxtPokeHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTooltipSpawnerComponent, IUxtPokeHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTooltipSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::ClassParams = {
		&UUxtTooltipSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTooltipSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtTooltipSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtTooltipSpawnerComponent, 1137945081);
	template<> UXTOOLS_API UClass* StaticClass<UUxtTooltipSpawnerComponent>()
	{
		return UUxtTooltipSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtTooltipSpawnerComponent(Z_Construct_UClass_UUxtTooltipSpawnerComponent, &UUxtTooltipSpawnerComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtTooltipSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTooltipSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
