// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_FFMPEG/Public/Unreal_FFMPEGBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_FFMPEGBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREAL_FFMPEG_API UClass* Z_Construct_UClass_UUnreal_FFMPEGBPLibrary();
	UNREAL_FFMPEG_API UClass* Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_NoRegister();
	UNREAL_FFMPEG_API UEnum* Z_Construct_UEnum_Unreal_FFMPEG_ECodec();
	UNREAL_FFMPEG_API UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature();
	UNREAL_FFMPEG_API UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature();
	UNREAL_FFMPEG_API UScriptStruct* Z_Construct_UScriptStruct_F2DInt();
	UNREAL_FFMPEG_API UScriptStruct* Z_Construct_UScriptStruct_FFmpegBitrate();
	UNREAL_FFMPEG_API UScriptStruct* Z_Construct_UScriptStruct_FFmpegInfo();
	UNREAL_FFMPEG_API UScriptStruct* Z_Construct_UScriptStruct_FFmpegSettings();
	UPackage* Z_Construct_UPackage__Script_Unreal_FFMPEG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECodec;
	static UEnum* ECodec_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECodec.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Unreal_FFMPEG_ECodec, (UObject*)Z_Construct_UPackage__Script_Unreal_FFMPEG(), TEXT("ECodec"));
		}
		return Z_Registration_Info_UEnum_ECodec.OuterSingleton;
	}
	template<> UNREAL_FFMPEG_API UEnum* StaticEnum<ECodec>()
	{
		return ECodec_StaticEnum();
	}
	struct Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enumerators[] = {
		{ "ECodec::x264", (int64)ECodec::x264 },
		{ "ECodec::x265", (int64)ECodec::x265 },
		{ "ECodec::h264", (int64)ECodec::h264 },
		{ "ECodec::hevc", (int64)ECodec::hevc },
		{ "ECodec::AV1", (int64)ECodec::AV1 },
		{ "ECodec::VP8", (int64)ECodec::VP8 },
		{ "ECodec::VP9", (int64)ECodec::VP9 },
		{ "ECodec::Copy", (int64)ECodec::Copy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enum_MetaDataParams[] = {
		{ "AV1.DisplayName", "AV1" },
		{ "AV1.Name", "ECodec::AV1" },
		{ "BlueprintType", "true" },
		{ "Copy.DisplayName", "Copy" },
		{ "Copy.Name", "ECodec::Copy" },
		{ "h264.DisplayName", "h264_nvec (Nvidia NVENC)" },
		{ "h264.Name", "ECodec::h264" },
		{ "hevc.DisplayName", "hevc_nvenc (Nvidia NVENC)" },
		{ "hevc.Name", "ECodec::hevc" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
		{ "VP8.DisplayName", "VP8" },
		{ "VP8.Name", "ECodec::VP8" },
		{ "VP9.DisplayName", "VP9" },
		{ "VP9.Name", "ECodec::VP9" },
		{ "x264.DisplayName", "x264" },
		{ "x264.Name", "ECodec::x264" },
		{ "x265.DisplayName", "x265" },
		{ "x265.Name", "ECodec::x265" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
		nullptr,
		"ECodec",
		"ECodec",
		Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Unreal_FFMPEG_ECodec()
	{
		if (!Z_Registration_Info_UEnum_ECodec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECodec.InnerSingleton, Z_Construct_UEnum_Unreal_FFMPEG_ECodec_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECodec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_2DInt;
class UScriptStruct* F2DInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_2DInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_2DInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F2DInt, (UObject*)Z_Construct_UPackage__Script_Unreal_FFMPEG(), TEXT("2DInt"));
	}
	return Z_Registration_Info_UScriptStruct_2DInt.OuterSingleton;
}
template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<F2DInt>()
{
	return F2DInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_F2DInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_F2DInt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_F2DInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F2DInt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_x_MetaData[] = {
		{ "Category", "2DInt" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(F2DInt, x), METADATA_PARAMS(Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_y_MetaData[] = {
		{ "Category", "2DInt" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(F2DInt, y), METADATA_PARAMS(Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F2DInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F2DInt_Statics::NewProp_y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F2DInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
		nullptr,
		&NewStructOps,
		"2DInt",
		sizeof(F2DInt),
		alignof(F2DInt),
		Z_Construct_UScriptStruct_F2DInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F2DInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_F2DInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F2DInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_F2DInt()
	{
		if (!Z_Registration_Info_UScriptStruct_2DInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_2DInt.InnerSingleton, Z_Construct_UScriptStruct_F2DInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_2DInt.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FmpegBitrate;
class UScriptStruct* FFmpegBitrate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FmpegBitrate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FmpegBitrate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFmpegBitrate, (UObject*)Z_Construct_UPackage__Script_Unreal_FFMPEG(), TEXT("FmpegBitrate"));
	}
	return Z_Registration_Info_UScriptStruct_FmpegBitrate.OuterSingleton;
}
template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<FFmpegBitrate>()
{
	return FFmpegBitrate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFmpegBitrate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Average_Bit_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Average_Bit_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_Bit_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min_Bit_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Bit_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Bit_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegBitrate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFmpegBitrate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Average_Bit_Rate_MetaData[] = {
		{ "Category", "FmpegBitrate" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Average_Bit_Rate = { "Average_Bit_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegBitrate, Average_Bit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Average_Bit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Average_Bit_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Min_Bit_Rate_MetaData[] = {
		{ "Category", "FmpegBitrate" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Min_Bit_Rate = { "Min_Bit_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegBitrate, Min_Bit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Min_Bit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Min_Bit_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Max_Bit_Rate_MetaData[] = {
		{ "Category", "FmpegBitrate" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Max_Bit_Rate = { "Max_Bit_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegBitrate, Max_Bit_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Max_Bit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Max_Bit_Rate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFmpegBitrate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Average_Bit_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Min_Bit_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewProp_Max_Bit_Rate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFmpegBitrate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
		nullptr,
		&NewStructOps,
		"FmpegBitrate",
		sizeof(FFmpegBitrate),
		alignof(FFmpegBitrate),
		Z_Construct_UScriptStruct_FFmpegBitrate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegBitrate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFmpegBitrate()
	{
		if (!Z_Registration_Info_UScriptStruct_FmpegBitrate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FmpegBitrate.InnerSingleton, Z_Construct_UScriptStruct_FFmpegBitrate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FmpegBitrate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FmpegSettings;
class UScriptStruct* FFmpegSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FmpegSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FmpegSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFmpegSettings, (UObject*)Z_Construct_UPackage__Script_Unreal_FFMPEG(), TEXT("FmpegSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FmpegSettings.OuterSingleton;
}
template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<FFmpegSettings>()
{
	return FFmpegSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFmpegSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Codec_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Codec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_Start_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Media_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_End_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Media_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bit_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bit_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GOP_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GOP_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFmpegSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Codec), Z_Construct_UEnum_Unreal_FFMPEG_ECodec, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec_MetaData)) }; // 619501501
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Resolution), Z_Construct_UScriptStruct_F2DInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Resolution_MetaData)) }; // 579033393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_Start_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_Start = { "Media_Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Media_Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_End_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_End = { "Media_End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Media_End), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Bit_Rate_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Bit_Rate = { "Bit_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, Bit_Rate), Z_Construct_UScriptStruct_FFmpegBitrate, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Bit_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Bit_Rate_MetaData)) }; // 4206340706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_GOP_Size_MetaData[] = {
		{ "Category", "FmpegSettings" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_GOP_Size = { "GOP_Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegSettings, GOP_Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_GOP_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_GOP_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFmpegSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Media_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_Bit_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewProp_GOP_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFmpegSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
		nullptr,
		&NewStructOps,
		"FmpegSettings",
		sizeof(FFmpegSettings),
		alignof(FFmpegSettings),
		Z_Construct_UScriptStruct_FFmpegSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFmpegSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FmpegSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FmpegSettings.InnerSingleton, Z_Construct_UScriptStruct_FFmpegSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FmpegSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FmpegInfo;
class UScriptStruct* FFmpegInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FmpegInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FmpegInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFmpegInfo, (UObject*)Z_Construct_UPackage__Script_Unreal_FFMPEG(), TEXT("FmpegInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FmpegInfo.OuterSingleton;
}
template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<FFmpegInfo>()
{
	return FFmpegInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFmpegInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extenstion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extenstion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitrate_kbs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bitrate_kbs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Encoder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Encoder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Encoder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Audio_HZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Audio_HZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFmpegInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Extenstion_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Extenstion = { "Extenstion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Extenstion), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Extenstion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Extenstion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Duration), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Bitrate_kbs_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Bitrate_kbs = { "Bitrate_kbs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Bitrate_kbs), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Bitrate_kbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Bitrate_kbs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Resolution), Z_Construct_UScriptStruct_F2DInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Resolution_MetaData)) }; // 579033393
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder = { "Encoder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Encoder), Z_Construct_UEnum_Unreal_FFMPEG_ECodec, METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder_MetaData)) }; // 619501501
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Audio_HZ_MetaData[] = {
		{ "Category", "FmpegInfo" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Audio_HZ = { "Audio_HZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFmpegInfo, Audio_HZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Audio_HZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Audio_HZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFmpegInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Extenstion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Bitrate_kbs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Encoder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewProp_Audio_HZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFmpegInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
		nullptr,
		&NewStructOps,
		"FmpegInfo",
		sizeof(FFmpegInfo),
		alignof(FFmpegInfo),
		Z_Construct_UScriptStruct_FFmpegInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFmpegInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFmpegInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFmpegInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FmpegInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FmpegInfo.InnerSingleton, Z_Construct_UScriptStruct_FFmpegInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FmpegInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics
	{
		struct _Script_Unreal_FFMPEG_eventGetInfoDelegate_Parms
		{
			FFmpegInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Unreal_FFMPEG_eventGetInfoDelegate_Parms, Info), Z_Construct_UScriptStruct_FFmpegInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData)) }; // 824235093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Unreal_FFMPEG, nullptr, "GetInfoDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::_Script_Unreal_FFMPEG_eventGetInfoDelegate_Parms), Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetInfoDelegate_DelegateWrapper(const FScriptDelegate& GetInfoDelegate, FFmpegInfo const& Info)
{
	struct _Script_Unreal_FFMPEG_eventGetInfoDelegate_Parms
	{
		FFmpegInfo Info;
	};
	_Script_Unreal_FFMPEG_eventGetInfoDelegate_Parms Parms;
	Parms.Info=Info;
	GetInfoDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Unreal_FFMPEG, nullptr, "MediaConversionDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMediaConversionDelegate_DelegateWrapper(const FScriptDelegate& MediaConversionDelegate)
{
	MediaConversionDelegate.ProcessDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UUnreal_FFMPEGBPLibrary::execGet_Media_Info)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input_video_path);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnreal_FFMPEGBPLibrary::Get_Media_Info(Z_Param_Input_video_path,FGetInfoDelegate(Z_Param_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnreal_FFMPEGBPLibrary::execMedia_Conversion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input_video_path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Output_video_path);
		P_GET_STRUCT(FFmpegSettings,Z_Param_Settings);
		P_GET_UBOOL(Z_Param_Overwrite);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FFmpegCommand);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnreal_FFMPEGBPLibrary::Media_Conversion(Z_Param_Input_video_path,Z_Param_Output_video_path,Z_Param_Settings,Z_Param_Overwrite,Z_Param_Out_FFmpegCommand,FMediaConversionDelegate(Z_Param_Completed));
		P_NATIVE_END;
	}
	void UUnreal_FFMPEGBPLibrary::StaticRegisterNativesUUnreal_FFMPEGBPLibrary()
	{
		UClass* Class = UUnreal_FFMPEGBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_Media_Info", &UUnreal_FFMPEGBPLibrary::execGet_Media_Info },
			{ "Media_Conversion", &UUnreal_FFMPEGBPLibrary::execMedia_Conversion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics
	{
		struct Unreal_FFMPEGBPLibrary_eventGet_Media_Info_Parms
		{
			FString Input_video_path;
			FScriptDelegate Completed;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input_video_path;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::NewProp_Input_video_path = { "Input_video_path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventGet_Media_Info_Parms, Input_video_path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventGet_Media_Info_Parms, Completed), Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3894676694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::NewProp_Input_video_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpeg" },
		{ "DisplayName", "Get Media Info" },
		{ "Keywords", "FFmpeg" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnreal_FFMPEGBPLibrary, nullptr, "Get_Media_Info", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::Unreal_FFMPEGBPLibrary_eventGet_Media_Info_Parms), Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics
	{
		struct Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms
		{
			FString Input_video_path;
			FString Output_video_path;
			FFmpegSettings Settings;
			bool Overwrite;
			FString FFmpegCommand;
			FScriptDelegate Completed;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input_video_path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Output_video_path;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_Overwrite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FFmpegCommand;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Input_video_path = { "Input_video_path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms, Input_video_path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Output_video_path = { "Output_video_path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms, Output_video_path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms, Settings), Z_Construct_UScriptStruct_FFmpegSettings, METADATA_PARAMS(nullptr, 0) }; // 2252251443
	void Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Overwrite_SetBit(void* Obj)
	{
		((Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms*)Obj)->Overwrite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms), &Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_FFmpegCommand = { "FFmpegCommand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms, FFmpegCommand), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms, Completed), Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3048478799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Input_video_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Output_video_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Overwrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_FFmpegCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpeg" },
		{ "DisplayName", "Media Conversion" },
		{ "Keywords", "FFmpeg" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnreal_FFMPEGBPLibrary, nullptr, "Media_Conversion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::Unreal_FFMPEGBPLibrary_eventMedia_Conversion_Parms), Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnreal_FFMPEGBPLibrary);
	UClass* Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_NoRegister()
	{
		return UUnreal_FFMPEGBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FFMPEG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Get_Media_Info, "Get_Media_Info" }, // 52038369
		{ &Z_Construct_UFunction_UUnreal_FFMPEGBPLibrary_Media_Conversion, "Media_Conversion" }, // 2857864609
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Unreal_FFMPEGBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Unreal_FFMPEGBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnreal_FFMPEGBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::ClassParams = {
		&UUnreal_FFMPEGBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnreal_FFMPEGBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnreal_FFMPEGBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnreal_FFMPEGBPLibrary.OuterSingleton, Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnreal_FFMPEGBPLibrary.OuterSingleton;
	}
	template<> UNREAL_FFMPEG_API UClass* StaticClass<UUnreal_FFMPEGBPLibrary>()
	{
		return UUnreal_FFMPEGBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnreal_FFMPEGBPLibrary);
	UUnreal_FFMPEGBPLibrary::~UUnreal_FFMPEGBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::EnumInfo[] = {
		{ ECodec_StaticEnum, TEXT("ECodec"), &Z_Registration_Info_UEnum_ECodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 619501501U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ F2DInt::StaticStruct, Z_Construct_UScriptStruct_F2DInt_Statics::NewStructOps, TEXT("2DInt"), &Z_Registration_Info_UScriptStruct_2DInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F2DInt), 579033393U) },
		{ FFmpegBitrate::StaticStruct, Z_Construct_UScriptStruct_FFmpegBitrate_Statics::NewStructOps, TEXT("FmpegBitrate"), &Z_Registration_Info_UScriptStruct_FmpegBitrate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFmpegBitrate), 4206340706U) },
		{ FFmpegSettings::StaticStruct, Z_Construct_UScriptStruct_FFmpegSettings_Statics::NewStructOps, TEXT("FmpegSettings"), &Z_Registration_Info_UScriptStruct_FmpegSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFmpegSettings), 2252251443U) },
		{ FFmpegInfo::StaticStruct, Z_Construct_UScriptStruct_FFmpegInfo_Statics::NewStructOps, TEXT("FmpegInfo"), &Z_Registration_Info_UScriptStruct_FmpegInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFmpegInfo), 824235093U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnreal_FFMPEGBPLibrary, UUnreal_FFMPEGBPLibrary::StaticClass, TEXT("UUnreal_FFMPEGBPLibrary"), &Z_Registration_Info_UClass_UUnreal_FFMPEGBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnreal_FFMPEGBPLibrary), 3225028648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_590556342(TEXT("/Script/Unreal_FFMPEG"),
		Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
