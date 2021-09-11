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

// Function BP_PF_AT_ToMoveBrake.BP_PF_AT_ToMoveBrake_C.GetBorderBsValue
struct UBP_PF_AT_ToMoveBrake_C_GetBorderBsValue_Params
{
	TEnumAsByte<EPFActorMovementState>                 InMovementState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutBsValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AT_ToMoveBrake.BP_PF_AT_ToMoveBrake_C.ReceiveCanEnter
struct UBP_PF_AT_ToMoveBrake_C_ReceiveCanEnter_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
