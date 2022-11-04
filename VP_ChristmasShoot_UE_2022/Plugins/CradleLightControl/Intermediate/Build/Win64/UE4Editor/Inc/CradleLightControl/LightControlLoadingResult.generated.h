// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRADLELIGHTCONTROL_LightControlLoadingResult_generated_h
#error "LightControlLoadingResult.generated.h already included, missing '#pragma once' in LightControlLoadingResult.h"
#endif
#define CRADLELIGHTCONTROL_LightControlLoadingResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VP_ChristmasShoot_UE_2022_Plugins_CradleLightControl_Source_CradleLightControl_Public_LightControlLoadingResult_h


#define FOREACH_ENUM_ELIGHTCONTROLLOADINGRESULT(op) \
	op(ELightControlLoadingResult::Success) \
	op(ELightControlLoadingResult::LightNotFound) \
	op(ELightControlLoadingResult::InvalidType) \
	op(ELightControlLoadingResult::EngineError) \
	op(ELightControlLoadingResult::MultipleErrors) 

enum class ELightControlLoadingResult : uint8;
template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<ELightControlLoadingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
