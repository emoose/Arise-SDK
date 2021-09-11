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

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.IsValidTalk
struct ABP_PF_NPC_InteractEvent_Base_C_IsValidTalk_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.SetupInteraction
struct ABP_PF_NPC_InteractEvent_Base_C_SetupInteraction_Params
{
	struct FPFNpcInteractionData                       InteractionData;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.OwnerSetting
struct ABP_PF_NPC_InteractEvent_Base_C_OwnerSetting_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.StartOneTopProcess
struct ABP_PF_NPC_InteractEvent_Base_C_StartOneTopProcess_Params
{
	class UClass*                                      GameProcessClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AAriseGameProcess*                           GameProcess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Init
struct ABP_PF_NPC_InteractEvent_Base_C_Init_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ClearAction
struct ABP_PF_NPC_InteractEvent_Base_C_ClearAction_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ActionToDefault
struct ABP_PF_NPC_InteractEvent_Base_C_ActionToDefault_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.LookAtToDefault
struct ABP_PF_NPC_InteractEvent_Base_C_LookAtToDefault_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.TurnToDefault
struct ABP_PF_NPC_InteractEvent_Base_C_TurnToDefault_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.FinishMainInteract
struct ABP_PF_NPC_InteractEvent_Base_C_FinishMainInteract_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.MainInteract
struct ABP_PF_NPC_InteractEvent_Base_C_MainInteract_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.UserConstructionScript
struct ABP_PF_NPC_InteractEvent_Base_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.BeginEvent
struct ABP_PF_NPC_InteractEvent_Base_C_BeginEvent_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.EndEvent
struct ABP_PF_NPC_InteractEvent_Base_C_EndEvent_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Interact
struct ABP_PF_NPC_InteractEvent_Base_C_Interact_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Event Select Notify
struct ABP_PF_NPC_InteractEvent_Base_C_Event_Select_Notify_Params
{
	int                                                SelectNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectTextNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add Turn Character
struct ABP_PF_NPC_InteractEvent_Base_C_Add_Turn_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add LookAt Character
struct ABP_PF_NPC_InteractEvent_Base_C_Add_LookAt_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Add PlayAction Character
struct ABP_PF_NPC_InteractEvent_Base_C_Add_PlayAction_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Execute OneTop
struct ABP_PF_NPC_InteractEvent_Base_C_Execute_OneTop_Params
{
	class UClass*                                      GameProcessClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.Finish OneTop
struct ABP_PF_NPC_InteractEvent_Base_C_Finish_OneTop_Params
{
};

// Function BP_PF_NPC_InteractEvent_Base.BP_PF_NPC_InteractEvent_Base_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base
struct ABP_PF_NPC_InteractEvent_Base_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
