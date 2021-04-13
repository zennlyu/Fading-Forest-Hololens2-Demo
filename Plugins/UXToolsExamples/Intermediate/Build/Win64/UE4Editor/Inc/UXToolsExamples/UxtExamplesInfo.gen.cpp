// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsExamples/Private/UxtExamplesInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtExamplesInfo() {}
// Cross Module References
	UXTOOLSEXAMPLES_API UClass* Z_Construct_UClass_UUxtExamplesInfo_NoRegister();
	UXTOOLSEXAMPLES_API UClass* Z_Construct_UClass_UUxtExamplesInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UXToolsExamples();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtExamplesInfo::execCommitSHA)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UUxtExamplesInfo::CommitSHA(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	void UUxtExamplesInfo::StaticRegisterNativesUUxtExamplesInfo()
	{
		UClass* Class = UUxtExamplesInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CommitSHA", &UUxtExamplesInfo::execCommitSHA },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics
	{
		struct UxtExamplesInfo_eventCommitSHA_Parms
		{
			const UObject* WorldContext;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtExamplesInfo_eventCommitSHA_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_WorldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_WorldContext_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtExamplesInfo_eventCommitSHA_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Examples Info" },
		{ "Comment", "// Git Commit information is only set in internal test builds.\n// In all other scenarios this function returns an empty string.\n" },
		{ "ModuleRelativePath", "Private/UxtExamplesInfo.h" },
		{ "ToolTip", "Git Commit information is only set in internal test builds.\nIn all other scenarios this function returns an empty string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtExamplesInfo, nullptr, "CommitSHA", nullptr, nullptr, sizeof(UxtExamplesInfo_eventCommitSHA_Parms), Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtExamplesInfo_NoRegister()
	{
		return UUxtExamplesInfo::StaticClass();
	}
	struct Z_Construct_UClass_UUxtExamplesInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtExamplesInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsExamples,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtExamplesInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtExamplesInfo_CommitSHA, "CommitSHA" }, // 1221452605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtExamplesInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXToolsExamples" },
		{ "Comment", "/**\n * Internal: provide build metadata in packaged game at runtime.\n */" },
		{ "IncludePath", "UxtExamplesInfo.h" },
		{ "ModuleRelativePath", "Private/UxtExamplesInfo.h" },
		{ "ToolTip", "Internal: provide build metadata in packaged game at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtExamplesInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtExamplesInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtExamplesInfo_Statics::ClassParams = {
		&UUxtExamplesInfo::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtExamplesInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtExamplesInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtExamplesInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtExamplesInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtExamplesInfo, 3750387729);
	template<> UXTOOLSEXAMPLES_API UClass* StaticClass<UUxtExamplesInfo>()
	{
		return UUxtExamplesInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtExamplesInfo(Z_Construct_UClass_UUxtExamplesInfo, &UUxtExamplesInfo::StaticClass, TEXT("/Script/UXToolsExamples"), TEXT("UUxtExamplesInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtExamplesInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
