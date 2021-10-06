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

// Enum AriseSound.EAkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	EAkActionOnEventType_MAX       = 5
};


// Enum AriseSound.ESoundBusType
enum class ESoundBusType : uint8_t
{
	Location                       = 0,
	Battle                         = 1,
	System                         = 2,
	Master                         = 3,
	ESoundBusType_MAX              = 4
};


// Enum AriseSound.ERequestEventType
enum class ERequestEventType : uint8_t
{
	Play                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Stop                           = 3,
	ERequestEventType_MAX          = 4
};


// Enum AriseSound.EPostEventInfoState
enum class EPostEventInfoState : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	JustPlaying                    = 2,
	Playing                        = 3,
	DeleteReady                    = 4,
	Delete                         = 5,
	EPostEventInfoState_MAX        = 6
};


// Enum AriseSound.EBGMCrossFadeType
enum class EBGMCrossFadeType : uint8_t
{
	Main_PF                        = 0,
	Main_BTL                       = 1,
	Main_MAX                       = 2
};


// Enum AriseSound.EDuckVolType
enum class EDuckVolType : uint8_t
{
	None                           = 0,
	Duck0db                        = 1,
	Duck1db                        = 2,
	Duck2db                        = 3,
	Duck3db                        = 4,
	Duck4db                        = 5,
	Duck5db                        = 6,
	Duck6db                        = 7,
	Duck99db                       = 8,
	EDuckVolType_MAX               = 9
};


// Enum AriseSound.EBGMFadeType
enum class EBGMFadeType : uint8_t
{
	Default                        = 0,
	Sec                            = 1,
	Sec01                          = 2,
	Sec02                          = 3,
	Sec03                          = 4,
	Sec04                          = 5,
	Auto_05                        = 6,
	Auto                           = 7,
	Auto01                         = 8,
	Auto02                         = 9,
	Auto03                         = 10,
	Auto04                         = 11,
	EBGMFadeType_MAX               = 12
};


// Enum AriseSound.EMapPfBGMPlayType
enum class EMapPfBGMPlayType : uint8_t
{
	Start                          = 0,
	Enroute                        = 1,
	EMapPfBGMPlayType_MAX          = 2
};


// Enum AriseSound.EVoiceLanguage
enum class EVoiceLanguage : uint8_t
{
	English_US                     = 0,
	Japanese                       = 1,
	EVoiceLanguage_MAX             = 2
};


// Enum AriseSound.ESoundBankLoadScene
enum class ESoundBankLoadScene : uint8_t
{
	Startup                        = 0,
	Title                          = 1,
	PlayerFree                     = 2,
	Battle                         = 3,
	BattleResult                   = 4,
	Event                          = 5,
	Menu                           = 6,
	ESoundBankLoadScene_MAX        = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseSound.AriseAmbientSoundEventData
// 0x0060
struct FAriseAmbientSoundEventData
{
	bool                                               bAutoPlay;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseSwitch;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     SwitchGroup;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SwitchState;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseRTPC;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     RTPCName;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
	float                                              RTPCValue;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseSound.AriseAmbientSoundSpawnData
// 0x0070
struct FAriseAmbientSoundSpawnData
{
	struct FTransform                                  BaseTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  AdditionalTransform;                                      // 0x0030(0x0030) (Edit, IsPlainOldData)
	struct FString                                     ReferencedActorName;                                      // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AriseSound.AriseAmbientSoundScenarioCounterData
// 0x0008
struct FAriseAmbientSoundScenarioCounterData
{
	int                                                Chapter;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseSound.AriseAmbientSoundPlacementData
// 0x00F0
struct FAriseAmbientSoundPlacementData
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (IsPlainOldData)
	struct FAriseAmbientSoundEventData                 EventData;                                                // 0x0010(0x0060) (Edit)
	struct FAriseAmbientSoundSpawnData                 SpawnData;                                                // 0x0070(0x0070) (Edit)
	struct FAriseAmbientSoundScenarioCounterData       ScenarioCounterBegin;                                     // 0x00E0(0x0008) (Edit)
	struct FAriseAmbientSoundScenarioCounterData       ScenarioCounterEnd;                                       // 0x00E8(0x0008) (Edit)
};

// ScriptStruct AriseSound.AriseSoundBankData
// 0x0028
struct FAriseSoundBankData
{
	struct FString                                     BankName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     LoadSceneName;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                LoadPriority;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAutoUnload;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bWaitLoad;                                                // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bForEditor;                                               // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
};

// ScriptStruct AriseSound.AriseSoundBankDataList
// 0x0010
struct FAriseSoundBankDataList
{
	TArray<struct FAriseSoundBankData>                 Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.SoundBankDLCData
// 0x0050
struct FSoundBankDLCData
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     DlcName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                BgmId;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     BGMLabel;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Folder;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BankName;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.SoundBankDLCDataList
// 0x0010
struct FSoundBankDLCDataList
{
	TArray<struct FSoundBankDLCData>                   Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.AriseSoundBankInfo
// 0x0010
struct FAriseSoundBankInfo
{
	struct FString                                     BankName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.AriseSoundWaveInfo
// 0x0018
struct FAriseSoundWaveInfo
{
	struct FString                                     OriginalFilePath;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Duration;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AriseSound.AriseSoundEventInfo
// 0x0020
struct FAriseSoundEventInfo
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAriseSoundWaveInfo>                 WaveInfos;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.AriseSoundRTPCInfo
// 0x0020
struct FAriseSoundRTPCInfo
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FFloatRange                                 Range;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseSound.AriseSoundSwitchInfo
// 0x0020
struct FAriseSoundSwitchInfo
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             StateNames;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.MapBGMBitFlagData
// 0x0018
struct FMapBGMBitFlagData
{
	struct FString                                     BitFlag;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               BitFlagState;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AriseSound.MapBGMScenarioCondition
// 0x0090
struct FMapBGMScenarioCondition
{
	bool                                               SwitchType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PfMusicName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              PfMusicVolume;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PreFadeTime;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     PostFadeTime;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BtlMusicName;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              BtlMusicVolume;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     AmbientCondition;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     GayaCondition;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                SpatialCondition;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BeginChapter;                                             // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BeginSection;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                EndChapter;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                EndSection;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FMapBGMBitFlagData>                  BitFlagDatas;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.MapBGMData
// 0x0020
struct FMapBGMData
{
	struct FString                                     AreaName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FMapBGMScenarioCondition>            Conditions;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.MapBGMDataCollection
// 0x0010
struct FMapBGMDataCollection
{
	TArray<struct FMapBGMData>                         Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseSound.SoundPlayEventParam
// 0x0018
struct FSoundPlayEventParam
{
	class AActor*                                      OwnerActor;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseSound.PostEventParam
// 0x0058
struct FPostEventParam
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseRTPC;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     RTPC;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RTPCValue;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTPCInterpTimeSec;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSwitch;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     SwitchGroup;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
