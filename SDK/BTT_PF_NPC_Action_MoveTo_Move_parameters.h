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

// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.SetActionUpdate
struct UBTT_PF_NPC_Action_MoveTo_Move_C_SetActionUpdate_Params
{
};

// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ReceiveExecuteAI
struct UBTT_PF_NPC_Action_MoveTo_Move_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.CustomEvent_1
struct UBTT_PF_NPC_Action_MoveTo_Move_C_CustomEvent_1_Params
{
	struct FAIRequestID                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move
struct UBTT_PF_NPC_Action_MoveTo_Move_C_ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
