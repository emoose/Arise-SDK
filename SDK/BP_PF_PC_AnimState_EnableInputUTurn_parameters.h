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

// Function BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C.SetInputEnable
struct UBP_PF_PC_AnimState_EnableInputUTurn_C_SetInputEnable_Params
{
	class UAnimInstance*                               InAnimInstance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInEnable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C.ReceiveEndPlay
struct UBP_PF_PC_AnimState_EnableInputUTurn_C_ReceiveEndPlay_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C.ReceiveFinishedTick
struct UBP_PF_PC_AnimState_EnableInputUTurn_C_ReceiveFinishedTick_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C.ReceiveBeginPlay
struct UBP_PF_PC_AnimState_EnableInputUTurn_C_ReceiveBeginPlay_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UASAnimationSet*                             AnimationSet;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
