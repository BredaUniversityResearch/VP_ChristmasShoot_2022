// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCCallbackHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCCallbackHandler() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCCallbackHandler_NoRegister();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCCallbackHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
// End Cross Module References
	void UBMCCCallbackHandler::StaticRegisterNativesUBMCCCallbackHandler()
	{
	}
	UClass* Z_Construct_UClass_UBMCCCallbackHandler_NoRegister()
	{
		return UBMCCCallbackHandler::StaticClass();
	}
	struct Z_Construct_UClass_UBMCCCallbackHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBMCCCallbackHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCCallbackHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BMCCCallbackHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBMCCCallbackHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBMCCCallbackHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBMCCCallbackHandler_Statics::ClassParams = {
		&UBMCCCallbackHandler::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBMCCCallbackHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCCallbackHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBMCCCallbackHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBMCCCallbackHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBMCCCallbackHandler, 3297946077);
	template<> BLACKMAGICCAMERACONTROL_API UClass* StaticClass<UBMCCCallbackHandler>()
	{
		return UBMCCCallbackHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBMCCCallbackHandler(Z_Construct_UClass_UBMCCCallbackHandler, &UBMCCCallbackHandler::StaticClass, TEXT("/Script/BlackmagicCameraControl"), TEXT("UBMCCCallbackHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBMCCCallbackHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
