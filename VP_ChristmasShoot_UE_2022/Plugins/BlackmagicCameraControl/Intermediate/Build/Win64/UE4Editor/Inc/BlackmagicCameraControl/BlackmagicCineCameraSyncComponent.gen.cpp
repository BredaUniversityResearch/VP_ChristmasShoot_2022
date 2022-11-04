// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BlackmagicCineCameraSyncComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicCineCameraSyncComponent() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_NoRegister();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBlackmagicCineCameraSyncComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
// End Cross Module References
	void UBlackmagicCineCameraSyncComponent::StaticRegisterNativesUBlackmagicCineCameraSyncComponent()
	{
	}
	UClass* Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_NoRegister()
	{
		return UBlackmagicCineCameraSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "VirtualProduction" },
		{ "IncludePath", "BlackmagicCineCameraSyncComponent.h" },
		{ "ModuleRelativePath", "Public/BlackmagicCineCameraSyncComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicCineCameraSyncComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::ClassParams = {
		&UBlackmagicCineCameraSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicCineCameraSyncComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackmagicCineCameraSyncComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackmagicCineCameraSyncComponent, 1805356529);
	template<> BLACKMAGICCAMERACONTROL_API UClass* StaticClass<UBlackmagicCineCameraSyncComponent>()
	{
		return UBlackmagicCineCameraSyncComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackmagicCineCameraSyncComponent(Z_Construct_UClass_UBlackmagicCineCameraSyncComponent, &UBlackmagicCineCameraSyncComponent::StaticClass, TEXT("/Script/BlackmagicCameraControl"), TEXT("UBlackmagicCineCameraSyncComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicCineCameraSyncComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
