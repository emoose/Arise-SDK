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

// Function BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C.GetSelection
struct ABP_PF_NPC_InteractEvent_GeneralStore_C_GetSelection_Params
{
};

// Function BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C.AddSelect
struct ABP_PF_NPC_InteractEvent_GeneralStore_C_AddSelect_Params
{
	struct FString                                     StringID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     DisableFlag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C.UserConstructionScript
struct ABP_PF_NPC_InteractEvent_GeneralStore_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C.MainInteract
struct ABP_PF_NPC_InteractEvent_GeneralStore_C_MainInteract_Params
{
};

// Function BP_PF_NPC_InteractEvent_GeneralStore.BP_PF_NPC_InteractEvent_GeneralStore_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_GeneralStore
struct ABP_PF_NPC_InteractEvent_GeneralStore_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_GeneralStore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
