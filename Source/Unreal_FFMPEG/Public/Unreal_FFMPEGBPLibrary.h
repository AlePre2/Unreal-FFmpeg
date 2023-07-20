// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Unreal_FFMPEGBPLibrary.generated.h"

// Enum for different video codecs
UENUM(BlueprintType)
enum class ECodec : uint8
{
    x264     UMETA(DisplayName = "x264", ToolTip = "H.264 video codec. (RACCOMENDED)"),
    x265     UMETA(DisplayName = "x265", ToolTip = "H.265/HEVC video codec."),
    h264     UMETA(DisplayName = "h264_nvec (Nvidia NVENC)", ToolTip = "H.264 video codec using Nvidia NVENC."),
    hevc     UMETA(DisplayName = "hevc_nvenc (Nvidia NVENC)", ToolTip = "H.265/HEVC video codec using Nvidia NVENC."),
    AV1      UMETA(DisplayName = "AV1", ToolTip = "AV1 video codec."),
    VP8      UMETA(DisplayName = "VP8", ToolTip = "VP8 video codec."),
    VP9      UMETA(DisplayName = "VP9", ToolTip = "VP9 video codec."),
    Copy     UMETA(DisplayName = "Copy", ToolTip = "Copy the original video codec."),
};

// Struct for 2D integer values
USTRUCT(BlueprintType)
struct F2DInt
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Video Width (-1 Keep the same)"))
        int32 x = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Video Height (-1 Keep the same)"))
        int32 y = -1;
};

// Struct for FFmpeg bitrate settings
USTRUCT(BlueprintType)
struct FFmpegBitrate
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set average bitrate (Min 1000)"))
        float Average_Bit_Rate = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set minimum bitrate (Min 1000)"))
        float Min_Bit_Rate = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set maximum bitrate (Min 1000)"))
        float Max_Bit_Rate = -1;
};

// Struct for FFmpeg settings
USTRUCT(BlueprintType)
struct FFmpegSettings
{
    GENERATED_BODY()

public:
    FFmpegSettings()
        : Codec(ECodec::Copy),
        Speed(-1.0f),
        Resolution(F2DInt()),
        Media_Start(-1.0f),
        Media_End(-1.0f),
        Bit_Rate(FFmpegBitrate()),
        GOP_Size(-1.0f)
    {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set processing codec"))
        ECodec Codec;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set speed multiplier (Min 0.5 Max 100) (-1 Keep the same)"))
        float Speed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Video resolution (If one or more of the 2 is -1 it will not change)"))
        F2DInt Resolution;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Clip start at (-1 Keep the same)"))
        float Media_Start;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Clip end at (-1 Keep the same)"))
        float Media_End;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Bitrate (Min 1000)"))
        FFmpegBitrate Bit_Rate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Set GOP Size"))
        float GOP_Size;
};

// Struct for FFmpeg media information
USTRUCT(BlueprintType)
struct FFmpegInfo
{
    GENERATED_BODY()

public:
    FFmpegInfo()
        : Extenstion(TEXT("")),
        Duration(FTimespan::Zero()),
        Start(0.0f),
        Bitrate_kbs(0.0f),
        Resolution(F2DInt()),
        Codec(ECodec::Copy),
        FPS(0.0f),
        Audio_HZ(0.0f),
        Audio_Bitrate(0.0f)
    {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "File Extension"))
        FString Extenstion;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Media duration"))
        FTimespan Duration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Media start seconds"))
        float Start;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Media bitrate"))
        float Bitrate_kbs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Video resolution"))
        F2DInt Resolution;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Codec"))
        ECodec Codec;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Video FPS"))
        float FPS;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Audio Hz"))
        float Audio_HZ;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Audio Bitrate"))
        float Audio_Bitrate;
};


// Delegate for Get_Media_Info function
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetInfoDelegate, const FFmpegInfo&, Info);

// Delegate for Media_Conversion function
DECLARE_DYNAMIC_DELEGATE(FMediaConversionDelegate);

// Blueprint function library class
UCLASS()
class UUnreal_FFMPEGBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

    // Function to perform media conversion using FFmpeg
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Media Conversion", Keywords = "FFmpeg", ToolTip = "This function is used to process a media and it can also change extension"), Category = "FFmpeg")
    static void Media_Conversion(FString Input_video_path, FString Output_video_path, FFmpegSettings Settings, bool Overwrite, FString& FFmpegCommand, FMediaConversionDelegate Completed);

    // Function to get media information using FFmpeg
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Media Info", Keywords = "FFmpeg", ToolTip = "This function retrieves media information from a file."), Category = "FFmpeg")
    static void Get_Media_Info(FString Input_video_path, FGetInfoDelegate Completed);
};

