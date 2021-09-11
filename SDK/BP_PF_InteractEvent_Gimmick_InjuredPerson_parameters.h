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

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetItem
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_GetItem_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDialog;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.GetPlayTransform
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_GetPlayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.IsMySelfEvent
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_IsMySelfEvent_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Same;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.UserConstructionScript
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_UserConstructionScript_Params
{
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPostEvent
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_OnPostEvent_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveEndPlay
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.Post Interact
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_Post_Interact_Params
{
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.K2_Execute
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_K2_Execute_Params
{
	class AActor*                                      Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ReceiveBeginPlay
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.On Gimmick Post Event Process
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_On_Gimmick_Post_Event_Process_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.RunPostEvent
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_RunPostEvent_Params
{
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.OnPlayEvent
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_OnPlayEvent_Params
{
};

// Function BP_PF_InteractEvent_Gimmick_InjuredPerson.BP_PF_InteractEvent_Gimmick_InjuredPerson_C.ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson
struct ABP_PF_InteractEvent_Gimmick_InjuredPerson_C_ExecuteUbergraph_BP_PF_InteractEvent_Gimmick_InjuredPerson_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
