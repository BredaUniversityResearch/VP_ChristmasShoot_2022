// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/DMXConfigAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXConfigAsset() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UEnum* Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FConstDMXChannel();
	CRADLELIGHTCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXToggleChannel();
	CRADLELIGHTCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXChannel();
	CRADLELIGHTCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXLinearChannel();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UDMXConfigAsset_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UDMXConfigAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EDMXToggleChannelApplication_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("EDMXToggleChannelApplication"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<EDMXToggleChannelApplication>()
	{
		return EDMXToggleChannelApplication_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDMXToggleChannelApplication(EDMXToggleChannelApplication_StaticEnum, TEXT("/Script/CradleLightControl"), TEXT("EDMXToggleChannelApplication"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication_Hash() { return 3264521440U; }
	UEnum* Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDMXToggleChannelApplication"), 0, Get_Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Always", (int64)Always },
				{ "OnOnly", (int64)OnOnly },
				{ "OffOnly", (int64)OffOnly },
				{ "Never", (int64)Never },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "Always" },
				{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
				{ "Never.Name", "Never" },
				{ "OffOnly.Name", "OffOnly" },
				{ "OnOnly.Name", "OnOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControl,
				nullptr,
				"EDMXToggleChannelApplication",
				"EDMXToggleChannelApplication",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConstDMXChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRADLELIGHTCONTROL_API uint32 Get_Z_Construct_UScriptStruct_FConstDMXChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstDMXChannel, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("ConstDMXChannel"), sizeof(FConstDMXChannel), Get_Z_Construct_UScriptStruct_FConstDMXChannel_Hash());
	}
	return Singleton;
}
template<> CRADLELIGHTCONTROL_API UScriptStruct* StaticStruct<FConstDMXChannel>()
{
	return FConstDMXChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstDMXChannel(FConstDMXChannel::StaticStruct, TEXT("/Script/CradleLightControl"), TEXT("ConstDMXChannel"), false, nullptr, nullptr);
static struct FScriptStruct_CradleLightControl_StaticRegisterNativesFConstDMXChannel
{
	FScriptStruct_CradleLightControl_StaticRegisterNativesFConstDMXChannel()
	{
		UScriptStruct::DeferCppStructOps<FConstDMXChannel>(FName(TEXT("ConstDMXChannel")));
	}
} ScriptStruct_CradleLightControl_StaticRegisterNativesFConstDMXChannel;
	struct Z_Construct_UScriptStruct_FConstDMXChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstDMXChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct representing a constant DMX channel. That is to say, a channel which will remain constant at all times, for whatever reason.\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Struct representing a constant DMX channel. That is to say, a channel which will remain constant at all times, for whatever reason." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstDMXChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "ConstDMXChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstDMXChannel, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ConstDMXChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstDMXChannel, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstDMXChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstDMXChannel_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstDMXChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
		nullptr,
		&NewStructOps,
		"ConstDMXChannel",
		sizeof(FConstDMXChannel),
		alignof(FConstDMXChannel),
		Z_Construct_UScriptStruct_FConstDMXChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstDMXChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstDMXChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstDMXChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstDMXChannel"), sizeof(FConstDMXChannel), Get_Z_Construct_UScriptStruct_FConstDMXChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstDMXChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstDMXChannel_Hash() { return 711273254U; }

static_assert(std::is_polymorphic<FDMXToggleChannel>() == std::is_polymorphic<FDMXChannel>(), "USTRUCT FDMXToggleChannel cannot be polymorphic unless super FDMXChannel is polymorphic");

class UScriptStruct* FDMXToggleChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRADLELIGHTCONTROL_API uint32 Get_Z_Construct_UScriptStruct_FDMXToggleChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXToggleChannel, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("DMXToggleChannel"), sizeof(FDMXToggleChannel), Get_Z_Construct_UScriptStruct_FDMXToggleChannel_Hash());
	}
	return Singleton;
}
template<> CRADLELIGHTCONTROL_API UScriptStruct* StaticStruct<FDMXToggleChannel>()
{
	return FDMXToggleChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDMXToggleChannel(FDMXToggleChannel::StaticStruct, TEXT("/Script/CradleLightControl"), TEXT("DMXToggleChannel"), false, nullptr, nullptr);
static struct FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXToggleChannel
{
	FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXToggleChannel()
	{
		UScriptStruct::DeferCppStructOps<FDMXToggleChannel>(FName(TEXT("DMXToggleChannel")));
	}
} ScriptStruct_CradleLightControl_StaticRegisterNativesFDMXToggleChannel;
	struct Z_Construct_UScriptStruct_FDMXToggleChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DMXOnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DMXOnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DMXOffValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DMXOffValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyWhen_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApplyWhen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct representing a two-state channel.\n// Allows for the user to select in what cases it will apply to avoid overriding other channels in certain cases\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Struct representing a two-state channel.\nAllows for the user to select in what cases it will apply to avoid overriding other channels in certain cases" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXToggleChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOnValue_MetaData[] = {
		{ "Category", "DMXToggleChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOnValue = { "DMXOnValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXToggleChannel, DMXOnValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOffValue_MetaData[] = {
		{ "Category", "DMXToggleChannel" },
		{ "Comment", "// 8-bit value for when the boolean behind the channel is true\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "8-bit value for when the boolean behind the channel is true" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOffValue = { "DMXOffValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXToggleChannel, DMXOffValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOffValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOffValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_ApplyWhen_MetaData[] = {
		{ "Category", "DMXToggleChannel" },
		{ "Comment", "// Defines under what condition the DMX channel must be updated\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Defines under what condition the DMX channel must be updated" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_ApplyWhen = { "ApplyWhen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXToggleChannel, ApplyWhen), Z_Construct_UEnum_CradleLightControl_EDMXToggleChannelApplication, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_ApplyWhen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_ApplyWhen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_DMXOffValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::NewProp_ApplyWhen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
		Z_Construct_UScriptStruct_FDMXChannel,
		&NewStructOps,
		"DMXToggleChannel",
		sizeof(FDMXToggleChannel),
		alignof(FDMXToggleChannel),
		Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXToggleChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDMXToggleChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DMXToggleChannel"), sizeof(FDMXToggleChannel), Get_Z_Construct_UScriptStruct_FDMXToggleChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDMXToggleChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDMXToggleChannel_Hash() { return 4029870565U; }

static_assert(std::is_polymorphic<FDMXLinearChannel>() == std::is_polymorphic<FDMXChannel>(), "USTRUCT FDMXLinearChannel cannot be polymorphic unless super FDMXChannel is polymorphic");

class UScriptStruct* FDMXLinearChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRADLELIGHTCONTROL_API uint32 Get_Z_Construct_UScriptStruct_FDMXLinearChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXLinearChannel, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("DMXLinearChannel"), sizeof(FDMXLinearChannel), Get_Z_Construct_UScriptStruct_FDMXLinearChannel_Hash());
	}
	return Singleton;
}
template<> CRADLELIGHTCONTROL_API UScriptStruct* StaticStruct<FDMXLinearChannel>()
{
	return FDMXLinearChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDMXLinearChannel(FDMXLinearChannel::StaticStruct, TEXT("/Script/CradleLightControl"), TEXT("DMXLinearChannel"), false, nullptr, nullptr);
static struct FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXLinearChannel
{
	FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXLinearChannel()
	{
		UScriptStruct::DeferCppStructOps<FDMXLinearChannel>(FName(TEXT("DMXLinearChannel")));
	}
} ScriptStruct_CradleLightControl_StaticRegisterNativesFDMXLinearChannel;
	struct Z_Construct_UScriptStruct_FDMXLinearChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDMXValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinDMXValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDMXValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxDMXValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct representing a DMX channel whose value scales linearly based on\n// a range of 8-bit values and a range of float values.\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Struct representing a DMX channel whose value scales linearly based on\na range of 8-bit values and a range of float values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXLinearChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinDMXValue_MetaData[] = {
		{ "Category", "DMXLinearChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinDMXValue = { "MinDMXValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXLinearChannel, MinDMXValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinDMXValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinDMXValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxDMXValue_MetaData[] = {
		{ "Category", "DMXLinearChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxDMXValue = { "MaxDMXValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXLinearChannel, MaxDMXValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxDMXValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxDMXValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "DMXLinearChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXLinearChannel, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "DMXLinearChannel" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXLinearChannel, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinDMXValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxDMXValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::NewProp_MaxValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
		Z_Construct_UScriptStruct_FDMXChannel,
		&NewStructOps,
		"DMXLinearChannel",
		sizeof(FDMXLinearChannel),
		alignof(FDMXLinearChannel),
		Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXLinearChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDMXLinearChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DMXLinearChannel"), sizeof(FDMXLinearChannel), Get_Z_Construct_UScriptStruct_FDMXLinearChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDMXLinearChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDMXLinearChannel_Hash() { return 1896184388U; }
class UScriptStruct* FDMXChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRADLELIGHTCONTROL_API uint32 Get_Z_Construct_UScriptStruct_FDMXChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXChannel, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("DMXChannel"), sizeof(FDMXChannel), Get_Z_Construct_UScriptStruct_FDMXChannel_Hash());
	}
	return Singleton;
}
template<> CRADLELIGHTCONTROL_API UScriptStruct* StaticStruct<FDMXChannel>()
{
	return FDMXChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDMXChannel(FDMXChannel::StaticStruct, TEXT("/Script/CradleLightControl"), TEXT("DMXChannel"), false, nullptr, nullptr);
static struct FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXChannel
{
	FScriptStruct_CradleLightControl_StaticRegisterNativesFDMXChannel()
	{
		UScriptStruct::DeferCppStructOps<FDMXChannel>(FName(TEXT("DMXChannel")));
	}
} ScriptStruct_CradleLightControl_StaticRegisterNativesFDMXChannel;
	struct Z_Construct_UScriptStruct_FDMXChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "DMXChannel" },
		{ "Comment", "// Should the channel be used?\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Should the channel be used?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDMXChannel*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDMXChannel), &Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "DMXChannel" },
		{ "Comment", "// The channel index for the fixture. NOT 0-based.\n// Channel 1 will correlate to channel 1 on the DMX protocol.\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "The channel index for the fixture. NOT 0-based.\nChannel 1 will correlate to channel 1 on the DMX protocol." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDMXChannel, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannel_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
		nullptr,
		&NewStructOps,
		"DMXChannel",
		sizeof(FDMXChannel),
		alignof(FDMXChannel),
		Z_Construct_UScriptStruct_FDMXChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDMXChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DMXChannel"), sizeof(FDMXChannel), Get_Z_Construct_UScriptStruct_FDMXChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDMXChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDMXChannel_Hash() { return 1896420646U; }
	void UDMXConfigAsset::StaticRegisterNativesUDMXConfigAsset()
	{
	}
	UClass* Z_Construct_UClass_UDMXConfigAsset_NoRegister()
	{
		return UDMXConfigAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDMXConfigAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOffChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnOffChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntensityChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstantChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXConfigAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Asset type representing a DMX channel configuration.\n// This is meant to alleviate the issue of different DMX light fixtures making different use of the values they receive through the protocol\n" },
		{ "IncludePath", "DMXConfigAsset.h" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Asset type representing a DMX channel configuration.\nThis is meant to alleviate the issue of different DMX light fixtures making different use of the values they receive through the protocol" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_OnOffChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_OnOffChannel = { "OnOffChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, OnOffChannel), Z_Construct_UScriptStruct_FDMXToggleChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_OnOffChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_OnOffChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_HorizontalChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_HorizontalChannel = { "HorizontalChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, HorizontalChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_HorizontalChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_HorizontalChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_VerticalChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_VerticalChannel = { "VerticalChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, VerticalChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_VerticalChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_VerticalChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_RedChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_RedChannel = { "RedChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, RedChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_RedChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_RedChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_GreenChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_GreenChannel = { "GreenChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, GreenChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_GreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_GreenChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_BlueChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_BlueChannel = { "BlueChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, BlueChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_BlueChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_BlueChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_IntensityChannel_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "DMXChannel", "" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_IntensityChannel = { "IntensityChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, IntensityChannel), Z_Construct_UScriptStruct_FDMXLinearChannel, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_IntensityChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_IntensityChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels_Inner = { "ConstantChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstDMXChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels_MetaData[] = {
		{ "Category", "DMXConfigAsset" },
		{ "Comment", "// Channels which are going to have a constant value.\n// If these overlap with non-constant channels, the non-constant channels will be used instead\n" },
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
		{ "ToolTip", "Channels which are going to have a constant value.\nIf these overlap with non-constant channels, the non-constant channels will be used instead" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels = { "ConstantChannels", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, ConstantChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXConfigAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMXConfigAsset, AssetName), METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXConfigAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_OnOffChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_HorizontalChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_VerticalChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_RedChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_GreenChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_BlueChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_IntensityChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_ConstantChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXConfigAsset_Statics::NewProp_AssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXConfigAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXConfigAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDMXConfigAsset_Statics::ClassParams = {
		&UDMXConfigAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXConfigAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXConfigAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXConfigAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXConfigAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDMXConfigAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDMXConfigAsset, 2851875584);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<UDMXConfigAsset>()
	{
		return UDMXConfigAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDMXConfigAsset(Z_Construct_UClass_UDMXConfigAsset, &UDMXConfigAsset::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("UDMXConfigAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXConfigAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
