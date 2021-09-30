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

// Function PFT_EnSym_CheckPathEQS.PFT_EnSym_CheckPathEQS_C.OnExecute
struct UPFT_EnSym_CheckPathEQS_C_OnExecute_Params
{
};

// Function PFT_EnSym_CheckPathEQS.PFT_EnSym_CheckPathEQS_C.CustomEvent
struct UPFT_EnSym_CheckPathEQS_C_CustomEvent_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_CheckPathEQS.PFT_EnSym_CheckPathEQS_C.ExecuteUbergraph_PFT_EnSym_CheckPathEQS
struct UPFT_EnSym_CheckPathEQS_C_ExecuteUbergraph_PFT_EnSym_CheckPathEQS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
