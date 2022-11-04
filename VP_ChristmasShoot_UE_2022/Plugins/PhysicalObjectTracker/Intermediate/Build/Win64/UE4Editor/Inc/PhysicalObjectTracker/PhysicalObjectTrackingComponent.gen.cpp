// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalObjectTracker/Public/PhysicalObjectTrackingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalObjectTrackingComponent() {}
// Cross Module References
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingComponent_NoRegister();
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PhysicalObjectTracker();
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PHYSICALOBJECTTRACKER_API UClass* Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhysicalObjectTrackingComponent::execRefreshDeviceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshDeviceId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicalObjectTrackingComponent::execSelectTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectTracker();
		P_NATIVE_END;
	}
	void UPhysicalObjectTrackingComponent::StaticRegisterNativesUPhysicalObjectTrackingComponent()
	{
		UClass* Class = UPhysicalObjectTrackingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshDeviceId", &UPhysicalObjectTrackingComponent::execRefreshDeviceId },
			{ "SelectTracker", &UPhysicalObjectTrackingComponent::execSelectTracker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalObjectTrackingComponent, nullptr, "RefreshDeviceId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicalObjectTrackingComponent, nullptr, "SelectTracker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingComponent_NoRegister()
	{
		return UPhysicalObjectTrackingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTargetDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SerialId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingSpaceReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackingSpaceReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldReferencePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldReferencePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceIdAcquireTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeviceIdAcquireTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceReacquireInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeviceReacquireInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicalObjectTracker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicalObjectTrackingComponent_RefreshDeviceId, "RefreshDeviceId" }, // 2269629137
		{ &Z_Construct_UFunction_UPhysicalObjectTrackingComponent_SelectTracker, "SelectTracker" }, // 3180173029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "VirtualProduction" },
		{ "IncludePath", "PhysicalObjectTrackingComponent.h" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_CurrentTargetDeviceId_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_CurrentTargetDeviceId = { "CurrentTargetDeviceId", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, CurrentTargetDeviceId), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_CurrentTargetDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_CurrentTargetDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_SerialId_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "DeviceSerialId", "" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_SerialId = { "SerialId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, SerialId), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_SerialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_SerialId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_TrackingSpaceReference_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_TrackingSpaceReference = { "TrackingSpaceReference", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, TrackingSpaceReference), Z_Construct_UClass_UPhysicalObjectTrackingReferencePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_TrackingSpaceReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_TrackingSpaceReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_WorldReferencePoint_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_WorldReferencePoint = { "WorldReferencePoint", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, WorldReferencePoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_WorldReferencePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_WorldReferencePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_FilterSettings_MetaData[] = {
		{ "Category", "PhysicalObjectTrackingComponent" },
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_FilterSettings = { "FilterSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, FilterSettings), Z_Construct_UClass_UPhysicalObjectTrackingFilterSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_FilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_FilterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceIdAcquireTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceIdAcquireTimer = { "DeviceIdAcquireTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, DeviceIdAcquireTimer), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceIdAcquireTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceIdAcquireTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceReacquireInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicalObjectTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceReacquireInterval = { "DeviceReacquireInterval", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalObjectTrackingComponent, DeviceReacquireInterval), METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceReacquireInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceReacquireInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_CurrentTargetDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_SerialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_TrackingSpaceReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_WorldReferencePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_FilterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceIdAcquireTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::NewProp_DeviceReacquireInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalObjectTrackingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::ClassParams = {
		&UPhysicalObjectTrackingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalObjectTrackingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalObjectTrackingComponent, 2691304345);
	template<> PHYSICALOBJECTTRACKER_API UClass* StaticClass<UPhysicalObjectTrackingComponent>()
	{
		return UPhysicalObjectTrackingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalObjectTrackingComponent(Z_Construct_UClass_UPhysicalObjectTrackingComponent, &UPhysicalObjectTrackingComponent::StaticClass, TEXT("/Script/PhysicalObjectTracker"), TEXT("UPhysicalObjectTrackingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalObjectTrackingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
