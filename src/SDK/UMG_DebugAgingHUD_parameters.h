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

// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.GetTime
struct UUMG_DebugAgingHUD_C_GetTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.OnPaint
struct UUMG_DebugAgingHUD_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.Construct
struct UUMG_DebugAgingHUD_C_Construct_Params
{
};

// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.ExecuteUbergraph_UMG_DebugAgingHUD
struct UUMG_DebugAgingHUD_C_ExecuteUbergraph_UMG_DebugAgingHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
