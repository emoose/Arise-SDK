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

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.GetCookParam
struct UPFT_EnSym_UpdateGiveup_C_GetCookParam_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.CheckChaseDistance
struct UPFT_EnSym_UpdateGiveup_C_CheckChaseDistance_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.CheckChaseTime
struct UPFT_EnSym_UpdateGiveup_C_CheckChaseTime_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.OnExecute
struct UPFT_EnSym_UpdateGiveup_C_OnExecute_Params
{
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.OnTick
struct UPFT_EnSym_UpdateGiveup_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.OnAbort
struct UPFT_EnSym_UpdateGiveup_C_OnAbort_Params
{
};

// Function PFT_EnSym_UpdateGiveup.PFT_EnSym_UpdateGiveup_C.ExecuteUbergraph_PFT_EnSym_UpdateGiveup
struct UPFT_EnSym_UpdateGiveup_C_ExecuteUbergraph_PFT_EnSym_UpdateGiveup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
