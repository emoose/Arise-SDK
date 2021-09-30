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

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CanPlayerFreeInfluence
struct ABP_PFG_InfluenceMap_C_CanPlayerFreeInfluence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.DestroyInfluence
struct ABP_PFG_InfluenceMap_C_DestroyInfluence_Params
{
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CreateInfluence
struct ABP_PFG_InfluenceMap_C_CreateInfluence_Params
{
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.SetInfluence
struct ABP_PFG_InfluenceMap_C_SetInfluence_Params
{
	bool                                               bInfluence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.UserConstructionScript
struct ABP_PFG_InfluenceMap_C_UserConstructionScript_Params
{
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveBeginPlay
struct ABP_PFG_InfluenceMap_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveEndPlay
struct ABP_PFG_InfluenceMap_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnSceneChange
struct ABP_PFG_InfluenceMap_C_OnSceneChange_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnPFStart
struct ABP_PFG_InfluenceMap_C_OnPFStart_Params
{
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnChangeState
struct ABP_PFG_InfluenceMap_C_OnChangeState_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ExecuteUbergraph_BP_PFG_InfluenceMap
struct ABP_PFG_InfluenceMap_C_ExecuteUbergraph_BP_PFG_InfluenceMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
