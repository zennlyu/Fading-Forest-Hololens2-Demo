// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Input/UxtHandInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtHandInteractionActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtHandInteractionActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtHandInteractionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetHandAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHandAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetHandVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHandVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetRayLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRayLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayLength(Z_Param_NewRayLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetRayLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetRayStartOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRayStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayStartOffset(Z_Param_NewRayStartOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetRayStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetPokeRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPokeRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPokeRadius(Z_Param_NewPokeRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetPokeRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPokeRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetTraceChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceChannel(ECollisionChannel(Z_Param_NewTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetTraceChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetTraceChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetHand)
	{
		P_GET_ENUM(EControllerHand,Z_Param_NewHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHand(EControllerHand(Z_Param_NewHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetHand();
		P_NATIVE_END;
	}
	void AUxtHandInteractionActor::StaticRegisterNativesAUxtHandInteractionActor()
	{
		UClass* Class = AUxtHandInteractionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHand", &AUxtHandInteractionActor::execGetHand },
			{ "GetHandAngularVelocity", &AUxtHandInteractionActor::execGetHandAngularVelocity },
			{ "GetHandVelocity", &AUxtHandInteractionActor::execGetHandVelocity },
			{ "GetPokeRadius", &AUxtHandInteractionActor::execGetPokeRadius },
			{ "GetRayLength", &AUxtHandInteractionActor::execGetRayLength },
			{ "GetRayStartOffset", &AUxtHandInteractionActor::execGetRayStartOffset },
			{ "GetTraceChannel", &AUxtHandInteractionActor::execGetTraceChannel },
			{ "SetHand", &AUxtHandInteractionActor::execSetHand },
			{ "SetPokeRadius", &AUxtHandInteractionActor::execSetPokeRadius },
			{ "SetRayLength", &AUxtHandInteractionActor::execSetRayLength },
			{ "SetRayStartOffset", &AUxtHandInteractionActor::execSetRayStartOffset },
			{ "SetTraceChannel", &AUxtHandInteractionActor::execSetTraceChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics
	{
		struct UxtHandInteractionActor_eventGetHand_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetHand_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetHand", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetHand_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics
	{
		struct UxtHandInteractionActor_eventGetHandAngularVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetHandAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetHandAngularVelocity", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetHandAngularVelocity_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics
	{
		struct UxtHandInteractionActor_eventGetHandVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetHandVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetHandVelocity", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetHandVelocity_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics
	{
		struct UxtHandInteractionActor_eventGetPokeRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetPokeRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetPokeRadius", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetPokeRadius_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics
	{
		struct UxtHandInteractionActor_eventGetRayLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetRayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetRayLength", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetRayLength_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics
	{
		struct UxtHandInteractionActor_eventGetRayStartOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetRayStartOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetRayStartOffset", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetRayStartOffset_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics
	{
		struct UxtHandInteractionActor_eventGetTraceChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetTraceChannel", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetTraceChannel_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics
	{
		struct UxtHandInteractionActor_eventSetHand_Parms
		{
			EControllerHand NewHand;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand = { "NewHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetHand_Parms, NewHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetHand", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetHand_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics
	{
		struct UxtHandInteractionActor_eventSetPokeRadius_Parms
		{
			float NewPokeRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPokeRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::NewProp_NewPokeRadius = { "NewPokeRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetPokeRadius_Parms, NewPokeRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::NewProp_NewPokeRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetPokeRadius", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetPokeRadius_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics
	{
		struct UxtHandInteractionActor_eventSetRayLength_Parms
		{
			float NewRayLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRayLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::NewProp_NewRayLength = { "NewRayLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetRayLength_Parms, NewRayLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::NewProp_NewRayLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetRayLength", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetRayLength_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics
	{
		struct UxtHandInteractionActor_eventSetRayStartOffset_Parms
		{
			float NewRayStartOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRayStartOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::NewProp_NewRayStartOffset = { "NewRayStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetRayStartOffset_Parms, NewRayStartOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::NewProp_NewRayStartOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetRayStartOffset", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetRayStartOffset_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics
	{
		struct UxtHandInteractionActor_eventSetTraceChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> NewTraceChannel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::NewProp_NewTraceChannel = { "NewTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetTraceChannel_Parms, NewTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::NewProp_NewTraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Hand Interaction" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetTraceChannel", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetTraceChannel_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtHandInteractionActor_NoRegister()
	{
		return AUxtHandInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtHandInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProximityConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProximityConeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProximityConeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProximityConeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProximityConeSideLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProximityConeSideLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProximityConeAngleLerp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProximityConeAngleLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultNearCursor_MetaData[];
#endif
		static void NewProp_bUseDefaultNearCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultNearCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFarCursor_MetaData[];
#endif
		static void NewProp_bUseDefaultFarCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFarCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFarBeam_MetaData[];
#endif
		static void NewProp_bUseDefaultFarBeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFarBeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNearCursorOnGrabTargets_MetaData[];
#endif
		static void NewProp_bShowNearCursorOnGrabTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNearCursorOnGrabTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PokeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NearPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProximityTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProximityTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtHandInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtHandInteractionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetHand, "GetHand" }, // 1265597904
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetHandAngularVelocity, "GetHandAngularVelocity" }, // 3867030060
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetHandVelocity, "GetHandVelocity" }, // 908889304
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius, "GetPokeRadius" }, // 3534144030
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength, "GetRayLength" }, // 383158059
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset, "GetRayStartOffset" }, // 2879137128
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel, "GetTraceChannel" }, // 2500665988
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetHand, "SetHand" }, // 1739748424
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius, "SetPokeRadius" }, // 3004392174
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength, "SetRayLength" }, // 1799830591
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset, "SetRayStartOffset" }, // 961601162
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel, "SetTraceChannel" }, // 3131694572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Actor that drives hand interactions with components that implement the far, grab and poke target interfaces.\n * A hand has two interaction modes:\n * - Near: interactions performed by poking or grabbing targets directly.\n * - Far: interactions performed by pointing at far targets from a distance via a hand ray.\n * The actor transitions between modes depending on whether there is a grab or poke target within the near activation distance.\n */" },
		{ "IncludePath", "Input/UxtHandInteractionActor.h" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor that drives hand interactions with components that implement the far, grab and poke target interfaces.\nA hand has two interaction modes:\n- Near: interactions performed by poking or grabbing targets directly.\n- Far: interactions performed by pointing at far targets from a distance via a hand ray.\nThe actor transitions between modes depending on whether there is a grab or poke target within the near activation distance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngle_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Size of the hand activation cone in degrees\n" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Size of the hand activation cone in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngle = { "ProximityConeAngle", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, ProximityConeAngle), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeOffset_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Offset of the tip of the hand activation cone behind the palm\n" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Offset of the tip of the hand activation cone behind the palm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeOffset = { "ProximityConeOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, ProximityConeOffset), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeSideLength_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The length of the side of the cone (note: not the height of the cone)\n" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "The length of the side of the cone (note: not the height of the cone)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeSideLength = { "ProximityConeSideLength", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, ProximityConeSideLength), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeSideLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeSideLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngleLerp_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A lerp factor between the palm direction and the index finger direction used to build the cone direction\n" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "A lerp factor between the palm direction and the index finger direction used to build the cone direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngleLerp = { "ProximityConeAngleLerp", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, ProximityConeAngleLerp), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngleLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngleLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Create default visuals for the near cursor. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the near cursor. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultNearCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor = { "bUseDefaultNearCursor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Create default visuals for the far cursor. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the far cursor. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultFarCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor = { "bUseDefaultFarCursor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Create default visuals for the far beam. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the far beam. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultFarBeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam = { "bUseDefaultFarBeam", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Show the near cursor on grab targets. Changes to this value after BeginPlay have no effect. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Show the near cursor on grab targets. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bShowNearCursorOnGrabTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets = { "bShowNearCursorOnGrabTargets", nullptr, (EPropertyFlags)0x0011040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_InteractionMode_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtInteractionMode" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Active interaction modes */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Active interaction modes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, InteractionMode), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_InteractionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_InteractionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData[] = {
		{ "BlueprintGetter", "GetHand" },
		{ "BlueprintSetter", "SetHand" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Articulated hand used to drive interactions. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Articulated hand used to drive interactions." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0041000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData[] = {
		{ "BlueprintGetter", "GetRayStartOffset" },
		{ "BlueprintSetter", "SetRayStartOffset" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Offset from the hand ray origin at which the far ray used for far target selection starts. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Offset from the hand ray origin at which the far ray used for far target selection starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset = { "RayStartOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, RayStartOffset), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData[] = {
		{ "BlueprintGetter", "GetRayLength" },
		{ "BlueprintSetter", "SetRayLength" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Length of the far ray */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Length of the far ray" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, RayLength), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData[] = {
		{ "BlueprintGetter", "GetPokeRadius" },
		{ "BlueprintSetter", "SetPokeRadius" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Maximum distance around the finger tip at which we look for poke targets. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Maximum distance around the finger tip at which we look for poke targets." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius = { "PokeRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, PokeRadius), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "BlueprintGetter", "GetTraceChannel" },
		{ "BlueprintSetter", "SetTraceChannel" },
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Trace channel used for targeting queries. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Trace channel used for targeting queries." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer = { "NearPointer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, NearPointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityTrigger_MetaData[] = {
		{ "Category", "Uxt Hand Interaction" },
		{ "Comment", "/** Runtime mesh component used for detecting proximity of near interaction targets. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Runtime mesh component used for detecting proximity of near interaction targets." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityTrigger = { "ProximityTrigger", nullptr, (EPropertyFlags)0x00400000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, ProximityTrigger), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeSideLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityConeAngleLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_InteractionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_ProximityTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtHandInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtHandInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::ClassParams = {
		&AUxtHandInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtHandInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtHandInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtHandInteractionActor, 483256539);
	template<> UXTOOLS_API UClass* StaticClass<AUxtHandInteractionActor>()
	{
		return AUxtHandInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtHandInteractionActor(Z_Construct_UClass_AUxtHandInteractionActor, &AUxtHandInteractionActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtHandInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtHandInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
