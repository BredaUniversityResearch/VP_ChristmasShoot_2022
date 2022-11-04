// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CradleLightControl/Public/BaseLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLight() {}
// Cross Module References
	CRADLELIGHTCONTROL_API UEnum* Z_Construct_UEnum_CradleLightControl_ELightType();
	UPackage* Z_Construct_UPackage__Script_CradleLightControl();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight_NoRegister();
	CRADLELIGHTCONTROL_API UClass* Z_Construct_UClass_UBaseLight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ELightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CradleLightControl_ELightType, Z_Construct_UPackage__Script_CradleLightControl(), TEXT("ELightType"));
		}
		return Singleton;
	}
	template<> CRADLELIGHTCONTROL_API UEnum* StaticEnum<ELightType>()
	{
		return ELightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELightType(ELightType_StaticEnum, TEXT("/Script/CradleLightControl"), TEXT("ELightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CradleLightControl_ELightType_Hash() { return 2800112020U; }
	UEnum* Z_Construct_UEnum_CradleLightControl_ELightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CradleLightControl();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELightType"), 0, Get_Z_Construct_UEnum_CradleLightControl_ELightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Mixed", (int64)Mixed },
				{ "SkyLight", (int64)SkyLight },
				{ "SpotLight", (int64)SpotLight },
				{ "DirectionalLight", (int64)DirectionalLight },
				{ "PointLight", (int64)PointLight },
				{ "Invalid", (int64)Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Base class representing a light in the tools' data.\n// Contains data that is common between virtual and DMX controlled lights, and interface functions for them\n" },
				{ "DirectionalLight.Name", "DirectionalLight" },
				{ "Invalid.Name", "Invalid" },
				{ "Mixed.Name", "Mixed" },
				{ "ModuleRelativePath", "Public/BaseLight.h" },
				{ "PointLight.Name", "PointLight" },
				{ "SkyLight.Name", "SkyLight" },
				{ "SpotLight.Name", "SpotLight" },
				{ "ToolTip", "Base class representing a light in the tools' data.\nContains data that is common between virtual and DMX controlled lights, and interface functions for them" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CradleLightControl,
				nullptr,
				"ELightType",
				"ELightType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UBaseLight::execSetOuterConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterConeAngle(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetInnerConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerConeAngle(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execAddVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVertical(Z_Param_NormalizedDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execAddHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHorizontal(Z_Param_NormalizedDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetCastShadows)
	{
		P_GET_UBOOL(Z_Param_bState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastShadows(Z_Param_bState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetTemperatureRaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperatureRaw(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperature(Z_Param_NormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetUseTemperature)
	{
		P_GET_UBOOL(Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseTemperature(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetSaturation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaturation(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetHue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetLightIntensityRaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightIntensityRaw(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetLightIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightIntensity(Z_Param_NormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLight::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewState);
		P_NATIVE_END;
	}
	void UBaseLight::StaticRegisterNativesUBaseLight()
	{
		UClass* Class = UBaseLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHorizontal", &UBaseLight::execAddHorizontal },
			{ "AddVertical", &UBaseLight::execAddVertical },
			{ "SetCastShadows", &UBaseLight::execSetCastShadows },
			{ "SetEnabled", &UBaseLight::execSetEnabled },
			{ "SetHue", &UBaseLight::execSetHue },
			{ "SetInnerConeAngle", &UBaseLight::execSetInnerConeAngle },
			{ "SetLightIntensity", &UBaseLight::execSetLightIntensity },
			{ "SetLightIntensityRaw", &UBaseLight::execSetLightIntensityRaw },
			{ "SetOuterConeAngle", &UBaseLight::execSetOuterConeAngle },
			{ "SetSaturation", &UBaseLight::execSetSaturation },
			{ "SetTemperature", &UBaseLight::execSetTemperature },
			{ "SetTemperatureRaw", &UBaseLight::execSetTemperatureRaw },
			{ "SetUseTemperature", &UBaseLight::execSetUseTemperature },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics
	{
		struct BaseLight_eventAddHorizontal_Parms
		{
			float NormalizedDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::NewProp_NormalizedDegrees = { "NormalizedDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventAddHorizontal_Parms, NormalizedDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::NewProp_NormalizedDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Horizontal and vertical rotation are done using addition to preserve\n// relative rotation between lights when transforming multiple at a time\n" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
		{ "ToolTip", "Horizontal and vertical rotation are done using addition to preserve\nrelative rotation between lights when transforming multiple at a time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "AddHorizontal", nullptr, nullptr, sizeof(BaseLight_eventAddHorizontal_Parms), Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_AddHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_AddHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_AddVertical_Statics
	{
		struct BaseLight_eventAddVertical_Parms
		{
			float NormalizedDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_AddVertical_Statics::NewProp_NormalizedDegrees = { "NormalizedDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventAddVertical_Parms, NormalizedDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_AddVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_AddVertical_Statics::NewProp_NormalizedDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_AddVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_AddVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "AddVertical", nullptr, nullptr, sizeof(BaseLight_eventAddVertical_Parms), Z_Construct_UFunction_UBaseLight_AddVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_AddVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_AddVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_AddVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_AddVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_AddVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics
	{
		struct BaseLight_eventSetCastShadows_Parms
		{
			bool bState;
		};
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((BaseLight_eventSetCastShadows_Parms*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseLight_eventSetCastShadows_Parms), &Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::NewProp_bState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::NewProp_bState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetCastShadows", nullptr, nullptr, sizeof(BaseLight_eventSetCastShadows_Parms), Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetCastShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetCastShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetEnabled_Statics
	{
		struct BaseLight_eventSetEnabled_Parms
		{
			bool bNewState;
		};
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((BaseLight_eventSetEnabled_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseLight_eventSetEnabled_Parms), &Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetEnabled", nullptr, nullptr, sizeof(BaseLight_eventSetEnabled_Parms), Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetHue_Statics
	{
		struct BaseLight_eventSetHue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetHue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetHue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetHue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetHue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetHue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetHue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetHue", nullptr, nullptr, sizeof(BaseLight_eventSetHue_Parms), Z_Construct_UFunction_UBaseLight_SetHue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetHue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetHue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetHue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetHue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetHue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics
	{
		struct BaseLight_eventSetInnerConeAngle_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetInnerConeAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetInnerConeAngle", nullptr, nullptr, sizeof(BaseLight_eventSetInnerConeAngle_Parms), Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics
	{
		struct BaseLight_eventSetLightIntensity_Parms
		{
			float NormalizedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetLightIntensity_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetLightIntensity", nullptr, nullptr, sizeof(BaseLight_eventSetLightIntensity_Parms), Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics
	{
		struct BaseLight_eventSetLightIntensityRaw_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetLightIntensityRaw_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetLightIntensityRaw", nullptr, nullptr, sizeof(BaseLight_eventSetLightIntensityRaw_Parms), Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics
	{
		struct BaseLight_eventSetOuterConeAngle_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetOuterConeAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetOuterConeAngle", nullptr, nullptr, sizeof(BaseLight_eventSetOuterConeAngle_Parms), Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetSaturation_Statics
	{
		struct BaseLight_eventSetSaturation_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetSaturation_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetSaturation", nullptr, nullptr, sizeof(BaseLight_eventSetSaturation_Parms), Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetTemperature_Statics
	{
		struct BaseLight_eventSetTemperature_Parms
		{
			float NormalizedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetTemperature_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetTemperature", nullptr, nullptr, sizeof(BaseLight_eventSetTemperature_Parms), Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics
	{
		struct BaseLight_eventSetTemperatureRaw_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLight_eventSetTemperatureRaw_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetTemperatureRaw", nullptr, nullptr, sizeof(BaseLight_eventSetTemperatureRaw_Parms), Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetTemperatureRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetTemperatureRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics
	{
		struct BaseLight_eventSetUseTemperature_Parms
		{
			bool NewState;
		};
		static void NewProp_NewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::NewProp_NewState_SetBit(void* Obj)
	{
		((BaseLight_eventSetUseTemperature_Parms*)Obj)->NewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseLight_eventSetUseTemperature_Parms), &Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLight, nullptr, "SetUseTemperature", nullptr, nullptr, sizeof(BaseLight_eventSetUseTemperature_Parms), Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLight_SetUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLight_SetUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseLight_NoRegister()
	{
		return UBaseLight::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[];
#endif
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Horizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Horizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockInnerAngleToOuterAngle_MetaData[];
#endif
		static void NewProp_bLockInnerAngleToOuterAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockInnerAngleToOuterAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CradleLightControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseLight_AddHorizontal, "AddHorizontal" }, // 2302229651
		{ &Z_Construct_UFunction_UBaseLight_AddVertical, "AddVertical" }, // 1992870995
		{ &Z_Construct_UFunction_UBaseLight_SetCastShadows, "SetCastShadows" }, // 2523323006
		{ &Z_Construct_UFunction_UBaseLight_SetEnabled, "SetEnabled" }, // 3443026572
		{ &Z_Construct_UFunction_UBaseLight_SetHue, "SetHue" }, // 2966365956
		{ &Z_Construct_UFunction_UBaseLight_SetInnerConeAngle, "SetInnerConeAngle" }, // 617748206
		{ &Z_Construct_UFunction_UBaseLight_SetLightIntensity, "SetLightIntensity" }, // 3581242748
		{ &Z_Construct_UFunction_UBaseLight_SetLightIntensityRaw, "SetLightIntensityRaw" }, // 4116640149
		{ &Z_Construct_UFunction_UBaseLight_SetOuterConeAngle, "SetOuterConeAngle" }, // 208065724
		{ &Z_Construct_UFunction_UBaseLight_SetSaturation, "SetSaturation" }, // 3683252270
		{ &Z_Construct_UFunction_UBaseLight_SetTemperature, "SetTemperature" }, // 403687007
		{ &Z_Construct_UFunction_UBaseLight_SetTemperatureRaw, "SetTemperatureRaw" }, // 3594032314
		{ &Z_Construct_UFunction_UBaseLight_SetUseTemperature, "SetUseTemperature" }, // 1639463704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseLight.h" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Id), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	void Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UBaseLight*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseLight), &Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Intensity), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Hue_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Hue = { "Hue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Hue), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Hue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Hue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Saturation), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Saturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	void Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((UBaseLight*)Obj)->bUseTemperature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseLight), &Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Temperature), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Horizontal_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Horizontal = { "Horizontal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Horizontal), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Horizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Horizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_Vertical_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_Vertical = { "Vertical", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, Vertical), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_Vertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_Vertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_InnerAngle_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_InnerAngle = { "InnerAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, InnerAngle), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_InnerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_InnerAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_OuterAngle_MetaData[] = {
		{ "Category", "BaseLight" },
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_OuterAngle = { "OuterAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLight, OuterAngle), METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_OuterAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_OuterAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseLight.h" },
	};
#endif
	void Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle_SetBit(void* Obj)
	{
		((UBaseLight*)Obj)->bLockInnerAngleToOuterAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle = { "bLockInnerAngleToOuterAngle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseLight), &Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Hue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Saturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_bUseTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Horizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_Vertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_InnerAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_OuterAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLight_Statics::NewProp_bLockInnerAngleToOuterAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseLight_Statics::ClassParams = {
		&UBaseLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseLight, 3006976140);
	template<> CRADLELIGHTCONTROL_API UClass* StaticClass<UBaseLight>()
	{
		return UBaseLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseLight(Z_Construct_UClass_UBaseLight, &UBaseLight::StaticClass, TEXT("/Script/CradleLightControl"), TEXT("UBaseLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
