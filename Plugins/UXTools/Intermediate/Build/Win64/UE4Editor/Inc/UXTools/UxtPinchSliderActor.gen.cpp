// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPinchSliderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPinchSliderActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPinchSliderActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPinchSliderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtSliderState();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnUpdateTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateTimeline(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnEndGrab)
	{
		P_GET_OBJECT(UUxtPinchSliderComponent,Z_Param_Slider);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGrab(Z_Param_Slider,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnUpdateValue)
	{
		P_GET_OBJECT(UUxtPinchSliderComponent,Z_Param_Slider);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateValue(Z_Param_Slider,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnBeginGrab)
	{
		P_GET_OBJECT(UUxtPinchSliderComponent,Z_Param_Slider);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginGrab(Z_Param_Slider,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnUpdateState)
	{
		P_GET_OBJECT(UUxtPinchSliderComponent,Z_Param_Slider);
		P_GET_ENUM(EUxtSliderState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateState(Z_Param_Slider,EUxtSliderState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execOnSliderUpdateValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSliderUpdateValue_Implementation(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetThumbScaleCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_NewThumbScaleCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbScaleCurve(Z_Param_NewThumbScaleCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetThumbScaleCurve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCurveFloat**)Z_Param__Result=P_THIS->GetThumbScaleCurve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetFocusedThumbScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocusedThumbScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusedThumbScale(Z_Param_NewFocusedThumbScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetFocusedThumbScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocusedThumbScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetDefaultThumbScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDefaultThumbScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultThumbScale(Z_Param_NewDefaultThumbScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetDefaultThumbScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultThumbScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetTickSound)
	{
		P_GET_OBJECT(USoundCue,Z_Param_NewTickSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickSound(Z_Param_NewTickSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetTickSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundCue**)Z_Param__Result=P_THIS->GetTickSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetReleaseSound)
	{
		P_GET_OBJECT(USoundCue,Z_Param_NewReleaseSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseSound(Z_Param_NewReleaseSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetReleaseSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundCue**)Z_Param__Result=P_THIS->GetReleaseSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetGrabSound)
	{
		P_GET_OBJECT(USoundCue,Z_Param_NewGrabSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrabSound(Z_Param_NewGrabSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetGrabSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundCue**)Z_Param__Result=P_THIS->GetGrabSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetDisabledThumbColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewDisabledThumbColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisabledThumbColor(Z_Param_NewDisabledThumbColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetDisabledThumbColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetDisabledThumbColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetGrabbedThumbColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewGrabbedThumbColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGrabbedThumbColor(Z_Param_NewGrabbedThumbColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetGrabbedThumbColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetGrabbedThumbColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetFocusedThumbColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewFocusedThumbColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusedThumbColor(Z_Param_NewFocusedThumbColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetFocusedThumbColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetFocusedThumbColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetDefaultThumbColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewDefaultThumbColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultThumbColor(Z_Param_NewDefaultThumbColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetDefaultThumbColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetDefaultThumbColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetTickMarkScale)
	{
		P_GET_STRUCT(FVector,Z_Param_NewTickMarkScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickMarkScale(Z_Param_NewTickMarkScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetTickMarkScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTickMarkScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetNumTickMarks)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNumTickMarks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumTickMarks(Z_Param_NewNumTickMarks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetNumTickMarks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumTickMarks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetMoveTextWithThumb)
	{
		P_GET_UBOOL(Z_Param_bNewMoveWithThumb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveTextWithThumb(Z_Param_bNewMoveWithThumb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetMoveTextWithThumb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMoveTextWithThumb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetAlignTextWithZ)
	{
		P_GET_UBOOL(Z_Param_bNewAlignTextWithZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignTextWithZ(Z_Param_bNewAlignTextWithZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetAlignTextWithZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAlignTextWithZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetValueTextDecimalPlaces)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValueTextDecimalPlaces);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueTextDecimalPlaces(Z_Param_NewValueTextDecimalPlaces);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetValueTextDecimalPlaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueTextDecimalPlaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetTitle)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitle(Z_Param_NewTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetStepWithTickMarks)
	{
		P_GET_UBOOL(Z_Param_bNewStepWithTickMarks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStepWithTickMarks(Z_Param_bNewStepWithTickMarks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetStepWithTickMarks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStepWithTickMarks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetTrackLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTrackLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackLength(Z_Param_NewTrackLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetTrackLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetMaxValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxValue(Z_Param_NewMaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetMinValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMinValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinValue(Z_Param_NewMinValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetMinValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPinchSliderActor::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	static FName NAME_AUxtPinchSliderActor_OnSliderUpdateValue = FName(TEXT("OnSliderUpdateValue"));
	void AUxtPinchSliderActor::OnSliderUpdateValue(float NewValue)
	{
		UxtPinchSliderActor_eventOnSliderUpdateValue_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_AUxtPinchSliderActor_OnSliderUpdateValue),&Parms);
	}
	void AUxtPinchSliderActor::StaticRegisterNativesAUxtPinchSliderActor()
	{
		UClass* Class = AUxtPinchSliderActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlignTextWithZ", &AUxtPinchSliderActor::execGetAlignTextWithZ },
			{ "GetDefaultThumbColor", &AUxtPinchSliderActor::execGetDefaultThumbColor },
			{ "GetDefaultThumbScale", &AUxtPinchSliderActor::execGetDefaultThumbScale },
			{ "GetDisabledThumbColor", &AUxtPinchSliderActor::execGetDisabledThumbColor },
			{ "GetFocusedThumbColor", &AUxtPinchSliderActor::execGetFocusedThumbColor },
			{ "GetFocusedThumbScale", &AUxtPinchSliderActor::execGetFocusedThumbScale },
			{ "GetGrabbedThumbColor", &AUxtPinchSliderActor::execGetGrabbedThumbColor },
			{ "GetGrabSound", &AUxtPinchSliderActor::execGetGrabSound },
			{ "GetMaxValue", &AUxtPinchSliderActor::execGetMaxValue },
			{ "GetMinValue", &AUxtPinchSliderActor::execGetMinValue },
			{ "GetMoveTextWithThumb", &AUxtPinchSliderActor::execGetMoveTextWithThumb },
			{ "GetNumTickMarks", &AUxtPinchSliderActor::execGetNumTickMarks },
			{ "GetReleaseSound", &AUxtPinchSliderActor::execGetReleaseSound },
			{ "GetStepWithTickMarks", &AUxtPinchSliderActor::execGetStepWithTickMarks },
			{ "GetThumbScaleCurve", &AUxtPinchSliderActor::execGetThumbScaleCurve },
			{ "GetTickMarkScale", &AUxtPinchSliderActor::execGetTickMarkScale },
			{ "GetTickSound", &AUxtPinchSliderActor::execGetTickSound },
			{ "GetTitle", &AUxtPinchSliderActor::execGetTitle },
			{ "GetTrackLength", &AUxtPinchSliderActor::execGetTrackLength },
			{ "GetValue", &AUxtPinchSliderActor::execGetValue },
			{ "GetValueTextDecimalPlaces", &AUxtPinchSliderActor::execGetValueTextDecimalPlaces },
			{ "OnBeginGrab", &AUxtPinchSliderActor::execOnBeginGrab },
			{ "OnEndGrab", &AUxtPinchSliderActor::execOnEndGrab },
			{ "OnSliderUpdateValue", &AUxtPinchSliderActor::execOnSliderUpdateValue },
			{ "OnUpdateState", &AUxtPinchSliderActor::execOnUpdateState },
			{ "OnUpdateTimeline", &AUxtPinchSliderActor::execOnUpdateTimeline },
			{ "OnUpdateValue", &AUxtPinchSliderActor::execOnUpdateValue },
			{ "SetAlignTextWithZ", &AUxtPinchSliderActor::execSetAlignTextWithZ },
			{ "SetDefaultThumbColor", &AUxtPinchSliderActor::execSetDefaultThumbColor },
			{ "SetDefaultThumbScale", &AUxtPinchSliderActor::execSetDefaultThumbScale },
			{ "SetDisabledThumbColor", &AUxtPinchSliderActor::execSetDisabledThumbColor },
			{ "SetFocusedThumbColor", &AUxtPinchSliderActor::execSetFocusedThumbColor },
			{ "SetFocusedThumbScale", &AUxtPinchSliderActor::execSetFocusedThumbScale },
			{ "SetGrabbedThumbColor", &AUxtPinchSliderActor::execSetGrabbedThumbColor },
			{ "SetGrabSound", &AUxtPinchSliderActor::execSetGrabSound },
			{ "SetMaxValue", &AUxtPinchSliderActor::execSetMaxValue },
			{ "SetMinValue", &AUxtPinchSliderActor::execSetMinValue },
			{ "SetMoveTextWithThumb", &AUxtPinchSliderActor::execSetMoveTextWithThumb },
			{ "SetNumTickMarks", &AUxtPinchSliderActor::execSetNumTickMarks },
			{ "SetReleaseSound", &AUxtPinchSliderActor::execSetReleaseSound },
			{ "SetStepWithTickMarks", &AUxtPinchSliderActor::execSetStepWithTickMarks },
			{ "SetThumbScaleCurve", &AUxtPinchSliderActor::execSetThumbScaleCurve },
			{ "SetTickMarkScale", &AUxtPinchSliderActor::execSetTickMarkScale },
			{ "SetTickSound", &AUxtPinchSliderActor::execSetTickSound },
			{ "SetTitle", &AUxtPinchSliderActor::execSetTitle },
			{ "SetTrackLength", &AUxtPinchSliderActor::execSetTrackLength },
			{ "SetValue", &AUxtPinchSliderActor::execSetValue },
			{ "SetValueTextDecimalPlaces", &AUxtPinchSliderActor::execSetValueTextDecimalPlaces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics
	{
		struct UxtPinchSliderActor_eventGetAlignTextWithZ_Parms
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
	void Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventGetAlignTextWithZ_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventGetAlignTextWithZ_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "// Align the text with the Z axis.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Align the text with the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetAlignTextWithZ", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetAlignTextWithZ_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventGetDefaultThumbColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetDefaultThumbColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "// Default color.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Default color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetDefaultThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetDefaultThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics
	{
		struct UxtPinchSliderActor_eventGetDefaultThumbScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetDefaultThumbScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "// Default thumb scale.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Default thumb scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetDefaultThumbScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetDefaultThumbScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventGetDisabledThumbColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetDisabledThumbColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "// Disabled color.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Disabled color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetDisabledThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetDisabledThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventGetFocusedThumbColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetFocusedThumbColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "// Focused color.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Focused color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetFocusedThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetFocusedThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics
	{
		struct UxtPinchSliderActor_eventGetFocusedThumbScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetFocusedThumbScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "// Focused thumb scale.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Focused thumb scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetFocusedThumbScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetFocusedThumbScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventGetGrabbedThumbColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetGrabbedThumbColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "// Grabbed color.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Grabbed color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetGrabbedThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetGrabbedThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics
	{
		struct UxtPinchSliderActor_eventGetGrabSound_Parms
		{
			USoundCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetGrabSound_Parms, ReturnValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "// Grab sound.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Grab sound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetGrabSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetGrabSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics
	{
		struct UxtPinchSliderActor_eventGetMaxValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Maximum value.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Maximum value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetMaxValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetMaxValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics
	{
		struct UxtPinchSliderActor_eventGetMinValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Minimum value.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Minimum value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetMinValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetMinValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics
	{
		struct UxtPinchSliderActor_eventGetMoveTextWithThumb_Parms
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
	void Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventGetMoveTextWithThumb_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventGetMoveTextWithThumb_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "// Move the text with the thumb.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Move the text with the thumb." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetMoveTextWithThumb", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetMoveTextWithThumb_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics
	{
		struct UxtPinchSliderActor_eventGetNumTickMarks_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetNumTickMarks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "Comment", "// Number of tick marks.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Number of tick marks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetNumTickMarks", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetNumTickMarks_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics
	{
		struct UxtPinchSliderActor_eventGetReleaseSound_Parms
		{
			USoundCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetReleaseSound_Parms, ReturnValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "// Release sound.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Release sound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetReleaseSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetReleaseSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics
	{
		struct UxtPinchSliderActor_eventGetStepWithTickMarks_Parms
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
	void Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventGetStepWithTickMarks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventGetStepWithTickMarks_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Step with tick marks.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Step with tick marks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetStepWithTickMarks", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetStepWithTickMarks_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics
	{
		struct UxtPinchSliderActor_eventGetThumbScaleCurve_Parms
		{
			UCurveFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetThumbScaleCurve_Parms, ReturnValue), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "// Thumb scale curve.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Thumb scale curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetThumbScaleCurve", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetThumbScaleCurve_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics
	{
		struct UxtPinchSliderActor_eventGetTickMarkScale_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetTickMarkScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "Comment", "// Tick mark scale.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Tick mark scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetTickMarkScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetTickMarkScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics
	{
		struct UxtPinchSliderActor_eventGetTickSound_Parms
		{
			USoundCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetTickSound_Parms, ReturnValue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "// Tick sound.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Tick sound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetTickSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetTickSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics
	{
		struct UxtPinchSliderActor_eventGetTitle_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "// Title.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Title." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetTitle", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetTitle_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics
	{
		struct UxtPinchSliderActor_eventGetTrackLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetTrackLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Track length.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Track length." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetTrackLength", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetTrackLength_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics
	{
		struct UxtPinchSliderActor_eventGetValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Value.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics
	{
		struct UxtPinchSliderActor_eventGetValueTextDecimalPlaces_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventGetValueTextDecimalPlaces_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "// Number of decimal places in the value text.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Number of decimal places in the value text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "GetValueTextDecimalPlaces", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventGetValueTextDecimalPlaces_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics
	{
		struct UxtPinchSliderActor_eventOnBeginGrab_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnBeginGrab_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnBeginGrab_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Slider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnBeginGrab", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnBeginGrab_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics
	{
		struct UxtPinchSliderActor_eventOnEndGrab_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnEndGrab_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnEndGrab_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Slider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnEndGrab", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnEndGrab_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnSliderUpdateValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when the slider's value changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Event raised when the slider's value changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnSliderUpdateValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnSliderUpdateValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics
	{
		struct UxtPinchSliderActor_eventOnUpdateState_Parms
		{
			UUxtPinchSliderComponent* Slider;
			EUxtSliderState NewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnUpdateState_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_Slider_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnUpdateState_Parms, NewState), Z_Construct_UEnum_UXTools_EUxtSliderState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_Slider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "//\n// PinchSlider event callbacks.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "PinchSlider event callbacks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnUpdateState", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnUpdateState_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics
	{
		struct UxtPinchSliderActor_eventOnUpdateTimeline_Parms
		{
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnUpdateTimeline_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "//\n// ScaleTimeline event callbacks.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "ScaleTimeline event callbacks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnUpdateTimeline", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnUpdateTimeline_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics
	{
		struct UxtPinchSliderActor_eventOnUpdateValue_Parms
		{
			UUxtPinchSliderComponent* Slider;
			float NewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnUpdateValue_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_Slider_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventOnUpdateValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_Slider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "OnUpdateValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventOnUpdateValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics
	{
		struct UxtPinchSliderActor_eventSetAlignTextWithZ_Parms
		{
			bool bNewAlignTextWithZ;
		};
		static void NewProp_bNewAlignTextWithZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAlignTextWithZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::NewProp_bNewAlignTextWithZ_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventSetAlignTextWithZ_Parms*)Obj)->bNewAlignTextWithZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::NewProp_bNewAlignTextWithZ = { "bNewAlignTextWithZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventSetAlignTextWithZ_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::NewProp_bNewAlignTextWithZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::NewProp_bNewAlignTextWithZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetAlignTextWithZ", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetAlignTextWithZ_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventSetDefaultThumbColor_Parms
		{
			FLinearColor NewDefaultThumbColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDefaultThumbColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::NewProp_NewDefaultThumbColor = { "NewDefaultThumbColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetDefaultThumbColor_Parms, NewDefaultThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::NewProp_NewDefaultThumbColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetDefaultThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetDefaultThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics
	{
		struct UxtPinchSliderActor_eventSetDefaultThumbScale_Parms
		{
			float NewDefaultThumbScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDefaultThumbScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::NewProp_NewDefaultThumbScale = { "NewDefaultThumbScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetDefaultThumbScale_Parms, NewDefaultThumbScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::NewProp_NewDefaultThumbScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetDefaultThumbScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetDefaultThumbScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventSetDisabledThumbColor_Parms
		{
			FLinearColor NewDisabledThumbColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDisabledThumbColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::NewProp_NewDisabledThumbColor = { "NewDisabledThumbColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetDisabledThumbColor_Parms, NewDisabledThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::NewProp_NewDisabledThumbColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetDisabledThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetDisabledThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventSetFocusedThumbColor_Parms
		{
			FLinearColor NewFocusedThumbColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFocusedThumbColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::NewProp_NewFocusedThumbColor = { "NewFocusedThumbColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetFocusedThumbColor_Parms, NewFocusedThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::NewProp_NewFocusedThumbColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetFocusedThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetFocusedThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics
	{
		struct UxtPinchSliderActor_eventSetFocusedThumbScale_Parms
		{
			float NewFocusedThumbScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFocusedThumbScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::NewProp_NewFocusedThumbScale = { "NewFocusedThumbScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetFocusedThumbScale_Parms, NewFocusedThumbScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::NewProp_NewFocusedThumbScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetFocusedThumbScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetFocusedThumbScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics
	{
		struct UxtPinchSliderActor_eventSetGrabbedThumbColor_Parms
		{
			FLinearColor NewGrabbedThumbColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGrabbedThumbColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::NewProp_NewGrabbedThumbColor = { "NewGrabbedThumbColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetGrabbedThumbColor_Parms, NewGrabbedThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::NewProp_NewGrabbedThumbColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetGrabbedThumbColor", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetGrabbedThumbColor_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics
	{
		struct UxtPinchSliderActor_eventSetGrabSound_Parms
		{
			USoundCue* NewGrabSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGrabSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::NewProp_NewGrabSound = { "NewGrabSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetGrabSound_Parms, NewGrabSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::NewProp_NewGrabSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetGrabSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetGrabSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics
	{
		struct UxtPinchSliderActor_eventSetMaxValue_Parms
		{
			float NewMaxValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetMaxValue_Parms, NewMaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::NewProp_NewMaxValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetMaxValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetMaxValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics
	{
		struct UxtPinchSliderActor_eventSetMinValue_Parms
		{
			float NewMinValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMinValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::NewProp_NewMinValue = { "NewMinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetMinValue_Parms, NewMinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::NewProp_NewMinValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetMinValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetMinValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics
	{
		struct UxtPinchSliderActor_eventSetMoveTextWithThumb_Parms
		{
			bool bNewMoveWithThumb;
		};
		static void NewProp_bNewMoveWithThumb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewMoveWithThumb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::NewProp_bNewMoveWithThumb_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventSetMoveTextWithThumb_Parms*)Obj)->bNewMoveWithThumb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::NewProp_bNewMoveWithThumb = { "bNewMoveWithThumb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventSetMoveTextWithThumb_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::NewProp_bNewMoveWithThumb_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::NewProp_bNewMoveWithThumb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetMoveTextWithThumb", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetMoveTextWithThumb_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics
	{
		struct UxtPinchSliderActor_eventSetNumTickMarks_Parms
		{
			int32 NewNumTickMarks;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewNumTickMarks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::NewProp_NewNumTickMarks = { "NewNumTickMarks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetNumTickMarks_Parms, NewNumTickMarks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::NewProp_NewNumTickMarks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetNumTickMarks", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetNumTickMarks_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics
	{
		struct UxtPinchSliderActor_eventSetReleaseSound_Parms
		{
			USoundCue* NewReleaseSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewReleaseSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::NewProp_NewReleaseSound = { "NewReleaseSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetReleaseSound_Parms, NewReleaseSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::NewProp_NewReleaseSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetReleaseSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetReleaseSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics
	{
		struct UxtPinchSliderActor_eventSetStepWithTickMarks_Parms
		{
			bool bNewStepWithTickMarks;
		};
		static void NewProp_bNewStepWithTickMarks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewStepWithTickMarks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::NewProp_bNewStepWithTickMarks_SetBit(void* Obj)
	{
		((UxtPinchSliderActor_eventSetStepWithTickMarks_Parms*)Obj)->bNewStepWithTickMarks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::NewProp_bNewStepWithTickMarks = { "bNewStepWithTickMarks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderActor_eventSetStepWithTickMarks_Parms), &Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::NewProp_bNewStepWithTickMarks_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::NewProp_bNewStepWithTickMarks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetStepWithTickMarks", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetStepWithTickMarks_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics
	{
		struct UxtPinchSliderActor_eventSetThumbScaleCurve_Parms
		{
			UCurveFloat* NewThumbScaleCurve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewThumbScaleCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::NewProp_NewThumbScaleCurve = { "NewThumbScaleCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetThumbScaleCurve_Parms, NewThumbScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::NewProp_NewThumbScaleCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetThumbScaleCurve", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetThumbScaleCurve_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics
	{
		struct UxtPinchSliderActor_eventSetTickMarkScale_Parms
		{
			FVector NewTickMarkScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTickMarkScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::NewProp_NewTickMarkScale = { "NewTickMarkScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetTickMarkScale_Parms, NewTickMarkScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::NewProp_NewTickMarkScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetTickMarkScale", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetTickMarkScale_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics
	{
		struct UxtPinchSliderActor_eventSetTickSound_Parms
		{
			USoundCue* NewTickSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTickSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::NewProp_NewTickSound = { "NewTickSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetTickSound_Parms, NewTickSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::NewProp_NewTickSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetTickSound", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetTickSound_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics
	{
		struct UxtPinchSliderActor_eventSetTitle_Parms
		{
			FText NewTitle;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::NewProp_NewTitle = { "NewTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetTitle_Parms, NewTitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::NewProp_NewTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetTitle", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetTitle_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics
	{
		struct UxtPinchSliderActor_eventSetTrackLength_Parms
		{
			float NewTrackLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTrackLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::NewProp_NewTrackLength = { "NewTrackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetTrackLength_Parms, NewTrackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::NewProp_NewTrackLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetTrackLength", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetTrackLength_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics
	{
		struct UxtPinchSliderActor_eventSetValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetValue", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetValue_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics
	{
		struct UxtPinchSliderActor_eventSetValueTextDecimalPlaces_Parms
		{
			int32 NewValueTextDecimalPlaces;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValueTextDecimalPlaces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::NewProp_NewValueTextDecimalPlaces = { "NewValueTextDecimalPlaces", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderActor_eventSetValueTextDecimalPlaces_Parms, NewValueTextDecimalPlaces), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::NewProp_NewValueTextDecimalPlaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPinchSliderActor, nullptr, "SetValueTextDecimalPlaces", nullptr, nullptr, sizeof(UxtPinchSliderActor_eventSetValueTextDecimalPlaces_Parms), Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtPinchSliderActor_NoRegister()
	{
		return AUxtPinchSliderActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPinchSliderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinchSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickMarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Audio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepWithTickMarks_MetaData[];
#endif
		static void NewProp_bStepWithTickMarks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepWithTickMarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueTextDecimalPlaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ValueTextDecimalPlaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignTextWithZ_MetaData[];
#endif
		static void NewProp_bAlignTextWithZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignTextWithZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveTextWithThumb_MetaData[];
#endif
		static void NewProp_bMoveTextWithThumb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveTextWithThumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTickMarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumTickMarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMarkScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickMarkScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultThumbColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultThumbColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedThumbColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusedThumbColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedThumbColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabbedThumbColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledThumbColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleaseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultThumbScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultThumbScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedThumbScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusedThumbScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbScaleCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPinchSliderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtPinchSliderActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetAlignTextWithZ, "GetAlignTextWithZ" }, // 2145431571
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbColor, "GetDefaultThumbColor" }, // 1638002129
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetDefaultThumbScale, "GetDefaultThumbScale" }, // 1070075337
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetDisabledThumbColor, "GetDisabledThumbColor" }, // 1258670653
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbColor, "GetFocusedThumbColor" }, // 2731064693
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetFocusedThumbScale, "GetFocusedThumbScale" }, // 1472659719
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabbedThumbColor, "GetGrabbedThumbColor" }, // 1814841130
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetGrabSound, "GetGrabSound" }, // 2060038880
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetMaxValue, "GetMaxValue" }, // 2757060433
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetMinValue, "GetMinValue" }, // 2046362682
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetMoveTextWithThumb, "GetMoveTextWithThumb" }, // 279789363
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetNumTickMarks, "GetNumTickMarks" }, // 924470600
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetReleaseSound, "GetReleaseSound" }, // 2651527173
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetStepWithTickMarks, "GetStepWithTickMarks" }, // 4225878684
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetThumbScaleCurve, "GetThumbScaleCurve" }, // 473102728
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetTickMarkScale, "GetTickMarkScale" }, // 3227442376
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetTickSound, "GetTickSound" }, // 2748302554
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetTitle, "GetTitle" }, // 3907398031
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetTrackLength, "GetTrackLength" }, // 1535604763
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetValue, "GetValue" }, // 4183412453
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_GetValueTextDecimalPlaces, "GetValueTextDecimalPlaces" }, // 3840060901
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnBeginGrab, "OnBeginGrab" }, // 3871708792
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnEndGrab, "OnEndGrab" }, // 2098585002
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnSliderUpdateValue, "OnSliderUpdateValue" }, // 3630610922
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateState, "OnUpdateState" }, // 3967125795
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateTimeline, "OnUpdateTimeline" }, // 2457504685
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_OnUpdateValue, "OnUpdateValue" }, // 3660063577
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetAlignTextWithZ, "SetAlignTextWithZ" }, // 4287823646
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbColor, "SetDefaultThumbColor" }, // 2134388760
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetDefaultThumbScale, "SetDefaultThumbScale" }, // 1288489914
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetDisabledThumbColor, "SetDisabledThumbColor" }, // 3958492115
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbColor, "SetFocusedThumbColor" }, // 3539526298
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetFocusedThumbScale, "SetFocusedThumbScale" }, // 3405175642
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabbedThumbColor, "SetGrabbedThumbColor" }, // 3232169035
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetGrabSound, "SetGrabSound" }, // 151973353
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetMaxValue, "SetMaxValue" }, // 3224381934
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetMinValue, "SetMinValue" }, // 3387805992
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetMoveTextWithThumb, "SetMoveTextWithThumb" }, // 1539461918
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetNumTickMarks, "SetNumTickMarks" }, // 3290277002
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetReleaseSound, "SetReleaseSound" }, // 2682195917
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetStepWithTickMarks, "SetStepWithTickMarks" }, // 4081111208
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetThumbScaleCurve, "SetThumbScaleCurve" }, // 2845504120
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetTickMarkScale, "SetTickMarkScale" }, // 93144192
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetTickSound, "SetTickSound" }, // 3946124973
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetTitle, "SetTitle" }, // 70130984
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetTrackLength, "SetTrackLength" }, // 1184885595
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetValue, "SetValue" }, // 1477102280
		{ &Z_Construct_UFunction_AUxtPinchSliderActor_SetValueTextDecimalPlaces, "SetValueTextDecimalPlaces" }, // 1325634503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A simple HoloLens 2 style slider that can be moved by grabbing / pinching a slider thumb.\n * The class is extensible to support additional functionality.\n */" },
		{ "IncludePath", "Controls/UxtPinchSliderActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "A simple HoloLens 2 style slider that can be moved by grabbing / pinching a slider thumb.\nThe class is extensible to support additional functionality." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_PinchSlider_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The slider functionality. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The slider functionality." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_PinchSlider = { "PinchSlider", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, PinchSlider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_PinchSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_PinchSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The thumb visuals. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The thumb visuals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, Thumb), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Thumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Track_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The track visuals. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The track visuals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, Track), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarks_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The tick mark visuals. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The tick mark visuals." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarks = { "TickMarks", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TickMarks), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TextRoot_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** Root text component to allow text to move as a block. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Root text component to allow text to move as a block." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TextRoot = { "TextRoot", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TextRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TextRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TextRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TitleText_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** The title text, configure using the 'Title' property. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The title text, configure using the 'Title' property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TitleText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueText_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** The value text. TODO configure */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The value text. TODO configure" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, ValueText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "/** The audio cues, configure using the 'Slider Sounds' properties. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The audio cues, configure using the 'Slider Sounds' properties." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Audio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ScaleTimeline_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The timeline for scaling the thumb, configuring using the 'Slider Thumb Scaling' properties. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The timeline for scaling the thumb, configuring using the 'Slider Thumb Scaling' properties." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ScaleTimeline = { "ScaleTimeline", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, ScaleTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ScaleTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ScaleTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The slider's initial value. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The slider's initial value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, Value), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MinValue_MetaData[] = {
		{ "BlueprintGetter", "GetMinValue" },
		{ "BlueprintSetter", "SetMinValue" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The slider's minimum value. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The slider's minimum value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, MinValue), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MaxValue_MetaData[] = {
		{ "BlueprintGetter", "GetMaxValue" },
		{ "BlueprintSetter", "SetMaxValue" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The slider's maximum value. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The slider's maximum value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, MaxValue), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TrackLength_MetaData[] = {
		{ "BlueprintGetter", "GetTrackLength" },
		{ "BlueprintSetter", "SetTrackLength" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The length of the slider's track. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The length of the slider's track." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TrackLength = { "TrackLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TrackLength), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TrackLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TrackLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks_MetaData[] = {
		{ "BlueprintGetter", "GetStepWithTickMarks" },
		{ "BlueprintSetter", "SetStepWithTickMarks" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Use stepped movement and step with the tick marks. Requires at least two tick marks. */" },
		{ "EditCondition", "NumTickMarks >= 2" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Use stepped movement and step with the tick marks. Requires at least two tick marks." },
	};
#endif
	void Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks_SetBit(void* Obj)
	{
		((AUxtPinchSliderActor*)Obj)->bStepWithTickMarks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks = { "bStepWithTickMarks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPinchSliderActor), &Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Title_MetaData[] = {
		{ "BlueprintGetter", "GetTitle" },
		{ "BlueprintSetter", "SetTitle" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** The title text. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The title text." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, Title), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueTextDecimalPlaces_MetaData[] = {
		{ "BlueprintGetter", "GetValueTextDecimalPlaces" },
		{ "BlueprintSetter", "SetValueTextDecimalPlaces" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of decimal places to show in the value text. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The number of decimal places to show in the value text." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueTextDecimalPlaces = { "ValueTextDecimalPlaces", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, ValueTextDecimalPlaces), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueTextDecimalPlaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueTextDecimalPlaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ_MetaData[] = {
		{ "BlueprintGetter", "GetAlignTextWithZ" },
		{ "BlueprintSetter", "SetAlignTextWithZ" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** Align the text with the Z axis. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Align the text with the Z axis." },
	};
#endif
	void Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ_SetBit(void* Obj)
	{
		((AUxtPinchSliderActor*)Obj)->bAlignTextWithZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ = { "bAlignTextWithZ", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPinchSliderActor), &Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb_MetaData[] = {
		{ "BlueprintGetter", "GetMoveTextWithThumb" },
		{ "BlueprintSetter", "SetMoveTextWithThumb" },
		{ "Category", "Uxt Pinch Slider|Text" },
		{ "Comment", "/** Move the text with the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "Move the text with the thumb." },
	};
#endif
	void Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb_SetBit(void* Obj)
	{
		((AUxtPinchSliderActor*)Obj)->bMoveTextWithThumb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb = { "bMoveTextWithThumb", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPinchSliderActor), &Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_NumTickMarks_MetaData[] = {
		{ "BlueprintGetter", "GetNumTickMarks" },
		{ "BlueprintSetter", "SetNumTickMarks" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of tick marks along the track. Must be at least two if using Step With Tick Marks. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The number of tick marks along the track. Must be at least two if using Step With Tick Marks." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_NumTickMarks = { "NumTickMarks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, NumTickMarks), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_NumTickMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_NumTickMarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarkScale_MetaData[] = {
		{ "BlueprintGetter", "GetTickMarkScale" },
		{ "BlueprintSetter", "SetTickMarkScale" },
		{ "Category", "Uxt Pinch Slider|TickMarks" },
		{ "Comment", "/** The scale of the tick marks. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The scale of the tick marks." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarkScale = { "TickMarkScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TickMarkScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarkScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarkScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbColor_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultThumbColor" },
		{ "BlueprintSetter", "SetDefaultThumbColor" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The default color for the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The default color for the thumb." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbColor = { "DefaultThumbColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, DefaultThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbColor_MetaData[] = {
		{ "BlueprintGetter", "GetFocusedThumbColor" },
		{ "BlueprintSetter", "SetFocusedThumbColor" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The focused color for the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The focused color for the thumb." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbColor = { "FocusedThumbColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, FocusedThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabbedThumbColor_MetaData[] = {
		{ "BlueprintGetter", "GetGrabbedThumbColor" },
		{ "BlueprintSetter", "SetGrabbedThumbColor" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The grabbed color for the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The grabbed color for the thumb." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabbedThumbColor = { "GrabbedThumbColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, GrabbedThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabbedThumbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabbedThumbColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DisabledThumbColor_MetaData[] = {
		{ "BlueprintGetter", "GetDisabledThumbColor" },
		{ "BlueprintSetter", "SetDisabledThumbColor" },
		{ "Category", "Uxt Pinch Slider|Visuals" },
		{ "Comment", "/** The disabled color for the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The disabled color for the thumb." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DisabledThumbColor = { "DisabledThumbColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, DisabledThumbColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DisabledThumbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DisabledThumbColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabSound_MetaData[] = {
		{ "BlueprintGetter", "GetGrabSound" },
		{ "BlueprintSetter", "SetGrabSound" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "/** The sound played when the slider is grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The sound played when the slider is grabbed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabSound = { "GrabSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, GrabSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ReleaseSound_MetaData[] = {
		{ "BlueprintGetter", "GetReleaseSound" },
		{ "BlueprintSetter", "SetReleaseSound" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "/** The sound played when the slider is released. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The sound played when the slider is released." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ReleaseSound = { "ReleaseSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, ReleaseSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ReleaseSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ReleaseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickSound_MetaData[] = {
		{ "BlueprintGetter", "GetTickSound" },
		{ "BlueprintSetter", "SetTickSound" },
		{ "Category", "Uxt Pinch Slider|Audio" },
		{ "Comment", "/** The sound played when the slider passes a tick mark. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The sound played when the slider passes a tick mark." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickSound = { "TickSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, TickSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbScale_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultThumbScale" },
		{ "BlueprintSetter", "SetDefaultThumbScale" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "/** The default scale for the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The default scale for the thumb." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbScale = { "DefaultThumbScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, DefaultThumbScale), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbScale_MetaData[] = {
		{ "BlueprintGetter", "GetFocusedThumbScale" },
		{ "BlueprintSetter", "SetFocusedThumbScale" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "/** The focused scale of the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The focused scale of the thumb." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbScale = { "FocusedThumbScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, FocusedThumbScale), METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ThumbScaleCurve_MetaData[] = {
		{ "BlueprintGetter", "GetThumbScaleCurve" },
		{ "BlueprintSetter", "SetThumbScaleCurve" },
		{ "Category", "Uxt Pinch Slider|Thumb" },
		{ "Comment", "/** The focused scale of the thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderActor.h" },
		{ "ToolTip", "The focused scale of the thumb." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ThumbScaleCurve = { "ThumbScaleCurve", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPinchSliderActor, ThumbScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ThumbScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ThumbScaleCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPinchSliderActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_PinchSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Thumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Track,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TextRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Audio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ScaleTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TrackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bStepWithTickMarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ValueTextDecimalPlaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bAlignTextWithZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_bMoveTextWithThumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_NumTickMarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickMarkScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabbedThumbColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DisabledThumbColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_GrabSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ReleaseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_TickSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_DefaultThumbScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_FocusedThumbScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPinchSliderActor_Statics::NewProp_ThumbScaleCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPinchSliderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPinchSliderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtPinchSliderActor_Statics::ClassParams = {
		&AUxtPinchSliderActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtPinchSliderActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPinchSliderActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPinchSliderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPinchSliderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtPinchSliderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtPinchSliderActor, 3104086755);
	template<> UXTOOLS_API UClass* StaticClass<AUxtPinchSliderActor>()
	{
		return AUxtPinchSliderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtPinchSliderActor(Z_Construct_UClass_AUxtPinchSliderActor, &AUxtPinchSliderActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtPinchSliderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPinchSliderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
