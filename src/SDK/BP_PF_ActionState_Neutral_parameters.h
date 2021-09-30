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

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.SetEnableIK
struct UBP_PF_ActionState_Neutral_C_SetEnableIK_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.K2_Tick
struct UBP_PF_ActionState_Neutral_C_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.K2_Begin
struct UBP_PF_ActionState_Neutral_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.K2_End
struct UBP_PF_ActionState_Neutral_C_K2_End_Params
{
	struct FName                                       NextState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.CallFreeMotion
struct UBP_PF_ActionState_Neutral_C_CallFreeMotion_Params
{
};

// Function BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C.ExecuteUbergraph_BP_PF_ActionState_Neutral
struct UBP_PF_ActionState_Neutral_C_ExecuteUbergraph_BP_PF_ActionState_Neutral_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
