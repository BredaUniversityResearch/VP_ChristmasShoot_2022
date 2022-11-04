// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCFixed16.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCFixed16() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCFixed16();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
// End Cross Module References
class UScriptStruct* FBMCCFixed16::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCFixed16_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCFixed16, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCFixed16"), sizeof(FBMCCFixed16), Get_Z_Construct_UScriptStruct_FBMCCFixed16_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCFixed16>()
{
	return FBMCCFixed16::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCFixed16(FBMCCFixed16::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCFixed16"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCFixed16
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCFixed16()
	{
		UScriptStruct::DeferCppStructOps<FBMCCFixed16>(FName(TEXT("BMCCFixed16")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCFixed16;
	struct Z_Construct_UScriptStruct_FBMCCFixed16_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCFixed16_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCFixed16.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCFixed16>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "BMCCFixed16" },
		{ "ModuleRelativePath", "Public/BMCCFixed16.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBMCCFixed16, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBMCCFixed16_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBMCCFixed16_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCFixed16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		nullptr,
		&NewStructOps,
		"BMCCFixed16",
		sizeof(FBMCCFixed16),
		alignof(FBMCCFixed16),
		Z_Construct_UScriptStruct_FBMCCFixed16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCFixed16_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCFixed16_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCFixed16_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCFixed16()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCFixed16_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCFixed16"), sizeof(FBMCCFixed16), Get_Z_Construct_UScriptStruct_FBMCCFixed16_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCFixed16_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCFixed16_Hash() { return 737525112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
