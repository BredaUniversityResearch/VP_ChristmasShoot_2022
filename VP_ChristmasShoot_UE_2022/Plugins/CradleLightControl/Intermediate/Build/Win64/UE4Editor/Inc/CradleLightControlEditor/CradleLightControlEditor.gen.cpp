// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControlEditor/Public/CradleLightControlEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCradleLightControlEditor() {}
// Cross Module References
	CRADLELIGHTCONTROLEDITOR_API UEnum* Z_Construct_UEnum_CradleLightControlEditor_EIconType();
	UPackage* Z_Construct_UPackage__Script_CradleLightControlEditor();
// End Cross Module References
	static UEnum* EIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControlEditor_EIconType, Z_Construct_UPackage__Script_CradleLightControlEditor(), TEXT("EIconType"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROLEDITOR_API UEnum* StaticEnum<EIconType>()
	{
		return EIconType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIconType(EIconType_StaticEnum, TEXT("/Script/CradleLightControlEditor"), TEXT("EIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControlEditor_EIconType_Hash() { return 508608621U; }
	UEnum* Z_Construct_UEnum_CradleLightControlEditor_EIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControlEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIconType"), 0, Get_Z_Construct_UEnum_CradleLightControlEditor_EIconType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GeneralLightOff", (int64)GeneralLightOff },
				{ "GeneralLightOn", (int64)GeneralLightOn },
				{ "GeneralLightUndetermined", (int64)GeneralLightUndetermined },
				{ "SkyLightOff", (int64)SkyLightOff },
				{ "SkyLightOn", (int64)SkyLightOn },
				{ "SkyLightUndetermined", (int64)SkyLightUndetermined },
				{ "SpotLightOff", (int64)SpotLightOff },
				{ "SpotLightOn", (int64)SpotLightOn },
				{ "SpotLightUndetermined", (int64)SpotLightUndetermined },
				{ "DirectionalLightOff", (int64)DirectionalLightOff },
				{ "DirectionalLightOn", (int64)DirectionalLightOn },
				{ "DirectionalLightUndetermined", (int64)DirectionalLightUndetermined },
				{ "PointLightOff", (int64)PointLightOff },
				{ "PointLightOn", (int64)PointLightOn },
				{ "PointLightUndetermined", (int64)PointLightUndetermined },
				{ "FolderClosed", (int64)FolderClosed },
				{ "FolderOpened", (int64)FolderOpened },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DirectionalLightOff.Name", "DirectionalLightOff" },
				{ "DirectionalLightOn.Name", "DirectionalLightOn" },
				{ "DirectionalLightUndetermined.Name", "DirectionalLightUndetermined" },
				{ "FolderClosed.Name", "FolderClosed" },
				{ "FolderOpened.Name", "FolderOpened" },
				{ "GeneralLightOff.Name", "GeneralLightOff" },
				{ "GeneralLightOn.Name", "GeneralLightOn" },
				{ "GeneralLightUndetermined.Name", "GeneralLightUndetermined" },
				{ "ModuleRelativePath", "Public/CradleLightControlEditor.h" },
				{ "PointLightOff.Name", "PointLightOff" },
				{ "PointLightOn.Name", "PointLightOn" },
				{ "PointLightUndetermined.Name", "PointLightUndetermined" },
				{ "SkyLightOff.Name", "SkyLightOff" },
				{ "SkyLightOn.Name", "SkyLightOn" },
				{ "SkyLightUndetermined.Name", "SkyLightUndetermined" },
				{ "SpotLightOff.Name", "SpotLightOff" },
				{ "SpotLightOn.Name", "SpotLightOn" },
				{ "SpotLightUndetermined.Name", "SpotLightUndetermined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControlEditor,
				nullptr,
				"EIconType",
				"EIconType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
