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

// Function BTT_SetMagicUserTarget.BTT_SetMagicUserTarget_C.SelectTarget
struct UBTT_SetMagicUserTarget_C_SelectTarget_Params
{
};

// Function BTT_SetMagicUserTarget.BTT_SetMagicUserTarget_C.ReceiveExecuteAI
struct UBTT_SetMagicUserTarget_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_SetMagicUserTarget.BTT_SetMagicUserTarget_C.ExecuteUbergraph_BTT_SetMagicUserTarget
struct UBTT_SetMagicUserTarget_C_ExecuteUbergraph_BTT_SetMagicUserTarget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
