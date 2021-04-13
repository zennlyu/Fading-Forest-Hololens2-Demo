// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtInteractionMode_generated_h
#error "UxtInteractionMode.generated.h already included, missing '#pragma once' in UxtInteractionMode.h"
#endif
#define UXTOOLS_UxtInteractionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h


#define FOREACH_ENUM_EUXTGRABMODE(op) \
	op(EUxtGrabMode::None) \
	op(EUxtGrabMode::OneHanded) \
	op(EUxtGrabMode::TwoHanded) 

enum class EUxtGrabMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtGrabMode>();

#define FOREACH_ENUM_EUXTINTERACTIONMODE(op) \
	op(EUxtInteractionMode::None) \
	op(EUxtInteractionMode::Near) \
	op(EUxtInteractionMode::Far) 

enum class EUxtInteractionMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtInteractionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
