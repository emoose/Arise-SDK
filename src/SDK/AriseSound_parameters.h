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

// Function AriseSound.AriseAmbientSound.StopAmbientSound
struct AAriseAmbientSound_StopAmbientSound_Params
{
};

// Function AriseSound.AriseAmbientSound.StartAmbientSound
struct AAriseAmbientSound_StartAmbientSound_Params
{
};

// Function AriseSound.AriseAmbientSound.SetSwitch
struct AAriseAmbientSound_SetSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseAmbientSound.SetRTPCValue
struct AAriseAmbientSound_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseAmbientSound.SetReverbEffect
struct AAriseAmbientSound_SetReverbEffect_Params
{
	bool                                               bUseReverb;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseAmbientSound.SetEventName
struct AAriseAmbientSound_SetEventName_Params
{
	struct FString                                     InEventName;                                              // (Parm, ZeroConstructor)
	bool                                               bReplayIfPlaying;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseAmbientSound.PostEvent
struct AAriseAmbientSound_PostEvent_Params
{
	struct FString                                     EventNameString;                                          // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseAmbientSound.IsPlaying
struct AAriseAmbientSound_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseAmbientSound.GetEventName
struct AAriseAmbientSound_GetEventName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseSound.AriseSoundSEBase.Stop
struct AAriseSoundSEBase_Stop_Params
{
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundSEBase.Resume
struct AAriseSoundSEBase_Resume_Params
{
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundSEBase.PlayByName
struct AAriseSoundSEBase_PlayByName_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundSEBase.Play
struct AAriseSoundSEBase_Play_Params
{
};

// Function AriseSound.AriseSoundSEBase.Pause
struct AAriseSoundSEBase_Pause_Params
{
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundSEBase.IsPlaying
struct AAriseSoundSEBase_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundSEBase.GetPlayingMusicEventName
struct AAriseSoundSEBase_GetPlayingMusicEventName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseSound.SoundBankDLCDataClass.IsEnableIndex_Data
struct USoundBankDLCDataClass_IsEnableIndex_Data_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundInfoDatabase.SyncInfo
struct UAriseSoundInfoDatabase_SyncInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.StopEventByInfo
struct UAriseSoundNewStatics_StopEventByInfo_Params
{
	class UPostEventInfoBase*                          Info;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.StopEventByEventName
struct UAriseSoundNewStatics_StopEventByEventName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.StopEvent
struct UAriseSoundNewStatics_StopEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.StopAllEvents
struct UAriseSoundNewStatics_StopAllEvents_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SetSwitch
struct UAriseSoundNewStatics_SetSwitch_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SetState
struct UAriseSoundNewStatics_SetState_Params
{
	struct FString                                     StateGroup;                                               // (Parm, ZeroConstructor)
	struct FString                                     State;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SetSoundPauseEventEnable
struct UAriseSoundNewStatics_SetSoundPauseEventEnable_Params
{
	bool                                               in_IsEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SetRTPCValue
struct UAriseSoundNewStatics_SetRTPCValue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RTPCName;                                                 // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SetReverbEnable
struct UAriseSoundNewStatics_SetReverbEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.SeekOnEvent
struct UAriseSoundNewStatics_SeekOnEvent_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                PositionMs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.ResumeEventByInfo
struct UAriseSoundNewStatics_ResumeEventByInfo_Params
{
	class UPostEventInfoBase*                          Info;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.ResumeEventByEventName
struct UAriseSoundNewStatics_ResumeEventByEventName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.ResumeEvent
struct UAriseSoundNewStatics_ResumeEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.PlayEventWithParam
struct UAriseSoundNewStatics_PlayEventWithParam_Params
{
	struct FSoundPlayEventParam                        Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPostEventInfoBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PlayEventRaw
struct UAriseSoundNewStatics_PlayEventRaw_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PlayEventByAkComponent
struct UAriseSoundNewStatics_PlayEventByAkComponent_Params
{
	class UAkComponent*                                AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UPostEventInfoBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PlayEventAtLocation
struct UAriseSoundNewStatics_PlayEventAtLocation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bAutoDestory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPostEventInfoBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PlayEvent
struct UAriseSoundNewStatics_PlayEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UPostEventInfoBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PauseEventByInfo
struct UAriseSoundNewStatics_PauseEventByInfo_Params
{
	class UPostEventInfoBase*                          Info;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.PauseEventByEventName
struct UAriseSoundNewStatics_PauseEventByEventName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.PauseEvent
struct UAriseSoundNewStatics_PauseEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.IsPlayingByID
struct UAriseSoundNewStatics_IsPlayingByID_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.IsPlayingByEventName
struct UAriseSoundNewStatics_IsPlayingByEventName_Params
{
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.GetSoundEventListByRegex
struct UAriseSoundNewStatics_GetSoundEventListByRegex_Params
{
	struct FString                                     iPattern;                                                 // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutEventList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.GetLoadedSoundBankList
struct UAriseSoundNewStatics_GetLoadedSoundBankList_Params
{
	TArray<struct FString>                             OutEventList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEventRaw
struct UAriseSoundNewStatics_ExecuteActionOnEventRaw_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	EAkActionOnEventType                               AkActionOnEventType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEvent
struct UAriseSoundNewStatics_ExecuteActionOnEvent_Params
{
	class UPostEventInfoBase*                          PostEventInfo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EAkActionOnEventType                               AkActionOnEventType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.PostEventInfoBase.IsPlaying
struct UPostEventInfoBase_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.PostEventInfoBase.IsAkPlaying
struct UPostEventInfoBase_IsAkPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.UnloadSceneBank
struct UAriseSoundStatics_UnloadSceneBank_Params
{
	TEnumAsByte<ESoundBankLoadScene>                   InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.UnloadBankAsync
struct UAriseSoundStatics_UnloadBankAsync_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.UnloadBank
struct UAriseSoundStatics_UnloadBank_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.StopSoundEvent
struct UAriseSoundStatics_StopSoundEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.StopSound
struct UAriseSoundStatics_StopSound_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SpawnAmbientSoundActors
struct UAriseSoundStatics_SpawnAmbientSoundActors_Params
{
};

// Function AriseSound.AriseSoundStatics.SetVolume_VOICE
struct UAriseSoundStatics_SetVolume_VOICE_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetVolume_SE
struct UAriseSoundStatics_SetVolume_SE_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetVolume_BGM
struct UAriseSoundStatics_SetVolume_BGM_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetSwitch
struct UAriseSoundStatics_SetSwitch_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SWITCH;                                                   // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.SetState
struct UAriseSoundStatics_SetState_Params
{
	struct FString                                     StateGroup;                                               // (Parm, ZeroConstructor)
	struct FString                                     State;                                                    // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.SetRTPCValueGlobal
struct UAriseSoundStatics_SetRTPCValueGlobal_Params
{
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetRTPCValue
struct UAriseSoundStatics_SetRTPCValue_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetReverbEffect
struct UAriseSoundStatics_SetReverbEffect_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseReverb;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetListenerOverridePosition
struct UAriseSoundStatics_SetListenerOverridePosition_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.SetListenerOverride
struct UAriseSoundStatics_SetListenerOverride_Params
{
};

// Function AriseSound.AriseSoundStatics.SeekSoundEvent
struct UAriseSoundStatics_SeekSoundEvent_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                PositionMs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.ResumeSoundEvent
struct UAriseSoundStatics_ResumeSoundEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.RemoveCustomListener
struct UAriseSoundStatics_RemoveCustomListener_Params
{
	struct FString                                     ListenerName;                                             // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.QueueEventAtLocation
struct UAriseSoundStatics_QueueEventAtLocation_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.QueueEvent
struct UAriseSoundStatics_QueueEvent_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.PostVoiceEvent
struct UAriseSoundStatics_PostVoiceEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      SpeakerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.PostEventWithParam
struct UAriseSoundStatics_PostEventWithParam_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPostEventParam                             Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseSound.AriseSoundStatics.PostEventWithCallback
struct UAriseSoundStatics_PostEventWithCallback_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.PostEventAtLocationWithParam
struct UAriseSoundStatics_PostEventAtLocationWithParam_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPostEventParam                             Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.PostEventAtLocation
struct UAriseSoundStatics_PostEventAtLocation_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.PostEvent
struct UAriseSoundStatics_PostEvent_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.PauseSoundEvent
struct UAriseSoundStatics_PauseSoundEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.LoadSceneBank
struct UAriseSoundStatics_LoadSceneBank_Params
{
	TEnumAsByte<ESoundBankLoadScene>                   InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.LoadDLCBank
struct UAriseSoundStatics_LoadDLCBank_Params
{
};

// Function AriseSound.AriseSoundStatics.LoadBankAsync
struct UAriseSoundStatics_LoadBankAsync_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.LoadBank
struct UAriseSoundStatics_LoadBank_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function AriseSound.AriseSoundStatics.IsSetVoiceLanguageLoadFinished
struct UAriseSoundStatics_IsSetVoiceLanguageLoadFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.IsPlayingByID
struct UAriseSoundStatics_IsPlayingByID_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.IsPlaying
struct UAriseSoundStatics_IsPlaying_Params
{
	class AActor*                                      Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.IsLoadedSceneBanks
struct UAriseSoundStatics_IsLoadedSceneBanks_Params
{
	TEnumAsByte<ESoundBankLoadScene>                   InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.IsExistBank
struct UAriseSoundStatics_IsExistBank_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.IsAvailableBank
struct UAriseSoundStatics_IsAvailableBank_Params
{
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.GetSoundEventPlayPosition
struct UAriseSoundStatics_GetSoundEventPlayPosition_Params
{
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.GetPersonaPreviewListenerName
struct UAriseSoundStatics_GetPersonaPreviewListenerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseSound.AriseSoundStatics.GetListenerOverridePosition
struct UAriseSoundStatics_GetListenerOverridePosition_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.GetCascadePreviewListenerName
struct UAriseSoundStatics_GetCascadePreviewListenerName_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseSound.AriseSoundStatics.GetBGMActor
struct UAriseSoundStatics_GetBGMActor_Params
{
	class AAriseAmbientSound*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.GetAmbientSoundActor
struct UAriseSoundStatics_GetAmbientSoundActor_Params
{
	class AAriseAmbientSoundMapActorBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.FlushEvents
struct UAriseSoundStatics_FlushEvents_Params
{
};

// Function AriseSound.AriseSoundStatics.FindCustomListener
struct UAriseSoundStatics_FindCustomListener_Params
{
	struct FString                                     ListenerName;                                             // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AriseSound.AriseSoundStatics.ClearListenerOverride
struct UAriseSoundStatics_ClearListenerOverride_Params
{
};

// Function AriseSound.AriseSoundStatics.AddCustomListener
struct UAriseSoundStatics_AddCustomListener_Params
{
	struct FString                                     ListenerName;                                             // (Parm, ZeroConstructor)
	class USceneComponent*                             Listener;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
