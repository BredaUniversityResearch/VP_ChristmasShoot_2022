// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/VirtualLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualLight() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UVirtualLight_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UVirtualLight();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
// End Cross Module References
	void UVirtualLight::StaticRegisterNativesUVirtualLight()
	{
	}
	UClass* Z_Construct_UClass_UVirtualLight_NoRegister()
	{
		return UVirtualLight::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLight,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VirtualLight.h" },
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((UVirtualLight*)Obj)->bCastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualLight), &Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualLight_Statics::NewProp_bCastShadows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualLight_Statics::ClassParams = {
		&UVirtualLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualLight_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualLight, 3926608216);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<UVirtualLight>()
	{
		return UVirtualLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualLight(Z_Construct_UClass_UVirtualLight, &UVirtualLight::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("UVirtualLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
