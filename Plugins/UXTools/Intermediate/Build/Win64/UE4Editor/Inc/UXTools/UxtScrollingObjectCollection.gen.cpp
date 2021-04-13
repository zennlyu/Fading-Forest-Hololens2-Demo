// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtScrollingObjectCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtScrollingObjectCollection() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtPaginateResult();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FScrollingCollectionProperties();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EInteractionTypeBits();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtScrollDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtScrollingObjectCollection_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtScrollingObjectCollection();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBaseObjectCollection();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtScrollingObjectCollectionOnPaginationEnd_Parms
		{
			EUxtPaginateResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtScrollingObjectCollectionOnPaginationEnd_Parms, Result), Z_Construct_UEnum_UXTools_EUxtPaginateResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtScrollingObjectCollectionOnPaginationEnd_Parms), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics
	{
		struct FScrollingCollectionProperties
		{
			FVector Center;
			float Width;
			float Height;
		};

		struct _Script_UXTools_eventUxtScrollingObjectCollectionUpdated_Parms
		{
			FScrollingCollectionProperties Properties;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::NewProp_Properties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtScrollingObjectCollectionUpdated_Parms, Properties), Z_Construct_UScriptStruct_FScrollingCollectionProperties, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::NewProp_Properties,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtScrollingObjectCollectionUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtScrollingObjectCollectionUpdated_Parms), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EInteractionTypeBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EInteractionTypeBits, Z_Construct_UPackage__Script_UXTools(), TEXT("EInteractionTypeBits"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EInteractionTypeBits>()
	{
		return EInteractionTypeBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionTypeBits(EInteractionTypeBits_StaticEnum, TEXT("/Script/UXTools"), TEXT("EInteractionTypeBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EInteractionTypeBits_Hash() { return 265282428U; }
	UEnum* Z_Construct_UEnum_UXTools_EInteractionTypeBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionTypeBits"), 0, Get_Z_Construct_UEnum_UXTools_EInteractionTypeBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionTypeBits::NearInteraction", (int64)EInteractionTypeBits::NearInteraction },
				{ "EInteractionTypeBits::FarInteraction", (int64)EInteractionTypeBits::FarInteraction },
				{ "EInteractionTypeBits::TouchInteraction", (int64)EInteractionTypeBits::TouchInteraction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "Comment", "// clang-format on\n" },
				{ "FarInteraction.Name", "EInteractionTypeBits::FarInteraction" },
				{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
				{ "NearInteraction.Name", "EInteractionTypeBits::NearInteraction" },
				{ "ToolTip", "clang-format on" },
				{ "TouchInteraction.Name", "EInteractionTypeBits::TouchInteraction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EInteractionTypeBits",
				"EInteractionTypeBits",
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
	static UEnum* EUxtPaginateResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtPaginateResult, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtPaginateResult"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtPaginateResult>()
	{
		return EUxtPaginateResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtPaginateResult(EUxtPaginateResult_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtPaginateResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtPaginateResult_Hash() { return 4220184150U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtPaginateResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtPaginateResult"), 0, Get_Z_Construct_UEnum_UXTools_EUxtPaginateResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtPaginateResult::Success", (int64)EUxtPaginateResult::Success },
				{ "EUxtPaginateResult::Failed_ConcurrentOperation", (int64)EUxtPaginateResult::Failed_ConcurrentOperation },
				{ "EUxtPaginateResult::Failed_ConcurrentInteraction", (int64)EUxtPaginateResult::Failed_ConcurrentInteraction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed_ConcurrentInteraction.DisplayName", "Failed, Concurrent User Interaction" },
				{ "Failed_ConcurrentInteraction.Name", "EUxtPaginateResult::Failed_ConcurrentInteraction" },
				{ "Failed_ConcurrentInteraction.Tooltip", "The operation was aborted because there is another interaction with the object." },
				{ "Failed_ConcurrentOperation.DisplayName", "Failed, Concurrent Operation" },
				{ "Failed_ConcurrentOperation.Name", "EUxtPaginateResult::Failed_ConcurrentOperation" },
				{ "Failed_ConcurrentOperation.Tooltip", "The operation was aborted due to another move request that has not yet finished." },
				{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EUxtPaginateResult::Success" },
				{ "Success.Tooltip", "The operation completed successfuly." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtPaginateResult",
				"EUxtPaginateResult",
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
	static UEnum* EUxtScrollDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtScrollDirection, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtScrollDirection"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtScrollDirection>()
	{
		return EUxtScrollDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtScrollDirection(EUxtScrollDirection_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtScrollDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtScrollDirection_Hash() { return 42045313U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtScrollDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtScrollDirection"), 0, Get_Z_Construct_UEnum_UXTools_EUxtScrollDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtScrollDirection::UpAndDown", (int64)EUxtScrollDirection::UpAndDown },
				{ "EUxtScrollDirection::LeftAndRight", (int64)EUxtScrollDirection::LeftAndRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\n// Enums\n" },
				{ "LeftAndRight.DisplayName", "Left And Right" },
				{ "LeftAndRight.Name", "EUxtScrollDirection::LeftAndRight" },
				{ "LeftAndRight.Tooltip", "The menu will scroll horizontally. In this case Tiers will specify the number of columns, and Viewable area will specify the number of rows that are viewable. The collection will populate by filling rows in order." },
				{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
				{ "ToolTip", "Enums" },
				{ "UpAndDown.DisplayName", "Up And Down" },
				{ "UpAndDown.Name", "EUxtScrollDirection::UpAndDown" },
				{ "UpAndDown.Tooltip", "The menu will scroll vertically. In this case Tiers will specify the number of rows, and Viewable area will specify the number of columns that are viewable. The collection will populate by filling columns in order." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtScrollDirection",
				"EUxtScrollDirection",
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
	struct Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics
	{
		struct FScrollingCollectionProperties
		{
			FVector Center;
			float Width;
			float Height;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Types\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Types" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "UxtScrollingCollectionProperties - Experimental" },
		{ "Comment", "/** The Center of the viewable area, relative to the Scrolling Collection Component. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "The Center of the viewable area, relative to the Scrolling Collection Component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScrollingCollectionProperties, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "UxtScrollingCollectionProperties - Experimental" },
		{ "Comment", "/** The width of the viewable area */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "The width of the viewable area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScrollingCollectionProperties, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "UxtScrollingCollectionProperties - Experimental" },
		{ "Comment", "/** The height of the viewable area */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "The height of the viewable area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScrollingCollectionProperties, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::NewProp_Height,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		nullptr,
		"ScrollingCollectionProperties",
		sizeof(FScrollingCollectionProperties),
		alignof(FScrollingCollectionProperties),
		Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScrollingCollectionProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScrollingCollectionProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScrollingCollectionProperties"), sizeof(Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::FScrollingCollectionProperties), Get_Z_Construct_UScriptStruct_FScrollingCollectionProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScrollingCollectionProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScrollingCollectionProperties_Hash() { return 1017025397U; }
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execCheckScrollOrClickFarPointer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckScrollOrClickFarPointer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execCheckScrollOrClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckScrollOrClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execSetBackPlate)
	{
		P_GET_OBJECT(UUxtBackPlateComponent,Z_Param_Plate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackPlate(Z_Param_Plate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execGetScrollDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtScrollDirection*)Z_Param__Result=P_THIS->GetScrollDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execAddActorToCollection)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorToCollection(Z_Param_ActorToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execMoveByItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumItems);
		P_GET_UBOOL(Z_Param_bAnimate);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveByItems(Z_Param_NumItems,Z_Param_bAnimate,FUxtScrollingObjectCollectionOnPaginationEnd(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execPageBy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPages);
		P_GET_UBOOL(Z_Param_bAnimate);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PageBy(Z_Param_NumPages,Z_Param_bAnimate,FUxtScrollingObjectCollectionOnPaginationEnd(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtScrollingObjectCollection::execSetTiers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IncomingTiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTiers(Z_Param_IncomingTiers);
		P_NATIVE_END;
	}
	void UUxtScrollingObjectCollection::StaticRegisterNativesUUxtScrollingObjectCollection()
	{
		UClass* Class = UUxtScrollingObjectCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToCollection", &UUxtScrollingObjectCollection::execAddActorToCollection },
			{ "CheckScrollOrClick", &UUxtScrollingObjectCollection::execCheckScrollOrClick },
			{ "CheckScrollOrClickFarPointer", &UUxtScrollingObjectCollection::execCheckScrollOrClickFarPointer },
			{ "GetScrollDirection", &UUxtScrollingObjectCollection::execGetScrollDirection },
			{ "MoveByItems", &UUxtScrollingObjectCollection::execMoveByItems },
			{ "PageBy", &UUxtScrollingObjectCollection::execPageBy },
			{ "SetBackPlate", &UUxtScrollingObjectCollection::execSetBackPlate },
			{ "SetTiers", &UUxtScrollingObjectCollection::execSetTiers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics
	{
		struct UxtScrollingObjectCollection_eventAddActorToCollection_Parms
		{
			AActor* ActorToAdd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::NewProp_ActorToAdd = { "ActorToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventAddActorToCollection_Parms, ActorToAdd), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::NewProp_ActorToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Adds an actor to the collection at runtime.  */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Adds an actor to the collection at runtime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "AddActorToCollection", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventAddActorToCollection_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Callback to determine if we have passed movement threshold for a scroll or if we should treat the action as a click */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Callback to determine if we have passed movement threshold for a scroll or if we should treat the action as a click" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "CheckScrollOrClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Callback to determine if we have passed movement threshold for a scroll or if we should treat the action as a click - but for far\n\x09 * pointer */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Callback to determine if we have passed movement threshold for a scroll or if we should treat the action as a click - but for far\npointer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "CheckScrollOrClickFarPointer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics
	{
		struct UxtScrollingObjectCollection_eventGetScrollDirection_Parms
		{
			EUxtScrollDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventGetScrollDirection_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtScrollDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Return current scroll direction */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Return current scroll direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "GetScrollDirection", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventGetScrollDirection_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics
	{
		struct UxtScrollingObjectCollection_eventMoveByItems_Parms
		{
			int32 NumItems;
			bool bAnimate;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimate_MetaData[];
#endif
		static void NewProp_bAnimate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_NumItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_NumItems = { "NumItems", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventMoveByItems_Parms, NumItems), METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_NumItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_NumItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate_SetBit(void* Obj)
	{
		((UxtScrollingObjectCollection_eventMoveByItems_Parms*)Obj)->bAnimate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate = { "bAnimate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtScrollingObjectCollection_eventMoveByItems_Parms), &Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventMoveByItems_Parms, Callback), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_NumItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_bAnimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Move the collection up or down (or left or right) in multiples of #ViewableArea. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Move the collection up or down (or left or right) in multiples of #ViewableArea." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "MoveByItems", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventMoveByItems_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics
	{
		struct UxtScrollingObjectCollection_eventPageBy_Parms
		{
			int32 NumPages;
			bool bAnimate;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPages_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimate_MetaData[];
#endif
		static void NewProp_bAnimate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_NumPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_NumPages = { "NumPages", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventPageBy_Parms, NumPages), METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_NumPages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_NumPages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate_SetBit(void* Obj)
	{
		((UxtScrollingObjectCollection_eventPageBy_Parms*)Obj)->bAnimate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate = { "bAnimate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtScrollingObjectCollection_eventPageBy_Parms), &Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventPageBy_Parms, Callback), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_NumPages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_bAnimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Move the collection up or down (or left or right) in multiples of #ViewableArea. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Move the collection up or down (or left or right) in multiples of #ViewableArea." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "PageBy", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventPageBy_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics
	{
		struct UxtScrollingObjectCollection_eventSetBackPlate_Parms
		{
			UUxtBackPlateComponent* Plate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Plate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::NewProp_Plate_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::NewProp_Plate = { "Plate", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventSetBackPlate_Parms, Plate), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::NewProp_Plate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::NewProp_Plate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::NewProp_Plate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Set the backplate for this component. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Set the backplate for this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "SetBackPlate", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventSetBackPlate_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics
	{
		struct UxtScrollingObjectCollection_eventSetTiers_Parms
		{
			int32 IncomingTiers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IncomingTiers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::NewProp_IncomingTiers = { "IncomingTiers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtScrollingObjectCollection_eventSetTiers_Parms, IncomingTiers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::NewProp_IncomingTiers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Sets the number of columns or rows in respect to ViewableArea and ScrollDirection.*/" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Sets the number of columns or rows in respect to ViewableArea and ScrollDirection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtScrollingObjectCollection, nullptr, "SetTiers", nullptr, nullptr, sizeof(UxtScrollingObjectCollection_eventSetTiers_Parms), Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtScrollingObjectCollection_NoRegister()
	{
		return UUxtScrollingObjectCollection::StaticClass();
	}
	struct Z_Construct_UClass_UUxtScrollingObjectCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanScroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CanScroll;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewableArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewableArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReleaseAtScrollBoundary_MetaData[];
#endif
		static void NewProp_bReleaseAtScrollBoundary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReleaseAtScrollBoundary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSmoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceSpringFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceSpringFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaginationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaginationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapToStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickMovementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClickMovementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollectionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollectionUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_PokeTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_FarTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtBaseObjectCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_AddActorToCollection, "AddActorToCollection" }, // 1699233204
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClick, "CheckScrollOrClick" }, // 1523689765
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_CheckScrollOrClickFarPointer, "CheckScrollOrClickFarPointer" }, // 3103929801
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_GetScrollDirection, "GetScrollDirection" }, // 2644979943
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_MoveByItems, "MoveByItems" }, // 2251453001
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_PageBy, "PageBy" }, // 1808260039
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_SetBackPlate, "SetBackPlate" }, // 1687612544
		{ &Z_Construct_UFunction_UUxtScrollingObjectCollection_SetTiers, "SetTiers" }, // 2433331176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools - Experimental" },
		{ "Comment", "/**\n * Component that adds a scrollable object menu to the actor to which it is attached\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtScrollingObjectCollection.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Component that adds a scrollable object menu to the actor to which it is attached" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CanScroll_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EInteractionTypeBits" },
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Enables/disables interaction for specific interaction types. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Enables/disables interaction for specific interaction types." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CanScroll = { "CanScroll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, CanScroll), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CanScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CanScroll_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** The direction in which the collection will scroll. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "The direction in which the collection will scroll." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection = { "ScrollDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, ScrollDirection), Z_Construct_UEnum_UXTools_EUxtScrollDirection, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellWidth_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Width of cell per object. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Width of cell per object." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, CellWidth), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellHeight_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Height of cell per object. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Height of cell per object." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, CellHeight), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ViewableArea_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Number of lines visible in scroller. Orthogonal to #Tiers */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Number of lines visible in scroller. Orthogonal to #Tiers" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ViewableArea = { "ViewableArea", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, ViewableArea), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ViewableArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ViewableArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Collision profile used by the box collider */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Collision profile used by the box collider" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Determines whether a near scroll gesture is released when the engaged fingertip is dragged outside of the viewable area. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Determines whether a near scroll gesture is released when the engaged fingertip is dragged outside of the viewable area." },
	};
#endif
	void Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary_SetBit(void* Obj)
	{
		((UUxtScrollingObjectCollection*)Obj)->bReleaseAtScrollBoundary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary = { "bReleaseAtScrollBoundary", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtScrollingObjectCollection), &Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollSmoothing_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Smoothing applied to direct interaction when scrolling.\n\x09 * Note: This is currently frame rate dependent, WIP to adjust for frame rate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Smoothing applied to direct interaction when scrolling.\nNote: This is currently frame rate dependent, WIP to adjust for frame rate." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollSmoothing = { "ScrollSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, ScrollSmoothing), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_VelocityDamping_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Velocity damping factor.\n\x09 * For no velocity to be retained set this value to 1.0.\n\x09 * Note: This is currently applied per frame and is frame rate dependent, WIP to adjust for frame rate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Velocity damping factor.\nFor no velocity to be retained set this value to 1.0.\nNote: This is currently applied per frame and is frame rate dependent, WIP to adjust for frame rate." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_VelocityDamping = { "VelocityDamping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, VelocityDamping), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_VelocityDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_VelocityDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BounceSpringFactor_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Scale the bounce return velocity. The larger this value is the quicker the collection will return. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Scale the bounce return velocity. The larger this value is the quicker the collection will return." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BounceSpringFactor = { "BounceSpringFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, BounceSpringFactor), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BounceSpringFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BounceSpringFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PaginationCurve_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Animation curve for pagination. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Animation curve for pagination." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PaginationCurve = { "PaginationCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, PaginationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PaginationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PaginationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_SnapToStrength_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Strength of the snap to effect.\n\x09 *\x09""A value of 1.0 will result in instant snap to the closest item.\n\x09 *\x09""A value of 0.0 will disable the snap effect.\n\x09 *\x09Note also that VelocityDamping will affect the feel of the snap. When damping is low or zero\n\x09 *\x09the snap will be more prominent and the boundary between adjacent cells will feel sharper. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Strength of the snap to effect.\n    A value of 1.0 will result in instant snap to the closest item.\n    A value of 0.0 will disable the snap effect.\n    Note also that VelocityDamping will affect the feel of the snap. When damping is low or zero\n    the snap will be more prominent and the boundary between adjacent cells will feel sharper." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_SnapToStrength = { "SnapToStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, SnapToStrength), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_SnapToStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_SnapToStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ClickMovementThreshold_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** If the interaction ends before moving this far it will be considered a click. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "If the interaction ends before moving this far it will be considered a click." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ClickMovementThreshold = { "ClickMovementThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, ClickMovementThreshold), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ClickMovementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ClickMovementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_OnCollectionUpdated_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Event raised whenever the collection is updated. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Event raised whenever the collection is updated." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_OnCollectionUpdated = { "OnCollectionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, OnCollectionUpdated), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_OnCollectionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_OnCollectionUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PokeTarget_MetaData[] = {
		{ "Comment", "/** Current Poke Target we are passing messages to */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Current Poke Target we are passing messages to" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PokeTarget = { "PokeTarget", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, PokeTarget), Z_Construct_UClass_UUxtPokeTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PokeTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PokeTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_FarTarget_MetaData[] = {
		{ "Comment", "/** Current Far Target we are passing messages to */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Current Far Target we are passing messages to" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_FarTarget = { "FarTarget", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, FarTarget), Z_Construct_UClass_UUxtFarTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_FarTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_FarTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_Tiers_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Number of columns or rows in respect to ViewableArea and ScrollDirection. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Number of columns or rows in respect to ViewableArea and ScrollDirection." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_Tiers = { "Tiers", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, Tiers), METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_Tiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_Tiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BackPlate_MetaData[] = {
		{ "Category", "Uxt Scrolling Object Collection - Experimental" },
		{ "Comment", "/** Blue BackPlate  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtScrollingObjectCollection.h" },
		{ "ToolTip", "Blue BackPlate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BackPlate = { "BackPlate", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtScrollingObjectCollection, BackPlate), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BackPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BackPlate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CanScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CellHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ViewableArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_CollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_bReleaseAtScrollBoundary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ScrollSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_VelocityDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BounceSpringFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PaginationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_SnapToStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_ClickMovementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_OnCollectionUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_PokeTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_FarTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_Tiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::NewProp_BackPlate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtPokeTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtScrollingObjectCollection, IUxtPokeTarget), false },
			{ Z_Construct_UClass_UUxtPokeHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtScrollingObjectCollection, IUxtPokeHandler), false },
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtScrollingObjectCollection, IUxtFarTarget), false },
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtScrollingObjectCollection, IUxtFarHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtScrollingObjectCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::ClassParams = {
		&UUxtScrollingObjectCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtScrollingObjectCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtScrollingObjectCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtScrollingObjectCollection, 2116988893);
	template<> UXTOOLS_API UClass* StaticClass<UUxtScrollingObjectCollection>()
	{
		return UUxtScrollingObjectCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtScrollingObjectCollection(Z_Construct_UClass_UUxtScrollingObjectCollection, &UUxtScrollingObjectCollection::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtScrollingObjectCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtScrollingObjectCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
