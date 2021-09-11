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

// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnExecute
struct UPFT_EnSym_Detect_C_OnExecute_Params
{
};

// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.OnTick
struct UPFT_EnSym_Detect_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Detect.PFT_EnSym_Detect_C.ExecuteUbergraph_PFT_EnSym_Detect
struct UPFT_EnSym_Detect_C_ExecuteUbergraph_PFT_EnSym_Detect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
