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

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_DebugRender
struct UBP_MGC_TSK_MoveCircle_C_Received_DebugRender_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_GetTaskName
struct UBP_MGC_TSK_MoveCircle_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.GetLerpAlpha
struct UBP_MGC_TSK_MoveCircle_C_GetLerpAlpha_Params
{
	float                                              Elapsed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Begin
struct UBP_MGC_TSK_MoveCircle_C_Received_Begin_Params
{
};

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Tick
struct UBP_MGC_TSK_MoveCircle_C_Received_Tick_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.ExecuteUbergraph_BP_MGC_TSK_MoveCircle
struct UBP_MGC_TSK_MoveCircle_C_ExecuteUbergraph_BP_MGC_TSK_MoveCircle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
