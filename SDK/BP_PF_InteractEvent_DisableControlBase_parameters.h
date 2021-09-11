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

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.EndEvent
struct ABP_PF_InteractEvent_DisableControlBase_C_EndEvent_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.BeginEvent
struct ABP_PF_InteractEvent_DisableControlBase_C_BeginEvent_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.FinishInteract
struct ABP_PF_InteractEvent_DisableControlBase_C_FinishInteract_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.FinishPostInteract
struct ABP_PF_InteractEvent_DisableControlBase_C_FinishPostInteract_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.FinishPreInteract
struct ABP_PF_InteractEvent_DisableControlBase_C_FinishPreInteract_Params
{
	bool                                               bRunInteraction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.UserConstructionScript
struct ABP_PF_InteractEvent_DisableControlBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.Post Interact
struct ABP_PF_InteractEvent_DisableControlBase_C_Post_Interact_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.Interact
struct ABP_PF_InteractEvent_DisableControlBase_C_Interact_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.Pre Interact
struct ABP_PF_InteractEvent_DisableControlBase_C_Pre_Interact_Params
{
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.K2_Execute
struct ABP_PF_InteractEvent_DisableControlBase_C_K2_Execute_Params
{
	class AActor*                                      Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C.ExecuteUbergraph_BP_PF_InteractEvent_DisableControlBase
struct ABP_PF_InteractEvent_DisableControlBase_C_ExecuteUbergraph_BP_PF_InteractEvent_DisableControlBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
