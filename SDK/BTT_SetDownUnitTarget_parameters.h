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

// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.SelectTarget
struct UBTT_SetDownUnitTarget_C_SelectTarget_Params
{
};

// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ReceiveExecuteAI
struct UBTT_SetDownUnitTarget_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ExecuteUbergraph_BTT_SetDownUnitTarget
struct UBTT_SetDownUnitTarget_C_ExecuteUbergraph_BTT_SetDownUnitTarget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
