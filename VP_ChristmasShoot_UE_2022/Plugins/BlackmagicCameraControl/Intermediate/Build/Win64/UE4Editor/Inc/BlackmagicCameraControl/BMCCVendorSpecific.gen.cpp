// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCVendorSpecific.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCVendorSpecific() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBMCCVendorSpecific_CanonLens>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCVendorSpecific_CanonLens cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCVendorSpecific_CanonLens::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCVendorSpecific_CanonLens"), sizeof(FBMCCVendorSpecific_CanonLens), Get_Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCVendorSpecific_CanonLens>()
{
	return FBMCCVendorSpecific_CanonLens::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCVendorSpecific_CanonLens(FBMCCVendorSpecific_CanonLens::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCVendorSpecific_CanonLens"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVendorSpecific_CanonLens
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVendorSpecific_CanonLens()
	{
		UScriptStruct::DeferCppStructOps<FBMCCVendorSpecific_CanonLens>(FName(TEXT("BMCCVendorSpecific_CanonLens")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVendorSpecific_CanonLens;
	struct Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCVendorSpecific.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCVendorSpecific_CanonLens>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCVendorSpecific_CanonLens",
		sizeof(FBMCCVendorSpecific_CanonLens),
		alignof(FBMCCVendorSpecific_CanonLens),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCVendorSpecific_CanonLens"), sizeof(FBMCCVendorSpecific_CanonLens), Get_Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCVendorSpecific_CanonLens_Hash() { return 4072425395U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
