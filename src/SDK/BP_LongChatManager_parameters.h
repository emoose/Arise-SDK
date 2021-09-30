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

// Function BP_LongChatManager.BP_LongChatManager_C.GetNoPlayVoice
struct ABP_LongChatManager_C_GetNoPlayVoice_Params
{
	bool                                               bNoPlayVoice;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.GetLongchatProfiler
struct ABP_LongChatManager_C_GetLongchatProfiler_Params
{
	class AActor*                                      Profiler;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.IsHidden
struct ABP_LongChatManager_C_IsHidden_Params
{
	bool                                               Hidden;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.HasPlayableChat
struct ABP_LongChatManager_C_HasPlayableChat_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.UpdatePlayRecord
struct ABP_LongChatManager_C_UpdatePlayRecord_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.SetShowUIFlag
struct ABP_LongChatManager_C_SetShowUIFlag_Params
{
	bool                                               bIsShowUI;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.IsShowUI
struct ABP_LongChatManager_C_IsShowUI_Params
{
	bool                                               bIsShowUI;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.SetNoPlayVoice
struct ABP_LongChatManager_C_SetNoPlayVoice_Params
{
	bool                                               bNoPlayVoice;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.CanPlayable?
struct ABP_LongChatManager_C_CanPlayable__Params
{
	bool                                               bAble;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.IsPlayabelLongchatNow?
struct ABP_LongChatManager_C_IsPlayabelLongchatNow__Params
{
	bool                                               bAble;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.GetPlayableChatNum
struct ABP_LongChatManager_C_GetPlayableChatNum_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.PlayLongChat
struct ABP_LongChatManager_C_PlayLongChat_Params
{
	bool                                               bDirect;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DirectPlayName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManager.BP_LongChatManager_C.UserConstructionScript
struct ABP_LongChatManager_C_UserConstructionScript_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.AddLongChat
struct ABP_LongChatManager_C_AddLongChat_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.Pause
struct ABP_LongChatManager_C_Pause_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.Stop
struct ABP_LongChatManager_C_Stop_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.Resume
struct ABP_LongChatManager_C_Resume_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.Play
struct ABP_LongChatManager_C_Play_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.DirectPlay
struct ABP_LongChatManager_C_DirectPlay_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManager.BP_LongChatManager_C.ShowTitle
struct ABP_LongChatManager_C_ShowTitle_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.MapChanged
struct ABP_LongChatManager_C_MapChanged_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManager.BP_LongChatManager_C.SkipToNextCut
struct ABP_LongChatManager_C_SkipToNextCut_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.RequestClearQue
struct ABP_LongChatManager_C_RequestClearQue_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveBeginPlay
struct ABP_LongChatManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.SpawnLongChatProfiler
struct ABP_LongChatManager_C_SpawnLongChatProfiler_Params
{
	class UClass*                                      InLoadedAssetClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnPostPlayLongchat
struct ABP_LongChatManager_C_OnPostPlayLongchat_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveTick
struct ABP_LongChatManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveEndPlay
struct ABP_LongChatManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnPreMapChange
struct ABP_LongChatManager_C_OnPreMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnPartyIn
struct ABP_LongChatManager_C_OnPartyIn_Params
{
	EArisePartyID                                      InPartyID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnDelayedUpdateLCQue
struct ABP_LongChatManager_C_OnDelayedUpdateLCQue_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnPartyOut
struct ABP_LongChatManager_C_OnPartyOut_Params
{
	EArisePartyID                                      OutPartyID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnChangeScene
struct ABP_LongChatManager_C_OnChangeScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.OnChangeMainScenario
struct ABP_LongChatManager_C_OnChangeMainScenario_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.ExecuteUbergraph_BP_LongChatManager
struct ABP_LongChatManager_C_ExecuteUbergraph_BP_LongChatManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManager.BP_LongChatManager_C.ShowLongChatTitle__DelegateSignature
struct ABP_LongChatManager_C_ShowLongChatTitle__DelegateSignature_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.NextCutLongChat__DelegateSignature
struct ABP_LongChatManager_C_NextCutLongChat__DelegateSignature_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.ChangeLongChatList__DelegateSignature
struct ABP_LongChatManager_C_ChangeLongChatList__DelegateSignature_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.ResumeLongChat__DelegateSignature
struct ABP_LongChatManager_C_ResumeLongChat__DelegateSignature_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.PauseLongChat__DelegateSignature
struct ABP_LongChatManager_C_PauseLongChat__DelegateSignature_Params
{
};

// Function BP_LongChatManager.BP_LongChatManager_C.StopLongChat__DelegateSignature
struct ABP_LongChatManager_C_StopLongChat__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
