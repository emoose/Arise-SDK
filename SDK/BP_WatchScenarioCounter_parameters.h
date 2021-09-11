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

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UpdateKPI
struct ABP_WatchScenarioCounter_C_UpdateKPI_Params
{
	int                                                CurCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PrevCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UserConstructionScript
struct ABP_WatchScenarioCounter_C_UserConstructionScript_Params
{
};

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.OnChangeScenarioCounter
struct ABP_WatchScenarioCounter_C_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveBeginPlay
struct ABP_WatchScenarioCounter_C_ReceiveBeginPlay_Params
{
};

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveEndPlay
struct ABP_WatchScenarioCounter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ExecuteUbergraph_BP_WatchScenarioCounter
struct ABP_WatchScenarioCounter_C_ExecuteUbergraph_BP_WatchScenarioCounter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
