// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_FFMPEGBPLibrary.h"
#include <regex>
#include "Interfaces/IPluginManager.h"
#include "Unreal_FFMPEG.h"

UUnreal_FFMPEGBPLibrary::UUnreal_FFMPEGBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

// Function to get the content directory of the plugin
FString GetPluginContentDir()
{
    TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("Unreal_FFMPEG"));
    return Plugin->GetContentDir();
}

// Function to extract media information from the file
FFmpegInfo ExtractMediaInfo(const FString& FilePath)
{
    // Initialize the media information struct
    FFmpegInfo MediaInfo;

    FString FileContent;
    if (!FFileHelper::LoadFileToString(FileContent, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Error loading file: %s"), *FilePath);
        return MediaInfo;
    }

    // Convert FString to std::string
    std::string FileString(TCHAR_TO_UTF8(*FileContent));

    // Regular expression patterns
    std::regex extensionPattern(R"(from '.*\.(\w+)')");
    std::regex durationPattern(R"(Duration: (\d{2}:\d{2}:\d{2}\.\d+))");
    std::regex startPattern(R"(start: (\d+\.\d+))");
    std::regex bitratePattern(R"(bitrate: (\d+) kb/s)");
    std::regex resolutionPattern(R"(\), (\d+)x(\d+) \[)");
    std::regex videoEncoderPattern(R"(Video: (\w+) )");
    std::regex fpsPattern(R"(\d+ fps, (\d+) tbr)");
    std::regex audioHzPattern(R"(Audio: .+ (\d+) Hz)");
    std::regex audioBitratePattern(R"(Audio: .+, (\d+) kb/s)");

    std::smatch match;

    // Search for the extension
    if (std::regex_search(FileString, match, extensionPattern))
    {
        MediaInfo.Extenstion = UTF8_TO_TCHAR(match[1].str().c_str());
    }

    // Search for the duration
    if (std::regex_search(FileString, match, durationPattern))
    {
        FString durationStr = UTF8_TO_TCHAR(match[1].str().c_str());
        TArray<FString> TimeComponents;
        durationStr.ParseIntoArray(TimeComponents, TEXT(":"), true);

        int32 Hours = FCString::Atoi(*TimeComponents[0]);
        int32 Minutes = FCString::Atoi(*TimeComponents[1]);
        int32 Seconds = FCString::Atof(*TimeComponents[2]);
        durationStr.ParseIntoArray(TimeComponents, TEXT("."), true);
        int32 Milliseconds = FCString::Atof(*TimeComponents[1]);

        MediaInfo.Duration = FTimespan(0, Hours, Minutes, Seconds, Milliseconds*100);
    }

    // Search for the start
    if (std::regex_search(FileString, match, startPattern))
    {
        MediaInfo.Start = FCString::Atof(UTF8_TO_TCHAR(match[1].str().c_str()));
    }

    // Search for the bitrate
    if (std::regex_search(FileString, match, bitratePattern))
    {
        MediaInfo.Bitrate_kbs = FCString::Atoi(UTF8_TO_TCHAR(match[1].str().c_str()));
    }

    // Search for the resolution
    if (std::regex_search(FileString, match, resolutionPattern))
    {
        MediaInfo.Resolution.x = FCString::Atoi(UTF8_TO_TCHAR(match[1].str().c_str()));
        MediaInfo.Resolution.y = FCString::Atoi(UTF8_TO_TCHAR(match[2].str().c_str()));
    }

    // Search for the video encoder
    if (std::regex_search(FileString, match, videoEncoderPattern))
    {
        FString videoEncoder = UTF8_TO_TCHAR(match[1].str().c_str());

        UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ECodec"), true);

        ECodec StringToEnum(const FString & EnumString);

        if (EnumPtr)
        {
            int32 EnumIndex = EnumPtr->GetIndexByNameString(videoEncoder);
            if (EnumIndex != INDEX_NONE)
            {
                MediaInfo.Codec = static_cast<ECodec>(EnumIndex);
            }
        }

        ECodec::Copy;
    }

    // Search for the FPS
    if (std::regex_search(FileString, match, fpsPattern))
    {
        MediaInfo.FPS = FCString::Atof(UTF8_TO_TCHAR(match[1].str().c_str()));
    }

    // Search for the audio Hz
    if (std::regex_search(FileString, match, audioHzPattern))
    {
        MediaInfo.Audio_HZ = FCString::Atof(UTF8_TO_TCHAR(match[1].str().c_str()));
    }

    // Search for the audio bitrate
    if (std::regex_search(FileString, match, audioBitratePattern))
    {
        MediaInfo.Audio_Bitrate = FCString::Atof(UTF8_TO_TCHAR(match[1].str().c_str()));
    }

    return MediaInfo;
}

// Function to create a folder if it doesn't exist
void CreateFolderIfNotExists(const FString& FolderPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.DirectoryExists(*FolderPath))
	{
		PlatformFile.CreateDirectoryTree(*FolderPath);
	}
}

