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

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CheckObstruction
struct UBTT_PF_NPC_Action_Walk_Move_C_CheckObstruction_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Forword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Obstructed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.SetRotationRate
struct UBTT_PF_NPC_Action_Walk_Move_C_SetRotationRate_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Forword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPawnMovementComponent*                      Movement;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.StopMovement
struct UBTT_PF_NPC_Action_Walk_Move_C_StopMovement_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               MoveCompleted;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveTickAI
struct UBTT_PF_NPC_Action_Walk_Move_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CustomEvent_1
struct UBTT_PF_NPC_Action_Walk_Move_C_CustomEvent_1_Params
{
	struct FAIRequestID                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveExecuteAI
struct UBTT_PF_NPC_Action_Walk_Move_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move
struct UBTT_PF_NPC_Action_Walk_Move_C_ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
