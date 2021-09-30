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

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerFolderPath
struct ABP_PF_GimmickBase_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetOutlinerLabelName
struct ABP_PF_GimmickBase_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetVisible
struct ABP_PF_GimmickBase_C_SetVisible_Params
{
	bool                                               bVisible;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetCollision
struct ABP_PF_GimmickBase_C_SetCollision_Params
{
	bool                                               bEnable;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetTick
struct ABP_PF_GimmickBase_C_SetTick_Params
{
	bool                                               bEnable;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsQuestContinue
struct ABP_PF_GimmickBase_C_IsQuestContinue_Params
{
	bool                                               bContinue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UpdateQuest
struct ABP_PF_GimmickBase_C_UpdateQuest_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.IsSleeping
struct ABP_PF_GimmickBase_C_IsSleeping_Params
{
	bool                                               bIsSleeping;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetInteractActor
struct ABP_PF_GimmickBase_C_GetInteractActor_Params
{
	class AActor*                                      InteractActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SetInteractActor
struct ABP_PF_GimmickBase_C_SetInteractActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetDefaultPlayer
struct ABP_PF_GimmickBase_C_GetDefaultPlayer_Params
{
	class ACharacter*                                  DefaultPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerRotate
struct ABP_PF_GimmickBase_C_ResetPlayerRotate_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetPlayerCamera
struct ABP_PF_GimmickBase_C_ResetPlayerCamera_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ResetDefaultPlayer
struct ABP_PF_GimmickBase_C_ResetDefaultPlayer_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetPartyOrder
struct ABP_PF_GimmickBase_C_GetPartyOrder_Params
{
	class UArisePartyOrder*                            PartyOrder;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ShowPlayer
struct ABP_PF_GimmickBase_C_ShowPlayer_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.GetFieldController
struct ABP_PF_GimmickBase_C_GetFieldController_Params
{
	class UBP_GSC_Field_C*                             FieldController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ApplyChangeFlags
struct ABP_PF_GimmickBase_C_ApplyChangeFlags_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.UserConstructionScript
struct ABP_PF_GimmickBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveBeginPlay
struct ABP_PF_GimmickBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Field Action
struct ABP_PF_GimmickBase_C_On_Receive_Field_Action_Params
{
	class AActor*                                      InSener;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Interact
struct ABP_PF_GimmickBase_C_On_Receive_Interact_Params
{
	class AActor*                                      InSender;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ReceiveEndPlay
struct ABP_PF_GimmickBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.On Receive Command
struct ABP_PF_GimmickBase_C_On_Receive_Command_Params
{
	struct FString                                     Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.SleepInGame
struct ABP_PF_GimmickBase_C_SleepInGame_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.WakeupInGame
struct ABP_PF_GimmickBase_C_WakeupInGame_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.OnFoundTrapIn
struct ABP_PF_GimmickBase_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_GimmickBase.BP_PF_GimmickBase_C.ExecuteUbergraph_BP_PF_GimmickBase
struct ABP_PF_GimmickBase_C_ExecuteUbergraph_BP_PF_GimmickBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
