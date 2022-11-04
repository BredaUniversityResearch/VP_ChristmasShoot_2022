// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCLens.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCLens() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCFixed16();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_Focus();
// End Cross Module References

static_assert(std::is_polymorphic<FBMCCLens_SetContinuousZoom>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_SetContinuousZoom cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_SetContinuousZoom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_SetContinuousZoom"), sizeof(FBMCCLens_SetContinuousZoom), Get_Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_SetContinuousZoom>()
{
	return FBMCCLens_SetContinuousZoom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_SetContinuousZoom(FBMCCLens_SetContinuousZoom::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_SetContinuousZoom"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetContinuousZoom
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetContinuousZoom()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_SetContinuousZoom>(FName(TEXT("BMCCLens_SetContinuousZoom")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetContinuousZoom;
	struct Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_SetContinuousZoom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "BMCCLens_SetContinuousZoom" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_SetContinuousZoom, ZoomSpeed), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewProp_ZoomSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::NewProp_ZoomSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_SetContinuousZoom",
		sizeof(FBMCCLens_SetContinuousZoom),
		alignof(FBMCCLens_SetContinuousZoom),
		Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_SetContinuousZoom"), sizeof(FBMCCLens_SetContinuousZoom), Get_Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom_Hash() { return 4231795859U; }

static_assert(std::is_polymorphic<FBMCCLens_SetAbsoluteZoomNormalized>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_SetAbsoluteZoomNormalized cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_SetAbsoluteZoomNormalized::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_SetAbsoluteZoomNormalized"), sizeof(FBMCCLens_SetAbsoluteZoomNormalized), Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_SetAbsoluteZoomNormalized>()
{
	return FBMCCLens_SetAbsoluteZoomNormalized::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized(FBMCCLens_SetAbsoluteZoomNormalized::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_SetAbsoluteZoomNormalized"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomNormalized
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomNormalized()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_SetAbsoluteZoomNormalized>(FName(TEXT("BMCCLens_SetAbsoluteZoomNormalized")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomNormalized;
	struct Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomNormalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomNormalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_SetAbsoluteZoomNormalized>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewProp_ZoomNormalized_MetaData[] = {
		{ "Category", "BMCCLens_SetAbsoluteZoomNormalized" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewProp_ZoomNormalized = { "ZoomNormalized", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_SetAbsoluteZoomNormalized, ZoomNormalized), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewProp_ZoomNormalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewProp_ZoomNormalized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::NewProp_ZoomNormalized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_SetAbsoluteZoomNormalized",
		sizeof(FBMCCLens_SetAbsoluteZoomNormalized),
		alignof(FBMCCLens_SetAbsoluteZoomNormalized),
		Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_SetAbsoluteZoomNormalized"), sizeof(FBMCCLens_SetAbsoluteZoomNormalized), Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized_Hash() { return 3561073693U; }

static_assert(std::is_polymorphic<FBMCCLens_SetAbsoluteZoomMm>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_SetAbsoluteZoomMm cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_SetAbsoluteZoomMm::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_SetAbsoluteZoomMm"), sizeof(FBMCCLens_SetAbsoluteZoomMm), Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_SetAbsoluteZoomMm>()
{
	return FBMCCLens_SetAbsoluteZoomMm::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm(FBMCCLens_SetAbsoluteZoomMm::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_SetAbsoluteZoomMm"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomMm
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomMm()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_SetAbsoluteZoomMm>(FName(TEXT("BMCCLens_SetAbsoluteZoomMm")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_SetAbsoluteZoomMm;
	struct Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_ZoomInMm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_SetAbsoluteZoomMm>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewProp_ZoomInMm_MetaData[] = {
		{ "Category", "BMCCLens_SetAbsoluteZoomMm" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewProp_ZoomInMm = { "ZoomInMm", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_SetAbsoluteZoomMm, ZoomInMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewProp_ZoomInMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewProp_ZoomInMm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::NewProp_ZoomInMm,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_SetAbsoluteZoomMm",
		sizeof(FBMCCLens_SetAbsoluteZoomMm),
		alignof(FBMCCLens_SetAbsoluteZoomMm),
		Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_SetAbsoluteZoomMm"), sizeof(FBMCCLens_SetAbsoluteZoomMm), Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm_Hash() { return 1554153104U; }

static_assert(std::is_polymorphic<FBMCCLens_OpticalImageStabilization>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_OpticalImageStabilization cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_OpticalImageStabilization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_OpticalImageStabilization"), sizeof(FBMCCLens_OpticalImageStabilization), Get_Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_OpticalImageStabilization>()
{
	return FBMCCLens_OpticalImageStabilization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_OpticalImageStabilization(FBMCCLens_OpticalImageStabilization::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_OpticalImageStabilization"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_OpticalImageStabilization
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_OpticalImageStabilization()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_OpticalImageStabilization>(FName(TEXT("BMCCLens_OpticalImageStabilization")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_OpticalImageStabilization;
	struct Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageStabilizationEnabled_MetaData[];
#endif
		static void NewProp_ImageStabilizationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ImageStabilizationEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_OpticalImageStabilization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled_MetaData[] = {
		{ "Category", "BMCCLens_OpticalImageStabilization" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled_SetBit(void* Obj)
	{
		((FBMCCLens_OpticalImageStabilization*)Obj)->ImageStabilizationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled = { "ImageStabilizationEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBMCCLens_OpticalImageStabilization), &Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::NewProp_ImageStabilizationEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_OpticalImageStabilization",
		sizeof(FBMCCLens_OpticalImageStabilization),
		alignof(FBMCCLens_OpticalImageStabilization),
		Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_OpticalImageStabilization"), sizeof(FBMCCLens_OpticalImageStabilization), Get_Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization_Hash() { return 3994190558U; }

static_assert(std::is_polymorphic<FBMCCLens_TriggerInstantAutoAperture>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_TriggerInstantAutoAperture cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_TriggerInstantAutoAperture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_TriggerInstantAutoAperture"), sizeof(FBMCCLens_TriggerInstantAutoAperture), Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_TriggerInstantAutoAperture>()
{
	return FBMCCLens_TriggerInstantAutoAperture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture(FBMCCLens_TriggerInstantAutoAperture::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_TriggerInstantAutoAperture"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerInstantAutoAperture
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerInstantAutoAperture()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_TriggerInstantAutoAperture>(FName(TEXT("BMCCLens_TriggerInstantAutoAperture")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerInstantAutoAperture;
	struct Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_TriggerInstantAutoAperture>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_TriggerInstantAutoAperture",
		sizeof(FBMCCLens_TriggerInstantAutoAperture),
		alignof(FBMCCLens_TriggerInstantAutoAperture),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_TriggerInstantAutoAperture"), sizeof(FBMCCLens_TriggerInstantAutoAperture), Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerInstantAutoAperture_Hash() { return 1394410102U; }

static_assert(std::is_polymorphic<FBMCCLens_ApertureOrdinal>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_ApertureOrdinal cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_ApertureOrdinal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_ApertureOrdinal"), sizeof(FBMCCLens_ApertureOrdinal), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_ApertureOrdinal>()
{
	return FBMCCLens_ApertureOrdinal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_ApertureOrdinal(FBMCCLens_ApertureOrdinal::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_ApertureOrdinal"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureOrdinal
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureOrdinal()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_ApertureOrdinal>(FName(TEXT("BMCCLens_ApertureOrdinal")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureOrdinal;
	struct Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aperture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_ApertureOrdinal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "BMCCLens_ApertureOrdinal" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_ApertureOrdinal, Aperture), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewProp_Aperture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::NewProp_Aperture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_ApertureOrdinal",
		sizeof(FBMCCLens_ApertureOrdinal),
		alignof(FBMCCLens_ApertureOrdinal),
		Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_ApertureOrdinal"), sizeof(FBMCCLens_ApertureOrdinal), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal_Hash() { return 1067043609U; }

static_assert(std::is_polymorphic<FBMCCLens_ApertureNormalized>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_ApertureNormalized cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_ApertureNormalized::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_ApertureNormalized"), sizeof(FBMCCLens_ApertureNormalized), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_ApertureNormalized>()
{
	return FBMCCLens_ApertureNormalized::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_ApertureNormalized(FBMCCLens_ApertureNormalized::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_ApertureNormalized"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureNormalized
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureNormalized()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_ApertureNormalized>(FName(TEXT("BMCCLens_ApertureNormalized")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureNormalized;
	struct Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aperture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_ApertureNormalized>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "BMCCLens_ApertureNormalized" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_ApertureNormalized, Aperture), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewProp_Aperture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::NewProp_Aperture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_ApertureNormalized",
		sizeof(FBMCCLens_ApertureNormalized),
		alignof(FBMCCLens_ApertureNormalized),
		Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_ApertureNormalized"), sizeof(FBMCCLens_ApertureNormalized), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized_Hash() { return 3600206010U; }

static_assert(std::is_polymorphic<FBMCCLens_ApertureFStop>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_ApertureFStop cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_ApertureFStop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_ApertureFStop"), sizeof(FBMCCLens_ApertureFStop), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_ApertureFStop>()
{
	return FBMCCLens_ApertureFStop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_ApertureFStop(FBMCCLens_ApertureFStop::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_ApertureFStop"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureFStop
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureFStop()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_ApertureFStop>(FName(TEXT("BMCCLens_ApertureFStop")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_ApertureFStop;
	struct Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Aperture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_ApertureFStop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "BMCCLens_ApertureFStop" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_ApertureFStop, Aperture), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewProp_Aperture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::NewProp_Aperture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_ApertureFStop",
		sizeof(FBMCCLens_ApertureFStop),
		alignof(FBMCCLens_ApertureFStop),
		Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_ApertureFStop"), sizeof(FBMCCLens_ApertureFStop), Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop_Hash() { return 3002032343U; }

static_assert(std::is_polymorphic<FBMCCLens_TriggerAutoFocus>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_TriggerAutoFocus cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_TriggerAutoFocus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_TriggerAutoFocus"), sizeof(FBMCCLens_TriggerAutoFocus), Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_TriggerAutoFocus>()
{
	return FBMCCLens_TriggerAutoFocus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_TriggerAutoFocus(FBMCCLens_TriggerAutoFocus::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_TriggerAutoFocus"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerAutoFocus
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerAutoFocus()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_TriggerAutoFocus>(FName(TEXT("BMCCLens_TriggerAutoFocus")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_TriggerAutoFocus;
	struct Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_TriggerAutoFocus>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_TriggerAutoFocus",
		sizeof(FBMCCLens_TriggerAutoFocus),
		alignof(FBMCCLens_TriggerAutoFocus),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_TriggerAutoFocus"), sizeof(FBMCCLens_TriggerAutoFocus), Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_TriggerAutoFocus_Hash() { return 3500613144U; }

static_assert(std::is_polymorphic<FBMCCLens_Focus>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCLens_Focus cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCLens_Focus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_Focus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCLens_Focus, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCLens_Focus"), sizeof(FBMCCLens_Focus), Get_Z_Construct_UScriptStruct_FBMCCLens_Focus_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCLens_Focus>()
{
	return FBMCCLens_Focus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCLens_Focus(FBMCCLens_Focus::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCLens_Focus"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_Focus
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_Focus()
	{
		UScriptStruct::DeferCppStructOps<FBMCCLens_Focus>(FName(TEXT("BMCCLens_Focus")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCLens_Focus;
	struct Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Focus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCLens_Focus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "BMCCLens_Focus" },
		{ "ModuleRelativePath", "Public/BMCCLens.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCLens_Focus, Focus), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewProp_Focus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::NewProp_Focus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCLens_Focus",
		sizeof(FBMCCLens_Focus),
		alignof(FBMCCLens_Focus),
		Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_Focus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_Focus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCLens_Focus"), sizeof(FBMCCLens_Focus), Get_Z_Construct_UScriptStruct_FBMCCLens_Focus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCLens_Focus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCLens_Focus_Hash() { return 4037569363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
