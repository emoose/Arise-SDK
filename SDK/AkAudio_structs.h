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

// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent    = 0,
	EAkCallbackType__Marker        = 1,
	EAkCallbackType__Duration      = 2,
	EAkCallbackType__Starvation    = 3,
	EAkCallbackType__MusicPlayStarted = 4,
	EAkCallbackType__MusicSyncBeat = 5,
	EAkCallbackType__MusicSyncBar  = 6,
	EAkCallbackType__MusicSyncEntry = 7,
	EAkCallbackType__MusicSyncExit = 8,
	EAkCallbackType__MusicSyncGrid = 9,
	EAkCallbackType__MusicSyncUserCue = 10,
	EAkCallbackType__MusicSyncPoint = 11,
	EAkCallbackType__MIDIEvent     = 12,
	EAkCallbackType__EAkCallbackType_MAX = 13
};


// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented      = 0,
	EAkResult__Success             = 1,
	EAkResult__Fail                = 2,
	EAkResult__PartialSuccess      = 3,
	EAkResult__NotCompatible       = 4,
	EAkResult__AlreadyConnected    = 5,
	EAkResult__NameNotSet          = 6,
	EAkResult__InvalidFile         = 7,
	EAkResult__AudioFileHeaderTooLarge = 8,
	EAkResult__MaxReached          = 9,
	EAkResult__InputsInUsed        = 10,
	EAkResult__OutputsInUsed       = 11,
	EAkResult__InvalidName         = 12,
	EAkResult__NameAlreadyInUse    = 13,
	EAkResult__InvalidID           = 14,
	EAkResult__IDNotFound          = 15,
	EAkResult__InvalidInstanceID   = 16,
	EAkResult__NoMoreData          = 17,
	EAkResult__NoSourceAvailable   = 18,
	EAkResult__StateGroupAlreadyExists = 19,
	EAkResult__InvalidStateGroup   = 20,
	EAkResult__ChildAlreadyHasAParent = 21,
	EAkResult__InvalidLanguage     = 22,
	EAkResult__CannotAddItseflAsAChild = 23,
	EAkResult__Reserved1           = 24,
	EAkResult__Reserved2           = 25,
	EAkResult__Reserved3           = 26,
	EAkResult__Reserved4           = 27,
	EAkResult__Reserved5           = 28,
	EAkResult__UserNotInList       = 29,
	EAkResult__NoTransitionPoint   = 30,
	EAkResult__InvalidParameter    = 31,
	EAkResult__ParameterAdjusted   = 32,
	EAkResult__IsA3DSound          = 33,
	EAkResult__NotA3DSound         = 34,
	EAkResult__ElementAlreadyInList = 35,
	EAkResult__PathNotFound        = 36,
	EAkResult__PathNoVertices      = 37,
	EAkResult__PathNotRunning      = 38,
	EAkResult__PathNotPaused       = 39,
	EAkResult__PathNodeAlreadyInList = 40,
	EAkResult__PathNodeNotInList   = 41,
	EAkResult__VoiceNotFound       = 42,
	EAkResult__DataNeeded          = 43,
	EAkResult__NoDataNeeded        = 44,
	EAkResult__DataReady           = 45,
	EAkResult__NoDataReady         = 46,
	EAkResult__NoMoreSlotAvailable = 47,
	EAkResult__SlotNotFound        = 48,
	EAkResult__ProcessingOnly      = 49,
	EAkResult__MemoryLeak          = 50,
	EAkResult__CorruptedBlockList  = 51,
	EAkResult__InsufficientMemory  = 52,
	EAkResult__Cancelled           = 53,
	EAkResult__UnknownBankID       = 54,
	EAkResult__IsProcessing        = 55,
	EAkResult__BankReadError       = 56,
	EAkResult__InvalidSwitchType   = 57,
	EAkResult__VoiceDone           = 58,
	EAkResult__UnknownEnvironment  = 59,
	EAkResult__EnvironmentInUse    = 60,
	EAkResult__UnknownObject       = 61,
	EAkResult__NoConversionNeeded  = 62,
	EAkResult__FormatNotReady      = 63,
	EAkResult__WrongBankVersion    = 64,
	EAkResult__DataReadyNoProcess  = 65,
	EAkResult__FileNotFound        = 66,
	EAkResult__DeviceNotReady      = 67,
	EAkResult__CouldNotCreateSecBuffer = 68,
	EAkResult__BankAlreadyLoaded   = 69,
	EAkResult__Reserved6           = 70,
	EAkResult__RenderedFX          = 71,
	EAkResult__ProcessNeeded       = 72,
	EAkResult__ProcessDone         = 73,
	EAkResult__MemManagerNotInitialized = 74,
	EAkResult__StreamMgrNotInitialized = 75,
	EAkResult__SSEInstructionsNotSupported = 76,
	EAkResult__Busy                = 77,
	EAkResult__UnsupportedChannelConfig = 78,
	EAkResult__PluginMediaNotAvailable = 79,
	EAkResult__MustBeVirtualized   = 80,
	EAkResult__CommandTooLarge     = 81,
	EAkResult__RejectedByFilter    = 82,
	EAkResult__InvalidCustomPlatformName = 83,
	EAkResult__DLLCannotLoad       = 84,
	EAkResult__DLLPathNotFound     = 85,
	EAkResult__NoJavaVM            = 86,
	EAkResult__OpenSLError         = 87,
	EAkResult__PluginNotRegistered = 88,
	EAkResult__DataAlignmentError  = 89,
	EAkResult__EAkResult_MAX       = 90
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3
};


// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1 = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2 = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3 = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4 = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine = 48,
	EAkMidiCcValues__AkMidiCcCtrl21Fine = 49,
	EAkMidiCcValues__AkMidiCcCtrl22Fine = 50,
	EAkMidiCcValues__AkMidiCcCtrl23Fine = 51,
	EAkMidiCcValues__AkMidiCcCtrl24Fine = 52,
	EAkMidiCcValues__AkMidiCcCtrl25Fine = 53,
	EAkMidiCcValues__AkMidiCcCtrl26Fine = 54,
	EAkMidiCcValues__AkMidiCcCtrl27Fine = 55,
	EAkMidiCcValues__AkMidiCcCtrl28Fine = 56,
	EAkMidiCcValues__AkMidiCcCtrl29Fine = 57,
	EAkMidiCcValues__AkMidiCcCtrl30Fine = 58,
	EAkMidiCcValues__AkMidiCcCtrl31Fine = 59,
	EAkMidiCcValues__AkMidiCcHoldPedal = 60,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff = 61,
	EAkMidiCcValues__AkMidiCcSustenutoPedal = 62,
	EAkMidiCcValues__AkMidiCcSoftPedal = 63,
	EAkMidiCcValues__AkMidiCcLegatoPedal = 64,
	EAkMidiCcValues__AkMidiCcHoldPedal2 = 65,
	EAkMidiCcValues__AkMidiCcSoundVariation = 66,
	EAkMidiCcValues__AkMidiCcSoundTimbre = 67,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime = 68,
	EAkMidiCcValues__AkMidiCcSoundAttackTime = 69,
	EAkMidiCcValues__AkMidiCcSoundBrightness = 70,
	EAkMidiCcValues__AkMidiCcSoundCtrl6 = 71,
	EAkMidiCcValues__AkMidiCcSoundCtrl7 = 72,
	EAkMidiCcValues__AkMidiCcSoundCtrl8 = 73,
	EAkMidiCcValues__AkMidiCcSoundCtrl9 = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl10 = 75,
	EAkMidiCcValues__AkMidiCcGeneralButton1 = 76,
	EAkMidiCcValues__AkMidiCcGeneralButton2 = 77,
	EAkMidiCcValues__AkMidiCcGeneralButton3 = 78,
	EAkMidiCcValues__AkMidiCcGeneralButton4 = 79,
	EAkMidiCcValues__AkMidiCcReverbLevel = 80,
	EAkMidiCcValues__AkMidiCcTremoloLevel = 81,
	EAkMidiCcValues__AkMidiCcChorusLevel = 82,
	EAkMidiCcValues__AkMidiCcCelesteLevel = 83,
	EAkMidiCcValues__AkMidiCcPhaserLevel = 84,
	EAkMidiCcValues__AkMidiCcDataButtonP1 = 85,
	EAkMidiCcValues__AkMidiCcDataButtonM1 = 86,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse = 87,
	EAkMidiCcValues__AkMidiCcNonRegisterFine = 88,
	EAkMidiCcValues__AkMidiCcAllSoundOff = 89,
	EAkMidiCcValues__AkMidiCcAllControllersOff = 90,
	EAkMidiCcValues__AkMidiCcLocalKeyboard = 91,
	EAkMidiCcValues__AkMidiCcAllNotesOff = 92,
	EAkMidiCcValues__AkMidiCcOmniModeOff = 93,
	EAkMidiCcValues__AkMidiCcOmniModeOn = 94,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn = 95,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn = 96,
	EAkMidiCcValues__EAkMidiCcValues_MAX = 97
};


// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff = 1,
	EAkMidiEventType__AkMidiEventTypeNoteOn = 2,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch = 3,
	EAkMidiEventType__AkMidiEventTypeController = 4,
	EAkMidiEventType__AkMidiEventTypeProgramChange = 5,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch = 6,
	EAkMidiEventType__AkMidiEventTypePitchBend = 7,
	EAkMidiEventType__AkMidiEventTypeSysex = 8,
	EAkMidiEventType__AkMidiEventTypeEscape = 9,
	EAkMidiEventType__AkMidiEventTypeMeta = 10,
	EAkMidiEventType__EAkMidiEventType_MAX = 11
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource = 0,
	AkMultiPositionType__MultiSources = 1,
	AkMultiPositionType__MultiDirections = 2,
	AkMultiPositionType__AkMultiPositionType_MAX = 3
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_LFE = 1,
	AkChannelConfiguration__Ak_1   = 2,
	AkChannelConfiguration__Ak_2   = 3,
	AkChannelConfiguration__Ak_201 = 4,
	AkChannelConfiguration__Ak_3   = 5,
	AkChannelConfiguration__Ak_301 = 6,
	AkChannelConfiguration__Ak_4   = 7,
	AkChannelConfiguration__Ak_401 = 8,
	AkChannelConfiguration__Ak_5   = 9,
	AkChannelConfiguration__Ak_501 = 10,
	AkChannelConfiguration__Ak_7   = 11,
	AkChannelConfiguration__Ak_5_1 = 12,
	AkChannelConfiguration__Ak_7_1 = 13,
	AkChannelConfiguration__Ak_7_101 = 14,
	AkChannelConfiguration__Ak_Auro_9 = 15,
	AkChannelConfiguration__Ak_Auro_10 = 16,
	AkChannelConfiguration__Ak_Auro_11 = 17,
	AkChannelConfiguration__Ak_Auro_13 = 18,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 19,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 20,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 21,
	AkChannelConfiguration__Ak_MAX = 22
};


// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkBoolPropertyToControl
// 0x0010
struct FAkBoolPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// 0x0030
struct FAkWwiseObjectDetails
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemID;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// 0x0040
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails                       ItemPicked;                                               // 0x0000(0x0030) (Edit, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkMidiEventBase
// 0x0002
struct FAkMidiEventBase
{
	EAkMidiEventType                                   Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Chan;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiProgramChange : public FAkMidiEventBase
{
	unsigned char                                      ProgramNum;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// 0x0006 (0x0008 - 0x0002)
struct FAkMidiPitchBend : public FAkMidiEventBase
{
	unsigned char                                      ValueLsb;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ValueMsb;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FullValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Velocity;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiGeneric
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiGeneric : public FAkMidiEventBase
{
	unsigned char                                      Param1;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param2;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Value;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiCc
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiCc : public FAkMidiEventBase
{
	EAkMidiCcValues                                    Cc;                                                       // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkSegmentInfo
// 0x0024
struct FAkSegmentInfo
{
	int                                                CurrentPosition;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreEntryDuration;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDuration;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PostExitDuration;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RemainingLookAheadTime;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeatDuration;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BarDuration;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridDuration;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridOffset;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkPropertyToControl
// 0x0010
struct FAkPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkPoly
// 0x0010
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008
struct FAkWaapiSubscriptionId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010
struct FAKWaapiJsonObject
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiUri
// 0x0010
struct FAkWaapiUri
{
	struct FString                                     Uri;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// 0x0010
struct FAkWaapiFieldNames
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// 0x0014
struct FMovieSceneTangentDataSerializationHelper
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ArriveTangentWeight;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// 0x001C
struct FMovieSceneFloatValueSerializationHelper
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FMovieSceneTangentDataSerializationHelper   Tangent;                                                  // 0x0008(0x0014)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<int>                                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFloatValueSerializationHelper> Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.SoundFileDLCPathData
// 0x0028
struct FSoundFileDLCPathData
{
	int                                                BgmId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Folder;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BankName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.SoundFileDLCPathDataList
// 0x0010
struct FSoundFileDLCPathDataList
{
	TArray<struct FSoundFileDLCPathData>               Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
