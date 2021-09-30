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

// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckFollowType
struct UPFD_EnSym_AIType_C_CheckFollowType_Params
{
};

// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWanderingType
struct UPFD_EnSym_AIType_C_CheckWanderingType_Params
{
};

// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWaitType
struct UPFD_EnSym_AIType_C_CheckWaitType_Params
{
};

// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.PerformConditionCheckAI
struct UPFD_EnSym_AIType_C_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
