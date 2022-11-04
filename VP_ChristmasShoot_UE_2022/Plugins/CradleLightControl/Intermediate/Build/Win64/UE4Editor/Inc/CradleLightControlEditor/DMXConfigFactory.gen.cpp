// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControlEditor/Private/DMXConfigFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXConfigFactory() {}
// Cross Module References
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UDMXConfigFactory_NoRegister();
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UDMXConfigFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CradleLightControlEditor();
// End Cross Module References
	void UDMXConfigFactory::StaticRegisterNativesUDMXConfigFactory()
	{
	}
	UClass* Z_Construct_UClass_UDMXConfigFactory_NoRegister()
	{
		return UDMXConfigFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXConfigFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXConfigFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControlEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXConfigFactory.h" },
		{ "ModuleRelativePath", "Private/DMXConfigFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXConfigFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXConfigFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDMXConfigFactory_Statics::ClassParams = {
		&UDMXConfigFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXConfigFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXConfigFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDMXConfigFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDMXConfigFactory, 3537142571);
	template<> CRADLELIGHTCONTROLEDITOR_API UClass* StaticClass<UDMXConfigFactory>()
	{
		return UDMXConfigFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDMXConfigFactory(Z_Construct_UClass_UDMXConfigFactory, &UDMXConfigFactory::StaticClass, TEXT("/Script/CradleLightControlEditor"), TEXT("UDMXConfigFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXConfigFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
