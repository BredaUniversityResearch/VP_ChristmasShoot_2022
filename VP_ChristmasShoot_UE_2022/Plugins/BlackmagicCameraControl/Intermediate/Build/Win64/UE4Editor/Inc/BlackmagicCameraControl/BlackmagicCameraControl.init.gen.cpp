// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicCameraControl_init() {}
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature();
	BLACKMAGICCAMERACONTROL_API UFunction* Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlackmagicCameraControl()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_Focus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureFStop__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureNormalized__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_ApertureOrdinal__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_OpticalImageStabilization__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomMm__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetAbsoluteZoomNormalized__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnLens_SetContinuousZoom__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlackmagicCameraControl_OnMediaTransportModeReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoVideoMode__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UBMCCDispatcher_VideoRecordingFormat__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UBMCCDispatcher_BatteryStatusReceived__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlackmagicCameraControl",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEAC3EE72,
				0xD47C966D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
