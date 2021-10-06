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
	Stop                           = 0,
	Binding                        = 1,
	Complete                       = 2,
	Error                          = 3,
	ECriFsBinderStatus_MAX         = 4
};


// Enum CriWareRuntime.EAtomComponentStatus
enum class EAtomComponentStatus : uint8_t
{
	Stop                           = 0,
	Prep                           = 1,
	Playing                        = 2,
	PlayEnd                        = 3,
	Error                          = 4,
	EAtomComponentStatus_MAX       = 5
};


// Enum CriWareRuntime.EAtomCueSheetLoaderComponentStatus
enum class EAtomCueSheetLoaderComponentStatus : uint8_t
{
	Stop                           = 0,
	Loading                        = 1,
	LoadEnd                        = 2,
	Serializing                    = 3,
	SerializeEnd                   = 4,
	Binding                        = 5,
	BindEnd                        = 6,
	Complete                       = 7,
	Error                          = 8,
	EAtomCueSheetLoaderComponentStatus_MAX = 9
};


// Enum CriWareRuntime.ECriFsLoaderStatus
enum class ECriFsLoaderStatus : uint8_t
{
	Stop                           = 0,
	Loading                        = 1,
	Complete                       = 2,
	Error                          = 3,
	ECriFsLoaderStatus_MAX         = 4
};


// Enum CriWareRuntime.EManaSubtitlesEncoding
enum class EManaSubtitlesEncoding : uint8_t
{
	Default                        = 0,
	ANSI                           = 1,
	Utf8                           = 2,
	Utf16                          = 3,
	EManaSubtitlesEncoding_MAX     = 4
};


// Enum CriWareRuntime.EManaComponentStatus
enum class EManaComponentStatus : uint8_t
{
	Stop                           = 0,
	DecHdr                         = 1,
	WaitPrep                       = 2,
	Prep                           = 3,
	Ready                          = 4,
	Playing                        = 5,
	PlayEnd                        = 6,
	Error                          = 7,
	StopProcessing                 = 8,
	EManaComponentStatus_MAX       = 9
};


// Enum CriWareRuntime.EManaPlaybackTimer
enum class EManaPlaybackTimer : uint8_t
{
	Default                        = 0,
	RealTime                       = 1,
	FrameTime                      = 2,
	EManaPlaybackTimer_MAX         = 3
};


// Enum CriWareRuntime.EManaFrameAction
enum class EManaFrameAction : uint8_t
{
	Default                        = 0,
	Hold                           = 1,
	Clear                          = 2,
	EManaFrameAction_MAX           = 3
};


// Enum CriWareRuntime.EAtomSortOrderType
enum class EAtomSortOrderType : uint8_t
{
	Ascending                      = 0,
	Descending                     = 1,
	EAtomSortOrderType_MAX         = 2
};


// Enum CriWareRuntime.EAtomProfileSortType
enum class EAtomProfileSortType : uint8_t
{
	AtomComponentID                = 0,
	Distance                       = 1,
	Name                           = 2,
	Time                           = 3,
	EAtomProfileSortType_MAX       = 4
};


// Enum CriWareRuntime.ECriWareSpeakerSystem
enum class ECriWareSpeakerSystem : uint8_t
{
	Surround5Point1                = 0,
	Surround7Point1                = 1,
	ECriWareSpeakerSystem_MAX      = 2
};


// Enum CriWareRuntime.EAtomSoundRendererType
enum class EAtomSoundRendererType : uint8_t
{
	Any                            = 0,
	Native                         = 1,
	Asr                            = 2,
	Hardware1                      = 3,
	Hardware2                      = 4,
	Hardware3                      = 5,
	Hardware4                      = 6,
	Pad                            = 7,
	EAtomSoundRendererType_MAX     = 8
};


// Enum CriWareRuntime.EEngineIniFileType
enum class EEngineIniFileType : uint8_t
{
	EngBaseEngineIni               = 0,
	EngWindowsEngineIni            = 1,
	ProjDefaultEngineIni           = 2,
	ProjWindowsEngineIni           = 3,
	EEngineIniFileType_MAX         = 4
};


// Enum CriWareRuntime.EManaComponentTextureType
enum class EManaComponentTextureType : uint8_t
{
	Texture_Y                      = 0,
	Texture_U                      = 1,
	Texture_V                      = 2,
	Texture_A                      = 3,
	Texture_UV                     = 4,
	Texture_RGB                    = 5,
	Texture_MAX                    = 6
};


// Enum CriWareRuntime.EManaSoundType
enum class EManaSoundType : uint8_t
{
	Adx                            = 0,
	HCA                            = 1,
	Num                            = 2,
	Unknown                        = 3,
	EManaSoundType_MAX             = 4
};


// Enum CriWareRuntime.EManaColorSpace
enum class EManaColorSpace : uint8_t
{
	Rec601                         = 0,
	Rec709                         = 1,
	Num                            = 2,
	EManaColorSpace_MAX            = 3
};


// Enum CriWareRuntime.EManaMovieType
enum class EManaMovieType : uint8_t
{
	SofdecPrime                    = 0,
	H264                           = 1,
	VP9                            = 2,
	Num                            = 3,
	Unknown                        = 4,
	EManaMovieType_MAX             = 5
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
