// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCMedia_TransportMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCMedia_TransportMode() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCMedia_TransportMode();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBMCCMedia_TransportMode>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCMedia_TransportMode cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCMedia_TransportMode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCMedia_TransportMode, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCMedia_TransportMode"), sizeof(FBMCCMedia_TransportMode), Get_Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCMedia_TransportMode>()
{
	return FBMCCMedia_TransportMode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCMedia_TransportMode(FBMCCMedia_TransportMode::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCMedia_TransportMode"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCMedia_TransportMode
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCMedia_TransportMode()
	{
		UScriptStruct::DeferCppStructOps<FBMCCMedia_TransportMode>(FName(TEXT("BMCCMedia_TransportMode")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCMedia_TransportMode;
	struct Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCMedia_TransportMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCMedia_TransportMode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCMedia_TransportMode",
		sizeof(FBMCCMedia_TransportMode),
		alignof(FBMCCMedia_TransportMode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCMedia_TransportMode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCMedia_TransportMode"), sizeof(FBMCCMedia_TransportMode), Get_Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCMedia_TransportMode_Hash() { return 2345942086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
