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

// Function BP_ShortChatManager.BP_ShortChatManager_C.IsLockObjSC
struct ABP_ShortChatManager_C_IsLockObjSC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.MapChangeSC
struct ABP_ShortChatManager_C_MapChangeSC_Params
{
	struct FString                                     InNewMapName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InOldMapName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateImpl
struct ABP_ShortChatManager_C_OnChangeStateImpl_Params
{
	EAriseGameState                                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ResetFlag
struct ABP_ShortChatManager_C_ResetFlag_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ForcePauseCancel
struct ABP_ShortChatManager_C_ForcePauseCancel_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.IsStandbyState
struct ABP_ShortChatManager_C_IsStandbyState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.SCPause
struct ABP_ShortChatManager_C_SCPause_Params
{
	bool                                               InPause;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePFSCPauseState                               InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.GetCurrentLocation
struct ABP_ShortChatManager_C_GetCurrentLocation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.UserConstructionScript
struct ABP_ShortChatManager_C_UserConstructionScript_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.InitCallback
struct ABP_ShortChatManager_C_InitCallback_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnMapChangeEnd
struct ABP_ShortChatManager_C_OnMapChangeEnd_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateBP
struct ABP_ShortChatManager_C_OnChangeStateBP_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnRequestAutoSave
struct ABP_ShortChatManager_C_OnRequestAutoSave_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnAutoSaveComplite
struct ABP_ShortChatManager_C_OnAutoSaveComplite_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnEndBattleScene
struct ABP_ShortChatManager_C_OnEndBattleScene_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.StartShortChat
struct ABP_ShortChatManager_C_StartShortChat_Params
{
	struct FString                                     FaceIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.EndShortChat
struct ABP_ShortChatManager_C_EndShortChat_Params
{
	bool                                               bAbort;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveTick
struct ABP_ShortChatManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveBeginPlay
struct ABP_ShortChatManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveEndPlay
struct ABP_ShortChatManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChat
struct ABP_ShortChatManager_C_ResumeShortChat_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.PauseShortChat
struct ABP_ShortChatManager_C_PauseShortChat_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnReadyEvent
struct ABP_ShortChatManager_C_OnReadyEvent_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.OnInitEvent
struct ABP_ShortChatManager_C_OnInitEvent_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChatUI
struct ABP_ShortChatManager_C_ResumeShortChatUI_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecutePause
struct ABP_ShortChatManager_C_ExecutePause_Params
{
	EArisePFSCPauseState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteReleasePause
struct ABP_ShortChatManager_C_ExecuteReleasePause_Params
{
	EArisePFSCPauseState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.LockMapChangeSC
struct ABP_ShortChatManager_C_LockMapChangeSC_Params
{
};

// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteUbergraph_BP_ShortChatManager
struct ABP_ShortChatManager_C_ExecuteUbergraph_BP_ShortChatManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
