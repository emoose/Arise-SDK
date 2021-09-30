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

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.K2_Tick
struct UBP_PF_ActionState_PC_GrabObject_C_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.K2_Begin
struct UBP_PF_ActionState_PC_GrabObject_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.K2_End
struct UBP_PF_ActionState_PC_GrabObject_C_K2_End_Params
{
	struct FName                                       NextState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.Move Forward
struct UBP_PF_ActionState_PC_GrabObject_C_Move_Forward_Params
{
	class ACharacter*                                  InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.Move Backward
struct UBP_PF_ActionState_PC_GrabObject_C_Move_Backward_Params
{
	class ACharacter*                                  InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.Move Process
struct UBP_PF_ActionState_PC_GrabObject_C_Move_Process_Params
{
	class ACharacter*                                  InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMoveDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_PC_GrabObject.BP_PF_ActionState_PC_GrabObject_C.ExecuteUbergraph_BP_PF_ActionState_PC_GrabObject
struct UBP_PF_ActionState_PC_GrabObject_C_ExecuteUbergraph_BP_PF_ActionState_PC_GrabObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
