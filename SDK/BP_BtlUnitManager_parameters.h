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

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.CancelAttack_AllUnit
struct ABP_BtlUnitManager_C_CancelAttack_AllUnit_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapPartyOrder
struct ABP_BtlUnitManager_C_SwapPartyOrder_Params
{
	class ABtlCharacterBase*                           FromUnit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToUnit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapFront2SubInternal
struct ABP_BtlUnitManager_C_SwapFront2SubInternal_Params
{
	class ABtlCharacterBase*                           FromUnit;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToUnit;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ForceUpdateAI_AllUnit
struct ABP_BtlUnitManager_C_ForceUpdateAI_AllUnit_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SpawnEnemyReinforcement
struct ABP_BtlUnitManager_C_SpawnEnemyReinforcement_Params
{
	struct FBtlUnitEnemyReinforcementData              SpawnElement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Finish;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnChangePartyOrder
struct ABP_BtlUnitManager_C_OnChangePartyOrder_Params
{
	EArisePartyID                                      FromPartyID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPCOrder                                           FromOrder;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      ToPartyID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPCOrder                                           ToOrder;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.PlayAI_AllUnit
struct ABP_BtlUnitManager_C_PlayAI_AllUnit_Params
{
	EBtlBitFlagCategory                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.StopAI_AllUnit
struct ABP_BtlUnitManager_C_StopAI_AllUnit_Params
{
	EBtlBitFlagCategory                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.UserConstructionScript
struct ABP_BtlUnitManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashEndParam                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature_Params
{
	struct FBtlMysticBeginParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashBeginParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature_Params
{
	struct FBtlCutSceneEndParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature_Params
{
	struct FBtlCutSceneBeginParam                      Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveBeginPlay
struct ABP_BtlUnitManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveEndPlay
struct ABP_BtlUnitManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.RequestAddEnemyReinforcement
struct ABP_BtlUnitManager_C_RequestAddEnemyReinforcement_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnSpawnReinforrcement
struct ABP_BtlUnitManager_C_OnSpawnReinforrcement_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature_Params
{
	struct FBtlSpecialStrikeBeginParam                 Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature_Params
{
	struct FBtlSpecialStrikeEndParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlSemiautoPhase                                  OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlSemiautoPhase                                  NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature_Params
{
	class ABtl_AIControllerBase*                       BtlAIController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature_Params
{
	class ABtl_AIControllerBase*                       BtlAIController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           NewMainMember;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NewSubMember;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature
struct ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature_Params
{
	EOperationMode                                     OldMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOperationMode                                     NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ExecuteUbergraph_BP_BtlUnitManager
struct ABP_BtlUnitManager_C_ExecuteUbergraph_BP_BtlUnitManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
