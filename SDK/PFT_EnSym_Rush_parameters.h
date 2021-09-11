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

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.IsLineTrace
struct UPFT_EnSym_Rush_C_IsLineTrace_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.OnExecute
struct UPFT_EnSym_Rush_C_OnExecute_Params
{
};

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.OnTick
struct UPFT_EnSym_Rush_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.OnAbort
struct UPFT_EnSym_Rush_C_OnAbort_Params
{
};

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.OnModelOverlap
struct UPFT_EnSym_Rush_C_OnModelOverlap_Params
{
	bool                                               bOverlap;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Rush.PFT_EnSym_Rush_C.ExecuteUbergraph_PFT_EnSym_Rush
struct UPFT_EnSym_Rush_C_ExecuteUbergraph_PFT_EnSym_Rush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
