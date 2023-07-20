// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Unreal_FFMPEGBPLibrary.generated.h"

UENUM(BlueprintType)
enum class ECodec : uint8
{    
    x264         UMETA(DisplayName = "x264"),
    x265         UMETA(DisplayName = "x265"),
    h264         UMETA(DisplayName = "h264_nvec (Nvidia NVENC)"),
    hevc         UMETA(DisplayName = "hevc_nvenc (Nvidia NVENC)"),
    AV1          UMETA(DisplayName = "AV1"),
    VP8          UMETA(DisplayName = "VP8"),
    VP9          UMETA(DisplayName = "VP9"),
    Copy         UMETA(DisplayName = "Copy")
};

USTRUCT(BlueprintType)
struct F2DInt
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 x = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 y = -1;
};

USTRUCT(BlueprintType)
struct FFmpegBitrate
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Average_Bit_Rate = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Min_Bit_Rate = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Max_Bit_Rate = -1;
};

USTRUCT(BlueprintType)
struct FFmpegSettings
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        ECodec Codec;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Speed = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        F2DInt Resolution;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Media_Start = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Media_End = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FFmpegBitrate Bit_Rate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float GOP_Size = -1;
};

USTRUCT(BlueprintType)
struct FFmpegInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString Extenstion;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FTimespan Duration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Start;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Bitrate_kbs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        F2DInt Resolution;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        ECodec Encoder = ECodec::Copy;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float FPS;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Audio_HZ;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FGetInfoDelegate, const FFmpegInfo&, Info);
DECLARE_DYNAMIC_DELEGATE(FMediaConversionDelegate);

UCLASS()
class UUnreal_FFMPEGBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Media Conversion", Keywords = "FFmpeg"), Category = "FFmpeg")
    static void Media_Conversion(FString Input_video_path, FString Output_video_path, FFmpegSettings Settings, bool Overwrite, FString& FFmpegCommand, FMediaConversionDelegate Completed);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Media Info", Keywords = "FFmpeg"), Category = "FFmpeg")
    static void Get_Media_Info(FString Input_video_path, FGetInfoDelegate Completed);
};

