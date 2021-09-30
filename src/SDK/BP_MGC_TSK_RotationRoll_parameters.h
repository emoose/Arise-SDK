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

// Function BP_MGC_TSK_RotationRoll.BP_MGC_TSK_RotationRoll_C.Received_GetTaskName
struct UBP_MGC_TSK_RotationRoll_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_RotationRoll.BP_MGC_TSK_RotationRoll_C.Received_Tick
struct UBP_MGC_TSK_RotationRoll_C_Received_Tick_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_RotationRoll.BP_MGC_TSK_RotationRoll_C.ExecuteUbergraph_BP_MGC_TSK_RotationRoll
struct UBP_MGC_TSK_RotationRoll_C_ExecuteUbergraph_BP_MGC_TSK_RotationRoll_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
