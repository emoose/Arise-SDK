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

// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_DisplayEndSkipGuide
struct UBPI_SkipPauseController_C_IF_DisplayEndSkipGuide_Params
{
};

// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_PauseManagement
struct UBPI_SkipPauseController_C_IF_PauseManagement_Params
{
	bool                                               OnPause;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OffPause;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Skipped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_SkipPauseController.BPI_SkipPauseController_C.IF_EventSkipMangement
struct UBPI_SkipPauseController_C_IF_EventSkipMangement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoEventSkip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
