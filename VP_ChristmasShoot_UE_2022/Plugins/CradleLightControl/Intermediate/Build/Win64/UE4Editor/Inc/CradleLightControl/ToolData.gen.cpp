// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/ToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolData() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UToolData_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UToolData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UToolData::execGetLightByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseLight**)Z_Param__Result=P_THIS->GetLightByName(Z_Param_Name);
		P_NATIVE_END;
	}
	void UToolData::StaticRegisterNativesUToolData()
	{
		UClass* Class = UToolData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLightByName", &UToolData::execGetLightByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolData_GetLightByName_Statics
	{
		struct ToolData_eventGetLightByName_Parms
		{
			FString Name;
			UBaseLight* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToolData_GetLightByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToolData_eventGetLightByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolData_GetLightByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToolData_eventGetLightByName_Parms, ReturnValue), Z_Construct_UClass_UBaseLight_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolData_GetLightByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolData_GetLightByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolData_GetLightByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolData_GetLightByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolData_GetLightByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolData, nullptr, "GetLightByName", nullptr, nullptr, sizeof(ToolData_eventGetLightByName_Parms), Z_Construct_UFunction_UToolData_GetLightByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolData_GetLightByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolData_GetLightByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolData_GetLightByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolData_GetLightByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolData_GetLightByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToolData_NoRegister()
	{
		return UToolData::StaticClass();
	}
	struct Z_Construct_UClass_UToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolData_GetLightByName, "GetLightByName" }, // 2881853873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Top UObject that is responsible for the hierarchy of Item Handles and lights\n// Needed in order for the editor's transaction system to affect drag-drop operations\n" },
		{ "IncludePath", "ToolData.h" },
		{ "ModuleRelativePath", "Public/ToolData.h" },
		{ "ToolTip", "Top UObject that is responsible for the hierarchy of Item Handles and lights\nNeeded in order for the editor's transaction system to affect drag-drop operations" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolData_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Comment", "// Controls what type of lights the ToolData works with. UVirtualLight::StaticClass() or UDMXLight::StaticClass().\n" },
		{ "ModuleRelativePath", "Public/ToolData.h" },
		{ "ToolTip", "Controls what type of lights the ToolData works with. UVirtualLight::StaticClass() or UDMXLight::StaticClass()." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToolData_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToolData, ItemClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UToolData_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolData_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolData_Statics::NewProp_Lights_Inner = { "Lights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseLight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolData_Statics::NewProp_Lights_MetaData[] = {
		{ "Comment", "//// 1D list of all items in the tree, no matter if they are parented or not\n//UPROPERTY()\n//    TArray<UItemHandle*> ListOfTreeItems;\n//\n//// 1D list of all handles which hold lights items as opposed to being groups.\n//UPROPERTY()\n//    TArray<UItemHandle*> ListOfLightItems;\n" },
		{ "ModuleRelativePath", "Public/ToolData.h" },
		{ "ToolTip", "/ 1D list of all items in the tree, no matter if they are parented or not\nUPROPERTY()\n    TArray<UItemHandle*> ListOfTreeItems;\n\n/ 1D list of all handles which hold lights items as opposed to being groups.\nUPROPERTY()\n    TArray<UItemHandle*> ListOfLightItems;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolData_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToolData, Lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolData_Statics::NewProp_Lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolData_Statics::NewProp_Lights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolData_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolData_Statics::NewProp_Lights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolData_Statics::NewProp_Lights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolData_Statics::ClassParams = {
		&UToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolData, 1571633891);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<UToolData>()
	{
		return UToolData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolData(Z_Construct_UClass_UToolData, &UToolData::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("UToolData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
