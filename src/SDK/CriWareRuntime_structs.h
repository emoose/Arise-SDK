#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum CriWareRuntime.ECriFsBinderStatus
enum class ECriFsBinderStatus : uint8_t
{
	ECriFsBinderStatus__Stop       = 0,
	ECriFsBinderStatus__Binding    = 1,
	ECriFsBinderStatus__Complete   = 2,
	ECriFsBinderStatus__Error      = 3,
	ECriFsBinderStatus__ECriFsBinderStatus_MAX = 4
};


// Enum CriWareRuntime.EAtomComponentStatus
enum class EAtomComponentStatus : uint8_t
{
	EAtomComponentStatus__Stop     = 0,
	EAtomComponentStatus__Prep     = 1,
	EAtomComponentStatus__Playing  = 2,
	EAtomComponentStatus__PlayEnd  = 3,
	EAtomComponentStatus__Error    = 4,
	EAtomComponentStatus__EAtomComponentStatus_MAX = 5
};


// Enum CriWareRuntime.EAtomCueSheetLoaderComponentStatus
enum class EAtomCueSheetLoaderComponentStatus : uint8_t
{
	EAtomCueSheetLoaderComponentStatus__Stop = 0,
	EAtomCueSheetLoaderComponentStatus__Loading = 1,
	EAtomCueSheetLoaderComponentStatus__LoadEnd = 2,
	EAtomCueSheetLoaderComponentStatus__Serializing = 3,
	EAtomCueSheetLoaderComponentStatus__SerializeEnd = 4,
	EAtomCueSheetLoaderComponentStatus__Binding = 5,
	EAtomCueSheetLoaderComponentStatus__BindEnd = 6,
	EAtomCueSheetLoaderComponentStatus__Complete = 7,
	EAtomCueSheetLoaderComponentStatus__Error = 8,
	EAtomCueSheetLoaderComponentStatus__EAtomCueSheetLoaderComponentStatus_MAX = 9
};


// Enum CriWareRuntime.ECriFsLoaderStatus
enum class ECriFsLoaderStatus : uint8_t
{
	ECriFsLoaderStatus__Stop       = 0,
	ECriFsLoaderStatus__Loading    = 1,
	ECriFsLoaderStatus__Complete   = 2,
	ECriFsLoaderStatus__Error      = 3,
	ECriFsLoaderStatus__ECriFsLoaderStatus_MAX = 4
};


// Enum CriWareRuntime.EManaSubtitlesEncoding
enum class EManaSubtitlesEncoding : uint8_t
{
	EManaSubtitlesEncoding__Default = 0,
	EManaSubtitlesEncoding__ANSI   = 1,
	EManaSubtitlesEncoding__Utf8   = 2,
	EManaSubtitlesEncoding__Utf16  = 3,
	EManaSubtitlesEncoding__EManaSubtitlesEncoding_MAX = 4
};


// Enum CriWareRuntime.EManaComponentStatus
enum class EManaComponentStatus : uint8_t
{
	EManaComponentStatus__Stop     = 0,
	EManaComponentStatus__DecHdr   = 1,
	EManaComponentStatus__WaitPrep = 2,
	EManaComponentStatus__Prep     = 3,
	EManaComponentStatus__Ready    = 4,
	EManaComponentStatus__Playing  = 5,
	EManaComponentStatus__PlayEnd  = 6,
	EManaComponentStatus__Error    = 7,
	EManaComponentStatus__StopProcessing = 8,
	EManaComponentStatus__EManaComponentStatus_MAX = 9
};


// Enum CriWareRuntime.EManaPlaybackTimer
enum class EManaPlaybackTimer : uint8_t
{
	EManaPlaybackTimer__Default    = 0,
	EManaPlaybackTimer__RealTime   = 1,
	EManaPlaybackTimer__FrameTime  = 2,
	EManaPlaybackTimer__EManaPlaybackTimer_MAX = 3
};


// Enum CriWareRuntime.EManaFrameAction
enum class EManaFrameAction : uint8_t
{
	EManaFrameAction__Default      = 0,
	EManaFrameAction__Hold         = 1,
	EManaFrameAction__Clear        = 2,
	EManaFrameAction__EManaFrameAction_MAX = 3
};


// Enum CriWareRuntime.EAtomSortOrderType
enum class EAtomSortOrderType : uint8_t
{
	EAtomSortOrderType__Ascending  = 0,
	EAtomSortOrderType__Descending = 1,
	EAtomSortOrderType__EAtomSortOrderType_MAX = 2
};


// Enum CriWareRuntime.EAtomProfileSortType
enum class EAtomProfileSortType : uint8_t
{
	EAtomProfileSortType__AtomComponentID = 0,
	EAtomProfileSortType__Distance = 1,
	EAtomProfileSortType__Name     = 2,
	EAtomProfileSortType__Time     = 3,
	EAtomProfileSortType__EAtomProfileSortType_MAX = 4
};


// Enum CriWareRuntime.ECriWareSpeakerSystem
enum class ECriWareSpeakerSystem : uint8_t
{
	ECriWareSpeakerSystem__Surround5Point1 = 0,
	ECriWareSpeakerSystem__Surround7Point1 = 1,
	ECriWareSpeakerSystem__ECriWareSpeakerSystem_MAX = 2
};


