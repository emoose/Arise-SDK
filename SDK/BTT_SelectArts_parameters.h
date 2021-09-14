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

// Function BTT_SelectArts.BTT_SelectArts_C.SelectTarget
struct UBTT_SelectArts_C_SelectTarget_Params
{
};

// Function BTT_SelectArts.BTT_SelectArts_C.SelectArts
struct UBTT_SelectArts_C_SelectArts_Params
{
	struct FName                                       Request;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_SelectArts.BTT_SelectArts_C.ReceiveExecuteAI
struct UBTT_SelectArts_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_SelectArts.BTT_SelectArts_C.ExecuteUbergraph_BTT_SelectArts
struct UBTT_SelectArts_C_ExecuteUbergraph_BTT_SelectArts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
