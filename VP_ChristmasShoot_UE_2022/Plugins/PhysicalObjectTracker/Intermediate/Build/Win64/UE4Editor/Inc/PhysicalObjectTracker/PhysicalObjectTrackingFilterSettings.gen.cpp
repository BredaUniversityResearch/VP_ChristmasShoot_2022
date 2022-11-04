// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalObjectTracker/Public/PhysicalObjectTrackingFilterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalObjectTrackingFilterSettings() {}
// Cross Module References
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_NoRegister();
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PhysicalObjectTracker();
// End Cross Module References
	void UPhysicalObjectTrackingFilterSettings::StaticRegisterNativesUPhysicalObjectTrackingFilterSettings()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_NoRegister()
	{
		return UPhysicalObjectTrackingFilterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSampleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSampleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilterExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinExpectedLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinExpectedLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExpectedLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxExpectedLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinExpectedRotationalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinExpectedRotationalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExpectedRotationalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxExpectedRotationalVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicalObjectTracker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicalObjectTrackingFilterSettings.h" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_TargetSampleCount_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_TargetSampleCount = { "TargetSampleCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, TargetSampleCount), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_TargetSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_TargetSampleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_FilterExponent_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_FilterExponent = { "FilterExponent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, FilterExponent), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_FilterExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_FilterExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedLinearVelocity_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "Comment", "/*Average cm per sample frame.*/" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
		{ "ToolTip", "Average cm per sample frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedLinearVelocity = { "MinExpectedLinearVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, MinExpectedLinearVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedLinearVelocity_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "Comment", "/*Average cm per sample frame.*/" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
		{ "ToolTip", "Average cm per sample frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedLinearVelocity = { "MaxExpectedLinearVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, MaxExpectedLinearVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedRotationalVelocity_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "Comment", "/*Average Degrees per sample frame.*/" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
		{ "ToolTip", "Average Degrees per sample frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedRotationalVelocity = { "MinExpectedRotationalVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, MinExpectedRotationalVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedRotationalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedRotationalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedRotationalVelocity_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingFilterSettings" },
		{ "Comment", "/*Average Degrees per sample frame.*/" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingFilterSettings.h" },
		{ "ToolTip", "Average Degrees per sample frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedRotationalVelocity = { "MaxExpectedRotationalVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingFilterSettings, MaxExpectedRotationalVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedRotationalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedRotationalVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_TargetSampleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_FilterExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MinExpectedRotationalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::NewProp_MaxExpectedRotationalVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalObjectTrackingFilterSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::ClassParams = {
		&UPhysicalObjectTrackingFilterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalObjectTrackingFilterSettings, 160749142);
	template<> PHYSICALOBJECTTRACKER_API UClass* StaticClass<UPhysicalObjectTrackingFilterSettings>()
	{
		return UPhysicalObjectTrackingFilterSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalObjectTrackingFilterSettings(Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings, &UPhysicalObjectTrackingFilterSettings::StaticClass, TEXT("/Script/PhysicalObjectTracker"), TEXT("UPhysicalObjectTrackingFilterSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalObjectTrackingFilterSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