void UUnreal_FFMPEGBPLibrary::Media_Conversion(FString Input_video_path, FString Output_video_path, FFmpegSettings Settings, bool Overwrite, FString& FFmpegCommand, FMediaConversionDelegate Completed)
{
    FString SettingsString = TEXT("ffmpeg -i ");

    SettingsString.Append(*Input_video_path);

    SettingsString.Append(TEXT(" "));

    if (Overwrite)
    {
        SettingsString.Append(TEXT("-y "));
    }
    else
    {
        SettingsString.Append(TEXT("-n "));
    }

    if (Settings.Media_Start != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-ss %f "), Settings.Media_Start));
    }

    if (Settings.Media_End != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-to %f "), Settings.Media_End));
    }

    //Codec
    SettingsString.Append(FString::Printf(TEXT("-c:v ")));
    switch (Settings.Codec)
    {
    case ECodec::x264:
        SettingsString.Append(FString::Printf(TEXT("libx264")));
        break;

    case ECodec::x265:
        SettingsString.Append(FString::Printf(TEXT("libx265")));
        break;

    case ECodec::h264:
        SettingsString.Append(FString::Printf(TEXT("h264_nvenc")));
        break;

    case ECodec::hevc:
        SettingsString.Append(FString::Printf(TEXT("hevc_nvenc")));
        break;

    case ECodec::AV1:
        SettingsString.Append(FString::Printf(TEXT("libaom-av1")));
        break;

    case ECodec::VP8:
        SettingsString.Append(FString::Printf(TEXT("libvpx")));
        break;

    case ECodec::VP9:
        SettingsString.Append(FString::Printf(TEXT("libvpx-vp9")));
        break;

    default:
        SettingsString.Append(FString::Printf(TEXT("copy")));
        break;
}
    SettingsString.Append(TEXT(" "));


    if (Settings.Bit_Rate.Average_Bit_Rate != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-b:v %f "), Settings.Bit_Rate.Average_Bit_Rate));
    }

    if (Settings.Bit_Rate.Min_Bit_Rate != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-minrate %f "), Settings.Bit_Rate.Min_Bit_Rate));
    }

    if (Settings.Bit_Rate.Max_Bit_Rate != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-maxrate %f "), Settings.Bit_Rate.Max_Bit_Rate));
    }

    if (Settings.GOP_Size != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("-g %f "), Settings.GOP_Size));
    }

    //-vf Check

    bool fvcheck = false;
    
    if (Settings.Speed != -1 || Settings.Resolution.x != -1 || Settings.Resolution.y != -1)
    {
        fvcheck = true;

        SettingsString.Append(FString::Printf(TEXT(" -vf \" ")));        
    }

    if (Settings.Speed != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("setpts=%f*PTS ,"), 1 / Settings.Speed));
    }

    bool Resolution = false;

    if (Settings.Resolution.x != -1 && Settings.Resolution.y != -1) 
    {
        Resolution = true;

        SettingsString.Append(FString::Printf(TEXT(" scale=")));
    }

    if (Settings.Resolution.x != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("%d"), Settings.Resolution.x));
    }

    if (Resolution) 
    {
        SettingsString.Append(FString::Printf(TEXT(":")));
    }

    if (Settings.Resolution.y != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("%d"), Settings.Resolution.y));
    }

    if (Resolution)
    {
        SettingsString.Append(FString::Printf(TEXT(",")));
    }

    if (fvcheck) 
    {
        SettingsString.Append(FString::Printf(TEXT(" \" ")));
    }

    //-filter Check
    bool filter = false;

    if (Settings.Speed != -1)
    {
        filter = true;

        SettingsString.Append(FString::Printf(TEXT(" -filter:a \" ")));
    }

    if (Settings.Speed != -1)
    {
        SettingsString.Append(FString::Printf(TEXT("atempo=%f"), Settings.Speed));
    }

    if (filter)
    {
        SettingsString.Append(FString::Printf(TEXT(" \" ")));
    }

    SettingsString.Append(*Output_video_path);

    SettingsString.Append(TEXT(" "));

    FFmpegCommand = SettingsString;

    // Asynchronous task to execute FFmpeg command
    AsyncTask(ENamedThreads::AnyHiPriThreadNormalTask, [Completed, SettingsString]()
        {
            FString CmdString = FString::Printf(TEXT("/c %s"), *SettingsString);

#if WITH_EDITOR
            FProcHandle ProcessHandle = FPlatformProcess::CreateProc(TEXT("cmd.exe"), *CmdString, false, false, true, nullptr, 0, *GetPluginContentDir(), nullptr);

#else
            FProcHandle ProcessHandle = FPlatformProcess::CreateProc(TEXT("cmd.exe"), *CmdString, false, false, true, nullptr, 0, nullptr, nullptr);
#endif

           

            if (ProcessHandle.IsValid())
            {
                int PrimesFound = 0;

                // Wait for the process to finish
                while (FPlatformProcess::IsProcRunning(ProcessHandle))
                {
                    //Waiting
                }

                // Call the Completed delegate on the GameThread
                AsyncTask(ENamedThreads::GameThread, [Completed]()
                    {
                        Completed.ExecuteIfBound();
                    });

            }
        });
}

