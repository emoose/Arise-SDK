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

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.SetInfluence
struct ABP_ScenarioSwitchMesh_C_SetInfluence_Params
{
	bool                                               bInfluence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.DestroyInfluenceMap
struct ABP_ScenarioSwitchMesh_C_DestroyInfluenceMap_Params
{
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CreateInfluenceMap
struct ABP_ScenarioSwitchMesh_C_CreateInfluenceMap_Params
{
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ShowModels
struct ABP_ScenarioSwitchMesh_C_ShowModels_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CheckScenarioCondions
struct ABP_ScenarioSwitchMesh_C_CheckScenarioCondions_Params
{
	bool                                               bSatisfy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.UserConstructionScript
struct ABP_ScenarioSwitchMesh_C_UserConstructionScript_Params
{
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveBeginPlay
struct ABP_ScenarioSwitchMesh_C_ReceiveBeginPlay_Params
{
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioCounterChange
struct ABP_ScenarioSwitchMesh_C_OnScenarioCounterChange_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioFlagChange
struct ABP_ScenarioSwitchMesh_C_OnScenarioFlagChange_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveEndPlay
struct ABP_ScenarioSwitchMesh_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ExecuteUbergraph_BP_ScenarioSwitchMesh
struct ABP_ScenarioSwitchMesh_C_ExecuteUbergraph_BP_ScenarioSwitchMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
