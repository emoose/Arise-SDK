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

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.CreateInfluenceMap
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_CreateInfluenceMap_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SetNPCRotation
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SetNPCRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SetNPCRotation(Recovery)
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SetNPCRotation_Recovery__Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ApplyPostInteractChangeFlag
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ApplyPostInteractChangeFlag_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.DestroyInfluenceMap
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_DestroyInfluenceMap_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ChangeActInfo
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ChangeActInfo_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ChangeOneTop
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ChangeOneTop_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.GetNPCPawn
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_GetNPCPawn_Params
{
	class APFNpcCharacterBase*                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.AttachNPC
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_AttachNPC_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SetNPCInteraction
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SetNPCInteraction_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInjured;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.GetNPCObject
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_GetNPCObject_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SetDebugItemPos
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SetDebugItemPos_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.UserConstructionScript
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_UserConstructionScript_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.WakeupInGame
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_WakeupInGame_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SleepInGame
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SleepInGame_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.On Receive Interact
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_On_Receive_Interact_Params
{
	class AActor*                                      InSender;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.Wakeup
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_Wakeup_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.Sleep
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_Sleep_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.OnLockInteraction
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_OnLockInteraction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.OnUnlockInteraction
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_OnUnlockInteraction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.Play Gimmick Event
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_Play_Gimmick_Event_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ReceiveBeginPlay
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ReceiveTick
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.OnChangedScenarioCondition
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_OnChangedScenarioCondition_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.InitJustBeforePlaySequencer
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_InitJustBeforePlaySequencer_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.BeginOverlap
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ReceiveEndPlay
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ChangeNPCAction
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ChangeNPCAction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.PostInteraction
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_PostInteraction_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.Unlocked
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_Unlocked_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.RunPostEvent
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_RunPostEvent_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.UnlockProcess
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_UnlockProcess_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.Turn NPC To Player
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_Turn_NPC_To_Player_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.SpawnInfluenceMap
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_SpawnInfluenceMap_Params
{
};

// Function BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_InjuredPerson
struct ABP_PF_Gimmick_PlayerAction_InjuredPerson_C_ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_InjuredPerson_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
