#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameCurrentPfAndBattleMusic
struct ABP_AriseSoundSystem_C_IsSameCurrentPfAndBattleMusic_Params
{
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentPfMusicEventName
struct ABP_AriseSoundSystem_C_GetCurrentPfMusicEventName_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsBtlEncountGroupBtlMusicNameNull
struct ABP_AriseSoundSystem_C_IsBtlEncountGroupBtlMusicNameNull_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCurrentPfMusicNameNull
struct ABP_AriseSoundSystem_C_IsCurrentPfMusicNameNull_Params
{
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCrossFadeMapBGM
struct ABP_AriseSoundSystem_C_IsCrossFadeMapBGM_Params
{
	bool                                               IsCrossFade;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSkipPlayMapBtlMusic
struct ABP_AriseSoundSystem_C_IsSkipPlayMapBtlMusic_Params
{
	bool                                               IsSkipPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPlayingPfBGM
struct ABP_AriseSoundSystem_C_IsPlayingPfBGM_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePrevAndCurrentPfMusic
struct ABP_AriseSoundSystem_C_IsSamePrevAndCurrentPfMusic_Params
{
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PrepareNextAreaMapBGM
struct ABP_AriseSoundSystem_C_PrepareNextAreaMapBGM_Params
{
	struct FString                                     NextLevelName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsNoPlayPfMusic;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPauseMapPfMusic
struct ABP_AriseSoundSystem_C_IsPauseMapPfMusic_Params
{
	bool                                               IsPause;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventVoice
struct ABP_AriseSoundSystem_C_@PauseEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventVoice
struct ABP_AriseSoundSystem_C_@PlayEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResetSoundSystem
struct ABP_AriseSoundSystem_C_@ResetSoundSystem_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetCurrentPfMusicName
struct ABP_AriseSoundSystem_C_SetCurrentPfMusicName_Params
{
	struct FString                                     CurrentPFName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetSpatialCondition
struct ABP_AriseSoundSystem_C_@SetSpatialCondition_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayConfigBtlBGM
struct ABP_AriseSoundSystem_C_PlayConfigBtlBGM_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeAllSound
struct ABP_AriseSoundSystem_C_@ResumeAllSound_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseAllSound
struct ABP_AriseSoundSystem_C_@PauseAllSound_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetGayaCondition
struct ABP_AriseSoundSystem_C_SetGayaCondition_Params
{
	struct FString                                     GayaCondition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetAmbientCondition
struct ABP_AriseSoundSystem_C_SetAmbientCondition_Params
{
	struct FString                                     AmbientCondition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetDuckingVolume
struct ABP_AriseSoundSystem_C_@SetDuckingVolume_Params
{
	int                                                BGM_Volume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ambient_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gaya_Volume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@CheckAreaMapSatisfyCondition
struct ABP_AriseSoundSystem_C_@CheckAreaMapSatisfyCondition_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePlayingAndDefaultPfMusic
struct ABP_AriseSoundSystem_C_IsSamePlayingAndDefaultPfMusic_Params
{
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGM
struct ABP_AriseSoundSystem_C_@PlayBossBtlBGM_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGMCrossFade
struct ABP_AriseSoundSystem_C_@PlayBossBtlBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameEventMusicAndBossBtlMusic
struct ABP_AriseSoundSystem_C_IsSameEventMusicAndBossBtlMusic_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBtlEncountGroupBtlMusicName
struct ABP_AriseSoundSystem_C_GetBtlEncountGroupBtlMusicName_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BGMLabel;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeBGM
struct ABP_AriseSoundSystem_C_ResumeBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseBGM
struct ABP_AriseSoundSystem_C_PauseBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBusNameByType
struct ABP_AriseSoundSystem_C_GetBusNameByType_Params
{
	ESoundBusType                                      BusType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnBusName;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeBusFadeEventName
struct ABP_AriseSoundSystem_C_MakeBusFadeEventName_Params
{
	ESoundBusType                                      BusType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAkActionOnEventType                               EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnEventName;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopEventBGM
struct ABP_AriseSoundSystem_C_@StopEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeEventBGM
struct ABP_AriseSoundSystem_C_@ResumeEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventBGM
struct ABP_AriseSoundSystem_C_@PauseEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventBGM
struct ABP_AriseSoundSystem_C_@PlayEventBGM_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedMapBGMCrossFade
struct ABP_AriseSoundSystem_C_@PlayPreparedMapBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.TestPlayEvent
struct ABP_AriseSoundSystem_C_TestPlayEvent_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapBtlBGM
struct ABP_AriseSoundSystem_C_@StopMapBtlBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapPfBGM
struct ABP_AriseSoundSystem_C_@StopMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeMapPfBGM
struct ABP_AriseSoundSystem_C_@ResumeMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseMapPfBGM
struct ABP_AriseSoundSystem_C_@PauseMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionBtlMusicName
struct ABP_AriseSoundSystem_C_GetAreaMapConditionBtlMusicName_Params
{
	struct FMapBGMScenarioCondition                    Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     BtlMusicName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapBtlMusic
struct ABP_AriseSoundSystem_C_@PlayPreparedAreaMapBtlMusic_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsNoPlayCurrentPfMusicName
struct ABP_AriseSoundSystem_C_IsNoPlayCurrentPfMusicName_Params
{
	bool                                               IsNoPlay;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapPfMusic
struct ABP_AriseSoundSystem_C_@PlayPreparedAreaMapPfMusic_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeAreaName
struct ABP_AriseSoundSystem_C_MakeAreaName_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     AreaName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PrepareNextAreaMapBGM
struct ABP_AriseSoundSystem_C_@PrepareNextAreaMapBGM_Params
{
	struct FString                                     NextLevelName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsNoPlayPfMusic;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakePlayEventString
struct ABP_AriseSoundSystem_C_MakePlayEventString_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnEventName;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionMusicName
struct ABP_AriseSoundSystem_C_GetAreaMapConditionMusicName_Params
{
	struct FMapBGMScenarioCondition                    Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     PfMusicName;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     BtlMusicName;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Ambient_Condition;                                        // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Gaya_Condition;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapSatisfyCondition
struct ABP_AriseSoundSystem_C_GetAreaMapSatisfyCondition_Params
{
	struct FMapBGMData                                 MapBGMData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMapBGMScenarioCondition                    Condition;                                                // (Parm, OutParm)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaConditionSatisfyIdx
struct ABP_AriseSoundSystem_C_GetAreaConditionSatisfyIdx_Params
{
	struct FMapBGMData                                 MapBGMData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ArrayIdx;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentPlayPfMusicName
struct ABP_AriseSoundSystem_C_DispCurrentPlayPfMusicName_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopBGM
struct ABP_AriseSoundSystem_C_@StopBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentAreaName
struct ABP_AriseSoundSystem_C_DispCurrentAreaName_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentAreaMapBGMData
struct ABP_AriseSoundSystem_C_GetCurrentAreaMapBGMData_Params
{
	struct FMapBGMData                                 Data;                                                     // (Parm, OutParm)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeCurrentAreaName
struct ABP_AriseSoundSystem_C_MakeCurrentAreaName_Params
{
	struct FString                                     CurrentAreaName;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBtlMusicName
struct ABP_AriseSoundSystem_C_GetAreaMapBtlMusicName_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     BtlMusicName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapPfMusicName
struct ABP_AriseSoundSystem_C_GetAreaMapPfMusicName_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PfMusicName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBGMData
struct ABP_AriseSoundSystem_C_GetAreaMapBGMData_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FMapBGMData                                 MapBGMData;                                               // (Parm, OutParm)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.UserConstructionScript
struct ABP_AriseSoundSystem_C_UserConstructionScript_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseAllSound
struct ABP_AriseSoundSystem_C_PauseAllSound_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeAllSound
struct ABP_AriseSoundSystem_C_ResumeAllSound_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.CheckAreaMapSatisfyCondition
struct ABP_AriseSoundSystem_C_CheckAreaMapSatisfyCondition_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedMapBGMCrossFade
struct ABP_AriseSoundSystem_C_PlayPreparedMapBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetSpatialCondition
struct ABP_AriseSoundSystem_C_SetSpatialCondition_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopEventBGM
struct ABP_AriseSoundSystem_C_StopEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeEventBGM
struct ABP_AriseSoundSystem_C_ResumeEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResetSoundSystem
struct ABP_AriseSoundSystem_C_ResetSoundSystem_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventBGM
struct ABP_AriseSoundSystem_C_PauseEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventBGM
struct ABP_AriseSoundSystem_C_PlayEventBGM_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeMapPfBGM
struct ABP_AriseSoundSystem_C_ResumeMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetPauseMapPfMusicFlag
struct ABP_AriseSoundSystem_C_SetPauseMapPfMusicFlag_Params
{
	bool                                               NewFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetDuckingVolume
struct ABP_AriseSoundSystem_C_SetDuckingVolume_Params
{
	int                                                BGM_Volume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ambient_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gaya_Volume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.Test_SEEndCallbackEvent
struct ABP_AriseSoundSystem_C_Test_SEEndCallbackEvent_Params
{
	class UPostEventInfoBase*                          PostEventInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventVoice
struct ABP_AriseSoundSystem_C_PlayEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGM
struct ABP_AriseSoundSystem_C_PlayBossBtlBGM_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventVoice
struct ABP_AriseSoundSystem_C_PauseEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveBeginPlay
struct ABP_AriseSoundSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveTick
struct ABP_AriseSoundSystem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGMCrossFade
struct ABP_AriseSoundSystem_C_PlayBossBtlBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapBtlBGM
struct ABP_AriseSoundSystem_C_StopMapBtlBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapPfMusic
struct ABP_AriseSoundSystem_C_PlayPreparedAreaMapPfMusic_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapPfBGM
struct ABP_AriseSoundSystem_C_StopMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseMapPfBGM
struct ABP_AriseSoundSystem_C_PauseMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapBtlMusic
struct ABP_AriseSoundSystem_C_PlayPreparedAreaMapBtlMusic_Params
{
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopBGM
struct ABP_AriseSoundSystem_C_StopBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ExecuteUbergraph_BP_AriseSoundSystem
struct ABP_AriseSoundSystem_C_ExecuteUbergraph_BP_AriseSoundSystem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
