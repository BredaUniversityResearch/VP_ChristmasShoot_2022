// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCBlueprintSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCBlueprintSupport() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCBlueprintSupport_NoRegister();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCBlueprintSupport();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCFixed16();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCDispatcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBMCCBlueprintSupport::execConv_Fixed16ToFloat)
	{
		P_GET_STRUCT(FBMCCFixed16,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBMCCBlueprintSupport::Conv_Fixed16ToFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBMCCBlueprintSupport::execGetBlackmagicCameraControlDispatcher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBMCCDispatcher**)Z_Param__Result=UBMCCBlueprintSupport::GetBlackmagicCameraControlDispatcher();
		P_NATIVE_END;
	}
	void UBMCCBlueprintSupport::StaticRegisterNativesUBMCCBlueprintSupport()
	{
		UClass* Class = UBMCCBlueprintSupport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_Fixed16ToFloat", &UBMCCBlueprintSupport::execConv_Fixed16ToFloat },
			{ "GetBlackmagicCameraControlDispatcher", &UBMCCBlueprintSupport::execGetBlackmagicCameraControlDispatcher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics
	{
		struct BMCCBlueprintSupport_eventConv_Fixed16ToFloat_Parms
		{
			FBMCCFixed16 Value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCBlueprintSupport_eventConv_Fixed16ToFloat_Parms, Value), Z_Construct_UScriptStruct_FBMCCFixed16, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCBlueprintSupport_eventConv_Fixed16ToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Camera|Blackmagic Camera Control" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Fixed16 to Float" },
		{ "ModuleRelativePath", "Public/BMCCBlueprintSupport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBMCCBlueprintSupport, nullptr, "Conv_Fixed16ToFloat", nullptr, nullptr, sizeof(BMCCBlueprintSupport_eventConv_Fixed16ToFloat_Parms), Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics
	{
		struct BMCCBlueprintSupport_eventGetBlackmagicCameraControlDispatcher_Parms
		{
			UBMCCDispatcher* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCBlueprintSupport_eventGetBlackmagicCameraControlDispatcher_Parms, ReturnValue), Z_Construct_UClass_UBMCCDispatcher_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCBlueprintSupport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBMCCBlueprintSupport, nullptr, "GetBlackmagicCameraControlDispatcher", nullptr, nullptr, sizeof(BMCCBlueprintSupport_eventGetBlackmagicCameraControlDispatcher_Parms), Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBMCCBlueprintSupport_NoRegister()
	{
		return UBMCCBlueprintSupport::StaticClass();
	}
	struct Z_Construct_UClass_UBMCCBlueprintSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBMCCBlueprintSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBMCCBlueprintSupport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBMCCBlueprintSupport_Conv_Fixed16ToFloat, "Conv_Fixed16ToFloat" }, // 2228688620
		{ &Z_Construct_UFunction_UBMCCBlueprintSupport_GetBlackmagicCameraControlDispatcher, "GetBlackmagicCameraControlDispatcher" }, // 2437192510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCBlueprintSupport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BMCCBlueprintSupport.h" },
		{ "ModuleRelativePath", "Public/BMCCBlueprintSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBMCCBlueprintSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBMCCBlueprintSupport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBMCCBlueprintSupport_Statics::ClassParams = {
		&UBMCCBlueprintSupport::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBMCCBlueprintSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCBlueprintSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBMCCBlueprintSupport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBMCCBlueprintSupport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBMCCBlueprintSupport, 1137319930);
	template<> BLACKMAGICCAMERACONTROL_API UClass* StaticClass<UBMCCBlueprintSupport>()
	{
		return UBMCCBlueprintSupport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBMCCBlueprintSupport(Z_Construct_UClass_UBMCCBlueprintSupport, &UBMCCBlueprintSupport::StaticClass, TEXT("/Script/BlackmagicCameraControl"), TEXT("UBMCCBlueprintSupport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBMCCBlueprintSupport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