// Function to get media information from the file
void UUnreal_FFMPEGBPLibrary::Get_Media_Info(FString Input_video_path, FGetInfoDelegate Completed)
{
    // Asynchronous task to extract media information from the file
    AsyncTask(ENamedThreads::AnyHiPriThreadNormalTask, [Completed, Input_video_path]()
        {
            // Create a folder to store the temporary output file

            FString FolderPath = FPaths::ProjectSavedDir() + TEXT("/FFmpeg/");

            CreateFolderIfNotExists(FolderPath);

            FolderPath = FolderPath + TEXT("GetMediaData.txt");

            // Command to run FFmpeg and redirect the output to the temporary file
            FString CmdString = FString::Printf(TEXT("/c ffmpeg -i \"%s\" > \"%s\" 2>&1"), *Input_video_path, *FolderPath);

#if WITH_EDITOR
            FProcHandle ProcessHandle = FPlatformProcess::CreateProc(TEXT("cmd.exe"), *CmdString, false, false, true, nullptr, 0, *GetPluginContentDir(), nullptr);

#else
            FProcHandle ProcessHandle = FPlatformProcess::CreateProc(TEXT("cmd.exe"), *CmdString, false, false, true, nullptr, 0, nullptr, nullptr);
#endif

            if (ProcessHandle.IsValid())
            {
                int PrimesFound = 0;

                // Wait for the process to finish
                while (FPlatformProcess::IsProcRunning(ProcessHandle))
                {
                    //Waiting
                }

                // Extract media information from the temporary output file
                FFmpegInfo Info = ExtractMediaInfo(FolderPath);

                // Call the Completed delegate on the GameThread and pass the media information
                AsyncTask(ENamedThreads::GameThread, [Completed, Info]()
                    {
                        Completed.ExecuteIfBound(Info);
                    });

            }
        });
}