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

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_DebugRender
struct UBP_MGC_TASK_MoveTracking_C_Received_DebugRender_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_GetTaskName
struct UBP_MGC_TASK_MoveTracking_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTrackingEx
struct UBP_MGC_TASK_MoveTracking_C_UpdateTrackingEx_Params
{
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTracking
struct UBP_MGC_TASK_MoveTracking_C_UpdateTracking_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElsedTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Tracking
struct UBP_MGC_TASK_MoveTracking_C_Tracking_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Tick
struct UBP_MGC_TASK_MoveTracking_C_Received_Tick_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Begin
struct UBP_MGC_TASK_MoveTracking_C_Received_Begin_Params
{
};

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.ExecuteUbergraph_BP_MGC_TASK_MoveTracking
struct UBP_MGC_TASK_MoveTracking_C_ExecuteUbergraph_BP_MGC_TASK_MoveTracking_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
