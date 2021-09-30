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

// Function BP_PF_ActionState_EnSym_Turn.BP_PF_ActionState_EnSym_Turn_C.K2_Tick
struct UBP_PF_ActionState_EnSym_Turn_C_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PF_ActionState_EnSym_Turn.BP_PF_ActionState_EnSym_Turn_C.K2_Begin
struct UBP_PF_ActionState_EnSym_Turn_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_EnSym_Turn.BP_PF_ActionState_EnSym_Turn_C.ExecuteUbergraph_BP_PF_ActionState_EnSym_Turn
struct UBP_PF_ActionState_EnSym_Turn_C_ExecuteUbergraph_BP_PF_ActionState_EnSym_Turn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
