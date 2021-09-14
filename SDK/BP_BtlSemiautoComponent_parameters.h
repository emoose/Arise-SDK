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

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanMysticArts
struct UBP_BtlSemiautoComponent_C_CanMysticArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanImmediatelyArts
struct UBP_BtlSemiautoComponent_C_CanImmediatelyArts_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlSemiautoPhase                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.IsOperationSemiauto
struct UBP_BtlSemiautoComponent_C_IsOperationSemiauto_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetNextPhaseForMove
struct UBP_BtlSemiautoComponent_C_GetNextPhaseForMove_Params
{
	bool                                               IsAttackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAirArts;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackArts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExternalOrder;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlResultArtsRange                         ArtsRange;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlSemiautoPhase                                  NextPhase;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayMystic
struct UBP_BtlSemiautoComponent_C_PlayMystic_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboEnd
struct UBP_BtlSemiautoComponent_C_PhaseComboEnd_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMove
struct UBP_BtlSemiautoComponent_C_PhaseMove_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveToSafePlace
struct UBP_BtlSemiautoComponent_C_PhaseMoveToSafePlace_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveAwayFromTarget
struct UBP_BtlSemiautoComponent_C_PhaseMoveAwayFromTarget_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJumpToPoint
struct UBP_BtlSemiautoComponent_C_PhaseJumpToPoint_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJump
struct UBP_BtlSemiautoComponent_C_PhaseJump_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GuardEndRequest
struct UBP_BtlSemiautoComponent_C_GuardEndRequest_Params
{
	bool                                               Wait;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PauseAI
struct UBP_BtlSemiautoComponent_C_PauseAI_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboStart
struct UBP_BtlSemiautoComponent_C_PhaseComboStart_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayComboStart
struct UBP_BtlSemiautoComponent_C_PlayComboStart_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseWaitNextCombo
struct UBP_BtlSemiautoComponent_C_PhaseWaitNextCombo_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoStep
struct UBP_BtlSemiautoComponent_C_PhaseAutoStep_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoGuard
struct UBP_BtlSemiautoComponent_C_PhaseAutoGuard_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseArtsMagic
struct UBP_BtlSemiautoComponent_C_PhaseArtsMagic_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseStep
struct UBP_BtlSemiautoComponent_C_PhaseStep_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseIdle
struct UBP_BtlSemiautoComponent_C_PhaseIdle_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetActionTarget
struct UBP_BtlSemiautoComponent_C_GetActionTarget_Params
{
	bool                                               IgnoreTemporary;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoStep
struct UBP_BtlSemiautoComponent_C_PlayAutoStep_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoGuard
struct UBP_BtlSemiautoComponent_C_PlayAutoGuard_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayArtsMagic
struct UBP_BtlSemiautoComponent_C_PlayArtsMagic_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetOwnerToTargetYaw
struct UBP_BtlSemiautoComponent_C_GetOwnerToTargetYaw_Params
{
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayStepToTurnTarget
struct UBP_BtlSemiautoComponent_C_PlayStepToTurnTarget_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.BtlChangeEvent
struct UBP_BtlSemiautoComponent_C_BtlChangeEvent_Params
{
	EBattleState                                       NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleState                                       PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveEndPlay
struct UBP_BtlSemiautoComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveTick
struct UBP_BtlSemiautoComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveBeginPlay
struct UBP_BtlSemiautoComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.AttackEnd
struct UBP_BtlSemiautoComponent_C_AttackEnd_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ExecuteUbergraph_BP_BtlSemiautoComponent
struct UBP_BtlSemiautoComponent_C_ExecuteUbergraph_BP_BtlSemiautoComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
