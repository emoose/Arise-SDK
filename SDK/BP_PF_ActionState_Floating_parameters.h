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

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.IsLanded
struct UBP_PF_ActionState_Floating_C_IsLanded_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.GetLandAnimCommand
struct UBP_PF_ActionState_Floating_C_GetLandAnimCommand_Params
{
	struct FString                                     OutCommand;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.Initialize
struct UBP_PF_ActionState_Floating_C_Initialize_Params
{
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.Finalize
struct UBP_PF_ActionState_Floating_C_Finalize_Params
{
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.K2_Tick
struct UBP_PF_ActionState_Floating_C_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.K2_End
struct UBP_PF_ActionState_Floating_C_K2_End_Params
{
	struct FName                                       NextState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.K2_Begin
struct UBP_PF_ActionState_Floating_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_Floating.BP_PF_ActionState_Floating_C.ExecuteUbergraph_BP_PF_ActionState_Floating
struct UBP_PF_ActionState_Floating_C_ExecuteUbergraph_BP_PF_ActionState_Floating_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
