// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRADLELIGHTCONTROL_LightControlNetworkEnums_generated_h
#error "LightControlNetworkEnums.generated.h already included, missing '#pragma once' in LightControlNetworkEnums.h"
#endif
#define CRADLELIGHTCONTROL_LightControlNetworkEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VP_ChristmasShoot_UE_2022_Plugins_CradleLightControl_Source_CradleLightControl_Public_LightControlNetworkEnums_h


#define FOREACH_ENUM_EDATASET(op) \
	op(EDataSet::VirtualLights) \
	op(EDataSet::DMXLights) 

enum class EDataSet : uint8;
template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<EDataSet>();

#define FOREACH_ENUM_EPROPERTY(op) \
	op(EProperty::State) \
	op(EProperty::Intensity) \
	op(EProperty::Hue) \
	op(EProperty::Saturation) \
	op(EProperty::UseTemperature) \
	op(EProperty::Temperature) \
	op(EProperty::Horizontal) \
	op(EProperty::Vertical) \
	op(EProperty::OuterConeAngle) \
	op(EProperty::InnerConeAngle) 

enum class EProperty : uint8;
template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<EProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
