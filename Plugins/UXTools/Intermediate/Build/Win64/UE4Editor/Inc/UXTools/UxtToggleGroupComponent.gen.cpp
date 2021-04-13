// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtToggleGroupComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtToggleGroupComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleGroupComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleGroupComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtToggleGroupSelectionChangedDelegate_Parms
		{
			UUxtToggleGroupComponent* ToggleGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::NewProp_ToggleGroup_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::NewProp_ToggleGroup = { "ToggleGroup", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtToggleGroupSelectionChangedDelegate_Parms, ToggleGroup), Z_Construct_UClass_UUxtToggleGroupComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::NewProp_ToggleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::NewProp_ToggleGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::NewProp_ToggleGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtToggleGroupSelectionChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtToggleGroupSelectionChangedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execOnToggled)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggled(Z_Param_ToggleState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execGetToggleStateIndex)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetToggleStateIndex(Z_Param_ToggleState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execGetGroupCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGroupCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execEmptyGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execRemoveToggleState)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveToggleState(Z_Param_ToggleState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execInsertToggleState)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertToggleState(Z_Param_ToggleState,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execAddToggleState)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToggleState(Z_Param_ToggleState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execGetSelectedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleGroupComponent::execSetSelectedIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void UUxtToggleGroupComponent::StaticRegisterNativesUUxtToggleGroupComponent()
	{
		UClass* Class = UUxtToggleGroupComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToggleState", &UUxtToggleGroupComponent::execAddToggleState },
			{ "EmptyGroup", &UUxtToggleGroupComponent::execEmptyGroup },
			{ "GetGroupCount", &UUxtToggleGroupComponent::execGetGroupCount },
			{ "GetSelectedIndex", &UUxtToggleGroupComponent::execGetSelectedIndex },
			{ "GetToggleStateIndex", &UUxtToggleGroupComponent::execGetToggleStateIndex },
			{ "InsertToggleState", &UUxtToggleGroupComponent::execInsertToggleState },
			{ "OnToggled", &UUxtToggleGroupComponent::execOnToggled },
			{ "RemoveToggleState", &UUxtToggleGroupComponent::execRemoveToggleState },
			{ "SetSelectedIndex", &UUxtToggleGroupComponent::execSetSelectedIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics
	{
		struct UxtToggleGroupComponent_eventAddToggleState_Parms
		{
			UUxtToggleStateComponent* ToggleState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventAddToggleState_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ToggleState_MetaData)) };
	void Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtToggleGroupComponent_eventAddToggleState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleGroupComponent_eventAddToggleState_Parms), &Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ToggleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Adds a toggle state to the end of the ToggleStates list. Returns true if the insertion was successful. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Adds a toggle state to the end of the ToggleStates list. Returns true if the insertion was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "AddToggleState", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventAddToggleState_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Removes all toggle states from the ToggleStates list and invalidates the selected index. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Removes all toggle states from the ToggleStates list and invalidates the selected index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "EmptyGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics
	{
		struct UxtToggleGroupComponent_eventGetGroupCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventGetGroupCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Returns how many toggle states are within the group. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Returns how many toggle states are within the group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "GetGroupCount", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventGetGroupCount_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics
	{
		struct UxtToggleGroupComponent_eventGetSelectedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Accessor to the selected index. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Accessor to the selected index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "GetSelectedIndex", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventGetSelectedIndex_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics
	{
		struct UxtToggleGroupComponent_eventGetToggleStateIndex_Parms
		{
			const UUxtToggleStateComponent* ToggleState;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventGetToggleStateIndex_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ToggleState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventGetToggleStateIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ToggleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Returns the index of the ToggleState in the ToggleStates list, if the ToggleState does not exist returns INDEX_NONE (-1). */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Returns the index of the ToggleState in the ToggleStates list, if the ToggleState does not exist returns INDEX_NONE (-1)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "GetToggleStateIndex", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventGetToggleStateIndex_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics
	{
		struct UxtToggleGroupComponent_eventInsertToggleState_Parms
		{
			UUxtToggleStateComponent* ToggleState;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventInsertToggleState_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ToggleState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventInsertToggleState_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtToggleGroupComponent_eventInsertToggleState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleGroupComponent_eventInsertToggleState_Parms), &Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ToggleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Adds a toggle state to a specific index within the ToggleStates list. Increments the selection index if the\n\x09\x09toggle state is added before the current selection index. Returns true if the insertion was successful. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Adds a toggle state to a specific index within the ToggleStates list. Increments the selection index if the\n              toggle state is added before the current selection index. Returns true if the insertion was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "InsertToggleState", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventInsertToggleState_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics
	{
		struct UxtToggleGroupComponent_eventOnToggled_Parms
		{
			UUxtToggleStateComponent* ToggleState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventOnToggled_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::NewProp_ToggleState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::NewProp_ToggleState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for when any toggle state within ToggleStates is toggled.  */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Delegate for when any toggle state within ToggleStates is toggled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "OnToggled", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventOnToggled_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics
	{
		struct UxtToggleGroupComponent_eventRemoveToggleState_Parms
		{
			UUxtToggleStateComponent* ToggleState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventRemoveToggleState_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ToggleState_MetaData)) };
	void Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtToggleGroupComponent_eventRemoveToggleState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleGroupComponent_eventRemoveToggleState_Parms), &Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ToggleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Removes a toggle state from the ToggleStates list. Returns true if the removal was successful. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Removes a toggle state from the ToggleStates list. Returns true if the removal was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "RemoveToggleState", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventRemoveToggleState_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics
	{
		struct UxtToggleGroupComponent_eventSetSelectedIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtToggleGroupComponent_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Mutates the selected index, broadcasts events, and performs bounds checking. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Mutates the selected index, broadcasts events, and performs bounds checking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleGroupComponent, nullptr, "SetSelectedIndex", nullptr, nullptr, sizeof(UxtToggleGroupComponent_eventSetSelectedIndex_Parms), Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtToggleGroupComponent_NoRegister()
	{
		return UUxtToggleGroupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtToggleGroupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGroupSelectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGroupSelectionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToggleReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggleReferences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtToggleGroupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtToggleGroupComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_AddToggleState, "AddToggleState" }, // 2607841820
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_EmptyGroup, "EmptyGroup" }, // 3701131871
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_GetGroupCount, "GetGroupCount" }, // 3389524905
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_GetSelectedIndex, "GetSelectedIndex" }, // 2603464814
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_GetToggleStateIndex, "GetToggleStateIndex" }, // 1633020334
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_InsertToggleState, "InsertToggleState" }, // 3235732185
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_OnToggled, "OnToggled" }, // 4041673871
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_RemoveToggleState, "RemoveToggleState" }, // 2521437221
		{ &Z_Construct_UFunction_UUxtToggleGroupComponent_SetSelectedIndex, "SetSelectedIndex" }, // 3463221273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleGroupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component which controls the state of a collection of UUxtToggleStateComponent to behave like a radio group.\n * The component ensures that only one toggle state can be toggled on at a time. Optionally, all states can be\n * toggled off if the SelectedIndex is set to INDEX_NONE.\n */" },
		{ "IncludePath", "Controls/UxtToggleGroupComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Component which controls the state of a collection of UUxtToggleStateComponent to behave like a radio group.\nThe component ensures that only one toggle state can be toggled on at a time. Optionally, all states can be\ntoggled off if the SelectedIndex is set to INDEX_NONE." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_OnGroupSelectionChanged_MetaData[] = {
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Event which broadcasts when the toggle group selection changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Event which broadcasts when the toggle group selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_OnGroupSelectionChanged = { "OnGroupSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtToggleGroupComponent, OnGroupSelectionChanged), Z_Construct_UDelegateFunction_UXTools_UxtToggleGroupSelectionChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_OnGroupSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_OnGroupSelectionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_SelectedIndex_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedIndex" },
		{ "BlueprintSetter", "SetSelectedIndex" },
		{ "Category", "Uxt Toggle Group" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** The currently selected index within the group. A value of INDEX_NONE (-1) means nothing within the group is selected. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "The currently selected index within the group. A value of INDEX_NONE (-1) means nothing within the group is selected." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtToggleGroupComponent, SelectedIndex), METADATA_PARAMS(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_SelectedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_SelectedIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences_Inner = { "ToggleReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences_MetaData[] = {
		{ "AllowedClasses", "UUxtToggleStateComponent" },
		{ "Category", "Uxt Toggle Group" },
		{ "Comment", "/** Details panel exposed list of toggle states to initially populate the ToggleStates list with. The component property name is\n\x09   optional, if `None` is specified the first UUxtToggleStateComponent found is used.*/" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleGroupComponent.h" },
		{ "ToolTip", "Details panel exposed list of toggle states to initially populate the ToggleStates list with. The component property name is\n         optional, if `None` is specified the first UUxtToggleStateComponent found is used." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences = { "ToggleReferences", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtToggleGroupComponent, ToggleReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtToggleGroupComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_OnGroupSelectionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_SelectedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleGroupComponent_Statics::NewProp_ToggleReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtToggleGroupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtToggleGroupComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtToggleGroupComponent_Statics::ClassParams = {
		&UUxtToggleGroupComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtToggleGroupComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleGroupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtToggleGroupComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtToggleGroupComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtToggleGroupComponent, 4053178092);
	template<> UXTOOLS_API UClass* StaticClass<UUxtToggleGroupComponent>()
	{
		return UUxtToggleGroupComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtToggleGroupComponent(Z_Construct_UClass_UUxtToggleGroupComponent, &UUxtToggleGroupComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtToggleGroupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtToggleGroupComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