// Enum CriWareRuntime.EAtomSoundRendererType
enum class EAtomSoundRendererType : uint8_t
{
	EAtomSoundRendererType__Any    = 0,
	EAtomSoundRendererType__Native = 1,
	EAtomSoundRendererType__Asr    = 2,
	EAtomSoundRendererType__Hardware1 = 3,
	EAtomSoundRendererType__Hardware2 = 4,
	EAtomSoundRendererType__Hardware3 = 5,
	EAtomSoundRendererType__Hardware4 = 6,
	EAtomSoundRendererType__Pad    = 7,
	EAtomSoundRendererType__EAtomSoundRendererType_MAX = 8
};


// Enum CriWareRuntime.EEngineIniFileType
enum class EEngineIniFileType : uint8_t
{
	EEngineIniFileType__EngBaseEngineIni = 0,
	EEngineIniFileType__EngWindowsEngineIni = 1,
	EEngineIniFileType__ProjDefaultEngineIni = 2,
	EEngineIniFileType__ProjWindowsEngineIni = 3,
	EEngineIniFileType__EEngineIniFileType_MAX = 4
};


// Enum CriWareRuntime.EManaComponentTextureType
enum class EManaComponentTextureType : uint8_t
{
	EManaComponentTextureType__Texture_Y = 0,
	EManaComponentTextureType__Texture_U = 1,
	EManaComponentTextureType__Texture_V = 2,
	EManaComponentTextureType__Texture_A = 3,
	EManaComponentTextureType__Texture_UV = 4,
	EManaComponentTextureType__Texture_RGB = 5,
	EManaComponentTextureType__Texture_MAX = 6
};


// Enum CriWareRuntime.EManaSoundType
enum class EManaSoundType : uint8_t
{
	EManaSoundType__Adx            = 0,
	EManaSoundType__HCA            = 1,
	EManaSoundType__Num            = 2,
	EManaSoundType__Unknown        = 3,
	EManaSoundType__EManaSoundType_MAX = 4
};


// Enum CriWareRuntime.EManaColorSpace
enum class EManaColorSpace : uint8_t
{
	EManaColorSpace__Rec601        = 0,
	EManaColorSpace__Rec709        = 1,
	EManaColorSpace__Num           = 2,
	EManaColorSpace__EManaColorSpace_MAX = 3
};


// Enum CriWareRuntime.EManaMovieType
enum class EManaMovieType : uint8_t
{
	EManaMovieType__SofdecPrime    = 0,
	EManaMovieType__H264           = 1,
	EManaMovieType__VP9            = 2,
	EManaMovieType__Num            = 3,
	EManaMovieType__Unknown        = 4,
	EManaMovieType__EManaMovieType_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CriWareRuntime.AtomAisacInfo
// 0x0030
struct FAtomAisacInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DefaultControlFlag;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              DefaultControlValue;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ControlId;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ControlName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomAisacControlParam
// 0x0018
struct FAtomAisacControlParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomSelectorParam
// 0x0020
struct FAtomSelectorParam
{
	struct FString                                     Selector;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Label;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomProfileItem
// 0x0078
struct FAtomProfileItem
{
	int                                                AtomComponentID;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     AtomCueName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     AtomComponentLocation;                                    // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DistanceFromListener;                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayingTime;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     PlayerState;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumSounds;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ConcurrencyName;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomTriggerRow
// 0x0018 (0x0020 - 0x0008)
struct FAtomTriggerRow : public FTableRowBase
{
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       Bone;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Cue;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
// 0x0008
struct FAtomAsrRackConfigUI
{
	TEnumAsByte<EAtomSoundRendererType>                SoundRendererTypeUI;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ElementID;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfig
// 0x0004
struct FAtomAsrRackConfig
{
	int                                                SoundRendererType;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.ManaEventPointInfo
// 0x0028
struct FManaEventPointInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Time;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Type;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Parameter;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
// 0x001C
struct FManaVideoTrackInfo
{
	struct FIntPoint                                   TextureDimensions;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FIntPoint                                   DisplayDimensions;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              FrameRate;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalFrames;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsAlpha;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EManaMovieType                                     Type;                                                     // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
// 0x0014
struct FManaAudioTrackInfo
{
	int                                                NumChannels;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SamplingRate;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalSamples;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TrackNumber;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsAmbisonics;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EManaSoundType                                     Type;                                                     // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomTrackKeyframe
// 0x0010
struct FAtomTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundAtomCue*                               Cue;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomCueIdTrackKeyframe
// 0x0008
struct FAtomCueIdTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CueId;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomCueNameTrackKeyframe
// 0x0018
struct FAtomCueNameTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     CueName;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomSelectorTrackKeyframe
// 0x0018
struct FAtomSelectorTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SelectorLabel;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomSoundManager
// 0x0001
struct FAtomSoundManager
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
// 0x0160
struct FMovieSceneAtomSectionTemplateData
{
	class USoundAtomCue*                               Sound;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AtomStartOffset;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             SectionStartTimeSeconds;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneFloatChannel                     AtomPitchMultiplierCurve;                                 // 0x0018(0x00A0)
	struct FMovieSceneFloatChannel                     AtomVolumeCurve;                                          // 0x00B8(0x00A0)
	int                                                RowIndex;                                                 // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
// 0x0160 (0x0180 - 0x0020)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAtomSectionTemplateData          AtomData;                                                 // 0x0020(0x0160)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
