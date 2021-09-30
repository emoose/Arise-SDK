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

// Function PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C.Respawn
struct UPFT_EnSym_TimerReset_C_Respawn_Params
{
};

// Function PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C.OnExecute
struct UPFT_EnSym_TimerReset_C_OnExecute_Params
{
};

// Function PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C.OnAbort
struct UPFT_EnSym_TimerReset_C_OnAbort_Params
{
};

// Function PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C.OnTick
struct UPFT_EnSym_TimerReset_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_TimerReset.PFT_EnSym_TimerReset_C.ExecuteUbergraph_PFT_EnSym_TimerReset
struct UPFT_EnSym_TimerReset_C_ExecuteUbergraph_PFT_EnSym_TimerReset_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
