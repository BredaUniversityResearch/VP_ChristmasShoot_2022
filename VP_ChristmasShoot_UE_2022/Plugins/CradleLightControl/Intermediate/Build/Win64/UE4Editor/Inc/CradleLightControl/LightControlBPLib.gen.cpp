// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/LightControlBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightControlBPLib() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_ULightControlBPLib_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_ULightControlBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UToolData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULightControlBPLib::execGetVirtualLightToolData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolData**)Z_Param__Result=ULightControlBPLib::GetVirtualLightToolData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightControlBPLib::execGetDMXLightToolData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolData**)Z_Param__Result=ULightControlBPLib::GetDMXLightToolData();
		P_NATIVE_END;
	}
	void ULightControlBPLib::StaticRegisterNativesULightControlBPLib()
	{
		UClass* Class = ULightControlBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDMXLightToolData", &ULightControlBPLib::execGetDMXLightToolData },
			{ "GetVirtualLightToolData", &ULightControlBPLib::execGetVirtualLightToolData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics
	{
		struct LightControlBPLib_eventGetDMXLightToolData_Parms
		{
			UToolData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightControlBPLib_eventGetDMXLightToolData_Parms, ReturnValue), Z_Construct_UClass_UToolData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CradleLightControl" },
		{ "ModuleRelativePath", "Public/LightControlBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightControlBPLib, nullptr, "GetDMXLightToolData", nullptr, nullptr, sizeof(LightControlBPLib_eventGetDMXLightToolData_Parms), Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics
	{
		struct LightControlBPLib_eventGetVirtualLightToolData_Parms
		{
			UToolData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightControlBPLib_eventGetVirtualLightToolData_Parms, ReturnValue), Z_Construct_UClass_UToolData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CraldeLightControl" },
		{ "ModuleRelativePath", "Public/LightControlBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightControlBPLib, nullptr, "GetVirtualLightToolData", nullptr, nullptr, sizeof(LightControlBPLib_eventGetVirtualLightToolData_Parms), Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightControlBPLib_NoRegister()
	{
		return ULightControlBPLib::StaticClass();
	}
	struct Z_Construct_UClass_ULightControlBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightControlBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightControlBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightControlBPLib_GetDMXLightToolData, "GetDMXLightToolData" }, // 2671273482
		{ &Z_Construct_UFunction_ULightControlBPLib_GetVirtualLightToolData, "GetVirtualLightToolData" }, // 3294821779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightControlBPLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library to allow for the plugin's data to be accessed via blueprints\n */" },
		{ "IncludePath", "LightControlBPLib.h" },
		{ "ModuleRelativePath", "Public/LightControlBPLib.h" },
		{ "ScriptName", "CradleLightControl" },
		{ "ToolTip", "Blueprint function library to allow for the plugin's data to be accessed via blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightControlBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightControlBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightControlBPLib_Statics::ClassParams = {
		&ULightControlBPLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightControlBPLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightControlBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightControlBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightControlBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightControlBPLib, 3770270589);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<ULightControlBPLib>()
	{
		return ULightControlBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightControlBPLib(Z_Construct_UClass_ULightControlBPLib, &ULightControlBPLib::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("ULightControlBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightControlBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
