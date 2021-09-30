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

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplated
struct ABP_BtlLaunchWorkerActor_C_IsLoadComplated_Params
{
	bool                                               bIsLoadComplated;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DevBootBattleable
struct ABP_BtlLaunchWorkerActor_C_DevBootBattleable_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsBattleRunable
struct ABP_BtlLaunchWorkerActor_C_IsBattleRunable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UnloadBattle
struct ABP_BtlLaunchWorkerActor_C_UnloadBattle_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.LoadBattle
struct ABP_BtlLaunchWorkerActor_C_LoadBattle_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.IsLoadComplateEncountEffect
struct ABP_BtlLaunchWorkerActor_C_IsLoadComplateEncountEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ChangeBattleScene
struct ABP_BtlLaunchWorkerActor_C_ChangeBattleScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.UserConstructionScript
struct ABP_BtlLaunchWorkerActor_C_UserConstructionScript_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveBeginPlay
struct ABP_BtlLaunchWorkerActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.DoBattle
struct ABP_BtlLaunchWorkerActor_C_DoBattle_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnWakeupPlayer
struct ABP_BtlLaunchWorkerActor_C_OnWakeupPlayer_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ReceiveEndPlay
struct ABP_BtlLaunchWorkerActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattleEnd
struct ABP_BtlLaunchWorkerActor_C_OnBattleEnd_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor
struct ABP_BtlLaunchWorkerActor_C_ExecuteUbergraph_BP_BtlLaunchWorkerActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseEnd__DelegateSignature
struct ABP_BtlLaunchWorkerActor_C_OnBattlePhaseEnd__DelegateSignature_Params
{
};

// Function BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C.OnBattlePhaseStart__DelegateSignature
struct ABP_BtlLaunchWorkerActor_C_OnBattlePhaseStart__DelegateSignature_Params
{
	bool                                               Acepct;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
