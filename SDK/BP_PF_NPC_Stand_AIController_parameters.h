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

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ResetLookAtDefaultOutsite
struct ABP_PF_NPC_Stand_AIController_C_ResetLookAtDefaultOutsite_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ResetTurnDefaultOutsite
struct ABP_PF_NPC_Stand_AIController_C_ResetTurnDefaultOutsite_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ResetActionDefault
struct ABP_PF_NPC_Stand_AIController_C_ResetActionDefault_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.PlayActionLogic
struct ABP_PF_NPC_Stand_AIController_C_PlayActionLogic_Params
{
	TEnumAsByte<EDE_PF_NPC_Action>                     ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bActionBlend;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActionForce;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           ActionLoop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionMoveToDash
struct ABP_PF_NPC_Stand_AIController_C_ActionMoveToDash_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.HasAction
struct ABP_PF_NPC_Stand_AIController_C_HasAction_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.Resume
struct ABP_PF_NPC_Stand_AIController_C_Resume_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.Suspend
struct ABP_PF_NPC_Stand_AIController_C_Suspend_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.PostEventAction
struct ABP_PF_NPC_Stand_AIController_C_PostEventAction_Params
{
	TEnumAsByte<EDE_PF_NPC_AIControllerActionType>     Action;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionMoveToCommand
struct ABP_PF_NPC_Stand_AIController_C_ActionMoveToCommand_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionMoveTo
struct ABP_PF_NPC_Stand_AIController_C_ActionMoveTo_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.IsPartyTopOutsite
struct ABP_PF_NPC_Stand_AIController_C_IsPartyTopOutsite_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionLookAtToDefault
struct ABP_PF_NPC_Stand_AIController_C_ActionLookAtToDefault_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.PlayActionToDefault
struct ABP_PF_NPC_Stand_AIController_C_PlayActionToDefault_Params
{
	bool                                               bBlend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionTurnToDefault
struct ABP_PF_NPC_Stand_AIController_C_ActionTurnToDefault_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.UpdateAction
struct ABP_PF_NPC_Stand_AIController_C_UpdateAction_Params
{
	bool                                               bStartLogic;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionLookAt
struct ABP_PF_NPC_Stand_AIController_C_ActionLookAt_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_NPC_AIController_LookAtType>    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionLookAtCommand
struct ABP_PF_NPC_Stand_AIController_C_ActionLookAtCommand_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionTurnCommand
struct ABP_PF_NPC_Stand_AIController_C_ActionTurnCommand_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.PlayActionCommand
struct ABP_PF_NPC_Stand_AIController_C_PlayActionCommand_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.CharacterUnlock
struct ABP_PF_NPC_Stand_AIController_C_CharacterUnlock_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.CharacterLock
struct ABP_PF_NPC_Stand_AIController_C_CharacterLock_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.IsNeutral
struct ABP_PF_NPC_Stand_AIController_C_IsNeutral_Params
{
	bool                                               bNeutral;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.PlayAction
struct ABP_PF_NPC_Stand_AIController_C_PlayAction_Params
{
	struct FString                                     ActionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBlend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ActionTurn
struct ABP_PF_NPC_Stand_AIController_C_ActionTurn_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     ActionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.UserConstructionScript
struct ABP_PF_NPC_Stand_AIController_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ReceiveTick
struct ABP_PF_NPC_Stand_AIController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ReceiveBeginPlay
struct ABP_PF_NPC_Stand_AIController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.OnPossess
struct ABP_PF_NPC_Stand_AIController_C_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C.ExecuteUbergraph_BP_PF_NPC_Stand_AIController
struct ABP_PF_NPC_Stand_AIController_C_ExecuteUbergraph_BP_PF_NPC_Stand_AIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
