// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInputSimulation/Public/UxtInputSimulationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInputSimulationActor() {}
// Cross Module References
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_AUxtInputSimulationActor_NoRegister();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_AUxtInputSimulationActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXToolsInputSimulation();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtInputSimulationActor::execGetRightHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetRightHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtInputSimulationActor::execGetLeftHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetLeftHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtInputSimulationActor::execGetHeadMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUxtInputSimulationHeadMovementComponent**)Z_Param__Result=P_THIS->GetHeadMovement();
		P_NATIVE_END;
	}
	void AUxtInputSimulationActor::StaticRegisterNativesAUxtInputSimulationActor()
	{
		UClass* Class = AUxtInputSimulationActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeadMovement", &AUxtInputSimulationActor::execGetHeadMovement },
			{ "GetLeftHand", &AUxtInputSimulationActor::execGetLeftHand },
			{ "GetRightHand", &AUxtInputSimulationActor::execGetRightHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics
	{
		struct UxtInputSimulationActor_eventGetHeadMovement_Parms
		{
			UUxtInputSimulationHeadMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationActor_eventGetHeadMovement_Parms, ReturnValue), Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Input Simulation" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtInputSimulationActor, nullptr, "GetHeadMovement", nullptr, nullptr, sizeof(UxtInputSimulationActor_eventGetHeadMovement_Parms), Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics
	{
		struct UxtInputSimulationActor_eventGetLeftHand_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationActor_eventGetLeftHand_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Input Simulation" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtInputSimulationActor, nullptr, "GetLeftHand", nullptr, nullptr, sizeof(UxtInputSimulationActor_eventGetLeftHand_Parms), Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics
	{
		struct UxtInputSimulationActor_eventGetRightHand_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationActor_eventGetRightHand_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Input Simulation" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtInputSimulationActor, nullptr, "GetRightHand", nullptr, nullptr, sizeof(UxtInputSimulationActor_eventGetRightHand_Parms), Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtInputSimulationActor_NoRegister()
	{
		return AUxtInputSimulationActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtInputSimulationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultInputBindings_MetaData[];
#endif
		static void NewProp_bAddDefaultInputBindings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultInputBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtInputSimulationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtInputSimulationActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtInputSimulationActor_GetHeadMovement, "GetHeadMovement" }, // 2990697620
		{ &Z_Construct_UFunction_AUxtInputSimulationActor_GetLeftHand, "GetLeftHand" }, // 2664140057
		{ &Z_Construct_UFunction_AUxtInputSimulationActor_GetRightHand, "GetRightHand" }, // 2830869197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtInputSimulationActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/** Actor that produces head pose and hand animations for the input simulation subsystem. */" },
		{ "IncludePath", "UxtInputSimulationActor.h" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
		{ "ToolTip", "Actor that produces head pose and hand animations for the input simulation subsystem." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData[] = {
		{ "Category", "Uxt Input Simulation" },
		{ "Comment", "/** If true, adds default input bindings for input simulation. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
		{ "ToolTip", "If true, adds default input bindings for input simulation." },
	};
#endif
	void Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings_SetBit(void* Obj)
	{
		((AUxtInputSimulationActor*)Obj)->bAddDefaultInputBindings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings = { "bAddDefaultInputBindings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AUxtInputSimulationActor), &Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_HeadMovement_MetaData[] = {
		{ "BlueprintGetter", "GetHeadMovement" },
		{ "Category", "Uxt Input Simulation" },
		{ "Comment", "/** Movement component for interpreting user input as head movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
		{ "ToolTip", "Movement component for interpreting user input as head movement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_HeadMovement = { "HeadMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtInputSimulationActor, HeadMovement), Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_HeadMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_HeadMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_LeftHand_MetaData[] = {
		{ "BlueprintGetter", "GetLeftHand" },
		{ "Category", "Uxt Input Simulation" },
		{ "Comment", "/** Skeletal mesh component for the left hand. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
		{ "ToolTip", "Skeletal mesh component for the left hand." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtInputSimulationActor, LeftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_RightHand_MetaData[] = {
		{ "BlueprintGetter", "GetRightHand" },
		{ "Category", "Uxt Input Simulation" },
		{ "Comment", "/** Skeletal mesh component for the right hand. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationActor.h" },
		{ "ToolTip", "Skeletal mesh component for the right hand." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtInputSimulationActor, RightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_RightHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtInputSimulationActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_bAddDefaultInputBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_HeadMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtInputSimulationActor_Statics::NewProp_RightHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtInputSimulationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtInputSimulationActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtInputSimulationActor_Statics::ClassParams = {
		&AUxtInputSimulationActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtInputSimulationActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtInputSimulationActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtInputSimulationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtInputSimulationActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtInputSimulationActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtInputSimulationActor, 3109065807);
	template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<AUxtInputSimulationActor>()
	{
		return AUxtInputSimulationActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtInputSimulationActor(Z_Construct_UClass_AUxtInputSimulationActor, &AUxtInputSimulationActor::StaticClass, TEXT("/Script/UXToolsInputSimulation"), TEXT("AUxtInputSimulationActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtInputSimulationActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
