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

// Function BP_EventManager.BP_EventManager_C.GetEventLevelSequencePlayer
struct ABP_EventManager_C_GetEventLevelSequencePlayer_Params
{
	class ULevelSequencePlayer*                        Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.IsPostEventNpcRespawn
struct ABP_EventManager_C_IsPostEventNpcRespawn_Params
{
	bool                                               bNpcRespawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.DestroyObjects
struct ABP_EventManager_C_DestroyObjects_Params
{
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.IsRunPostScript
struct ABP_EventManager_C_IsRunPostScript_Params
{
	bool                                               bRun;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.GetCurrentFrameInfo
struct ABP_EventManager_C_GetCurrentFrameInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C.IsNeedDisplayFrameInfo
struct ABP_EventManager_C_IsNeedDisplayFrameInfo_Params
{
	bool                                               Need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.SoundRecoveryOnEventPlayEnd
struct ABP_EventManager_C_SoundRecoveryOnEventPlayEnd_Params
{
};

// Function BP_EventManager.BP_EventManager_C.SendKpiPopularity
struct ABP_EventManager_C_SendKpiPopularity_Params
{
};

// Function BP_EventManager.BP_EventManager_C.GetMovieSceneEventType
struct ABP_EventManager_C_GetMovieSceneEventType_Params
{
	EMovieSceneEventType                               EventType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.IsPreloadComplete?
struct ABP_EventManager_C_IsPreloadComplete__Params
{
	bool                                               bPreloaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.DestroyObjectsImpl
struct ABP_EventManager_C_DestroyObjectsImpl_Params
{
};

// Function BP_EventManager.BP_EventManager_C.IsRunPostScriptImpl
struct ABP_EventManager_C_IsRunPostScriptImpl_Params
{
	bool                                               bRun;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C._PostEventNpcRespawn?
struct ABP_EventManager_C__PostEventNpcRespawn__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.IsEnableSystemPause
struct ABP_EventManager_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C._EventKPIManagement
struct ABP_EventManager_C__EventKPIManagement_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C._OpenLocationFlag
struct ABP_EventManager_C__OpenLocationFlag_Params
{
};

// Function BP_EventManager.BP_EventManager_C._CanEventSkipTiming?
struct ABP_EventManager_C__CanEventSkipTiming__Params
{
	bool                                               bCanSkip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.IsNeedDisplayPlayingFrame
struct ABP_EventManager_C_IsNeedDisplayPlayingFrame_Params
{
	bool                                               bNeedDisplay;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.GetCurrentFrames
struct ABP_EventManager_C_GetCurrentFrames_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EventManager.BP_EventManager_C.DoPostHpRecover
struct ABP_EventManager_C_DoPostHpRecover_Params
{
};

// Function BP_EventManager.BP_EventManager_C.DoPostFade
struct ABP_EventManager_C_DoPostFade_Params
{
};

// Function BP_EventManager.BP_EventManager_C.ApplyPostProcessSettings
struct ABP_EventManager_C_ApplyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PostProcessSettings;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              BloomIntensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C._EventSeekManagement
struct ABP_EventManager_C__EventSeekManagement_Params
{
};

// Function BP_EventManager.BP_EventManager_C._PostEventPostProcessOverride
struct ABP_EventManager_C__PostEventPostProcessOverride_Params
{
};

// Function BP_EventManager.BP_EventManager_C._PreEventPostProcessOverride
struct ABP_EventManager_C__PreEventPostProcessOverride_Params
{
};

// Function BP_EventManager.BP_EventManager_C._PostEventSoundControl
struct ABP_EventManager_C__PostEventSoundControl_Params
{
};

// Function BP_EventManager.BP_EventManager_C._IsChangeMapOrder?
struct ABP_EventManager_C__IsChangeMapOrder__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                oldSceCounter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newSceCounter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.PauseManagement_Release
struct ABP_EventManager_C_PauseManagement_Release_Params
{
};

// Function BP_EventManager.BP_EventManager_C._SetSkipEnable
struct ABP_EventManager_C__SetSkipEnable_Params
{
	class UMovieSceneSequencePlayer*                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C._RenderDebugInfo
struct ABP_EventManager_C__RenderDebugInfo_Params
{
};

// Function BP_EventManager.BP_EventManager_C.EventSkipManagement
struct ABP_EventManager_C_EventSkipManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.PrintPlayEventInfo
struct ABP_EventManager_C_PrintPlayEventInfo_Params
{
	bool                                               bPrint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.EventAllSkip
struct ABP_EventManager_C_EventAllSkip_Params
{
};

// Function BP_EventManager.BP_EventManager_C.GetInputPause
struct ABP_EventManager_C_GetInputPause_Params
{
	bool                                               bPressed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.PauseManagement
struct ABP_EventManager_C_PauseManagement_Params
{
};

// Function BP_EventManager.BP_EventManager_C.GetPlayerAndFieldController
struct ABP_EventManager_C_GetPlayerAndFieldController_Params
{
};

// Function BP_EventManager.BP_EventManager_C.AutoSaveManagement
struct ABP_EventManager_C_AutoSaveManagement_Params
{
};

// Function BP_EventManager.BP_EventManager_C.SetPlayTransform
struct ABP_EventManager_C_SetPlayTransform_Params
{
	class ULevelSequencePlayer*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.MapHideInEvent
struct ABP_EventManager_C_MapHideInEvent_Params
{
};

// Function BP_EventManager.BP_EventManager_C.ConvertLongchatName
struct ABP_EventManager_C_ConvertLongchatName_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EventManager.BP_EventManager_C.BattlePreload
struct ABP_EventManager_C_BattlePreload_Params
{
};

// Function BP_EventManager.BP_EventManager_C.ShowNowLoading
struct ABP_EventManager_C_ShowNowLoading_Params
{
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.PostEventProc
struct ABP_EventManager_C_PostEventProc_Params
{
	bool                                               bPostLongchat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.CanEncount?
struct ABP_EventManager_C_CanEncount__Params
{
	bool                                               bCanEncount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.UserConstructionScript
struct ABP_EventManager_C_UserConstructionScript_Params
{
};

// Function BP_EventManager.BP_EventManager_C.EventManagerFinalize
struct ABP_EventManager_C_EventManagerFinalize_Params
{
};

// Function BP_EventManager.BP_EventManager_C.Event_ShowLevels_HiddenInPlayEvent
struct ABP_EventManager_C_Event_ShowLevels_HiddenInPlayEvent_Params
{
	bool                                               bDelayShowObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPostLongchat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnPlayLevelSequence
struct ABP_EventManager_C_OnPlayLevelSequence_Params
{
	class ULevelSequence*                              Sq;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         SqActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnSkippedToEnd
struct ABP_EventManager_C_OnSkippedToEnd_Params
{
	struct FFrameNumber                                SkipFrame;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnPlayEnd
struct ABP_EventManager_C_OnPlayEnd_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnSkipEnable
struct ABP_EventManager_C_OnSkipEnable_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelaySec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnEventEndDelay
struct ABP_EventManager_C_OnEventEndDelay_Params
{
	float                                              DelaySec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.BPE_MapChange
struct ABP_EventManager_C_BPE_MapChange_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                oldSceCounter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newSceCounter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.EventAtPFRuning
struct ABP_EventManager_C_EventAtPFRuning_Params
{
};

// Function BP_EventManager.BP_EventManager_C.BPE_PlayLongChat
struct ABP_EventManager_C_BPE_PlayLongChat_Params
{
	struct FString                                     EventNo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C.OnChangeScene
struct ABP_EventManager_C_OnChangeScene_Params
{
	unsigned char                                      ActiveScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.ReceiveBeginPlay
struct ABP_EventManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_EventManager.BP_EventManager_C.BPE_PlayEvent
struct ABP_EventManager_C_BPE_PlayEvent_Params
{
	class UEventComponent*                             EventComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.ReceiveTick
struct ABP_EventManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnLevelUnload
struct ABP_EventManager_C_OnLevelUnload_Params
{
	class UEventComponent*                             nowComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAbort;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnEventFinalize
struct ABP_EventManager_C_OnEventFinalize_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C.OnPostMapChange
struct ABP_EventManager_C_OnPostMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C.BPE_PreEvent
struct ABP_EventManager_C_BPE_PreEvent_Params
{
	EEventPlayState                                    playState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.BPE_RunScript
struct ABP_EventManager_C_BPE_RunScript_Params
{
	class UClass*                                      ScriptClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptUserString;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      scriptOwnerActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnWatchEventScript
struct ABP_EventManager_C_OnWatchEventScript_Params
{
};

// Function BP_EventManager.BP_EventManager_C.BPE_EndEvent
struct ABP_EventManager_C_BPE_EndEvent_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnEventBattleStart
struct ABP_EventManager_C_OnEventBattleStart_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnPostEventBattle
struct ABP_EventManager_C_OnPostEventBattle_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.BPE_PlayMovie
struct ABP_EventManager_C_BPE_PlayMovie_Params
{
	struct FString                                     EventNo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventManager.BP_EventManager_C.OnEndMovie
struct ABP_EventManager_C_OnEndMovie_Params
{
	unsigned char                                      ActiveScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.BPE_OnPreFade
struct ABP_EventManager_C_BPE_OnPreFade_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnPreEventBattle
struct ABP_EventManager_C_OnPreEventBattle_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnEventSkipAll
struct ABP_EventManager_C_OnEventSkipAll_Params
{
};

// Function BP_EventManager.BP_EventManager_C.BPE_BattleStartRequest
struct ABP_EventManager_C_BPE_BattleStartRequest_Params
{
};

// Function BP_EventManager.BP_EventManager_C.ReceiveEndPlay
struct ABP_EventManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.BPE_ShowNowLoading
struct ABP_EventManager_C_BPE_ShowNowLoading_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnLoadClass
struct ABP_EventManager_C_OnLoadClass_Params
{
	class UClass*                                      InLoadedAssetClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.RequestMapShowOutEvent
struct ABP_EventManager_C_RequestMapShowOutEvent_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnGoBackTitle
struct ABP_EventManager_C_OnGoBackTitle_Params
{
};

// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
struct ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C._OnPlayLevelSequence__DelegateSignature
struct ABP_EventManager_C__OnPlayLevelSequence__DelegateSignature_Params
{
	struct FName                                       PlayEventLevelName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartFrame;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.EvPlayLevelSequence__DelegateSignature
struct ABP_EventManager_C_EvPlayLevelSequence__DelegateSignature_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager.BP_EventManager_C.OnEndEvent__DelegateSignature
struct ABP_EventManager_C_OnEndEvent__DelegateSignature_Params
{
};

// Function BP_EventManager.BP_EventManager_C.OnPreEvent__DelegateSignature
struct ABP_EventManager_C_OnPreEvent__DelegateSignature_Params
{
};

// Function BP_EventManager.BP_EventManager_C.EvEventSkipAll__DelegateSignature
struct ABP_EventManager_C_EvEventSkipAll__DelegateSignature_Params
{
};

// Function BP_EventManager.BP_EventManager_C.EvPreEventBattle__DelegateSignature
struct ABP_EventManager_C_EvPreEventBattle__DelegateSignature_Params
{
};

// Function BP_EventManager.BP_EventManager_C.WatchScriptProcess__DelegateSignature
struct ABP_EventManager_C_WatchScriptProcess__DelegateSignature_Params
{
};

// Function BP_EventManager.BP_EventManager_C.EvLevelUnload__DelegateSignature
struct ABP_EventManager_C_EvLevelUnload__DelegateSignature_Params
{
	class UEventComponent*                             nowCoponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
