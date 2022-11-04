// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalObjectTracker/Public/PhysicalObjectTrackingReferencePoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalObjectTrackingReferencePoint() {}
// Cross Module References
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_NoRegister();
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PhysicalObjectTracker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UPhysicalObjectTrackingReferencePoint::StaticRegisterNativesUPhysicalObjectTrackingReferencePoint()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_NoRegister()
	{
		return UPhysicalObjectTrackingReferencePoint::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralRotationInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeutralRotationInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeutralOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicalObjectTracker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhysicalObjectTrackingReferencePoint.h" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingReferencePoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralRotationInverse_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingReferencePoint" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingReferencePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralRotationInverse = { "NeutralRotationInverse", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingReferencePoint, NeutralRotationInverse), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralRotationInverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralRotationInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralOffset_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingReferencePoint" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingReferencePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralOffset = { "NeutralOffset", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingReferencePoint, NeutralOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralRotationInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::NewProp_NeutralOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalObjectTrackingReferencePoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::ClassParams = {
		&UPhysicalObjectTrackingReferencePoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalObjectTrackingReferencePoint, 2064747744);
	template<> PHYSICALOBJECTTRACKER_API UClass* StaticClass<UPhysicalObjectTrackingReferencePoint>()
	{
		return UPhysicalObjectTrackingReferencePoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalObjectTrackingReferencePoint(Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint, &UPhysicalObjectTrackingReferencePoint::StaticClass, TEXT("/Script/PhysicalObjectTracker"), TEXT("UPhysicalObjectTrackingReferencePoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalObjectTrackingReferencePoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
