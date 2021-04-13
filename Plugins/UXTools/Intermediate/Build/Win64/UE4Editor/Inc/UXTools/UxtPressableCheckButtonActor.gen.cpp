// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableCheckButtonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableCheckButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableCheckButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableCheckButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush();
// End Cross Module References
	DEFINE_FUNCTION(AUxtPressableCheckButtonActor::execSetCheckedIconBrush)
	{
		P_GET_STRUCT_REF(FUxtIconBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckedIconBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableCheckButtonActor::execGetCheckedIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtIconBrush*)Z_Param__Result=P_THIS->GetCheckedIconBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableCheckButtonActor::execSetUncheckedIconBrush)
	{
		P_GET_STRUCT_REF(FUxtIconBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUncheckedIconBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableCheckButtonActor::execGetUncheckedIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtIconBrush*)Z_Param__Result=P_THIS->GetUncheckedIconBrush();
		P_NATIVE_END;
	}
	void AUxtPressableCheckButtonActor::StaticRegisterNativesAUxtPressableCheckButtonActor()
	{
		UClass* Class = AUxtPressableCheckButtonActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckedIconBrush", &AUxtPressableCheckButtonActor::execGetCheckedIconBrush },
			{ "GetUncheckedIconBrush", &AUxtPressableCheckButtonActor::execGetUncheckedIconBrush },
			{ "SetCheckedIconBrush", &AUxtPressableCheckButtonActor::execSetCheckedIconBrush },
			{ "SetUncheckedIconBrush", &AUxtPressableCheckButtonActor::execSetUncheckedIconBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics
	{
		struct UxtPressableCheckButtonActor_eventGetCheckedIconBrush_Parms
		{
			FUxtIconBrush ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableCheckButtonActor_eventGetCheckedIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's checked icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Accessor to the button's checked icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableCheckButtonActor, nullptr, "GetCheckedIconBrush", nullptr, nullptr, sizeof(UxtPressableCheckButtonActor_eventGetCheckedIconBrush_Parms), Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics
	{
		struct UxtPressableCheckButtonActor_eventGetUncheckedIconBrush_Parms
		{
			FUxtIconBrush ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableCheckButtonActor_eventGetUncheckedIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's unchecked icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Accessor to the button's unchecked icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableCheckButtonActor, nullptr, "GetUncheckedIconBrush", nullptr, nullptr, sizeof(UxtPressableCheckButtonActor_eventGetUncheckedIconBrush_Parms), Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics
	{
		struct UxtPressableCheckButtonActor_eventSetCheckedIconBrush_Parms
		{
			FUxtIconBrush Brush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableCheckButtonActor_eventSetCheckedIconBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new checked icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Applies a new checked icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableCheckButtonActor, nullptr, "SetCheckedIconBrush", nullptr, nullptr, sizeof(UxtPressableCheckButtonActor_eventSetCheckedIconBrush_Parms), Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics
	{
		struct UxtPressableCheckButtonActor_eventSetUncheckedIconBrush_Parms
		{
			FUxtIconBrush Brush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableCheckButtonActor_eventSetUncheckedIconBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new unchecked icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Applies a new unchecked icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableCheckButtonActor, nullptr, "SetUncheckedIconBrush", nullptr, nullptr, sizeof(UxtPressableCheckButtonActor_eventSetUncheckedIconBrush_Parms), Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtPressableCheckButtonActor_NoRegister()
	{
		return AUxtPressableCheckButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedIconBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableToggleButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetCheckedIconBrush, "GetCheckedIconBrush" }, // 1001089891
		{ &Z_Construct_UFunction_AUxtPressableCheckButtonActor_GetUncheckedIconBrush, "GetUncheckedIconBrush" }, // 1634826329
		{ &Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetCheckedIconBrush, "SetCheckedIconBrush" }, // 1255509016
		{ &Z_Construct_UFunction_AUxtPressableCheckButtonActor_SetUncheckedIconBrush, "SetUncheckedIconBrush" }, // 1663478481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a check icon.\n */" },
		{ "IncludePath", "Controls/UxtPressableCheckButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a check icon." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_UncheckedIconBrush_MetaData[] = {
		{ "BlueprintGetter", "GetUncheckedIconBrush" },
		{ "BlueprintSetter", "SetUncheckedIconBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's icon when unchecked. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's icon when unchecked." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_UncheckedIconBrush = { "UncheckedIconBrush", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableCheckButtonActor, UncheckedIconBrush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_UncheckedIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_UncheckedIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_CheckedIconBrush_MetaData[] = {
		{ "BlueprintGetter", "GetCheckedIconBrush" },
		{ "BlueprintSetter", "SetCheckedIconBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's icon when checked. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableCheckButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's icon when checked." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_CheckedIconBrush = { "CheckedIconBrush", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableCheckButtonActor, CheckedIconBrush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_CheckedIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_CheckedIconBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_UncheckedIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::NewProp_CheckedIconBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableCheckButtonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::ClassParams = {
		&AUxtPressableCheckButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableCheckButtonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtPressableCheckButtonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtPressableCheckButtonActor, 881793611);
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableCheckButtonActor>()
	{
		return AUxtPressableCheckButtonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtPressableCheckButtonActor(Z_Construct_UClass_AUxtPressableCheckButtonActor, &AUxtPressableCheckButtonActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtPressableCheckButtonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableCheckButtonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
