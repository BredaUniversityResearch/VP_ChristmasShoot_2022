// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/LightControlLoadingResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightControlLoadingResult() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UEnum* Z_Construct_UEnum_CradleLightControl_ELightControlLoadingResult();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
// End Cross Module References
	static UEnum* ELightControlLoadingResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControl_ELightControlLoadingResult, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("ELightControlLoadingResult"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<ELightControlLoadingResult>()
	{
		return ELightControlLoadingResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELightControlLoadingResult(ELightControlLoadingResult_StaticEnum, TEXT("/Script/CradleLightControl"), TEXT("ELightControlLoadingResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControl_ELightControlLoadingResult_Hash() { return 331553381U; }
	UEnum* Z_Construct_UEnum_CradleLightControl_ELightControlLoadingResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELightControlLoadingResult"), 0, Get_Z_Construct_UEnum_CradleLightControl_ELightControlLoadingResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELightControlLoadingResult::Success", (int64)ELightControlLoadingResult::Success },
				{ "ELightControlLoadingResult::LightNotFound", (int64)ELightControlLoadingResult::LightNotFound },
				{ "ELightControlLoadingResult::InvalidType", (int64)ELightControlLoadingResult::InvalidType },
				{ "ELightControlLoadingResult::EngineError", (int64)ELightControlLoadingResult::EngineError },
				{ "ELightControlLoadingResult::MultipleErrors", (int64)ELightControlLoadingResult::MultipleErrors },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EngineError.Name", "ELightControlLoadingResult::EngineError" },
				{ "InvalidType.Name", "ELightControlLoadingResult::InvalidType" },
				{ "LightNotFound.Name", "ELightControlLoadingResult::LightNotFound" },
				{ "ModuleRelativePath", "Public/LightControlLoadingResult.h" },
				{ "MultipleErrors.Name", "ELightControlLoadingResult::MultipleErrors" },
				{ "Success.Name", "ELightControlLoadingResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControl,
				nullptr,
				"ELightControlLoadingResult",
				"ELightControlLoadingResult",
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
