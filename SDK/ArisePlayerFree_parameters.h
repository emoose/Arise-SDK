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

// Function ArisePlayerFree.PFActionStateBlueprintBase.K2_Tick
struct UPFActionStateBlueprintBase_K2_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPFActionStateTickResult                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ArisePlayerFree.PFActionStateBlueprintBase.K2_GetOwnerComponent
struct UPFActionStateBlueprintBase_K2_GetOwnerComponent_Params
{
	class UPFActorComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateBlueprintBase.K2_GetOwnerActor
struct UPFActionStateBlueprintBase_K2_GetOwnerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateBlueprintBase.K2_End
struct UPFActionStateBlueprintBase_K2_End_Params
{
	struct FName                                       NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateBlueprintBase.K2_Begin
struct UPFActionStateBlueprintBase_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateID.K2_GetActionStateID_Neutral
struct UPFActionStateID_K2_GetActionStateID_Neutral_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateID.K2_GetActionStateID_Jump
struct UPFActionStateID_K2_GetActionStateID_Jump_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateID.K2_GetActionStateID_Gallop
struct UPFActionStateID_K2_GetActionStateID_Gallop_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActionStateID.K2_GetActionStateID_Floating
struct UPFActionStateID_K2_GetActionStateID_Floating_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ArisePlayerFree.PFActorComponent.OnExecuteInteractEvent__DelegateSignature
struct UPFActorComponent_OnExecuteInteractEvent__DelegateSignature_Params
{
	class AActor*                                      InSender;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InReceiver;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetUpperBodyBlendEnable
struct UPFActorComponent_K2_SetUpperBodyBlendEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractSymbolInformation_AsyncLoad
struct UPFActorComponent_K2_SetInteractSymbolInformation_AsyncLoad_Params
{
	struct FSoftClassPath                              SymbolInfo;                                               // (Parm)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverWidth
struct UPFActorComponent_K2_SetInteractReceiverWidth_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverShape
struct UPFActorComponent_K2_SetInteractReceiverShape_Params
{
	EPFActorInteractReceiverShape                      InNewShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverRange
struct UPFActorComponent_K2_SetInteractReceiverRange_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverInformation_AsyncLoad
struct UPFActorComponent_K2_SetInteractReceiverInformation_AsyncLoad_Params
{
	struct FSoftClassPath                              ActInfo;                                                  // (Parm)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverHeightOffset
struct UPFActorComponent_K2_SetInteractReceiverHeightOffset_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverHeight
struct UPFActorComponent_K2_SetInteractReceiverHeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverEvent_AsyncLoad
struct UPFActorComponent_K2_SetInteractReceiverEvent_AsyncLoad_Params
{
	struct FSoftClassPath                              EventProcess;                                             // (Parm)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverEnable
struct UPFActorComponent_K2_SetInteractReceiverEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverDepth
struct UPFActorComponent_K2_SetInteractReceiverDepth_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractReceiverAngle
struct UPFActorComponent_K2_SetInteractReceiverAngle_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractLocationOffset
struct UPFActorComponent_K2_SetInteractLocationOffset_Params
{
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractLimitEnable
struct UPFActorComponent_K2_SetInteractLimitEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractIconSocketName
struct UPFActorComponent_K2_SetInteractIconSocketName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractIconOffset
struct UPFActorComponent_K2_SetInteractIconOffset_Params
{
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractIconForceDisplay
struct UPFActorComponent_K2_SetInteractIconForceDisplay_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetInteractEnable
struct UPFActorComponent_K2_SetInteractEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetForceApplyMovementTemp
struct UPFActorComponent_K2_SetForceApplyMovementTemp_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetForceApplyMovement
struct UPFActorComponent_K2_SetForceApplyMovement_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetCurrentMovementState
struct UPFActorComponent_K2_SetCurrentMovementState_Params
{
	TEnumAsByte<EPFActorMovementState>                 InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetControlEnableTemp
struct UPFActorComponent_K2_SetControlEnableTemp_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SetControlEnable
struct UPFActorComponent_K2_SetControlEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_SendAnimNotifyCommnad
struct UPFActorComponent_K2_SendAnimNotifyCommnad_Params
{
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsReceiveAnimNotifyCommnad_CheckOnce
struct UPFActorComponent_K2_IsReceiveAnimNotifyCommnad_CheckOnce_Params
{
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInOnce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsReceiveAnimNotifyCommnad
struct UPFActorComponent_K2_IsReceiveAnimNotifyCommnad_Params
{
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsMove
struct UPFActorComponent_K2_IsMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsInputMovement
struct UPFActorComponent_K2_IsInputMovement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsInputJump
struct UPFActorComponent_K2_IsInputJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsInputCharacterAction
struct UPFActorComponent_K2_IsInputCharacterAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_IsControlEnable
struct UPFActorComponent_K2_IsControlEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetUpperBodyBlendWeight
struct UPFActorComponent_K2_GetUpperBodyBlendWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetTurnBlendSpaceValue
struct UPFActorComponent_K2_GetTurnBlendSpaceValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetMovementBlendSpaceValue
struct UPFActorComponent_K2_GetMovementBlendSpaceValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetLastMoveVector
struct UPFActorComponent_K2_GetLastMoveVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetInteractLocation
struct UPFActorComponent_K2_GetInteractLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetInputMovementVector
struct UPFActorComponent_K2_GetInputMovementVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetCurrentMovementState
struct UPFActorComponent_K2_GetCurrentMovementState_Params
{
	TEnumAsByte<EPFActorMovementState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetCurrentJumpZVelocity
struct UPFActorComponent_K2_GetCurrentJumpZVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_GetActionStateID
struct UPFActorComponent_K2_GetActionStateID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_ExecuteInteractEvent
struct UPFActorComponent_K2_ExecuteInteractEvent_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APFEventProcessInteraction*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_EndForceApplyMovementTemp
struct UPFActorComponent_K2_EndForceApplyMovementTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_EndControlDisableTemp
struct UPFActorComponent_K2_EndControlDisableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_ChangeCollisionHalfHeight
struct UPFActorComponent_K2_ChangeCollisionHalfHeight_Params
{
	float                                              NewHalfHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_ChangeActionState
struct UPFActorComponent_K2_ChangeActionState_Params
{
	struct FName                                       InStateID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_CanInteract
struct UPFActorComponent_K2_CanInteract_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_BeginForceApplyMovementTemp
struct UPFActorComponent_K2_BeginForceApplyMovementTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_BeginControlDisableTemp
struct UPFActorComponent_K2_BeginControlDisableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_ApplyInputMovement
struct UPFActorComponent_K2_ApplyInputMovement_Params
{
};

// Function ArisePlayerFree.PFActorComponent.K2_ApplyInputJump
struct UPFActorComponent_K2_ApplyInputJump_Params
{
	float                                              InJumpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_ApplyInputCamera
struct UPFActorComponent_K2_ApplyInputCamera_Params
{
};

// Function ArisePlayerFree.PFActorComponent.K2_AddActionState2
struct UPFActorComponent_K2_AddActionState2_Params
{
	class UObject*                                     InDT;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.K2_AddActionState
struct UPFActorComponent_K2_AddActionState_Params
{
	struct FName                                       InStateID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InStateClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFActorComponent.GoBackTitle
struct UPFActorComponent_GoBackTitle_Params
{
};

// Function ArisePlayerFree.PFActorEventMetaScript.ReceiveEndScript
struct UPFActorEventMetaScript_ReceiveEndScript_Params
{
};

// Function ArisePlayerFree.PFActorEventMetaScript.ReceiveBeginScript
struct UPFActorEventMetaScript_ReceiveBeginScript_Params
{
};

// Function ArisePlayerFree.PFActorEventMetaScript.OnEndScript
struct UPFActorEventMetaScript_OnEndScript_Params
{
};

// Function ArisePlayerFree.PFActorEventMetaScript.OnBeginScript
struct UPFActorEventMetaScript_OnBeginScript_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetUseGroudCollision
struct APFCharacterBase_K2_SetUseGroudCollision_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetGravityPower
struct APFCharacterBase_K2_SetGravityPower_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetEnableSimulateUpperParts
struct APFCharacterBase_K2_SetEnableSimulateUpperParts_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetEnableSimulateLowerParts
struct APFCharacterBase_K2_SetEnableSimulateLowerParts_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetEnableSimulateHairParts
struct APFCharacterBase_K2_SetEnableSimulateHairParts_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetEnableSimulateExtraParts
struct APFCharacterBase_K2_SetEnableSimulateExtraParts_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetDynamicsWeight
struct APFCharacterBase_K2_SetDynamicsWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetDampingPower
struct APFCharacterBase_K2_SetDampingPower_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_SetClothBlendWeight
struct APFCharacterBase_K2_SetClothBlendWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetUseGroudCollision
struct APFCharacterBase_K2_ResetUseGroudCollision_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetGravityPower
struct APFCharacterBase_K2_ResetGravityPower_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetEnableSimulateUpperParts
struct APFCharacterBase_K2_ResetEnableSimulateUpperParts_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetEnableSimulateLowerParts
struct APFCharacterBase_K2_ResetEnableSimulateLowerParts_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetEnableSimulateHairParts
struct APFCharacterBase_K2_ResetEnableSimulateHairParts_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetEnableSimulateExtraParts
struct APFCharacterBase_K2_ResetEnableSimulateExtraParts_Params
{
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetDynamicsWeight
struct APFCharacterBase_K2_ResetDynamicsWeight_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetDampingPower
struct APFCharacterBase_K2_ResetDampingPower_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterBase.K2_ResetClothBlendWeight
struct APFCharacterBase_K2_ResetClothBlendWeight_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterFadeInterface.FadeOut
struct UPFCharacterFadeInterface_FadeOut_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFCharacterFadeInterface.FadeIn
struct UPFCharacterFadeInterface_FadeIn_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFEventProcessFieldAction.K2_Execute
struct APFEventProcessFieldAction_K2_Execute_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFEventProcessInteraction.K2_IsExecuteEvent
struct APFEventProcessInteraction_K2_IsExecuteEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFEventProcessInteraction.K2_ExecuteGoBackTitleEvent
struct APFEventProcessInteraction_K2_ExecuteGoBackTitleEvent_Params
{
};

// Function ArisePlayerFree.PFEventProcessInteraction.K2_Execute
struct APFEventProcessInteraction_K2_Execute_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFEventProcessSimpleBase.ReceiveExecuteProcess
struct APFEventProcessSimpleBase_ReceiveExecuteProcess_Params
{
};

// Function ArisePlayerFree.PFEventProcessSimpleBase.K2_Execute
struct APFEventProcessSimpleBase_K2_Execute_Params
{
};

// Function ArisePlayerFree.PFFunctionLibrary.UpdateInputDevicePressedState
struct UPFFunctionLibrary_UpdateInputDevicePressedState_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInGamepad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInKeyboard;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInMouseButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.UnregisterSpawnedActor
struct UPFFunctionLibrary_UnregisterSpawnedActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.StoreSpawnedActors
struct UPFFunctionLibrary_StoreSpawnedActors_Params
{
};

// Function ArisePlayerFree.PFFunctionLibrary.SetViewTargetWithBlend
struct UPFFunctionLibrary_SetViewTargetWithBlend_Params
{
	class AActor*                                      ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetViewTargetFromPlayer
struct UPFFunctionLibrary_SetViewTargetFromPlayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetPlayerActor
struct UPFFunctionLibrary_SetPlayerActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetOwlActorsVisibility
struct UPFFunctionLibrary_SetOwlActorsVisibility_Params
{
	bool                                               bNewVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetInteractReceiverEnable
struct UPFFunctionLibrary_SetInteractReceiverEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetInteractInfoVisible
struct UPFFunctionLibrary_SetInteractInfoVisible_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetInteractEnable
struct UPFFunctionLibrary_SetInteractEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetCullingPause
struct UPFFunctionLibrary_SetCullingPause_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetControlEnable
struct UPFFunctionLibrary_SetControlEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetActorVisibilityAll
struct UPFFunctionLibrary_SetActorVisibilityAll_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SetActorPauseAll
struct UPFFunctionLibrary_SetActorPauseAll_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.SendAnimNotifyCommnad
struct UPFFunctionLibrary_SendAnimNotifyCommnad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.RestoreSpawnedActors
struct UPFFunctionLibrary_RestoreSpawnedActors_Params
{
};

// Function ArisePlayerFree.PFFunctionLibrary.ResetPlayerCameraAngle
struct UPFFunctionLibrary_ResetPlayerCameraAngle_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.RemoveOwlPoint
struct UPFFunctionLibrary_RemoveOwlPoint_Params
{
	struct FString                                     InPointName;                                              // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFFunctionLibrary.RemoveOwlActor
struct UPFFunctionLibrary_RemoveOwlActor_Params
{
	struct FString                                     InPointName;                                              // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFFunctionLibrary.RemoveGimmickObject
struct UPFFunctionLibrary_RemoveGimmickObject_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFFunctionLibrary.RemoveActorMap
struct UPFFunctionLibrary_RemoveActorMap_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFFunctionLibrary.RegisterSpawnedActor
struct UPFFunctionLibrary_RegisterSpawnedActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsToggleInputDash
struct UPFFunctionLibrary_IsToggleInputDash_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsReceiveAnimNotifyCommnad_CheckOnce
struct UPFFunctionLibrary_IsReceiveAnimNotifyCommnad_CheckOnce_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInOnce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsReceiveAnimNotifyCommnad
struct UPFFunctionLibrary_IsReceiveAnimNotifyCommnad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCommand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInteractReceiverEnable
struct UPFFunctionLibrary_IsInteractReceiverEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInteractForbade
struct UPFFunctionLibrary_IsInteractForbade_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInputMovementForward
struct UPFFunctionLibrary_IsInputMovementForward_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInputMovementBackward
struct UPFFunctionLibrary_IsInputMovementBackward_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInputInteraction_Hold
struct UPFFunctionLibrary_IsInputInteraction_Hold_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsInputDash
struct UPFFunctionLibrary_IsInputDash_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.IsControlEnable
struct UPFFunctionLibrary_IsControlEnable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputToggleWalk
struct UPFFunctionLibrary_InputToggleWalk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputToggleDash
struct UPFFunctionLibrary_InputToggleDash_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputResetPlayerCameraAngle
struct UPFFunctionLibrary_InputResetPlayerCameraAngle_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputMovement
struct UPFFunctionLibrary_InputMovement_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputJump
struct UPFFunctionLibrary_InputJump_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrigger;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputInteraction
struct UPFFunctionLibrary_InputInteraction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrigger;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputGallop
struct UPFFunctionLibrary_InputGallop_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputDash
struct UPFFunctionLibrary_InputDash_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputCharacterAction
struct UPFFunctionLibrary_InputCharacterAction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputChangeCameraDistance
struct UPFFunctionLibrary_InputChangeCameraDistance_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.InputCameraRotation
struct UPFFunctionLibrary_InputCameraRotation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InputRotation;                                            // (Parm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetSplineNumberOfSplinePointAtInputKey
struct UPFFunctionLibrary_GetSplineNumberOfSplinePointAtInputKey_Params
{
	class USplineComponent*                            Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InputKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetSplineDistanceAlongSplineAtInputKey
struct UPFFunctionLibrary_GetSplineDistanceAlongSplineAtInputKey_Params
{
	class USplineComponent*                            Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InputKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetPlayerViewCamera
struct UPFFunctionLibrary_GetPlayerViewCamera_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APFPlayerCamera*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetPlayerActor
struct UPFFunctionLibrary_GetPlayerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetPFActorComponent
struct UPFFunctionLibrary_GetPFActorComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPFActorComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.GetGimmickObject
struct UPFFunctionLibrary_GetGimmickObject_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.FindOwlPoint
struct UPFFunctionLibrary_FindOwlPoint_Params
{
	struct FString                                     InPointName;                                              // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.FindActorMap
struct UPFFunctionLibrary_FindActorMap_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.ChangeActionState
struct UPFFunctionLibrary_ChangeActionState_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InActionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddOwlPoint
struct UPFFunctionLibrary_AddOwlPoint_Params
{
	struct FString                                     InPointName;                                              // (Parm, ZeroConstructor)
	class AActor*                                      InPointActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddOwlActor
struct UPFFunctionLibrary_AddOwlActor_Params
{
	struct FString                                     InPointName;                                              // (Parm, ZeroConstructor)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddGimmickObject
struct UPFFunctionLibrary_AddGimmickObject_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddFieldActionCollisionCylinder
struct UPFFunctionLibrary_AddFieldActionCollisionCylinder_Params
{
	class AActor*                                      InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InCylinderCenter;                                         // (Parm, IsPlainOldData)
	float                                              InCylinderRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCylinderHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddFieldActionCollisionBox
struct UPFFunctionLibrary_AddFieldActionCollisionBox_Params
{
	class AActor*                                      InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InBoxCenter;                                              // (Parm, IsPlainOldData)
	float                                              InBoxYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InBoxSize;                                                // (Parm, IsPlainOldData)
};

// Function ArisePlayerFree.PFFunctionLibrary.AddActorMap
struct UPFFunctionLibrary_AddActorMap_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.MapGimmickInterface.SetVisible
struct UMapGimmickInterface_SetVisible_Params
{
	bool                                               bVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.MapGimmickInterface.SetTick
struct UMapGimmickInterface_SetTick_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.MapGimmickInterface.SetCollision
struct UMapGimmickInterface_SetCollision_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.UnregisterAll
struct APFGimmickManager_UnregisterAll_Params
{
};

// Function ArisePlayerFree.PFGimmickManager.Unregister
struct APFGimmickManager_Unregister_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.SetVisible
struct APFGimmickManager_SetVisible_Params
{
	bool                                               bVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.SetTick
struct APFGimmickManager_SetTick_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.SetCollision
struct APFGimmickManager_SetCollision_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.RegisterMapOrderInfo
struct APFGimmickManager_RegisterMapOrderInfo_Params
{
	struct FString                                     actorId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InCurrentMapName;                                         // (Parm, ZeroConstructor)
	struct FString                                     InLoadMapName;                                            // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFGimmickManager.Register
struct APFGimmickManager_Register_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFGimmickManager.GetExcludeLoadMapLevelNames
struct APFGimmickManager_GetExcludeLoadMapLevelNames_Params
{
	struct FString                                     actorId;                                                  // (Parm, ZeroConstructor)
	TArray<struct FName>                               Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ArisePlayerFree.PFGimmickManager.GetExcludeCurrentMapLevelNames
struct APFGimmickManager_GetExcludeCurrentMapLevelNames_Params
{
	struct FString                                     actorId;                                                  // (Parm, ZeroConstructor)
	TArray<struct FName>                               Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ArisePlayerFree.PFGimmickManager.ClearLevelStreamInfo
struct APFGimmickManager_ClearLevelStreamInfo_Params
{
};

// Function ArisePlayerFree.PFGimmickManager.BPE_UnloadLevel
struct APFGimmickManager_BPE_UnloadLevel_Params
{
	struct FString                                     actorId;                                                  // (Parm, ZeroConstructor)
};

// Function ArisePlayerFree.PFInteractCondition_BlueprintBase.K2_CanEnter
struct UPFInteractCondition_BlueprintBase_K2_CanEnter_Params
{
	class AActor*                                      InReceiveActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFInteractInfo.K2_ShowInformation
struct APFInteractInfo_K2_ShowInformation_Params
{
};

// Function ArisePlayerFree.PFInteractInfo.K2_ShowActInformation
struct APFInteractInfo_K2_ShowActInformation_Params
{
};

// Function ArisePlayerFree.PFInteractInfo.K2_SetActInformationLabel
struct APFInteractInfo_K2_SetActInformationLabel_Params
{
	struct FName                                       Label;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFInteractInfo.K2_HideInformationForce
struct APFInteractInfo_K2_HideInformationForce_Params
{
};

// Function ArisePlayerFree.PFInteractInfo.K2_HideInformation
struct APFInteractInfo_K2_HideInformation_Params
{
};

// Function ArisePlayerFree.PFInteractInfo.K2_HideActInformation
struct APFInteractInfo_K2_HideActInformation_Params
{
};

// Function ArisePlayerFree.PFInteractInfo.K2_GetTargetComponent
struct APFInteractInfo_K2_GetTargetComponent_Params
{
	class UPFActorComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFInteractInfo.K2_GetTargetActor
struct APFInteractInfo_K2_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFInteractInfo.K2_GetOwnerComponent
struct APFInteractInfo_K2_GetOwnerComponent_Params
{
	class UPFActorComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFInteractInfo.K2_GetOwnerActor
struct APFInteractInfo_K2_GetOwnerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFLookAtComponent.ResetImmediateLookAt
struct UPFLookAtComponent_ResetImmediateLookAt_Params
{
};

// Function ArisePlayerFree.PFOwlPointInterface.GetSpawnedActor
struct UPFOwlPointInterface_GetSpawnedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlPointInterface.GetPointLocation
struct UPFOwlPointInterface_GetPointLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlPointInterface.GetCameraInteractDistance
struct UPFOwlPointInterface_GetCameraInteractDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlPointInterface.DiscoverOwlPoint
struct UPFOwlPointInterface_DiscoverOwlPoint_Params
{
};

// Function ArisePlayerFree.PFOwlSearcher.StartRotationAroundPlayer
struct APFOwlSearcher_StartRotationAroundPlayer_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.OnBuild
struct APFOwlSearcher_OnBuild_Params
{
};

// Function ArisePlayerFree.PFOwlSearcher.K2_GetCurrentSearchState
struct APFOwlSearcher_K2_GetCurrentSearchState_Params
{
	EPFOwlSearchState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.IsExistOwlPoint
struct APFOwlSearcher_IsExistOwlPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.IsCameraLookAtOwl
struct APFOwlSearcher_IsCameraLookAtOwl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.EndMapChangeAnimation
struct APFOwlSearcher_EndMapChangeAnimation_Params
{
};

// Function ArisePlayerFree.PFOwlSearcher.ChangeSearchState
struct APFOwlSearcher_ChangeSearchState_Params
{
	EPFOwlSearchState                                  InPrevState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EPFOwlSearchState                                  InNextState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.ChangeAvailable
struct APFOwlSearcher_ChangeAvailable_Params
{
	bool                                               bInAvailable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFOwlSearcher.BeginMapChangeAnimation
struct APFOwlSearcher_BeginMapChangeAnimation_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_UpdateInputDevicePressedState
struct UPFPCActorComponent_K2_UpdateInputDevicePressedState_Params
{
	bool                                               bInGamepad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInKeyboard;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInMouseButton;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_UnlockMoveBrakeMotion
struct UPFPCActorComponent_K2_UnlockMoveBrakeMotion_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SpawnWaterEffect2
struct UPFPCActorComponent_K2_SpawnWaterEffect2_Params
{
	class UParticleSystem*                             InEffect;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SpawnWaterEffect
struct UPFPCActorComponent_K2_SpawnWaterEffect_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetWallHitNotifyEnable
struct UPFPCActorComponent_K2_SetWallHitNotifyEnable_Params
{
	bool                                               bInValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetupLadderAction
struct UPFPCActorComponent_K2_SetupLadderAction_Params
{
	int                                                InBeginStepNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTotalStepNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InPhysMaterialName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetUpdateMovementBsValueEnable
struct UPFPCActorComponent_K2_SetUpdateMovementBsValueEnable_Params
{
	bool                                               bInNew;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUpdateTiltBsValueEnable;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetTransToIdleType
struct UPFPCActorComponent_K2_SetTransToIdleType_Params
{
	TEnumAsByte<EPFPCTransToIdle>                      InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetRestoreRotationSpeed
struct UPFPCActorComponent_K2_SetRestoreRotationSpeed_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetLadderStepNum
struct UPFPCActorComponent_K2_SetLadderStepNum_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetJumpEnableInControlDisableTemp
struct UPFPCActorComponent_K2_SetJumpEnableInControlDisableTemp_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetJumpEnableInControlDisable
struct UPFPCActorComponent_K2_SetJumpEnableInControlDisable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetInputUTurnEnbale
struct UPFPCActorComponent_K2_SetInputUTurnEnbale_Params
{
	bool                                               bNew;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkTurn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetInputDelayEnbale
struct UPFPCActorComponent_K2_SetInputDelayEnbale_Params
{
	bool                                               bNew;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetIKEnable
struct UPFPCActorComponent_K2_SetIKEnable_Params
{
	TEnumAsByte<EPFPCEnableIKSlot>                     InSlot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetIdleFreeHotTrap
struct UPFPCActorComponent_K2_SetIdleFreeHotTrap_Params
{
	class AActor*                                      InTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetIdleFreeColdEnable
struct UPFPCActorComponent_K2_SetIdleFreeColdEnable_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetFallingLandingDamageEnable
struct UPFPCActorComponent_K2_SetFallingLandingDamageEnable_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetControlRotationEnableTemp
struct UPFPCActorComponent_K2_SetControlRotationEnableTemp_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetControlRotationEnable
struct UPFPCActorComponent_K2_SetControlRotationEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetBsValue_MovementRatio
struct UPFPCActorComponent_K2_SetBsValue_MovementRatio_Params
{
	float                                              InNew;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetBsValue_BodyTiltRatio
struct UPFPCActorComponent_K2_SetBsValue_BodyTiltRatio_Params
{
	float                                              InNew;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_SetApplyMaxSpeedEnable
struct UPFPCActorComponent_K2_SetApplyMaxSpeedEnable_Params
{
	TEnumAsByte<EPFActorMovementState>                 InApplyMovementState;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetToggleWalk
struct UPFPCActorComponent_K2_ResetToggleWalk_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetToggleDash
struct UPFPCActorComponent_K2_ResetToggleDash_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetRestoreRotationSpeed
struct UPFPCActorComponent_K2_ResetRestoreRotationSpeed_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetLadderCurrentStepNum
struct UPFPCActorComponent_K2_ResetLadderCurrentStepNum_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetIdleFreeColdTimer
struct UPFPCActorComponent_K2_ResetIdleFreeColdTimer_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ResetApplyMaxSpeedEnable
struct UPFPCActorComponent_K2_ResetApplyMaxSpeedEnable_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_RemoveIdleFreeHotTrap
struct UPFPCActorComponent_K2_RemoveIdleFreeHotTrap_Params
{
	class AActor*                                      InTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_RemoveIdleFreeHighPlaceTrap
struct UPFPCActorComponent_K2_RemoveIdleFreeHighPlaceTrap_Params
{
	class AActor*                                      InTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyEndSwim
struct UPFPCActorComponent_K2_NotifyEndSwim_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyEndLadder
struct UPFPCActorComponent_K2_NotifyEndLadder_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyEndFloating
struct UPFPCActorComponent_K2_NotifyEndFloating_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyBeginSwim
struct UPFPCActorComponent_K2_NotifyBeginSwim_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyBeginLadder
struct UPFPCActorComponent_K2_NotifyBeginLadder_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_NotifyBeginFloating
struct UPFPCActorComponent_K2_NotifyBeginFloating_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsWaterWalk
struct UPFPCActorComponent_K2_IsWaterWalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsWallHitNotifyEnable
struct UPFPCActorComponent_K2_IsWallHitNotifyEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsWalk
struct UPFPCActorComponent_K2_IsWalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsUpdateMovementBsValueEnable
struct UPFPCActorComponent_K2_IsUpdateMovementBsValueEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsSwimOut
struct UPFPCActorComponent_K2_IsSwimOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsSwimIn
struct UPFPCActorComponent_K2_IsSwimIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsSwim
struct UPFPCActorComponent_K2_IsSwim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsRunUTurn
struct UPFPCActorComponent_K2_IsRunUTurn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsRunStop
struct UPFPCActorComponent_K2_IsRunStop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsRun
struct UPFPCActorComponent_K2_IsRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsMovementWalkOnlyWaterDepth
struct UPFPCActorComponent_K2_IsMovementWalkOnlyWaterDepth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsMovementWalkOnly
struct UPFPCActorComponent_K2_IsMovementWalkOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsLockedMoveTransMotion
struct UPFPCActorComponent_K2_IsLockedMoveTransMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsLockedMoveBrakeMotion
struct UPFPCActorComponent_K2_IsLockedMoveBrakeMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsLadder
struct UPFPCActorComponent_K2_IsLadder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsJumpEnableInControlDisable
struct UPFPCActorComponent_K2_IsJumpEnableInControlDisable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsInWater
struct UPFPCActorComponent_K2_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsInputUTurn
struct UPFPCActorComponent_K2_IsInputUTurn_Params
{
	bool                                               bOutWalkTurn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsIdleFreeCold
struct UPFPCActorComponent_K2_IsIdleFreeCold_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsIdleFreeBattle
struct UPFPCActorComponent_K2_IsIdleFreeBattle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsFallingLandingRunFailed
struct UPFPCActorComponent_K2_IsFallingLandingRunFailed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsFallingLandingHigh
struct UPFPCActorComponent_K2_IsFallingLandingHigh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsFallingLandingDamage
struct UPFPCActorComponent_K2_IsFallingLandingDamage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsControlRotationEnable
struct UPFPCActorComponent_K2_IsControlRotationEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_IsBoredomTimerFinished
struct UPFPCActorComponent_K2_IsBoredomTimerFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_InputToggleWalk
struct UPFPCActorComponent_K2_InputToggleWalk_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_InputToggleDash
struct UPFPCActorComponent_K2_InputToggleDash_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetWaterSinkHeight
struct UPFPCActorComponent_K2_GetWaterSinkHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetWaterDepth
struct UPFPCActorComponent_K2_GetWaterDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.k2_GetVelocityMovementState
struct UPFPCActorComponent_k2_GetVelocityMovementState_Params
{
	TEnumAsByte<EPFActorMovementState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.k2_GetPrevMovementState
struct UPFPCActorComponent_k2_GetPrevMovementState_Params
{
	TEnumAsByte<EPFActorMovementState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetLastFloatingMovementVector
struct UPFPCActorComponent_K2_GetLastFloatingMovementVector_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetLadderTotalStepNum
struct UPFPCActorComponent_K2_GetLadderTotalStepNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetLadderStepNum
struct UPFPCActorComponent_K2_GetLadderStepNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetLadderCurrentStepNum
struct UPFPCActorComponent_K2_GetLadderCurrentStepNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetLadderBeginStepNum
struct UPFPCActorComponent_K2_GetLadderBeginStepNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetIdleFreeHotTraps
struct UPFPCActorComponent_K2_GetIdleFreeHotTraps_Params
{
	TArray<class AActor*>                              OutTraps;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetIdleFreeHotTrap
struct UPFPCActorComponent_K2_GetIdleFreeHotTrap_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetIdleFreeHighPlaceTraps
struct UPFPCActorComponent_K2_GetIdleFreeHighPlaceTraps_Params
{
	TArray<class AActor*>                              OutTrap;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetFloatingTime
struct UPFPCActorComponent_K2_GetFloatingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetFallingHeight
struct UPFPCActorComponent_K2_GetFallingHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetBsValue_MovementRatio
struct UPFPCActorComponent_K2_GetBsValue_MovementRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_GetBsValue_BodyTiltRatio
struct UPFPCActorComponent_K2_GetBsValue_BodyTiltRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ExitInteractableAction
struct UPFPCActorComponent_K2_ExitInteractableAction_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_ExecuteControlRotation
struct UPFPCActorComponent_K2_ExecuteControlRotation_Params
{
	struct FVector                                     InRotationVector;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InDeltaSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_EnterInteractableAction
struct UPFPCActorComponent_K2_EnterInteractableAction_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_EndJumpEnableInControlDisableTemp
struct UPFPCActorComponent_K2_EndJumpEnableInControlDisableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_EndControlRotationEnableTemp
struct UPFPCActorComponent_K2_EndControlRotationEnableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_EndControlDisableTemp_PC
struct UPFPCActorComponent_K2_EndControlDisableTemp_PC_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInForceApplyMovement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInJumpEnableInControlDisable;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInControlRotationEnable;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_EndBoredomTimer
struct UPFPCActorComponent_K2_EndBoredomTimer_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_CheckTransToIdleType
struct UPFPCActorComponent_K2_CheckTransToIdleType_Params
{
	TEnumAsByte<EPFPCTransToIdle>                      InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_CheckMotionBranch
struct UPFPCActorComponent_K2_CheckMotionBranch_Params
{
	struct FName                                       InLabel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_CalcWarpingValue
struct UPFPCActorComponent_K2_CalcWarpingValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_BurnArm
struct UPFPCActorComponent_K2_BurnArm_Params
{
	bool                                               bInLeftArm;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRightArm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_BeginJumpEnableInControlDisableTemp
struct UPFPCActorComponent_K2_BeginJumpEnableInControlDisableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_BeginControlRotationEnableTemp
struct UPFPCActorComponent_K2_BeginControlRotationEnableTemp_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_BeginControlDisableTemp_PC
struct UPFPCActorComponent_K2_BeginControlDisableTemp_PC_Params
{
	TEnumAsByte<EPFTempChangeParameterSource>          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInForceApplyMovement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInJumpEnableInControlDisable;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInControlRotationEnable;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInControlRotationUTurn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_BeginBoredomTimer
struct UPFPCActorComponent_K2_BeginBoredomTimer_Params
{
};

// Function ArisePlayerFree.PFPCActorComponent.K2_AddLadderCurrentStepNum
struct UPFPCActorComponent_K2_AddLadderCurrentStepNum_Params
{
	int                                                InNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_AddIdleFreeHotTrap
struct UPFPCActorComponent_K2_AddIdleFreeHotTrap_Params
{
	class AActor*                                      InTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCActorComponent.K2_AddIdleFreeHighPlaceTrap
struct UPFPCActorComponent_K2_AddIdleFreeHighPlaceTrap_Params
{
	class AActor*                                      InTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.SetMotionBlurParams
struct APFPlayerCamera_SetMotionBlurParams_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PerObjectSize;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.SetLookAtMode
struct APFPlayerCamera_SetLookAtMode_Params
{
	struct FVector                                     InLookAtLocation;                                         // (Parm, IsPlainOldData)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFPlayerCameraLookAtActionMode>       InActionMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InIsInteractEnable;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bInLocationEnable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIgnoreResetCamera;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.SetLadderMode
struct APFPlayerCamera_SetLadderMode_Params
{
	class AActor*                                      InLadderActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.RunLookAtEventProcess
struct APFPlayerCamera_RunLookAtEventProcess_Params
{
	class APFEventProcessSimpleBase*                   InEventProcess;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ResetLookAtModeWithChangeAngle
struct APFPlayerCamera_ResetLookAtModeWithChangeAngle_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InNextAngleX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InNextAngleZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCameraPresetIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ResetLookAtMode
struct APFPlayerCamera_ResetLookAtMode_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCameraPresetIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ResetLadderMode
struct APFPlayerCamera_ResetLadderMode_Params
{
};

// Function ArisePlayerFree.PFPlayerCamera.ResetCameraCurrentPreset
struct APFPlayerCamera_ResetCameraCurrentPreset_Params
{
	float                                              InPitchAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ResetCamera
struct APFPlayerCamera_ResetCamera_Params
{
	int                                                InCameraPreset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitchAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.OnApplyMotionBlurParams
struct APFPlayerCamera_OnApplyMotionBlurParams_Params
{
};

// Function ArisePlayerFree.PFPlayerCamera.K2_ChangeDistance
struct APFPlayerCamera_K2_ChangeDistance_Params
{
	float                                              InDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.IsLookAtModeSwitching
struct APFPlayerCamera_IsLookAtModeSwitching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.IsLookAtMode
struct APFPlayerCamera_IsLookAtMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ArisePlayerFree.PFPlayerCamera.IsLookAtInteractEnableDelegate__DelegateSignature
struct APFPlayerCamera_IsLookAtInteractEnableDelegate__DelegateSignature_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangePresetTime
struct APFPlayerCamera_ChangePresetTime_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangePreset
struct APFPlayerCamera_ChangePreset_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangePitchSlideParams
struct APFPlayerCamera_ChangePitchSlideParams_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangeLocationOffset
struct APFPlayerCamera_ChangeLocationOffset_Params
{
	float                                              InOffsetY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InOffsetZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangeFov
struct APFPlayerCamera_ChangeFov_Params
{
	float                                              InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCamera.ChangeDistanceDirect
struct APFPlayerCamera_ChangeDistanceDirect_Params
{
	int                                                distId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newDistace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCMovementComponent.SetGravityEnable
struct UPFPCMovementComponent_SetGravityEnable_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPCMovementComponent.IsGravityEnable
struct UPFPCMovementComponent_IsGravityEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.StopAutoMove
struct APFPlayerCharacter_StopAutoMove_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.OnResetCharacter
struct APFPlayerCharacter_OnResetCharacter_Params
{
	bool                                               bInIndoorMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.OnMoveBlockedBy
struct APFPlayerCharacter_OnMoveBlockedBy_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.OnHitCapsuleComponent
struct APFPlayerCharacter_OnHitCapsuleComponent_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  HIT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_UpdateFloor
struct APFPlayerCharacter_K2_UpdateFloor_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_SwitchSystemFreezeState
struct APFPlayerCharacter_K2_SwitchSystemFreezeState_Params
{
	bool                                               bInFreeze;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_SwitchFreezeState
struct APFPlayerCharacter_K2_SwitchFreezeState_Params
{
	bool                                               bInFreeze;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_SwitchDebugFreezeState
struct APFPlayerCharacter_K2_SwitchDebugFreezeState_Params
{
	bool                                               bInFreeze;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_SetDebugForceMovementState
struct APFPlayerCharacter_K2_SetDebugForceMovementState_Params
{
	TEnumAsByte<EPFActorMovementState>                 InMovementState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ResetWetState
struct APFPlayerCharacter_K2_ResetWetState_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ResetFacial
struct APFPlayerCharacter_K2_ResetFacial_Params
{
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ResetDebugForceMovementState
struct APFPlayerCharacter_K2_ResetDebugForceMovementState_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ResetCharacter_KeepIndoorMode
struct APFPlayerCharacter_K2_ResetCharacter_KeepIndoorMode_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ResetCharacter
struct APFPlayerCharacter_K2_ResetCharacter_Params
{
	bool                                               bInIndoorMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_Reconstruct
struct APFPlayerCharacter_K2_Reconstruct_Params
{
	EArisePartyID                                      InPartyID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlock;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_OnEndFlyMode
struct APFPlayerCharacter_K2_OnEndFlyMode_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_OnBeginFlyMode
struct APFPlayerCharacter_K2_OnBeginFlyMode_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_KillEmitEffects
struct APFPlayerCharacter_K2_KillEmitEffects_Params
{
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsTransitionEnable_NeutralTo
struct APFPlayerCharacter_K2_IsTransitionEnable_NeutralTo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsTransitionEnable_Floating
struct APFPlayerCharacter_K2_IsTransitionEnable_Floating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsMoving
struct APFPlayerCharacter_K2_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsLoadingModel
struct APFPlayerCharacter_K2_IsLoadingModel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsFreeze
struct APFPlayerCharacter_K2_IsFreeze_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsBuilded
struct APFPlayerCharacter_K2_IsBuilded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_IsAutoMoving
struct APFPlayerCharacter_K2_IsAutoMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_GetPartyID
struct APFPlayerCharacter_K2_GetPartyID_Params
{
	EArisePartyID                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_GetDebugFreezeState
struct APFPlayerCharacter_K2_GetDebugFreezeState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_EnableBurnArm
struct APFPlayerCharacter_K2_EnableBurnArm_Params
{
	bool                                               bInLeftArm;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRightArm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_ChangeFacial
struct APFPlayerCharacter_K2_ChangeFacial_Params
{
	struct FString                                     InPresetName;                                             // (Parm, ZeroConstructor)
	float                                              InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.K2_BurnArm
struct APFPlayerCharacter_K2_BurnArm_Params
{
	bool                                               bInLeftArm;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRightArm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.IsPlayVibration
struct APFPlayerCharacter_IsPlayVibration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.AutoMoveToDirection
struct APFPlayerCharacter_AutoMoveToDirection_Params
{
	struct FRotator                                    MoveDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              MoveTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPFPlayerCharacterAutoMoveType                     MoveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArisePlayerFree.PFPlayerCharacter.AutoMoveTo
struct APFPlayerCharacter_AutoMoveTo_Params
{
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             OnCompleted;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InTimeOut;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPFPlayerCharacterAutoMoveType                     MoveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
