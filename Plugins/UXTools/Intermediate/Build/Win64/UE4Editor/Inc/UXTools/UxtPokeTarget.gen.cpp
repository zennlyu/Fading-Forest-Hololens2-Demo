// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtPokeTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPokeTarget() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtPokeBehaviour();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EUxtPokeBehaviour_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtPokeBehaviour, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtPokeBehaviour"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtPokeBehaviour>()
	{
		return EUxtPokeBehaviour_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtPokeBehaviour(EUxtPokeBehaviour_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtPokeBehaviour"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtPokeBehaviour_Hash() { return 103358602U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtPokeBehaviour()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtPokeBehaviour"), 0, Get_Z_Construct_UEnum_UXTools_EUxtPokeBehaviour_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtPokeBehaviour::FrontFace", (int64)EUxtPokeBehaviour::FrontFace },
				{ "EUxtPokeBehaviour::Volume", (int64)EUxtPokeBehaviour::Volume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrontFace.Comment", "/** Target represents a plane, only pokable from the front face */" },
				{ "FrontFace.Name", "EUxtPokeBehaviour::FrontFace" },
				{ "FrontFace.ToolTip", "Target represents a plane, only pokable from the front face" },
				{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
				{ "Volume.Comment", "/** Target represents a mesh volume, pokable from all sides */" },
				{ "Volume.Name", "EUxtPokeBehaviour::Volume" },
				{ "Volume.ToolTip", "Target represents a mesh volume, pokable from all sides" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtPokeBehaviour",
				"EUxtPokeBehaviour",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execGetClosestPoint)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClosestPoint_Implementation(Z_Param_Primitive,Z_Param_Out_Point,Z_Param_Out_OutClosestPoint,Z_Param_Out_OutNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execGetPokeBehaviour)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtPokeBehaviour*)Z_Param__Result=P_THIS->GetPokeBehaviour_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execIsPokeFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPokeFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtPokeTarget::GetClosestPoint(const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClosestPoint instead.");
		UxtPokeTarget_eventGetClosestPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	EUxtPokeBehaviour IUxtPokeTarget::GetPokeBehaviour() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPokeBehaviour instead.");
		UxtPokeTarget_eventGetPokeBehaviour_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IUxtPokeTarget::IsPokeFocusable(const UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPokeFocusable instead.");
		UxtPokeTarget_eventIsPokeFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUxtPokeTarget::StaticRegisterNativesUUxtPokeTarget()
	{
		UClass* Class = UUxtPokeTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClosestPoint", &IUxtPokeTarget::execGetClosestPoint },
			{ "GetPokeBehaviour", &IUxtPokeTarget::execGetPokeBehaviour },
			{ "IsPokeFocusable", &IUxtPokeTarget::execIsPokeFocusable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutClosestPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNormal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetClosestPoint_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Primitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetClosestPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_OutClosestPoint = { "OutClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetClosestPoint_Parms, OutClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetClosestPoint_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPokeTarget_eventGetClosestPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPokeTarget_eventGetClosestPoint_Parms), &Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_OutClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_OutNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Target" },
		{ "Comment", "/** Returns the closest point to Point on the given Primitive. Also provides the surface normal. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Returns the closest point to Point on the given Primitive. Also provides the surface normal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "GetClosestPoint", nullptr, nullptr, sizeof(UxtPokeTarget_eventGetClosestPoint_Parms), Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetPokeBehaviour_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtPokeBehaviour, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Target" },
		{ "Comment", "/** Returns which poke behaviour this target supports. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Returns which poke behaviour this target supports." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "GetPokeBehaviour", nullptr, nullptr, sizeof(UxtPokeTarget_eventGetPokeBehaviour_Parms), Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventIsPokeFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPokeTarget_eventIsPokeFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPokeTarget_eventIsPokeFocusable_Parms), &Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Poke Target" },
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "IsPokeFocusable", nullptr, nullptr, sizeof(UxtPokeTarget_eventIsPokeFocusable_Parms), Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister()
	{
		return UUxtPokeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPokeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPokeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPokeTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPokeTarget_GetClosestPoint, "GetClosestPoint" }, // 1810761327
		{ &Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour, "GetPokeBehaviour" }, // 4269480336
		{ &Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable, "IsPokeFocusable" }, // 1125880151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPokeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtPokeTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtPokeTarget_Statics::ClassParams = {
		&UUxtPokeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPokeTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtPokeTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtPokeTarget, 677705983);
	template<> UXTOOLS_API UClass* StaticClass<UUxtPokeTarget>()
	{
		return UUxtPokeTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtPokeTarget(Z_Construct_UClass_UUxtPokeTarget, &UUxtPokeTarget::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtPokeTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPokeTarget);
	static FName NAME_UUxtPokeTarget_GetClosestPoint = FName(TEXT("GetClosestPoint"));
	bool IUxtPokeTarget::Execute_GetClosestPoint(const UObject* O, const UPrimitiveComponent* Primitive, FVector const& Point, FVector& OutClosestPoint, FVector& OutNormal)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventGetClosestPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_GetClosestPoint);
		if (Func)
		{
			Parms.Primitive=Primitive;
			Parms.Point=Point;
			Parms.OutClosestPoint=OutClosestPoint;
			Parms.OutNormal=OutNormal;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutClosestPoint=Parms.OutClosestPoint;
			OutNormal=Parms.OutNormal;
		}
		else if (auto I = (const IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			Parms.ReturnValue = I->GetClosestPoint_Implementation(Primitive,Point,OutClosestPoint,OutNormal);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtPokeTarget_GetPokeBehaviour = FName(TEXT("GetPokeBehaviour"));
	EUxtPokeBehaviour IUxtPokeTarget::Execute_GetPokeBehaviour(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventGetPokeBehaviour_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_GetPokeBehaviour);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			Parms.ReturnValue = I->GetPokeBehaviour_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtPokeTarget_IsPokeFocusable = FName(TEXT("IsPokeFocusable"));
	bool IUxtPokeTarget::Execute_IsPokeFocusable(const UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventIsPokeFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_IsPokeFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsPokeFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
