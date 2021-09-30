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

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsOverScenarioFlag
struct ABP_PF_Gimmick_PlayerAction_Base_C_IsOverScenarioFlag_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.FreezeCharacter
struct ABP_PF_Gimmick_PlayerAction_Base_C_FreezeCharacter_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetTPCost
struct ABP_PF_Gimmick_PlayerAction_Base_C_GetTPCost_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ResetPlayer
struct ABP_PF_Gimmick_PlayerAction_Base_C_ResetPlayer_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UnlockProcess
struct ABP_PF_Gimmick_PlayerAction_Base_C_UnlockProcess_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsEnoughTP
struct ABP_PF_Gimmick_PlayerAction_Base_C_IsEnoughTP_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractLock
struct ABP_PF_Gimmick_PlayerAction_Base_C_InteractLock_Params
{
	class ABP_PF_Gimmick_InteractActorBase_C*          Interact;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugUnlocked
struct ABP_PF_Gimmick_PlayerAction_Base_C_DebugUnlocked_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractWakeup
struct ABP_PF_Gimmick_PlayerAction_Base_C_InteractWakeup_Params
{
	class ABP_PF_Gimmick_InteractActorBase_C*          Interact;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractSleep
struct ABP_PF_Gimmick_PlayerAction_Base_C_InteractSleep_Params
{
	class ABP_PF_Gimmick_InteractActorBase_C*          Interact;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetInteract
struct ABP_PF_Gimmick_PlayerAction_Base_C_GetInteract_Params
{
	class UChildActorComponent*                        ChildActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_PF_Gimmick_InteractActorBase_C*          Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SelectShortChat
struct ABP_PF_Gimmick_PlayerAction_Base_C_SelectShortChat_Params
{
	TArray<struct FMapGimmickShortChatBlock>           Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ID;                                                       // (Parm, OutParm, ZeroConstructor)
	float                                              Interval;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SetDebugLabel
struct ABP_PF_Gimmick_PlayerAction_Base_C_SetDebugLabel_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlaySequencer
struct ABP_PF_Gimmick_PlayerAction_Base_C_PlaySequencer_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ConsumeTP
struct ABP_PF_Gimmick_PlayerAction_Base_C_ConsumeTP_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.CheckShortChatScenarioCondition
struct ABP_PF_Gimmick_PlayerAction_Base_C_CheckShortChatScenarioCondition_Params
{
	TArray<struct FMapGimmickShortChatBlock>           ShortChatBlock;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                idx;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayShortChat
struct ABP_PF_Gimmick_PlayerAction_Base_C_PlayShortChat_Params
{
	struct FString                                     ShortChatID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RandomizeShortChat
struct ABP_PF_Gimmick_PlayerAction_Base_C_RandomizeShortChat_Params
{
	TArray<struct FMapGimmickShortChatID>              ShortChatID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ID;                                                       // (Parm, OutParm, ZeroConstructor)
	float                                              Interval;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsMySelfEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_IsMySelfEvent_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Same;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugEventStart
struct ABP_PF_Gimmick_PlayerAction_Base_C_DebugEventStart_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UpdateDebugText
struct ABP_PF_Gimmick_PlayerAction_Base_C_UpdateDebugText_Params
{
	bool                                               bConstruction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsPlayerCollision
struct ABP_PF_Gimmick_PlayerAction_Base_C_IsPlayerCollision_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UserConstructionScript
struct ABP_PF_Gimmick_PlayerAction_Base_C_UserConstructionScript_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayUnlockEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_PlayUnlockEvent_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_RunPostEvent_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPreEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_RunPreEvent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnLockInteraction
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnLockInteraction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnUnlockInteraction
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnUnlockInteraction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveBeginPlay
struct ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioFlagChange
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnScenarioFlagChange_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioCounterChange
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnScenarioCounterChange_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveEndPlay
struct ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnMapChange
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnPostEvent_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.On Receive Interact
struct ABP_PF_Gimmick_PlayerAction_Base_C_On_Receive_Interact_Params
{
	class AActor*                                      InSender;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnChangedScenarioCondition
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnChangedScenarioCondition_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InitJustBeforePlaySequencer
struct ABP_PF_Gimmick_PlayerAction_Base_C_InitJustBeforePlaySequencer_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveOnConstruction
struct ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnFoundTrapEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnFoundTrapEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPlayEvent
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnPlayEvent_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.Unlocked
struct ABP_PF_Gimmick_PlayerAction_Base_C_Unlocked_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEventProcessNotify
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnPostEventProcessNotify_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEventProcessNotify
struct ABP_PF_Gimmick_PlayerAction_Base_C_RunPostEventProcessNotify_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPFStart
struct ABP_PF_Gimmick_PlayerAction_Base_C_OnPFStart_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base
struct ABP_PF_Gimmick_PlayerAction_Base_C_ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
