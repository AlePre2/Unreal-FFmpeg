// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unreal_FFMPEGBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFmpegInfo;
struct FFmpegSettings;
#ifdef UNREAL_FFMPEG_Unreal_FFMPEGBPLibrary_generated_h
#error "Unreal_FFMPEGBPLibrary.generated.h already included, missing '#pragma once' in Unreal_FFMPEGBPLibrary.h"
#endif
#define UNREAL_FFMPEG_Unreal_FFMPEGBPLibrary_generated_h

#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_F2DInt_Statics; \
	UNREAL_FFMPEG_API static class UScriptStruct* StaticStruct();


template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<struct F2DInt>();

#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFmpegBitrate_Statics; \
	UNREAL_FFMPEG_API static class UScriptStruct* StaticStruct();


template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<struct FFmpegBitrate>();

#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFmpegSettings_Statics; \
	UNREAL_FFMPEG_API static class UScriptStruct* StaticStruct();


template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<struct FFmpegSettings>();

#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFmpegInfo_Statics; \
	UNREAL_FFMPEG_API static class UScriptStruct* StaticStruct();


template<> UNREAL_FFMPEG_API UScriptStruct* StaticStruct<struct FFmpegInfo>();

#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_109_DELEGATE \
UNREAL_FFMPEG_API void FGetInfoDelegate_DelegateWrapper(const FScriptDelegate& GetInfoDelegate, FFmpegInfo const& Info);


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_110_DELEGATE \
UNREAL_FFMPEG_API void FMediaConversionDelegate_DelegateWrapper(const FScriptDelegate& MediaConversionDelegate);


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_SPARSE_DATA
#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet_Media_Info); \
	DECLARE_FUNCTION(execMedia_Conversion);


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet_Media_Info); \
	DECLARE_FUNCTION(execMedia_Conversion);


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_ACCESSORS
#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnreal_FFMPEGBPLibrary(); \
	friend struct Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnreal_FFMPEGBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Unreal_FFMPEG"), NO_API) \
	DECLARE_SERIALIZER(UUnreal_FFMPEGBPLibrary)


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUUnreal_FFMPEGBPLibrary(); \
	friend struct Z_Construct_UClass_UUnreal_FFMPEGBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnreal_FFMPEGBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Unreal_FFMPEG"), NO_API) \
	DECLARE_SERIALIZER(UUnreal_FFMPEGBPLibrary)


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnreal_FFMPEGBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnreal_FFMPEGBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnreal_FFMPEGBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnreal_FFMPEGBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnreal_FFMPEGBPLibrary(UUnreal_FFMPEGBPLibrary&&); \
	NO_API UUnreal_FFMPEGBPLibrary(const UUnreal_FFMPEGBPLibrary&); \
public: \
	NO_API virtual ~UUnreal_FFMPEGBPLibrary();


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnreal_FFMPEGBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnreal_FFMPEGBPLibrary(UUnreal_FFMPEGBPLibrary&&); \
	NO_API UUnreal_FFMPEGBPLibrary(const UUnreal_FFMPEGBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnreal_FFMPEGBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnreal_FFMPEGBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnreal_FFMPEGBPLibrary) \
	NO_API virtual ~UUnreal_FFMPEGBPLibrary();


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_112_PROLOG
#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_SPARSE_DATA \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_RPC_WRAPPERS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_ACCESSORS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_INCLASS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_SPARSE_DATA \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_ACCESSORS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_INCLASS_NO_PURE_DECLS \
	FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Unreal_FFMPEGBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_FFMPEG_API UClass* StaticClass<class UUnreal_FFMPEGBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FFMPEG_Project_Plugins_Unreal_FFMPEG_Source_Unreal_FFMPEG_Public_Unreal_FFMPEGBPLibrary_h


#define FOREACH_ENUM_ECODEC(op) \
	op(ECodec::x264) \
	op(ECodec::x265) \
	op(ECodec::h264) \
	op(ECodec::hevc) \
	op(ECodec::AV1) \
	op(ECodec::VP8) \
	op(ECodec::VP9) \
	op(ECodec::Copy) 

enum class ECodec : uint8;
template<> struct TIsUEnumClass<ECodec> { enum { Value = true }; };
template<> UNREAL_FFMPEG_API UEnum* StaticEnum<ECodec>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
