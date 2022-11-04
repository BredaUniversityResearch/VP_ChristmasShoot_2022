// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/LightControlNetworkEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightControlNetworkEnums() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UEnum* Z_Construct_UEnum_CradleLightControl_EDataSet();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UEnum* Z_Construct_UEnum_CradleLightControl_EProperty();
// End Cross Module References
	static UEnum* EDataSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControl_EDataSet, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("EDataSet"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<EDataSet>()
	{
		return EDataSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataSet(EDataSet_StaticEnum, TEXT("/Script/CradleLightControl"), TEXT("EDataSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControl_EDataSet_Hash() { return 3048330837U; }
	UEnum* Z_Construct_UEnum_CradleLightControl_EDataSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataSet"), 0, Get_Z_Construct_UEnum_CradleLightControl_EDataSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataSet::VirtualLights", (int64)EDataSet::VirtualLights },
				{ "EDataSet::DMXLights", (int64)EDataSet::DMXLights },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DMXLights.Name", "EDataSet::DMXLights" },
				{ "ModuleRelativePath", "Public/LightControlNetworkEnums.h" },
				{ "VirtualLights.Name", "EDataSet::VirtualLights" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControl,
				nullptr,
				"EDataSet",
				"EDataSet",
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
	static UEnum* EProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControl_EProperty, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("EProperty"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<EProperty>()
	{
		return EProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProperty(EProperty_StaticEnum, TEXT("/Script/CradleLightControl"), TEXT("EProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControl_EProperty_Hash() { return 2085337767U; }
	UEnum* Z_Construct_UEnum_CradleLightControl_EProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProperty"), 0, Get_Z_Construct_UEnum_CradleLightControl_EProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProperty::State", (int64)EProperty::State },
				{ "EProperty::Intensity", (int64)EProperty::Intensity },
				{ "EProperty::Hue", (int64)EProperty::Hue },
				{ "EProperty::Saturation", (int64)EProperty::Saturation },
				{ "EProperty::UseTemperature", (int64)EProperty::UseTemperature },
				{ "EProperty::Temperature", (int64)EProperty::Temperature },
				{ "EProperty::Horizontal", (int64)EProperty::Horizontal },
				{ "EProperty::Vertical", (int64)EProperty::Vertical },
				{ "EProperty::OuterConeAngle", (int64)EProperty::OuterConeAngle },
				{ "EProperty::InnerConeAngle", (int64)EProperty::InnerConeAngle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Horizontal.Name", "EProperty::Horizontal" },
				{ "Hue.Name", "EProperty::Hue" },
				{ "InnerConeAngle.Name", "EProperty::InnerConeAngle" },
				{ "Intensity.Name", "EProperty::Intensity" },
				{ "ModuleRelativePath", "Public/LightControlNetworkEnums.h" },
				{ "OuterConeAngle.Name", "EProperty::OuterConeAngle" },
				{ "Saturation.Name", "EProperty::Saturation" },
				{ "State.Name", "EProperty::State" },
				{ "Temperature.Name", "EProperty::Temperature" },
				{ "UseTemperature.Name", "EProperty::UseTemperature" },
				{ "Vertical.Name", "EProperty::Vertical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControl,
				nullptr,
				"EProperty",
				"EProperty",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
