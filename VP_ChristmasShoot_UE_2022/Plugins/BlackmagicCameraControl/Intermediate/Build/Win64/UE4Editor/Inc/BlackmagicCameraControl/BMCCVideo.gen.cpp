// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCVideo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCVideo() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCCommandPayloadBase();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_Gain();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_VideoMode();
// End Cross Module References

static_assert(std::is_polymorphic<FBMCCVideo_RecordingFormat>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCVideo_RecordingFormat cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCVideo_RecordingFormat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCVideo_RecordingFormat"), sizeof(FBMCCVideo_RecordingFormat), Get_Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCVideo_RecordingFormat>()
{
	return FBMCCVideo_RecordingFormat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCVideo_RecordingFormat(FBMCCVideo_RecordingFormat::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCVideo_RecordingFormat"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_RecordingFormat
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_RecordingFormat()
	{
		UScriptStruct::DeferCppStructOps<FBMCCVideo_RecordingFormat>(FName(TEXT("BMCCVideo_RecordingFormat")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_RecordingFormat;
	struct Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Missing 1.2 to 1.8\n" },
		{ "ModuleRelativePath", "Public/BMCCVideo.h" },
		{ "ToolTip", "Missing 1.2 to 1.8" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCVideo_RecordingFormat>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCVideo_RecordingFormat",
		sizeof(FBMCCVideo_RecordingFormat),
		alignof(FBMCCVideo_RecordingFormat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCVideo_RecordingFormat"), sizeof(FBMCCVideo_RecordingFormat), Get_Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat_Hash() { return 4245598093U; }

static_assert(std::is_polymorphic<FBMCCVideo_Gain>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCVideo_Gain cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCVideo_Gain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_Gain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCVideo_Gain, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCVideo_Gain"), sizeof(FBMCCVideo_Gain), Get_Z_Construct_UScriptStruct_FBMCCVideo_Gain_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCVideo_Gain>()
{
	return FBMCCVideo_Gain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCVideo_Gain(FBMCCVideo_Gain::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCVideo_Gain"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_Gain
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_Gain()
	{
		UScriptStruct::DeferCppStructOps<FBMCCVideo_Gain>(FName(TEXT("BMCCVideo_Gain")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_Gain;
	struct Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCVideo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCVideo_Gain>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCVideo_Gain",
		sizeof(FBMCCVideo_Gain),
		alignof(FBMCCVideo_Gain),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_Gain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_Gain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCVideo_Gain"), sizeof(FBMCCVideo_Gain), Get_Z_Construct_UScriptStruct_FBMCCVideo_Gain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCVideo_Gain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_Gain_Hash() { return 1066595050U; }

static_assert(std::is_polymorphic<FBMCCVideo_VideoMode>() == std::is_polymorphic<FBMCCCommandPayloadBase>(), "USTRUCT FBMCCVideo_VideoMode cannot be polymorphic unless super FBMCCCommandPayloadBase is polymorphic");

class UScriptStruct* FBMCCVideo_VideoMode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLACKMAGICCAMERACONTROL_API uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBMCCVideo_VideoMode, Z_Construct_UPackage__Script_BlackmagicCameraControl(), TEXT("BMCCVideo_VideoMode"), sizeof(FBMCCVideo_VideoMode), Get_Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Hash());
	}
	return Singleton;
}
template<> BLACKMAGICCAMERACONTROL_API UScriptStruct* StaticStruct<FBMCCVideo_VideoMode>()
{
	return FBMCCVideo_VideoMode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBMCCVideo_VideoMode(FBMCCVideo_VideoMode::StaticStruct, TEXT("/Script/BlackmagicCameraControl"), TEXT("BMCCVideo_VideoMode"), false, nullptr, nullptr);
static struct FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_VideoMode
{
	FScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_VideoMode()
	{
		UScriptStruct::DeferCppStructOps<FBMCCVideo_VideoMode>(FName(TEXT("BMCCVideo_VideoMode")));
	}
} ScriptStruct_BlackmagicCameraControl_StaticRegisterNativesFBMCCVideo_VideoMode;
	struct Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BMCCVideo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBMCCVideo_VideoMode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
		Z_Construct_UScriptStruct_FBMCCCommandPayloadBase,
		&NewStructOps,
		"BMCCVideo_VideoMode",
		sizeof(FBMCCVideo_VideoMode),
		alignof(FBMCCVideo_VideoMode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_VideoMode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlackmagicCameraControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BMCCVideo_VideoMode"), sizeof(FBMCCVideo_VideoMode), Get_Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBMCCVideo_VideoMode_Hash() { return 1227229822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
