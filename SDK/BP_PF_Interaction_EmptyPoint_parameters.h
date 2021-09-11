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

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.SetIconOffset
struct ABP_PF_Interaction_EmptyPoint_C_SetIconOffset_Params
{
	struct FVector                                     NewOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UpdateActive
struct ABP_PF_Interaction_EmptyPoint_C_UpdateActive_Params
{
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UserConstructionScript
struct ABP_PF_Interaction_EmptyPoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveEndPlay
struct ABP_PF_Interaction_EmptyPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveTick
struct ABP_PF_Interaction_EmptyPoint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveBeginPlay
struct ABP_PF_Interaction_EmptyPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChangeScenarioCounter
struct ABP_PF_Interaction_EmptyPoint_C_Event_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChageScenarioFlag
struct ABP_PF_Interaction_EmptyPoint_C_Event_OnChageScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ExecuteUbergraph_BP_PF_Interaction_EmptyPoint
struct ABP_PF_Interaction_EmptyPoint_C_ExecuteUbergraph_BP_PF_Interaction_EmptyPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
