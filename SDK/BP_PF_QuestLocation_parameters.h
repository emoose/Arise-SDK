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

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.GetLocationTransform
struct ABP_PF_QuestLocation_C_GetLocationTransform_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.UserConstructionScript
struct ABP_PF_QuestLocation_C_UserConstructionScript_Params
{
};

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ReceiveBeginPlay
struct ABP_PF_QuestLocation_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.InitializeLocation
struct ABP_PF_QuestLocation_C_InitializeLocation_Params
{
	class AActor*                                      NewLocationActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestLocation.BP_PF_QuestLocation_C.ExecuteUbergraph_BP_PF_QuestLocation
struct ABP_PF_QuestLocation_C_ExecuteUbergraph_BP_PF_QuestLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
