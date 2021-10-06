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

// Enum AriseMovieRuntime.EAriseMovieStatus
enum class EAriseMovieStatus : uint8_t
{
	None                           = 0,
	Loading                        = 1,
	Preparing                      = 2,
	Prepared                       = 3,
	Playing                        = 4,
	Paused                         = 5,
	Stopping                       = 6,
	Stopped                        = 7,
	Error                          = 8,
	EAriseMovieStatus_MAX          = 9
};


// Enum AriseMovieRuntime.EAriseMovieShareProtection
enum class EAriseMovieShareProtection : uint8_t
{
	None                           = 0,
	Copyright                      = 1,
	EAriseMovieShareProtection_MAX = 2
};


// Enum AriseMovieRuntime.EAriseMovieMaterialType
enum class EAriseMovieMaterialType : uint8_t
{
	Opaque                         = 0,
	Translucent                    = 1,
	Alpha                          = 2,
	AlphaPlus                      = 3,
	EAriseMovieMaterialType_MAX    = 4
};


// Enum AriseMovieRuntime.EMovieFadeType
enum class EMovieFadeType : uint8_t
{
	None                           = 0,
	Black                          = 1,
	White                          = 2,
	EMovieFadeType_MAX             = 3
};


// Enum AriseMovieRuntime.EAriseMovieSoundDevice
enum class EAriseMovieSoundDevice : uint8_t
{
	None                           = 0,
	Main                           = 1,
	Sub                            = 2,
	Extra                          = 3,
	EAriseMovieSoundDevice_MAX     = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseMovieRuntime.AriseMovieAssetData
// 0x0068
struct FAriseMovieAssetData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FSoftObjectPath                             AssetPath;                                                // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FSoftObjectPath                             SubtitlePath;                                             // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     OpenBitFlag;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EAriseMovieMaterialType                            Material;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAriseMovieShareProtection                         ShareProtection;                                          // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<struct FScenarioCondition>                  ScenarioCondition;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseMovieRuntime.AriseMovieAssetCollection
// 0x0010
struct FAriseMovieAssetCollection
{
	TArray<struct FAriseMovieAssetData>                Datas;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseMovieRuntime.AriseMoviePlayOption
// 0x0040
struct FAriseMoviePlayOption
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     PreFadeColor;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              PreFadeTime;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     PostFadeColor;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              PostFadeTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseMovieRuntime.AriseMovieOptionCollection
// 0x0010
struct FAriseMovieOptionCollection
{
	TArray<struct FAriseMoviePlayOption>               Datas;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseMovieRuntime.AriseMovieAudioInfo
// 0x0008
struct FAriseMovieAudioInfo
{
	EAriseMovieSoundDevice                             Device;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Track;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
