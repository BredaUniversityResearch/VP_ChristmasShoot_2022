// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBMCCBattery_Info;
struct FBMCCVideo_RecordingFormat;
struct FBMCCVideo_VideoMode;
struct FBMCCMedia_TransportMode;
struct FBMCCLens_SetContinuousZoom;
struct FBMCCLens_SetAbsoluteZoomNormalized;
struct FBMCCLens_SetAbsoluteZoomMm;
struct FBMCCLens_OpticalImageStabilization;
struct FBMCCLens_ApertureOrdinal;
struct FBMCCLens_ApertureNormalized;
struct FBMCCLens_ApertureFStop;
struct FBMCCLens_Focus;
#ifdef BLACKMAGICCAMERACONTROL_BMCCDispatcher_generated_h
#error "BMCCDispatcher.generated.h already included, missing '#pragma once' in BMCCDispatcher.h"
#endif
#define BLACKMAGICCAMERACONTROL_BMCCDispatcher_generated_h

#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_71_DELEGATE \
struct BMCCDispatcher_eventBatteryStatusReceived_Parms \
{ \
	int32 SourceDevice; \
	FBMCCBattery_Info Payload; \
}; \
static inline void FBatteryStatusReceived_DelegateWrapper(const FMulticastScriptDelegate& BatteryStatusReceived, int32 SourceDevice, FBMCCBattery_Info const& Payload) \
{ \
	BMCCDispatcher_eventBatteryStatusReceived_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	BatteryStatusReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_68_DELEGATE \
struct BMCCDispatcher_eventVideoRecordingFormat_Parms \
{ \
	int32 SourceDevice; \
	FBMCCVideo_RecordingFormat Payload; \
}; \
static inline void FVideoRecordingFormat_DelegateWrapper(const FMulticastScriptDelegate& VideoRecordingFormat, int32 SourceDevice, FBMCCVideo_RecordingFormat const& Payload) \
{ \
	BMCCDispatcher_eventVideoRecordingFormat_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	VideoRecordingFormat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_65_DELEGATE \
struct BMCCDispatcher_eventVideoVideoMode_Parms \
{ \
	int32 SourceDevice; \
	FBMCCVideo_VideoMode Payload; \
}; \
static inline void FVideoVideoMode_DelegateWrapper(const FMulticastScriptDelegate& VideoVideoMode, int32 SourceDevice, FBMCCVideo_VideoMode const& Payload) \
{ \
	BMCCDispatcher_eventVideoVideoMode_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	VideoVideoMode.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_28_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms \
{ \
	int32 SourceDevice; \
	FBMCCMedia_TransportMode Payload; \
}; \
static inline void FOnMediaTransportModeReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMediaTransportModeReceived, int32 SourceDevice, FBMCCMedia_TransportMode const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnMediaTransportModeReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_26_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_SetContinuousZoom Payload; \
}; \
static inline void FOnLens_SetContinuousZoom_DelegateWrapper(const FMulticastScriptDelegate& OnLens_SetContinuousZoom, int32 SourceDevice, FBMCCLens_SetContinuousZoom const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_SetContinuousZoom.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_25_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_SetAbsoluteZoomNormalized Payload; \
}; \
static inline void FOnLens_SetAbsoluteZoomNormalized_DelegateWrapper(const FMulticastScriptDelegate& OnLens_SetAbsoluteZoomNormalized, int32 SourceDevice, FBMCCLens_SetAbsoluteZoomNormalized const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_SetAbsoluteZoomNormalized.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_24_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_SetAbsoluteZoomMm Payload; \
}; \
static inline void FOnLens_SetAbsoluteZoomMm_DelegateWrapper(const FMulticastScriptDelegate& OnLens_SetAbsoluteZoomMm, int32 SourceDevice, FBMCCLens_SetAbsoluteZoomMm const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_SetAbsoluteZoomMm.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_23_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_OpticalImageStabilization Payload; \
}; \
static inline void FOnLens_OpticalImageStabilization_DelegateWrapper(const FMulticastScriptDelegate& OnLens_OpticalImageStabilization, int32 SourceDevice, FBMCCLens_OpticalImageStabilization const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_OpticalImageStabilization.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_22_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_ApertureOrdinal Payload; \
}; \
static inline void FOnLens_ApertureOrdinal_DelegateWrapper(const FMulticastScriptDelegate& OnLens_ApertureOrdinal, int32 SourceDevice, FBMCCLens_ApertureOrdinal const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_ApertureOrdinal.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_21_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_ApertureNormalized Payload; \
}; \
static inline void FOnLens_ApertureNormalized_DelegateWrapper(const FMulticastScriptDelegate& OnLens_ApertureNormalized, int32 SourceDevice, FBMCCLens_ApertureNormalized const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_ApertureNormalized.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_20_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_ApertureFStop Payload; \
}; \
static inline void FOnLens_ApertureFStop_DelegateWrapper(const FMulticastScriptDelegate& OnLens_ApertureFStop, int32 SourceDevice, FBMCCLens_ApertureFStop const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_ApertureFStop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_19_DELEGATE \
struct _Script_BlackmagicCameraControl_eventOnLens_Focus_Parms \
{ \
	int32 SourceDevice; \
	FBMCCLens_Focus Payload; \
}; \
static inline void FOnLens_Focus_DelegateWrapper(const FMulticastScriptDelegate& OnLens_Focus, int32 SourceDevice, FBMCCLens_Focus const& Payload) \
{ \
	_Script_BlackmagicCameraControl_eventOnLens_Focus_Parms Parms; \
	Parms.SourceDevice=SourceDevice; \
	Parms.Payload=Payload; \
	OnLens_Focus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_SPARSE_DATA
#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_RPC_WRAPPERS
#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBMCCDispatcher(); \
	friend struct Z_Construct_UClass_UBMCCDispatcher_Statics; \
public: \
	DECLARE_CLASS(UBMCCDispatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicCameraControl"), NO_API) \
	DECLARE_SERIALIZER(UBMCCDispatcher)


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBMCCDispatcher(); \
	friend struct Z_Construct_UClass_UBMCCDispatcher_Statics; \
public: \
	DECLARE_CLASS(UBMCCDispatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicCameraControl"), NO_API) \
	DECLARE_SERIALIZER(UBMCCDispatcher)


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBMCCDispatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBMCCDispatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBMCCDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBMCCDispatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBMCCDispatcher(UBMCCDispatcher&&); \
	NO_API UBMCCDispatcher(const UBMCCDispatcher&); \
public:


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBMCCDispatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBMCCDispatcher(UBMCCDispatcher&&); \
	NO_API UBMCCDispatcher(const UBMCCDispatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBMCCDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBMCCDispatcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBMCCDispatcher)


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_PRIVATE_PROPERTY_OFFSET
#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_30_PROLOG
#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_PRIVATE_PROPERTY_OFFSET \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_SPARSE_DATA \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_RPC_WRAPPERS \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_INCLASS \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_PRIVATE_PROPERTY_OFFSET \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_SPARSE_DATA \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_INCLASS_NO_PURE_DECLS \
	VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKMAGICCAMERACONTROL_API UClass* StaticClass<class UBMCCDispatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VP_ChristmasShoot_UE_2022_Plugins_BlackmagicCameraControl_Source_BlackmagicCameraControl_Public_BMCCDispatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
