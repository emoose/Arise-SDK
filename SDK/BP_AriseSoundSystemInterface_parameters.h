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

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventVoice
struct UBP_AriseSoundSystemInterface_C_PauseEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventVoice
struct UBP_AriseSoundSystemInterface_C_PlayEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSameCurrentPfAndBattleMusic
struct UBP_AriseSoundSystemInterface_C_IsSameCurrentPfAndBattleMusic_Params
{
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.GetCurrentPfMusicEventName
struct UBP_AriseSoundSystemInterface_C_GetCurrentPfMusicEventName_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetPauseMapPfMusicFlag
struct UBP_AriseSoundSystemInterface_C_SetPauseMapPfMusicFlag_Params
{
	bool                                               NewFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopBGM
struct UBP_AriseSoundSystemInterface_C_StopBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapPfMusic
struct UBP_AriseSoundSystemInterface_C_PlayPreparedAreaMapPfMusic_Params
{
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPauseMapPfMusic
struct UBP_AriseSoundSystemInterface_C_IsPauseMapPfMusic_Params
{
	bool                                               IsPause;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PrepareNextAreaMapBGM
struct UBP_AriseSoundSystemInterface_C_PrepareNextAreaMapBGM_Params
{
	struct FString                                     NextLevelName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsNoPlayPfMusic;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSamePrevAndCurrentPfMusic
struct UBP_AriseSoundSystemInterface_C_IsSamePrevAndCurrentPfMusic_Params
{
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPlayingPfBGM
struct UBP_AriseSoundSystemInterface_C_IsPlayingPfBGM_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapBtlMusic
struct UBP_AriseSoundSystemInterface_C_PlayPreparedAreaMapBtlMusic_Params
{
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedMapBGMCrossFade
struct UBP_AriseSoundSystemInterface_C_PlayPreparedMapBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseMapPfBGM
struct UBP_AriseSoundSystemInterface_C_PauseMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeMapPfBGM
struct UBP_AriseSoundSystemInterface_C_ResumeMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapPfBGM
struct UBP_AriseSoundSystemInterface_C_StopMapPfBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapBtlBGM
struct UBP_AriseSoundSystemInterface_C_StopMapBtlBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSkipPlayMapBtlMusic
struct UBP_AriseSoundSystemInterface_C_IsSkipPlayMapBtlMusic_Params
{
	bool                                               IsSkipPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCrossFadeMapBGM
struct UBP_AriseSoundSystemInterface_C_IsCrossFadeMapBGM_Params
{
	bool                                               IsCrossFade;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventBGM
struct UBP_AriseSoundSystemInterface_C_PauseEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeEventBGM
struct UBP_AriseSoundSystemInterface_C_ResumeEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopEventBGM
struct UBP_AriseSoundSystemInterface_C_StopEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventBGM
struct UBP_AriseSoundSystemInterface_C_PlayEventBGM_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCurrentPfMusicNameNull
struct UBP_AriseSoundSystemInterface_C_IsCurrentPfMusicNameNull_Params
{
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGMCrossFade
struct UBP_AriseSoundSystemInterface_C_PlayBossBtlBGMCrossFade_Params
{
	EBGMCrossFadeType                                  PlayMainType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGM
struct UBP_AriseSoundSystemInterface_C_PlayBossBtlBGM_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsBtlEncountGroupBtlMusicNameNull
struct UBP_AriseSoundSystemInterface_C_IsBtlEncountGroupBtlMusicNameNull_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.CheckAreaMapSatisfyCondition
struct UBP_AriseSoundSystemInterface_C_CheckAreaMapSatisfyCondition_Params
{
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetDuckingVolume
struct UBP_AriseSoundSystemInterface_C_SetDuckingVolume_Params
{
	int                                                BGM_Volume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ambient_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gaya_Volume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseAllSound
struct UBP_AriseSoundSystemInterface_C_PauseAllSound_Params
{
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeAllSound
struct UBP_AriseSoundSystemInterface_C_ResumeAllSound_Params
{
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetSpatialCondition
struct UBP_AriseSoundSystemInterface_C_SetSpatialCondition_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResetSoundSystem
struct UBP_AriseSoundSystemInterface_C_ResetSoundSystem_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
