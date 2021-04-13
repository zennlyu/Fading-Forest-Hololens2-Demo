// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableButtonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtBasePressableButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonBrush();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtTextBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtPressableButtonActor::execOnButtonDisabled)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonDisabled(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execOnButtonEnabled)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonEnabled(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execOnBeginFocus)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_Button);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_GET_UBOOL(Z_Param_WasAlreadyFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginFocus(Z_Param_Button,Z_Param_Pointer,Z_Param_WasAlreadyFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execOnButtonReleased)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_Button);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonReleased(Z_Param_Button,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execOnButtonPressed)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_Button);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonPressed(Z_Param_Button,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetButtonBrush)
	{
		P_GET_STRUCT_REF(FUxtButtonBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetButtonBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtButtonBrush*)Z_Param__Result=P_THIS->GetButtonBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetLabelTextBrush)
	{
		P_GET_STRUCT_REF(FUxtTextBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabelTextBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetLabelTextBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtTextBrush*)Z_Param__Result=P_THIS->GetLabelTextBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetLabel)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_Out_NewLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetIconBrush)
	{
		P_GET_STRUCT_REF(FUxtIconBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtIconBrush*)Z_Param__Result=P_THIS->GetIconBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetIsPlated)
	{
		P_GET_UBOOL(Z_Param_IsPlated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPlated(Z_Param_IsPlated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execIsPlated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetSize)
	{
		P_GET_STRUCT(FVector,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execSetMillimeterSize)
	{
		P_GET_STRUCT(FVector,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMillimeterSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execGetMillimeterSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMillimeterSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execIsPulsing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPulsing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execBeginPulse)
	{
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginPulse(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execConstructLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execConstructIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableButtonActor::execConstructVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructVisuals();
		P_NATIVE_END;
	}
	void AUxtPressableButtonActor::StaticRegisterNativesAUxtPressableButtonActor()
	{
		UClass* Class = AUxtPressableButtonActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPulse", &AUxtPressableButtonActor::execBeginPulse },
			{ "ConstructIcon", &AUxtPressableButtonActor::execConstructIcon },
			{ "ConstructLabel", &AUxtPressableButtonActor::execConstructLabel },
			{ "ConstructVisuals", &AUxtPressableButtonActor::execConstructVisuals },
			{ "GetButtonBrush", &AUxtPressableButtonActor::execGetButtonBrush },
			{ "GetIconBrush", &AUxtPressableButtonActor::execGetIconBrush },
			{ "GetLabel", &AUxtPressableButtonActor::execGetLabel },
			{ "GetLabelTextBrush", &AUxtPressableButtonActor::execGetLabelTextBrush },
			{ "GetMillimeterSize", &AUxtPressableButtonActor::execGetMillimeterSize },
			{ "GetSize", &AUxtPressableButtonActor::execGetSize },
			{ "IsPlated", &AUxtPressableButtonActor::execIsPlated },
			{ "IsPulsing", &AUxtPressableButtonActor::execIsPulsing },
			{ "OnBeginFocus", &AUxtPressableButtonActor::execOnBeginFocus },
			{ "OnButtonDisabled", &AUxtPressableButtonActor::execOnButtonDisabled },
			{ "OnButtonEnabled", &AUxtPressableButtonActor::execOnButtonEnabled },
			{ "OnButtonPressed", &AUxtPressableButtonActor::execOnButtonPressed },
			{ "OnButtonReleased", &AUxtPressableButtonActor::execOnButtonReleased },
			{ "SetButtonBrush", &AUxtPressableButtonActor::execSetButtonBrush },
			{ "SetIconBrush", &AUxtPressableButtonActor::execSetIconBrush },
			{ "SetIsPlated", &AUxtPressableButtonActor::execSetIsPlated },
			{ "SetLabel", &AUxtPressableButtonActor::execSetLabel },
			{ "SetLabelTextBrush", &AUxtPressableButtonActor::execSetLabelTextBrush },
			{ "SetMillimeterSize", &AUxtPressableButtonActor::execSetMillimeterSize },
			{ "SetSize", &AUxtPressableButtonActor::execSetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics
	{
		struct UxtPressableButtonActor_eventBeginPulse_Parms
		{
			const UUxtPointerComponent* Pointer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventBeginPulse_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPressableButtonActor_eventBeginPulse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonActor_eventBeginPulse_Parms), &Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_Pointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Starts the pulse animation for a given pointer. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Starts the pulse animation for a given pointer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "BeginPulse", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventBeginPulse_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Creates (and initializes) the button's icon hierarchy. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Creates (and initializes) the button's icon hierarchy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "ConstructIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Creates (and initializes) the button's label hierarchy. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Creates (and initializes) the button's label hierarchy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "ConstructLabel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Creates (and initializes) the button's visual hierarchy. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Creates (and initializes) the button's visual hierarchy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "ConstructVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics
	{
		struct UxtPressableButtonActor_eventGetButtonBrush_Parms
		{
			FUxtButtonBrush ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetButtonBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtButtonBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's button brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button's button brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetButtonBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetButtonBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics
	{
		struct UxtPressableButtonActor_eventGetIconBrush_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button's icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetIconBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetIconBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics
	{
		struct UxtPressableButtonActor_eventGetLabel_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's label. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button's label." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetLabel", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetLabel_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics
	{
		struct UxtPressableButtonActor_eventGetLabelTextBrush_Parms
		{
			FUxtTextBrush ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetLabelTextBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtTextBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's label text brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button's label text brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetLabelTextBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetLabelTextBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics
	{
		struct UxtPressableButtonActor_eventGetMillimeterSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetMillimeterSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button size in millimeters. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button size in millimeters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetMillimeterSize", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetMillimeterSize_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics
	{
		struct UxtPressableButtonActor_eventGetSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button size in default units. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to the button size in default units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "GetSize", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventGetSize_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics
	{
		struct UxtPressableButtonActor_eventIsPlated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPressableButtonActor_eventIsPlated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonActor_eventIsPlated_Parms), &Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to if the button is plated. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Accessor to if the button is plated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "IsPlated", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventIsPlated_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics
	{
		struct UxtPressableButtonActor_eventIsPulsing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPressableButtonActor_eventIsPulsing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonActor_eventIsPulsing_Parms), &Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Returns true if a pulse is currently animating. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Returns true if a pulse is currently animating." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "IsPulsing", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventIsPulsing_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics
	{
		struct UxtPressableButtonActor_eventOnBeginFocus_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
			bool WasAlreadyFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static void NewProp_WasAlreadyFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasAlreadyFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnBeginFocus_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnBeginFocus_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_WasAlreadyFocused_SetBit(void* Obj)
	{
		((UxtPressableButtonActor_eventOnBeginFocus_Parms*)Obj)->WasAlreadyFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_WasAlreadyFocused = { "WasAlreadyFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonActor_eventOnBeginFocus_Parms), &Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_WasAlreadyFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_Pointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::NewProp_WasAlreadyFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Method which is invoked when the button is focused on. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Method which is invoked when the button is focused on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "OnBeginFocus", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventOnBeginFocus_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics
	{
		struct UxtPressableButtonActor_eventOnButtonDisabled_Parms
		{
			UUxtPressableButtonComponent* Button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonDisabled_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Method which is invoked when the button is disabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Method which is invoked when the button is disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "OnButtonDisabled", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventOnButtonDisabled_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics
	{
		struct UxtPressableButtonActor_eventOnButtonEnabled_Parms
		{
			UUxtPressableButtonComponent* Button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonEnabled_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Method which is invoked when the button is enabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Method which is invoked when the button is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "OnButtonEnabled", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventOnButtonEnabled_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics
	{
		struct UxtPressableButtonActor_eventOnButtonPressed_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonPressed_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonPressed_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Method which is invoked when the button is pressed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Method which is invoked when the button is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "OnButtonPressed", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventOnButtonPressed_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics
	{
		struct UxtPressableButtonActor_eventOnButtonReleased_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonReleased_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventOnButtonReleased_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Method which is invoked when the button is released. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Method which is invoked when the button is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "OnButtonReleased", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventOnButtonReleased_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics
	{
		struct UxtPressableButtonActor_eventSetButtonBrush_Parms
		{
			FUxtButtonBrush Brush;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetButtonBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtButtonBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new button brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Applies a new button brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetButtonBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetButtonBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics
	{
		struct UxtPressableButtonActor_eventSetIconBrush_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetIconBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Applies a new icon brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetIconBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetIconBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics
	{
		struct UxtPressableButtonActor_eventSetIsPlated_Parms
		{
			bool IsPlated;
		};
		static void NewProp_IsPlated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::NewProp_IsPlated_SetBit(void* Obj)
	{
		((UxtPressableButtonActor_eventSetIsPlated_Parms*)Obj)->IsPlated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::NewProp_IsPlated = { "IsPlated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonActor_eventSetIsPlated_Parms), &Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::NewProp_IsPlated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::NewProp_IsPlated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Enables or disabled the button back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Enables or disabled the button back plate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetIsPlated", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetIsPlated_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics
	{
		struct UxtPressableButtonActor_eventSetLabel_Parms
		{
			FText NewLabel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::NewProp_NewLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::NewProp_NewLabel = { "NewLabel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetLabel_Parms, NewLabel), METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::NewProp_NewLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::NewProp_NewLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::NewProp_NewLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new label. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Applies a new label." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetLabel", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetLabel_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics
	{
		struct UxtPressableButtonActor_eventSetLabelTextBrush_Parms
		{
			FUxtTextBrush Brush;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetLabelTextBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtTextBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new label text brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Applies a new label text brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetLabelTextBrush", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetLabelTextBrush_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics
	{
		struct UxtPressableButtonActor_eventSetMillimeterSize_Parms
		{
			FVector Size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetMillimeterSize_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Sets the button size in millimeters. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Sets the button size in millimeters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetMillimeterSize", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetMillimeterSize_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics
	{
		struct UxtPressableButtonActor_eventSetSize_Parms
		{
			FVector Size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonActor_eventSetSize_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Sets the button size in default units. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Sets the button size in default units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableButtonActor, nullptr, "SetSize", nullptr, nullptr, sizeof(UxtPressableButtonActor_eventSetSize_Parms), Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableButtonActor_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPressableButtonActor_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtPressableButtonActor_NoRegister()
	{
		return AUxtPressableButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MillimeterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MillimeterSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlated_MetaData[];
#endif
		static void NewProp_bIsPlated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelTextBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LabelTextBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlatePivotComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlatePivotComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlateMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlateMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlatePivotComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlatePivotComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlateCenterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlateCenterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontPlateMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontPlateMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LabelComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePulseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrePulseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PulseMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PulseMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEditIconBrush_MetaData[];
#endif
		static void NewProp_bCanEditIconBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEditIconBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtBasePressableButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtPressableButtonActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_BeginPulse, "BeginPulse" }, // 1839682539
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_ConstructIcon, "ConstructIcon" }, // 2151871466
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_ConstructLabel, "ConstructLabel" }, // 1824012034
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_ConstructVisuals, "ConstructVisuals" }, // 2491212559
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetButtonBrush, "GetButtonBrush" }, // 3914225136
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetIconBrush, "GetIconBrush" }, // 402280969
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetLabel, "GetLabel" }, // 2488788273
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetLabelTextBrush, "GetLabelTextBrush" }, // 437878542
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetMillimeterSize, "GetMillimeterSize" }, // 833830935
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_GetSize, "GetSize" }, // 1746840803
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_IsPlated, "IsPlated" }, // 2835655290
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_IsPulsing, "IsPulsing" }, // 1402598951
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_OnBeginFocus, "OnBeginFocus" }, // 2097822339
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonDisabled, "OnButtonDisabled" }, // 1265044417
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonEnabled, "OnButtonEnabled" }, // 3744927502
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonPressed, "OnButtonPressed" }, // 1393588171
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_OnButtonReleased, "OnButtonReleased" }, // 2110099066
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetButtonBrush, "SetButtonBrush" }, // 2968895649
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetIconBrush, "SetIconBrush" }, // 1132643577
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetIsPlated, "SetIsPlated" }, // 1495104395
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetLabel, "SetLabel" }, // 3349675516
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetLabelTextBrush, "SetLabelTextBrush" }, // 264533321
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetMillimeterSize, "SetMillimeterSize" }, // 1814315683
		{ &Z_Construct_UFunction_AUxtPressableButtonActor_SetSize, "SetSize" }, // 1505463480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * The default pressable button actor which programmatically builds an actor hierarchy with a back plate, front plate,\n * icon, and label. All button properties within this class are reactive at edit and runtime. This actor also contains\n * behaviors to support icon focus animation and sound playback. This class is extensible to support derived button types.\n */" },
		{ "IncludePath", "Controls/UxtPressableButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "The default pressable button actor which programmatically builds an actor hierarchy with a back plate, front plate,\nicon, and label. All button properties within this class are reactive at edit and runtime. This actor also contains\nbehaviors to support icon focus animation and sound playback. This class is extensible to support derived button types." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_MillimeterSize_MetaData[] = {
		{ "BlueprintGetter", "GetMillimeterSize" },
		{ "BlueprintSetter", "SetMillimeterSize" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** The millimeter size of the button which dynamically resizes components within the button. This will preserve the actor scale. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "The millimeter size of the button which dynamically resizes components within the button. This will preserve the actor scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_MillimeterSize = { "MillimeterSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, MillimeterSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_MillimeterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_MillimeterSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated_MetaData[] = {
		{ "BlueprintGetter", "IsPlated" },
		{ "BlueprintSetter", "SetIsPlated" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** True if the button should display a back plate. Collections of buttons should share a common back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "True if the button should display a back plate. Collections of buttons should share a common back plate." },
	};
#endif
	void Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated_SetBit(void* Obj)
	{
		((AUxtPressableButtonActor*)Obj)->bIsPlated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated = { "bIsPlated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPressableButtonActor), &Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconBrush_MetaData[] = {
		{ "BlueprintGetter", "GetIconBrush" },
		{ "BlueprintSetter", "SetIconBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's icon. */" },
		{ "EditCondition", "bCanEditIconBrush" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconBrush = { "IconBrush", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, IconBrush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_Label_MetaData[] = {
		{ "BlueprintGetter", "GetLabel" },
		{ "BlueprintSetter", "SetLabel" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Localizable text for the label. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Localizable text for the label." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, Label), METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelTextBrush_MetaData[] = {
		{ "BlueprintGetter", "GetLabelTextBrush" },
		{ "BlueprintSetter", "SetLabelTextBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Text settings for the label. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Text settings for the label." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelTextBrush = { "LabelTextBrush", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, LabelTextBrush), Z_Construct_UScriptStruct_FUxtTextBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelTextBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelTextBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_ButtonBrush_MetaData[] = {
		{ "BlueprintGetter", "GetButtonBrush" },
		{ "BlueprintSetter", "SetButtonBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's appearance and behavior. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's appearance and behavior." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_ButtonBrush = { "ButtonBrush", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, ButtonBrush), Z_Construct_UScriptStruct_FUxtButtonBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_ButtonBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_ButtonBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlatePivotComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Pivot component to support back plate compression visuals. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Pivot component to support back plate compression visuals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlatePivotComponent = { "BackPlatePivotComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, BackPlatePivotComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlatePivotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlatePivotComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlateMeshComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Back plate mesh component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Back plate mesh component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlateMeshComponent = { "BackPlateMeshComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, BackPlateMeshComponent), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlateMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlateMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlatePivotComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Pivot component to support front plate compression visuals. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Pivot component to support front plate compression visuals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlatePivotComponent = { "FrontPlatePivotComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlatePivotComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlatePivotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlatePivotComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateCenterComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** The center of mass pivot of the front plate. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "The center of mass pivot of the front plate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateCenterComponent = { "FrontPlateCenterComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlateCenterComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateCenterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateCenterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateMeshComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Front plate mesh component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Front plate mesh component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateMeshComponent = { "FrontPlateMeshComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, FrontPlateMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Icon text component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Icon text component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconComponent = { "IconComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, IconComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Label text component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Label text component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelComponent = { "LabelComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, LabelComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Audio playback component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Audio playback component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PrePulseMaterial_MetaData[] = {
		{ "Comment", "/** Handle to the original (unaltered) material before pulsing. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Handle to the original (unaltered) material before pulsing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PrePulseMaterial = { "PrePulseMaterial", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, PrePulseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PrePulseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PrePulseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PulseMaterialInstance_MetaData[] = {
		{ "Comment", "/** Handle to any dynamic material the pulse instantiates due to material parameter changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Handle to any dynamic material the pulse instantiates due to material parameter changes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PulseMaterialInstance = { "PulseMaterialInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableButtonActor, PulseMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PulseMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PulseMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Allows derived classes to control if the icon brush can be edited. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonActor.h" },
		{ "ToolTip", "Allows derived classes to control if the icon brush can be edited." },
	};
#endif
	void Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush_SetBit(void* Obj)
	{
		((AUxtPressableButtonActor*)Obj)->bCanEditIconBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush = { "bCanEditIconBrush", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPressableButtonActor), &Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableButtonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_MillimeterSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bIsPlated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelTextBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_ButtonBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlatePivotComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_BackPlateMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlatePivotComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateCenterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_FrontPlateMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_IconComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_LabelComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PrePulseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_PulseMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableButtonActor_Statics::NewProp_bCanEditIconBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableButtonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableButtonActor_Statics::ClassParams = {
		&AUxtPressableButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtPressableButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableButtonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtPressableButtonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtPressableButtonActor, 187178490);
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableButtonActor>()
	{
		return AUxtPressableButtonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtPressableButtonActor(Z_Construct_UClass_AUxtPressableButtonActor, &AUxtPressableButtonActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtPressableButtonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableButtonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
