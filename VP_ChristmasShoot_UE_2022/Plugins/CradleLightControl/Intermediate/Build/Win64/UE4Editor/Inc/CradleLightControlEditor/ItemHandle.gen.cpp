// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControlEditor/Private/ItemHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemHandle() {}
// Cross Module References
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UItemHandle_NoRegister();
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UItemHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CradleLightControlEditor();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight_NoRegister();
// End Cross Module References
	void UItemHandle::StaticRegisterNativesUItemHandle()
	{
	}
	UClass* Z_Construct_UClass_UItemHandle_NoRegister()
	{
		return UItemHandle::StaticClass();
	}
	struct Z_Construct_UClass_UItemHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Note;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControlEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UObject which is responsible for storing the UBaseLights in a tool's hierarchy\n// Represents only information that is relevant for the tool that uses it\n" },
		{ "IncludePath", "ItemHandle.h" },
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
		{ "ToolTip", "UObject which is responsible for storing the UBaseLights in a tool's hierarchy\nRepresents only information that is relevant for the tool that uses it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_Children_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, Parent), Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, Name), METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_Note_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, Note), METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, Item), Z_Construct_UClass_UBaseLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemHandle_Statics::NewProp_LightId_MetaData[] = {
		{ "ModuleRelativePath", "Private/ItemHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemHandle_Statics::NewProp_LightId = { "LightId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemHandle, LightId), METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::NewProp_LightId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::NewProp_LightId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Note,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemHandle_Statics::NewProp_LightId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemHandle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemHandle_Statics::ClassParams = {
		&UItemHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemHandle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemHandle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemHandle, 4258320489);
	template<> CRADLELIGHTCONTROLEDITOR_API UClass* StaticClass<UItemHandle>()
	{
		return UItemHandle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemHandle(Z_Construct_UClass_UItemHandle, &UItemHandle::StaticClass, TEXT("/Script/CradleLightControlEditor"), TEXT("UItemHandle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemHandle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
