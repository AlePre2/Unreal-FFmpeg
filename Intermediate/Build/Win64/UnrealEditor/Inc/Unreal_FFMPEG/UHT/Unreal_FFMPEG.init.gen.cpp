// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_FFMPEG_init() {}
	UNREAL_FFMPEG_API UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature();
	UNREAL_FFMPEG_API UFunction* Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Unreal_FFMPEG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Unreal_FFMPEG()
	{
		if (!Z_Registration_Info_UPackage__Script_Unreal_FFMPEG.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Unreal_FFMPEG_GetInfoDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Unreal_FFMPEG_MediaConversionDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Unreal_FFMPEG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9F562694,
				0xDA2FBB52,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Unreal_FFMPEG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Unreal_FFMPEG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Unreal_FFMPEG(Z_Construct_UPackage__Script_Unreal_FFMPEG, TEXT("/Script/Unreal_FFMPEG"), Z_Registration_Info_UPackage__Script_Unreal_FFMPEG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9F562694, 0xDA2FBB52));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
