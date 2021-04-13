// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInputSimulation/Public/UxtInputSimulationLocalPlayerSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInputSimulationLocalPlayerSubsystem() {}
// Cross Module References
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_NoRegister();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInputSimulation();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtInputSimulationLocalPlayerSubsystem::execGetSimulationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUxtInputSimulationState**)Z_Param__Result=P_THIS->GetSimulationState();
		P_NATIVE_END;
	}
	void UUxtInputSimulationLocalPlayerSubsystem::StaticRegisterNativesUUxtInputSimulationLocalPlayerSubsystem()
	{
		UClass* Class = UUxtInputSimulationLocalPlayerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSimulationState", &UUxtInputSimulationLocalPlayerSubsystem::execGetSimulationState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics
	{
		struct UxtInputSimulationLocalPlayerSubsystem_eventGetSimulationState_Parms
		{
			UUxtInputSimulationState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationLocalPlayerSubsystem_eventGetSimulationState_Parms, ReturnValue), Z_Construct_UClass_UUxtInputSimulationState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Input Simulation|Local Player" },
		{ "Comment", "/** Get the persistent simulation state */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationLocalPlayerSubsystem.h" },
		{ "ToolTip", "Get the persistent simulation state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem, nullptr, "GetSimulationState", nullptr, nullptr, sizeof(UxtInputSimulationLocalPlayerSubsystem_eventGetSimulationState_Parms), Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_NoRegister()
	{
		return UUxtInputSimulationLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulationState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtInputSimulationLocalPlayerSubsystem_GetSimulationState, "GetSimulationState" }, // 1030358564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/** Subsystem that creates an actor for simulation when a game is started. */" },
		{ "IncludePath", "UxtInputSimulationLocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationLocalPlayerSubsystem.h" },
		{ "ToolTip", "Subsystem that creates an actor for simulation when a game is started." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::NewProp_SimulationState_MetaData[] = {
		{ "BlueprintGetter", "GetSimulationState" },
		{ "Category", "Uxt Input Simulation|Local Player" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationLocalPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::NewProp_SimulationState = { "SimulationState", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtInputSimulationLocalPlayerSubsystem, SimulationState), Z_Construct_UClass_UUxtInputSimulationState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::NewProp_SimulationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::NewProp_SimulationState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::NewProp_SimulationState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInputSimulationLocalPlayerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::ClassParams = {
		&UUxtInputSimulationLocalPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtInputSimulationLocalPlayerSubsystem, 1239932332);
	template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<UUxtInputSimulationLocalPlayerSubsystem>()
	{
		return UUxtInputSimulationLocalPlayerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtInputSimulationLocalPlayerSubsystem(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem, &UUxtInputSimulationLocalPlayerSubsystem::StaticClass, TEXT("/Script/UXToolsInputSimulation"), TEXT("UUxtInputSimulationLocalPlayerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInputSimulationLocalPlayerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
