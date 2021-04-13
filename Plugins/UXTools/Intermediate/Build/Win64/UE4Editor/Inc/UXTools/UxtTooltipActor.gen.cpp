// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Tooltips/UxtTooltipActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTooltipActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtTooltipActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtTooltipActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	DEFINE_FUNCTION(AUxtTooltipActor::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtTooltipActor::execSetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UActorComponent,Z_Param_TargetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_TargetActor,Z_Param_TargetComponent);
		P_NATIVE_END;
	}
	void AUxtTooltipActor::StaticRegisterNativesAUxtTooltipActor()
	{
		UClass* Class = AUxtTooltipActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTarget", &AUxtTooltipActor::execSetTarget },
			{ "SetText", &AUxtTooltipActor::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics
	{
		struct UxtTooltipActor_eventSetTarget_Parms
		{
			AActor* TargetActor;
			UActorComponent* TargetComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTooltipActor_eventSetTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTooltipActor_eventSetTarget_Parms, TargetComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::NewProp_TargetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/**\n\x09 * Function used to set the target actor/component at runtime.\n\x09 * It is possible to only provide an actor without its component.\n\x09 * This will result in pointing to the root component.\n\x09 * The tooltip will automatically parent itself to the target actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Function used to set the target actor/component at runtime.\nIt is possible to only provide an actor without its component.\nThis will result in pointing to the root component.\nThe tooltip will automatically parent itself to the target actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtTooltipActor, nullptr, "SetTarget", nullptr, nullptr, sizeof(UxtTooltipActor_eventSetTarget_Parms), Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtTooltipActor_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtTooltipActor_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics
	{
		struct UxtTooltipActor_eventSetText_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTooltipActor_eventSetText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** Function used to set the text without creating a new widget class.*/" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Function used to set the text without creating a new widget class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtTooltipActor, nullptr, "SetText", nullptr, nullptr, sizeof(UxtTooltipActor_eventSetText_Parms), Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtTooltipActor_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtTooltipActor_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtTooltipActor_NoRegister()
	{
		return AUxtTooltipActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtTooltipActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anchor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackPlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBillboarding_MetaData[];
#endif
		static void NewProp_bIsBillboarding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBillboarding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoAnchoring_MetaData[];
#endif
		static void NewProp_bIsAutoAnchoring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoAnchoring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Margin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtTooltipActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtTooltipActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtTooltipActor_SetTarget, "SetTarget" }, // 1156884618
		{ &Z_Construct_UFunction_AUxtTooltipActor_SetText, "SetText" }, // 2913895564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools - Experimental" },
		{ "Comment", "/**\n * Tooltip Actor. This object represents a tooltip in the 3D world.\n *\n * The tooltip can point to an Actor/Component and it will draw a line between the two.\n * The tooltip will automatically parent itself to the target.\n *\n * The tooltip is designed for text but it allows the user to set any Blueprint Widget.\n * If you don't want to create a new Widget Blueprint, you can use the SetText function which will use a C++ slate widget.\n *\n * The Tooltip Actor's component hierarchy looks like this.\n * Tooltip\n *        |_SceneRoot\n *                   |_BackPlate\n *                   |_TooltipWidgetComponent\n *...................|_Anchor\n *                   |_SplineMeshComponent\n *\n * The SplineMeshComponent is used to draw the line between the tooltip and the target actor.\n *\n * The Anchor allows the user to provide an offset to the target to control the end of the spline.\n *\n * The tooltip with auto anchoring mode will try to bind the spline to the sides/corners of the widget.\n *\n * The tooltip is also \"billboarded\" to the camera.\n *\n * When no blueprint widget has been configured, the tooltip reverts to a slate widget printing some default text.\n *\n * There's a Margin property that can be used to add space between the text and the border of the back plate.\n */" },
		{ "HideCategories", "Object LOD Physics Materials StaticMesh Default Collision" },
		{ "IncludePath", "Tooltips/UxtTooltipActor.h" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Tooltip Actor. This object represents a tooltip in the 3D world.\n\nThe tooltip can point to an Actor/Component and it will draw a line between the two.\nThe tooltip will automatically parent itself to the target.\n\nThe tooltip is designed for text but it allows the user to set any Blueprint Widget.\nIf you don't want to create a new Widget Blueprint, you can use the SetText function which will use a C++ slate widget.\n\nThe Tooltip Actor's component hierarchy looks like this.\nTooltip\n       |_SceneRoot\n                  |_BackPlate\n                  |_TooltipWidgetComponent\n...................|_Anchor\n                  |_SplineMeshComponent\n\nThe SplineMeshComponent is used to draw the line between the tooltip and the target actor.\n\nThe Anchor allows the user to provide an offset to the target to control the end of the spline.\n\nThe tooltip with auto anchoring mode will try to bind the spline to the sides/corners of the widget.\n\nThe tooltip is also \"billboarded\" to the camera.\n\nWhen no blueprint widget has been configured, the tooltip reverts to a slate widget printing some default text.\n\nThere's a Margin property that can be used to add space between the text and the border of the back plate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** The widget rendered by this tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "The widget rendered by this tooltip." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Anchor_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** An offset on the target position. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "An offset on the target position." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, Anchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Anchor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** Actor root component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Actor root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipWidgetComponent_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** The actual widget component that gets created.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "The actual widget component that gets created." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipWidgetComponent = { "TooltipWidgetComponent", nullptr, (EPropertyFlags)0x00400400000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, TooltipWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_BackPlate_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** The back plate which frames the widget component.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "The back plate which frames the widget component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_BackPlate = { "BackPlate", nullptr, (EPropertyFlags)0x00400400000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, BackPlate), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_BackPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_BackPlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** Whether the tooltip is always facing the camera. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Whether the tooltip is always facing the camera." },
	};
#endif
	void Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding_SetBit(void* Obj)
	{
		((AUxtTooltipActor*)Obj)->bIsBillboarding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding = { "bIsBillboarding", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtTooltipActor), &Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** Whether the tooltip uses edges/corners anchors instead of the center of the tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Whether the tooltip uses edges/corners anchors instead of the center of the tooltip." },
	};
#endif
	void Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring_SetBit(void* Obj)
	{
		((AUxtTooltipActor*)Obj)->bIsAutoAnchoring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring = { "bIsAutoAnchoring", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtTooltipActor), &Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SplineMeshComponent_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SplineMeshComponent = { "SplineMeshComponent", nullptr, (EPropertyFlags)0x00400400000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SplineMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SplineMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipTarget_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** The target actor/component pointed at by this tooltip. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "The target actor/component pointed at by this tooltip." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipTarget = { "TooltipTarget", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, TooltipTarget), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Uxt Tooltip - Experimental" },
		{ "Comment", "/** Margin adds a small margin around the text. */" },
		{ "ModuleRelativePath", "Public/Tooltips/UxtTooltipActor.h" },
		{ "ToolTip", "Margin adds a small margin around the text." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtTooltipActor, Margin), METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Margin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtTooltipActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Anchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_BackPlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsBillboarding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_bIsAutoAnchoring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_SplineMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_TooltipTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtTooltipActor_Statics::NewProp_Margin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtTooltipActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtTooltipActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtTooltipActor_Statics::ClassParams = {
		&AUxtTooltipActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtTooltipActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtTooltipActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtTooltipActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtTooltipActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtTooltipActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtTooltipActor, 1782693270);
	template<> UXTOOLS_API UClass* StaticClass<AUxtTooltipActor>()
	{
		return AUxtTooltipActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtTooltipActor(Z_Construct_UClass_AUxtTooltipActor, &AUxtTooltipActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtTooltipActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtTooltipActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
