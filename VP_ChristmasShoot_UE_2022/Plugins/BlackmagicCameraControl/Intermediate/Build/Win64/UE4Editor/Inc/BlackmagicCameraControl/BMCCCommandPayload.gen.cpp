// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCCommandPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCCommandPayload() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
// End Cross Module References
class UScriptStruct* FBMCCCommandPayloadBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCCommandPayloadBase, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCCommandPayloadBase"), sizeof(FBMCCCommandPayloadBase), Get_Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCCommandPayloadBase>()
{
	return FBMCCCommandPayloadBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCCommandPayloadBase(FBMCCCommandPayloadBase::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCCommandPayloadBase"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCCommandPayloadBase
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCCommandPayloadBase()
	{
		UScriptStruct::DeferCppStructOps<FBMCCCommandPayloadBase>(FName(TEXT("BMCCCommandPayloadBase")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCCommandPayloadBase;
	struct Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCCommandPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCCommandPayloadBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		nullptr,
		&NewStructOps,
		"BMCCCommandPayloadBase",
		sizeof(FBMCCCommandPayloadBase),
		alignof(FBMCCCommandPayloadBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCCommandPayloadBase"), sizeof(FBMCCCommandPayloadBase), Get_Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCCommandPayloadBase_Hash() { return 1858544604U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
