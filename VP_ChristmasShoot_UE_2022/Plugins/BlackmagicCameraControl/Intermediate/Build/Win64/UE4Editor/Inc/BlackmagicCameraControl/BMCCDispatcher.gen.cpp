// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCameraControl/Public/BMCCDispatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMCCDispatcher() {}
// Cross Module References
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCDispatcher();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCBattery_Info();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCVideo_VideoMode();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCMedia_TransportMode();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FBMCCLens_Focus();
	BLACKMAGICCAMERACONTROL_API UClass* Z_Construct_UClass_UBMCCDispatcher_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics
	{
		struct BMCCDispatcher_eventBatteryStatusReceived_Parms
		{
			int32 SourceDevice;
			FBMCCBattery_Info Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventBatteryStatusReceived_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventBatteryStatusReceived_Parms, Payload), Z_Construct_UScriptStruct_FBMCCBattery_Info, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBMCCDispatcher, nullptr, "BatteryStatusReceived__DelegateSignature", nullptr, nullptr, sizeof(BMCCDispatcher_eventBatteryStatusReceived_Parms), Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics
	{
		struct BMCCDispatcher_eventVideoRecordingFormat_Parms
		{
			int32 SourceDevice;
			FBMCCVideo_RecordingFormat Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventVideoRecordingFormat_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventVideoRecordingFormat_Parms, Payload), Z_Construct_UScriptStruct_FBMCCVideo_RecordingFormat, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBMCCDispatcher, nullptr, "VideoRecordingFormat__DelegateSignature", nullptr, nullptr, sizeof(BMCCDispatcher_eventVideoRecordingFormat_Parms), Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics
	{
		struct BMCCDispatcher_eventVideoVideoMode_Parms
		{
			int32 SourceDevice;
			FBMCCVideo_VideoMode Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventVideoVideoMode_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BMCCDispatcher_eventVideoVideoMode_Parms, Payload), Z_Construct_UScriptStruct_FBMCCVideo_VideoMode, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBMCCDispatcher, nullptr, "VideoVideoMode__DelegateSignature", nullptr, nullptr, sizeof(BMCCDispatcher_eventVideoVideoMode_Parms), Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms
		{
			int32 SourceDevice;
			FBMCCMedia_TransportMode Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms, Payload), Z_Construct_UScriptStruct_FBMCCMedia_TransportMode, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnMediaTransportModeReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnMediaTransportModeReceived_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms
		{
			int32 SourceDevice;
			FBMCCLens_SetContinuousZoom Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_SetContinuousZoom, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_SetContinuousZoom__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_SetContinuousZoom_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms
		{
			int32 SourceDevice;
			FBMCCLens_SetAbsoluteZoomNormalized Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomNormalized, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_SetAbsoluteZoomNormalized__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomNormalized_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms
		{
			int32 SourceDevice;
			FBMCCLens_SetAbsoluteZoomMm Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_SetAbsoluteZoomMm, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_SetAbsoluteZoomMm__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_SetAbsoluteZoomMm_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms
		{
			int32 SourceDevice;
			FBMCCLens_OpticalImageStabilization Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_OpticalImageStabilization, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_OpticalImageStabilization__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_OpticalImageStabilization_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms
		{
			int32 SourceDevice;
			FBMCCLens_ApertureOrdinal Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_ApertureOrdinal, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_ApertureOrdinal__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_ApertureOrdinal_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms
		{
			int32 SourceDevice;
			FBMCCLens_ApertureNormalized Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_ApertureNormalized, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_ApertureNormalized__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_ApertureNormalized_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms
		{
			int32 SourceDevice;
			FBMCCLens_ApertureFStop Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_ApertureFStop, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_ApertureFStop__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_ApertureFStop_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics
	{
		struct _Script_BlackmagicCameraControl_eventOnLens_Focus_Parms
		{
			int32 SourceDevice;
			FBMCCLens_Focus Payload;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_Focus_Parms, SourceDevice), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlackmagicCameraControl_eventOnLens_Focus_Parms, Payload), Z_Construct_UScriptStruct_FBMCCLens_Focus, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_SourceDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlackmagicCameraControl, nullptr, "OnLens_Focus__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlackmagicCameraControl_eventOnLens_Focus_Parms), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UBMCCDispatcher::StaticRegisterNativesUBMCCDispatcher()
	{
	}
	UClass* Z_Construct_UClass_UBMCCDispatcher_NoRegister()
	{
		return UBMCCDispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UBMCCDispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFocusReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensFocusReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensApertureFStopReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensApertureFStopReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensApertureNormalizedReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensApertureNormalizedReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensApertureOrdinalReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensApertureOrdinalReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOpticalImageStabilizationReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensOpticalImageStabilizationReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensAbsoluteZoomMmReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensAbsoluteZoomMmReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensAbsoluteZoomNormalizedReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensAbsoluteZoomNormalizedReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSetContinuousZoomReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LensSetContinuousZoomReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaTransportModeReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MediaTransportModeReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBMCCDispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicCameraControl,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UBMCCDispatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature, "BatteryStatusReceived__DelegateSignature" }, // 3540842878
		{ &Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature, "VideoRecordingFormat__DelegateSignature" }, // 340166029
		{ &Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature, "VideoVideoMode__DelegateSignature" }, // 4175533986
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BMCCDispatcher.h" },
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensFocusReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensFocusReceived = { "LensFocusReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensFocusReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensFocusReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensFocusReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureFStopReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureFStopReceived = { "LensApertureFStopReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensApertureFStopReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureFStopReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureFStopReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureNormalizedReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureNormalizedReceived = { "LensApertureNormalizedReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensApertureNormalizedReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureNormalizedReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureNormalizedReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureOrdinalReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureOrdinalReceived = { "LensApertureOrdinalReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensApertureOrdinalReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureOrdinalReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureOrdinalReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensOpticalImageStabilizationReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensOpticalImageStabilizationReceived = { "LensOpticalImageStabilizationReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensOpticalImageStabilizationReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensOpticalImageStabilizationReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensOpticalImageStabilizationReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomMmReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomMmReceived = { "LensAbsoluteZoomMmReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensAbsoluteZoomMmReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomMmReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomMmReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomNormalizedReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomNormalizedReceived = { "LensAbsoluteZoomNormalizedReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensAbsoluteZoomNormalizedReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomNormalizedReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomNormalizedReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensSetContinuousZoomReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensSetContinuousZoomReceived = { "LensSetContinuousZoomReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, LensSetContinuousZoomReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensSetContinuousZoomReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensSetContinuousZoomReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_MediaTransportModeReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/BMCCDispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_MediaTransportModeReceived = { "MediaTransportModeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBMCCDispatcher, MediaTransportModeReceived), Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_MediaTransportModeReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_MediaTransportModeReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBMCCDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensFocusReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureFStopReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureNormalizedReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensApertureOrdinalReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensOpticalImageStabilizationReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomMmReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensAbsoluteZoomNormalizedReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_LensSetContinuousZoomReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBMCCDispatcher_Statics::NewProp_MediaTransportModeReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBMCCDispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBMCCDispatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBMCCDispatcher_Statics::ClassParams = {
		&UBMCCDispatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UBMCCDispatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBMCCDispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBMCCDispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBMCCDispatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBMCCDispatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBMCCDispatcher, 908818772);
	template<> BLACKMAGICCAMERACONTROL_API UClass* StaticClass<UBMCCDispatcher>()
	{
		return UBMCCDispatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBMCCDispatcher(Z_Construct_UClass_UBMCCDispatcher, &UBMCCDispatcher::StaticClass, TEXT("/Script/BlackmagicCameraControl"), TEXT("UBMCCDispatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBMCCDispatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
