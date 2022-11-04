// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCBattery_Info.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCBattery_Info() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCBattery_Info();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBMCCBattery_Info>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCBattery_Info cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCBattery_Info::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCBattery_Info_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCBattery_Info, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCBattery_Info"), sizeof(FBMCCBattery_Info), Get_Z_Construct_UScriptStruct_FBMCCBattery_Info_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCBattery_Info>()
{
	return FBMCCBattery_Info::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCBattery_Info(FBMCCBattery_Info::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCBattery_Info"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCBattery_Info
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCBattery_Info()
	{
		UScriptStruct::DeferCppStructOps<FBMCCBattery_Info>(FName(TEXT("BMCCBattery_Info")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCBattery_Info;
	struct Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCBattery_Info.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCBattery_Info>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCBattery_Info",
		sizeof(FBMCCBattery_Info),
		alignof(FBMCCBattery_Info),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCBattery_Info()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCBattery_Info_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCBattery_Info"), sizeof(FBMCCBattery_Info), Get_Z_Construct_UScriptStruct_FBMCCBattery_Info_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCBattery_Info_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCBattery_Info_Hash() { return 2090931070U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
