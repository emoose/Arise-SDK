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

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanTargetClearOnStateChanged
struct UBP_BtlTargetSwitcherComponent_C_CanTargetClearOnStateChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.QuickTarget
struct UBP_BtlTargetSwitcherComponent_C_QuickTarget_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.DistanceOrderPredicate
struct UBP_BtlTargetSwitcherComponent_C_DistanceOrderPredicate_Params
{
	class ABtlCharacterBase*                           Lhs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Rhs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetDistanceOrderTargets
struct UBP_BtlTargetSwitcherComponent_C_GetDistanceOrderTargets_Params
{
	TArray<class ABtlCharacterBase*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetFirstTarget
struct UBP_BtlTargetSwitcherComponent_C_GetFirstTarget_Params
{
	class ABtlCharacterBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanChangeTarget
struct UBP_BtlTargetSwitcherComponent_C_CanChangeTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetSelectableTargets
struct UBP_BtlTargetSwitcherComponent_C_GetSelectableTargets_Params
{
	bool                                               UseCache;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UBtlTargetCursorComponent*>           SelectableTargets;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetTargetComponent
struct UBP_BtlTargetSwitcherComponent_C_GetTargetComponent_Params
{
	bool                                               IgnoreTemporary;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.SetTargetCompoent
struct UBP_BtlTargetSwitcherComponent_C_SetTargetCompoent_Params
{
	class UBtlTargetCursorComponent*                   TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Temporary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetRelativeTargetIndex
struct UBP_BtlTargetSwitcherComponent_C_GetRelativeTargetIndex_Params
{
	int                                                Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.UpdateMagicTarget
struct UBP_BtlTargetSwitcherComponent_C_UpdateMagicTarget_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetMagicTarget
struct UBP_BtlTargetSwitcherComponent_C_GetMagicTarget_Params
{
	int                                                ArtsIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanAssistable
struct UBP_BtlTargetSwitcherComponent_C_CanAssistable_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnSwappedParty
struct UBP_BtlTargetSwitcherComponent_C_OnSwappedParty_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadCharacter
struct UBP_BtlTargetSwitcherComponent_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadPartyUnit
struct UBP_BtlTargetSwitcherComponent_C_OnDeadPartyUnit_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadEnemyUnit
struct UBP_BtlTargetSwitcherComponent_C_OnDeadEnemyUnit_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnRootMagicSpawned
struct UBP_BtlTargetSwitcherComponent_C_OnRootMagicSpawned_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnStateChanged
struct UBP_BtlTargetSwitcherComponent_C_OnStateChanged_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBeginMagicState
struct UBP_BtlTargetSwitcherComponent_C_OnBeginMagicState_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnInitializeComponent
struct UBP_BtlTargetSwitcherComponent_C_OnInitializeComponent_Params
{
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBreakCore
struct UBP_BtlTargetSwitcherComponent_C_OnBreakCore_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ChangeRelativeTarget
struct UBP_BtlTargetSwitcherComponent_C_ChangeRelativeTarget_Params
{
	int                                                Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetSelectionPauseChanged
struct UBP_BtlTargetSwitcherComponent_C_OnTargetSelectionPauseChanged_Params
{
	bool                                               Paused;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetLost
struct UBP_BtlTargetSwitcherComponent_C_OnTargetLost_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnCursorTargetableChanged
struct UBP_BtlTargetSwitcherComponent_C_OnCursorTargetableChanged_Params
{
	class UBtlTargetCursorComponent*                   CursorComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTryRefresh
struct UBP_BtlTargetSwitcherComponent_C_OnTryRefresh_Params
{
	EBtlBitFlagCategory                                Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnFakeDeadEvent
struct UBP_BtlTargetSwitcherComponent_C_OnFakeDeadEvent_Params
{
	class ABtlCharacterBase*                           FakeDeadUnit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ExecuteUbergraph_BP_BtlTargetSwitcherComponent
struct UBP_BtlTargetSwitcherComponent_C_ExecuteUbergraph_BP_BtlTargetSwitcherComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
