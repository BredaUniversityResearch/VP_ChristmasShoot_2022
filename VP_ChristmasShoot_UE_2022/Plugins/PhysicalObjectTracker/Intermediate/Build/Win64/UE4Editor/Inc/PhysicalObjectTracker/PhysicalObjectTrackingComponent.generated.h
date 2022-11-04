// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICALOBJECTTRACKER_PhysicalObjectTrackingComponent_generated_h
#error "PhysicalObjectTrackingComponent.generated.h already included, missing '#pragma once' in PhysicalObjectTrackingComponent.h"
#endif
#define PHYSICALOBJECTTRACKER_PhysicalObjectTrackingComponent_generated_h

#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_SPARSE_DATA
#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshDeviceId); \
	DECLARE_FUNCTION(execSelectTracker);


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshDeviceId); \
	DECLARE_FUNCTION(execSelectTracker);


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicalObjectTrackingComponent(); \
	friend struct Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalObjectTrackingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicalObjectTracker"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalObjectTrackingComponent)


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalObjectTrackingComponent(); \
	friend struct Z_Construct_UClass_UPhysicalObjectTrackingComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicalObjectTrackingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicalObjectTracker"), NO_API) \
	DECLARE_SERIALIZER(UPhysicalObjectTrackingComponent)


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicalObjectTrackingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalObjectTrackingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalObjectTrackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalObjectTrackingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalObjectTrackingComponent(UPhysicalObjectTrackingComponent&&); \
	NO_API UPhysicalObjectTrackingComponent(const UPhysicalObjectTrackingComponent&); \
public:


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicalObjectTrackingComponent(UPhysicalObjectTrackingComponent&&); \
	NO_API UPhysicalObjectTrackingComponent(const UPhysicalObjectTrackingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicalObjectTrackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalObjectTrackingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalObjectTrackingComponent)


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackingSpaceReference() { return STRUCT_OFFSET(UPhysicalObjectTrackingComponent, TrackingSpaceReference); } \
	FORCEINLINE static uint32 __PPO__WorldReferencePoint() { return STRUCT_OFFSET(UPhysicalObjectTrackingComponent, WorldReferencePoint); } \
	FORCEINLINE static uint32 __PPO__FilterSettings() { return STRUCT_OFFSET(UPhysicalObjectTrackingComponent, FilterSettings); } \
	FORCEINLINE static uint32 __PPO__DeviceIdAcquireTimer() { return STRUCT_OFFSET(UPhysicalObjectTrackingComponent, DeviceIdAcquireTimer); } \
	FORCEINLINE static uint32 __PPO__DeviceReacquireInterval() { return STRUCT_OFFSET(UPhysicalObjectTrackingComponent, DeviceReacquireInterval); }


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_9_PROLOG
#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_SPARSE_DATA \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_RPC_WRAPPERS \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_INCLASS \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_SPARSE_DATA \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_INCLASS_NO_PURE_DECLS \
	VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICALOBJECTTRACKER_API UClass* StaticClass<class UPhysicalObjectTrackingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VP_ChristmasShoot_UE_2022_Plugins_PhysicalObjectTracker_Source_PhysicalObjectTracker_Public_PhysicalObjectTrackingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
