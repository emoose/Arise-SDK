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

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.CheckJumpState
struct UBP_PF_ActionState_Jump_C_CheckJumpState_Params
{
	bool                                               ToDash;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ToRun;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.NewFunction_1
struct UBP_PF_ActionState_Jump_C_NewFunction_1_Params
{
	class ACharacter*                                  self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityLength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Tick
struct UBP_PF_ActionState_Jump_C_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Begin
struct UBP_PF_ActionState_Jump_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.ExecuteUbergraph_BP_PF_ActionState_Jump
struct UBP_PF_ActionState_Jump_C_ExecuteUbergraph_BP_PF_ActionState_Jump_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
