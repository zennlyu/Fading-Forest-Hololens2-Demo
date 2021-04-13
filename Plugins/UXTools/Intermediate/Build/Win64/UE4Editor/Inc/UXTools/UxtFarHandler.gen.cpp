// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtFarHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarHandler() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtFarHandler::execOnFarReleased)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarReleased_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execOnFarDragged)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarDragged_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execOnFarPressed)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPressed_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execOnExitFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execOnUpdatedFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatedFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execOnEnterFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarHandler::execCanHandleFar)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHandleFar_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtFarHandler::CanHandleFar(UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanHandleFar instead.");
		UxtFarHandler_eventCanHandleFar_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtFarHandler::OnEnterFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterFarFocus instead.");
	}
	void IUxtFarHandler::OnExitFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitFarFocus instead.");
	}
	void IUxtFarHandler::OnFarDragged(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarDragged instead.");
	}
	void IUxtFarHandler::OnFarPressed(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarPressed instead.");
	}
	void IUxtFarHandler::OnFarReleased(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarReleased instead.");
	}
	void IUxtFarHandler::OnUpdatedFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatedFarFocus instead.");
	}
	void UUxtFarHandler::StaticRegisterNativesUUxtFarHandler()
	{
		UClass* Class = UUxtFarHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanHandleFar", &IUxtFarHandler::execCanHandleFar },
			{ "OnEnterFarFocus", &IUxtFarHandler::execOnEnterFarFocus },
			{ "OnExitFarFocus", &IUxtFarHandler::execOnExitFarFocus },
			{ "OnFarDragged", &IUxtFarHandler::execOnFarDragged },
			{ "OnFarPressed", &IUxtFarHandler::execOnFarPressed },
			{ "OnFarReleased", &IUxtFarHandler::execOnFarReleased },
			{ "OnUpdatedFarFocus", &IUxtFarHandler::execOnUpdatedFarFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventCanHandleFar_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtFarHandler_eventCanHandleFar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtFarHandler_eventCanHandleFar_Parms), &Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Returns true if the this can handle events from this primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Returns true if the this can handle events from this primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "CanHandleFar", nullptr, nullptr, sizeof(UxtFarHandler_eventCanHandleFar_Parms), Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_CanHandleFar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_CanHandleFar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnEnterFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a far pointer starts focusing a primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a far pointer starts focusing a primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnEnterFarFocus", nullptr, nullptr, sizeof(UxtFarHandler_eventOnEnterFarFocus_Parms), Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnExitFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a far pointer stops focusing a primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a far pointer stops focusing a primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnExitFarFocus", nullptr, nullptr, sizeof(UxtFarHandler_eventOnExitFarFocus_Parms), Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnFarDragged_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a focusing far pointer is dragged. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a focusing far pointer is dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnFarDragged", nullptr, nullptr, sizeof(UxtFarHandler_eventOnFarDragged_Parms), Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnFarDragged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnFarDragged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnFarPressed_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a focusing far pointer is pressed. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a focusing far pointer is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnFarPressed", nullptr, nullptr, sizeof(UxtFarHandler_eventOnFarPressed_Parms), Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnFarPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnFarPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnFarReleased_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a focusing far pointer is released. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a focusing far pointer is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnFarReleased", nullptr, nullptr, sizeof(UxtFarHandler_eventOnFarReleased_Parms), Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnFarReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnFarReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarHandler_eventOnUpdatedFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Handler" },
		{ "Comment", "/** Raised when a focusing far pointer is updated. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
		{ "ToolTip", "Raised when a focusing far pointer is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarHandler, nullptr, "OnUpdatedFarFocus", nullptr, nullptr, sizeof(UxtFarHandler_eventOnUpdatedFarFocus_Parms), Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister()
	{
		return UUxtFarHandler::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarHandler_CanHandleFar, "CanHandleFar" }, // 7453227
		{ &Z_Construct_UFunction_UUxtFarHandler_OnEnterFarFocus, "OnEnterFarFocus" }, // 427763592
		{ &Z_Construct_UFunction_UUxtFarHandler_OnExitFarFocus, "OnExitFarFocus" }, // 371399292
		{ &Z_Construct_UFunction_UUxtFarHandler_OnFarDragged, "OnFarDragged" }, // 3480616628
		{ &Z_Construct_UFunction_UUxtFarHandler_OnFarPressed, "OnFarPressed" }, // 167542746
		{ &Z_Construct_UFunction_UUxtFarHandler_OnFarReleased, "OnFarReleased" }, // 1238527949
		{ &Z_Construct_UFunction_UUxtFarHandler_OnUpdatedFarFocus, "OnUpdatedFarFocus" }, // 425614183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtFarHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarHandler_Statics::ClassParams = {
		&UUxtFarHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFarHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFarHandler, 1309027821);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarHandler>()
	{
		return UUxtFarHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFarHandler(Z_Construct_UClass_UUxtFarHandler, &UUxtFarHandler::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFarHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarHandler);
	static FName NAME_UUxtFarHandler_CanHandleFar = FName(TEXT("CanHandleFar"));
	bool IUxtFarHandler::Execute_CanHandleFar(const UObject* O, UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventCanHandleFar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_CanHandleFar);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			Parms.ReturnValue = I->CanHandleFar_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtFarHandler_OnEnterFarFocus = FName(TEXT("OnEnterFarFocus"));
	void IUxtFarHandler::Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnEnterFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnEnterFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnEnterFarFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarHandler_OnExitFarFocus = FName(TEXT("OnExitFarFocus"));
	void IUxtFarHandler::Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnExitFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnExitFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnExitFarFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarHandler_OnFarDragged = FName(TEXT("OnFarDragged"));
	void IUxtFarHandler::Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnFarDragged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnFarDragged);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnFarDragged_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarHandler_OnFarPressed = FName(TEXT("OnFarPressed"));
	void IUxtFarHandler::Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnFarPressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnFarPressed);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnFarPressed_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarHandler_OnFarReleased = FName(TEXT("OnFarReleased"));
	void IUxtFarHandler::Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnFarReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnFarReleased);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnFarReleased_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarHandler_OnUpdatedFarFocus = FName(TEXT("OnUpdatedFarFocus"));
	void IUxtFarHandler::Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarHandler::StaticClass()));
		UxtFarHandler_eventOnUpdatedFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarHandler_OnUpdatedFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarHandler*)(O->GetNativeInterfaceAddress(UUxtFarHandler::StaticClass())))
		{
			I->OnUpdatedFarFocus_Implementation(Pointer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
