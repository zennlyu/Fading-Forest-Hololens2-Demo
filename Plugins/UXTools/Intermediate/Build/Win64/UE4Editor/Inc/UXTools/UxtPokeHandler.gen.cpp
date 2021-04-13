// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtPokeHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPokeHandler() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtPokeHandler::execOnEndPoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execOnUpdatePoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execOnBeginPoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginPoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execOnExitPokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitPokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execOnUpdatePokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execOnEnterPokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterPokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeHandler::execCanHandlePoke)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHandlePoke_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtPokeHandler::CanHandlePoke(UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanHandlePoke instead.");
		UxtPokeHandler_eventCanHandlePoke_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtPokeHandler::OnBeginPoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginPoke instead.");
	}
	void IUxtPokeHandler::OnEndPoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndPoke instead.");
	}
	void IUxtPokeHandler::OnEnterPokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterPokeFocus instead.");
	}
	void IUxtPokeHandler::OnExitPokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitPokeFocus instead.");
	}
	void IUxtPokeHandler::OnUpdatePoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatePoke instead.");
	}
	void IUxtPokeHandler::OnUpdatePokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatePokeFocus instead.");
	}
	void UUxtPokeHandler::StaticRegisterNativesUUxtPokeHandler()
	{
		UClass* Class = UUxtPokeHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanHandlePoke", &IUxtPokeHandler::execCanHandlePoke },
			{ "OnBeginPoke", &IUxtPokeHandler::execOnBeginPoke },
			{ "OnEndPoke", &IUxtPokeHandler::execOnEndPoke },
			{ "OnEnterPokeFocus", &IUxtPokeHandler::execOnEnterPokeFocus },
			{ "OnExitPokeFocus", &IUxtPokeHandler::execOnExitPokeFocus },
			{ "OnUpdatePoke", &IUxtPokeHandler::execOnUpdatePoke },
			{ "OnUpdatePokeFocus", &IUxtPokeHandler::execOnUpdatePokeFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventCanHandlePoke_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPokeHandler_eventCanHandlePoke_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPokeHandler_eventCanHandlePoke_Parms), &Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Returns true if the this can handle events from this primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Returns true if the this can handle events from this primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "CanHandlePoke", nullptr, nullptr, sizeof(UxtPokeHandler_eventCanHandlePoke_Parms), Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnBeginPoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised when a pointer poke volume starts overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised when a pointer poke volume starts overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnBeginPoke", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnBeginPoke_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnEndPoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised when a pointer poke volume stops overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised when a pointer poke volume stops overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnEndPoke", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnEndPoke_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnEnterPokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised when a pointer focuses the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised when a pointer focuses the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnEnterPokeFocus", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnEnterPokeFocus_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnExitPokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised when a pointer stops focusing the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised when a pointer stops focusing the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnExitPokeFocus", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnExitPokeFocus_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnUpdatePoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised while a pointer poke volume is overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised while a pointer poke volume is overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnUpdatePoke", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnUpdatePoke_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeHandler_eventOnUpdatePokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Handler" },
		{ "Comment", "/** Raised when a pointer has been updated while focused. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
		{ "ToolTip", "Raised when a pointer has been updated while focused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeHandler, nullptr, "OnUpdatePokeFocus", nullptr, nullptr, sizeof(UxtPokeHandler_eventOnUpdatePokeFocus_Parms), Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister()
	{
		return UUxtPokeHandler::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPokeHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPokeHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPokeHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPokeHandler_CanHandlePoke, "CanHandlePoke" }, // 344016449
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnBeginPoke, "OnBeginPoke" }, // 4110967230
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnEndPoke, "OnEndPoke" }, // 801584163
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnEnterPokeFocus, "OnEnterPokeFocus" }, // 3559938683
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnExitPokeFocus, "OnExitPokeFocus" }, // 2990245769
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePoke, "OnUpdatePoke" }, // 2840703031
		{ &Z_Construct_UFunction_UUxtPokeHandler_OnUpdatePokeFocus, "OnUpdatePokeFocus" }, // 2263184768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPokeHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPokeHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtPokeHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtPokeHandler_Statics::ClassParams = {
		&UUxtPokeHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtPokeHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPokeHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPokeHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtPokeHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtPokeHandler, 970308983);
	template<> UXTOOLS_API UClass* StaticClass<UUxtPokeHandler>()
	{
		return UUxtPokeHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtPokeHandler(Z_Construct_UClass_UUxtPokeHandler, &UUxtPokeHandler::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtPokeHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPokeHandler);
	static FName NAME_UUxtPokeHandler_CanHandlePoke = FName(TEXT("CanHandlePoke"));
	bool IUxtPokeHandler::Execute_CanHandlePoke(const UObject* O, UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventCanHandlePoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_CanHandlePoke);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			Parms.ReturnValue = I->CanHandlePoke_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtPokeHandler_OnBeginPoke = FName(TEXT("OnBeginPoke"));
	void IUxtPokeHandler::Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnBeginPoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnBeginPoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnBeginPoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeHandler_OnEndPoke = FName(TEXT("OnEndPoke"));
	void IUxtPokeHandler::Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnEndPoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnEndPoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnEndPoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeHandler_OnEnterPokeFocus = FName(TEXT("OnEnterPokeFocus"));
	void IUxtPokeHandler::Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnEnterPokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnEnterPokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnEnterPokeFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeHandler_OnExitPokeFocus = FName(TEXT("OnExitPokeFocus"));
	void IUxtPokeHandler::Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnExitPokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnExitPokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnExitPokeFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeHandler_OnUpdatePoke = FName(TEXT("OnUpdatePoke"));
	void IUxtPokeHandler::Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnUpdatePoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnUpdatePoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnUpdatePoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeHandler_OnUpdatePokeFocus = FName(TEXT("OnUpdatePokeFocus"));
	void IUxtPokeHandler::Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeHandler::StaticClass()));
		UxtPokeHandler_eventOnUpdatePokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeHandler_OnUpdatePokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeHandler*)(O->GetNativeInterfaceAddress(UUxtPokeHandler::StaticClass())))
		{
			I->OnUpdatePokeFocus_Implementation(Pointer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
