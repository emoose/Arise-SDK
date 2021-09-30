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

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventVoice
struct UBP_AriseSoundFunctionLib_C_ASND_PauseEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventVoice
struct UBP_AriseSoundFunctionLib_C_ASND_PlayEventVoice_Params
{
	struct FString                                     InVoiceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_GetListenerPosition
struct UBP_AriseSoundFunctionLib_C_ASND_GetListenerPosition_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Out_Location;                                             // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Out_Rotation;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetListenerPosition
struct UBP_AriseSoundFunctionLib_C_ASND_SetListenerPosition_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_UnlockSoundListener
struct UBP_AriseSoundFunctionLib_C_ASND_UnlockSoundListener_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_LockSoundListener
struct UBP_AriseSoundFunctionLib_C_ASND_LockSoundListener_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameCurrentPfAndBattleMusic
struct UBP_AriseSoundFunctionLib_C_ASND_IsSameCurrentPfAndBattleMusic_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResetSoundSystem
struct UBP_AriseSoundFunctionLib_C_ASND_ResetSoundSystem_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetSpatialCondition
struct UBP_AriseSoundFunctionLib_C_ASND_SetSpatialCondition_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeAllSound
struct UBP_AriseSoundFunctionLib_C_ASND_ResumeAllSound_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseAllSound
struct UBP_AriseSoundFunctionLib_C_ASND_PauseAllSound_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetDuckingVolume
struct UBP_AriseSoundFunctionLib_C_ASND_SetDuckingVolume_Params
{
	int                                                BGM_Volume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ambient_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Gaya_Volume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_CheckAreaMapSatisfyCondition
struct UBP_AriseSoundFunctionLib_C_ASND_CheckAreaMapSatisfyCondition_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsBtlEncountGroupBtlMusicNameNull
struct UBP_AriseSoundFunctionLib_C_ASND_IsBtlEncountGroupBtlMusicNameNull_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayBossBtlBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PlayBossBtlBGM_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCurrentPfMusicNameNull
struct UBP_AriseSoundFunctionLib_C_ASND_IsCurrentPfMusicNameNull_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingEnd
struct UBP_AriseSoundFunctionLib_C_ASND_DuckingEnd_Params
{
	bool                                               IsBGM;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAmbientSE;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingStart
struct UBP_AriseSoundFunctionLib_C_ASND_DuckingStart_Params
{
	bool                                               IsBGM;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAmbientSE;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_RequestEventBGM
struct UBP_AriseSoundFunctionLib_C_ASND_RequestEventBGM_Params
{
	struct FSTR_EventBGMParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopEventBGM
struct UBP_AriseSoundFunctionLib_C_ASND_StopEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeEventBGM
struct UBP_AriseSoundFunctionLib_C_ASND_ResumeEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PauseEventBGM_Params
{
	EBGMFadeType                                       FadeType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PlayEventBGM_Params
{
	struct FString                                     MusicName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCrossFadeMapBGM
struct UBP_AriseSoundFunctionLib_C_ASND_IsCrossFadeMapBGM_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCrossFade;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSkipPlayMapBtlBGM
struct UBP_AriseSoundFunctionLib_C_ASND_IsSkipPlayMapBtlBGM_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSkipPlay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapBtlBGM
struct UBP_AriseSoundFunctionLib_C_ASND_StopMapBtlBGM_Params
{
	EBGMFadeType                                       FadeOutType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_StopMapPfBGM_Params
{
	EBGMFadeType                                       FadeOutType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_ResumeMapPfBGM_Params
{
	EBGMFadeType                                       FadeResumeType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PauseMapPfBGM_Params
{
	EBGMFadeType                                       FadePauseType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapBtlBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PlayCurrentMapBtlBGM_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsPlayingMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_IsPlayingMapPfBGM_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_IsSameMapPfBGM_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSame;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PrepareNextLevel
struct UBP_AriseSoundFunctionLib_C_ASND_PrepareNextLevel_Params
{
	struct FString                                     NextLevelName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStopBGM;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapPfBGM
struct UBP_AriseSoundFunctionLib_C_ASND_PlayCurrentMapPfBGM_Params
{
	EMapPfBGMPlayType                                  MapPfBGMPlayType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopBGM
struct UBP_AriseSoundFunctionLib_C_ASND_StopBGM_Params
{
	EBGMFadeType                                       FadeOutType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
