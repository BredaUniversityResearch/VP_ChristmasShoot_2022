// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControlEditor/Private/EditorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorData() {}
// Cross Module References
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UEditorData_NoRegister();
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UEditorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CradleLightControlEditor();
	CRADLELIGHTCONTROLEDITOR_API UClass* Z_Construct_UClass_UItemHandle_NoRegister();
// End Cross Module References
	void UEditorData::StaticRegisterNativesUEditorData()
	{
	}
	UClass* Z_Construct_UClass_UEditorData_NoRegister()
	{
		return UEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListOfTreeItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfTreeItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfTreeItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListOfLightItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfLightItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfLightItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightsUnderSelection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsUnderSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightsUnderSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMasterLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionMasterLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControlEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Top UObject that is responsible for the hierarchy of Item Handles and lights\n// Needed in order for the editor's transaction system to affect drag-drop operations\n" },
		{ "IncludePath", "EditorData.h" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "Top UObject that is responsible for the hierarchy of Item Handles and lights\nNeeded in order for the editor's transaction system to affect drag-drop operations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems_Inner = { "RootItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems_MetaData[] = {
		{ "Comment", "// List of all the root items in the dataset. Each root item may or may not have children.\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "List of all the root items in the dataset. Each root item may or may not have children." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems = { "RootItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, RootItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems_Inner = { "ListOfTreeItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems_MetaData[] = {
		{ "Comment", "// 1D list of all items in the tree, no matter if they are parented or not\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "1D list of all items in the tree, no matter if they are parented or not" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems = { "ListOfTreeItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, ListOfTreeItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems_Inner = { "ListOfLightItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems_MetaData[] = {
		{ "Comment", "// 1D list of all handles which hold lights items as opposed to being groups.\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "1D list of all handles which hold lights items as opposed to being groups." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems = { "ListOfLightItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, ListOfLightItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems_Inner = { "SelectedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems_MetaData[] = {
		{ "Comment", "// List of all items selected by the user via the UI\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "List of all items selected by the user via the UI" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems = { "SelectedItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, SelectedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection_Inner = { "LightsUnderSelection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection_MetaData[] = {
		{ "Comment", "// List of all lights under selected items.\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "List of all lights under selected items." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection = { "LightsUnderSelection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, LightsUnderSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorData_Statics::NewProp_SelectionMasterLight_MetaData[] = {
		{ "Comment", "// The current master light which determines the values shown in the UI\n" },
		{ "ModuleRelativePath", "Private/EditorData.h" },
		{ "ToolTip", "The current master light which determines the values shown in the UI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorData_Statics::NewProp_SelectionMasterLight = { "SelectionMasterLight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorData, SelectionMasterLight), Z_Construct_UClass_UItemHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::NewProp_SelectionMasterLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::NewProp_SelectionMasterLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_RootItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfTreeItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_ListOfLightItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_SelectedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_LightsUnderSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorData_Statics::NewProp_SelectionMasterLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorData_Statics::ClassParams = {
		&UEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorData, 3432005995);
	template<> CRADLELIGHTCONTROLEDITOR_API UClass* StaticClass<UEditorData>()
	{
		return UEditorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorData(Z_Construct_UClass_UEditorData, &UEditorData::StaticClass, TEXT("/Script/CradleLightControlEditor"), TEXT("UEditorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
