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

// Function BP_PF_InteractEvent_BootInteract.BP_PF_InteractEvent_BootInteract_C.UserConstructionScript
struct ABP_PF_InteractEvent_BootInteract_C_UserConstructionScript_Params
{
};

// Function BP_PF_InteractEvent_BootInteract.BP_PF_InteractEvent_BootInteract_C.ReceiveBeginPlay
struct ABP_PF_InteractEvent_BootInteract_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_InteractEvent_BootInteract.BP_PF_InteractEvent_BootInteract_C.Event OnGoBackTitle
struct ABP_PF_InteractEvent_BootInteract_C_Event_OnGoBackTitle_Params
{
};

// Function BP_PF_InteractEvent_BootInteract.BP_PF_InteractEvent_BootInteract_C.ReceiveEndPlay
struct ABP_PF_InteractEvent_BootInteract_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_BootInteract.BP_PF_InteractEvent_BootInteract_C.ExecuteUbergraph_BP_PF_InteractEvent_BootInteract
struct ABP_PF_InteractEvent_BootInteract_C_ExecuteUbergraph_BP_PF_InteractEvent_BootInteract_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
