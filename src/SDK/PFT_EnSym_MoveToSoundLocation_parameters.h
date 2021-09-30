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

// Function PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C.Move
struct UPFT_EnSym_MoveToSoundLocation_C_Move_Params
{
};

// Function PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C.OnExecute
struct UPFT_EnSym_MoveToSoundLocation_C_OnExecute_Params
{
};

// Function PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C.OnFinishMove
struct UPFT_EnSym_MoveToSoundLocation_C_OnFinishMove_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveToSoundLocation.PFT_EnSym_MoveToSoundLocation_C.ExecuteUbergraph_PFT_EnSym_MoveToSoundLocation
struct UPFT_EnSym_MoveToSoundLocation_C_ExecuteUbergraph_PFT_EnSym_MoveToSoundLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
