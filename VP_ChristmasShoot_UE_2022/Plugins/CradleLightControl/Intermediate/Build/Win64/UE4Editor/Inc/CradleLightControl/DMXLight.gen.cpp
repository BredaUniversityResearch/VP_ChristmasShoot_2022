// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/DMXLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXLight() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UDMXLight_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UDMXLight();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UDMXConfigAsset_NoRegister();
// End Cross Module References
	void UDMXLight::StaticRegisterNativesUDMXLight()
	{
	}
	UClass* Z_Construct_UClass_UDMXLight_NoRegister()
	{
		return UDMXLight::StaticClass();
	}
	struct Z_Construct_UClass_UDMXLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_StartingChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDMXEnabled_MetaData[];
#endif
		static void NewProp_bDMXEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDMXEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLight,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Extension of UBaseLight which represents a DMX light fixture.\n// Meant to be used with the DMX control tool and its UToolData\n// Overrides setter functions to also update the relevant DMX channels based on the set starting channel and DMXConfig asset\n" },
		{ "IncludePath", "DMXLight.h" },
		{ "ModuleRelativePath", "Public/DMXLight.h" },
		{ "ToolTip", "Extension of UBaseLight which represents a DMX light fixture.\nMeant to be used with the DMX control tool and its UToolData\nOverrides setter functions to also update the relevant DMX channels based on the set starting channel and DMXConfig asset" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLight_Statics::NewProp_StartingChannel_MetaData[] = {
		{ "Category", "DMXLight" },
		{ "Comment", "// The first channel to be affected by this DMX fixture. NOT 0-based.\n// Starting channel 1 will correlate to the first channel in the protocol. \n" },
		{ "ModuleRelativePath", "Public/DMXLight.h" },
		{ "ToolTip", "The first channel to be affected by this DMX fixture. NOT 0-based.\nStarting channel 1 will correlate to the first channel in the protocol." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXLight_Statics::NewProp_StartingChannel = { "StartingChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXLight, StartingChannel), METADATA_PARAMS(Z_Construct_UClass_UDMXLight_Statics::NewProp_StartingChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLight_Statics::NewProp_StartingChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled_MetaData[] = {
		{ "Category", "DMXLight" },
		{ "Comment", "// Is this fixture enabled to send DMX signals?\n" },
		{ "ModuleRelativePath", "Public/DMXLight.h" },
		{ "ToolTip", "Is this fixture enabled to send DMX signals?" },
	};
#endif
	void Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled_SetBit(void* Obj)
	{
		((UDMXLight*)Obj)->bDMXEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled = { "bDMXEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDMXLight), &Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLight_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "DMXLight" },
		{ "Comment", "// Reference to the config asset to use with this fixture.\n" },
		{ "ModuleRelativePath", "Public/DMXLight.h" },
		{ "ToolTip", "Reference to the config asset to use with this fixture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMXLight_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXLight, Config), Z_Construct_UClass_UDMXConfigAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXLight_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLight_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLight_Statics::NewProp_StartingChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLight_Statics::NewProp_bDMXEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLight_Statics::NewProp_Config,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDMXLight_Statics::ClassParams = {
		&UDMXLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLight_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDMXLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDMXLight, 2058168045);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<UDMXLight>()
	{
		return UDMXLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDMXLight(Z_Construct_UClass_UDMXLight, &UDMXLight::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("UDMXLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
