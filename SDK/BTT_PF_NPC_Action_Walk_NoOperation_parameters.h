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

// Function BTT_PF_NPC_Action_Walk_NoOperation.BTT_PF_NPC_Action_Walk_NoOperation_C.ReceiveExecuteAI
struct UBTT_PF_NPC_Action_Walk_NoOperation_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PF_NPC_Action_Walk_NoOperation.BTT_PF_NPC_Action_Walk_NoOperation_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NoOperation
struct UBTT_PF_NPC_Action_Walk_NoOperation_C_ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NoOperation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
