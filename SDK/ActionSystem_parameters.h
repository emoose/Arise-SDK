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

// Function ActionSystem.ASAnimationSet.GetStateMachine
struct UASAnimationSet_GetStateMachine_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UASStateMachine*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASAnimationSet.GetSequence
struct UASAnimationSet_GetSequence_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASAnimationSet.GetBlendSpace
struct UASAnimationSet_GetBlendSpace_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UBlendSpaceBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.SetDynamicSubMachine
struct UASAnimInstance_SetDynamicSubMachine_Params
{
	struct FString                                     AnimNodeName;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (ConstParm, Parm, ZeroConstructor)
	class UASStateMachine*                             StateMachineAsset;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.SetDynamicSequence
struct UASAnimInstance_SetDynamicSequence_Params
{
	struct FString                                     AnimNodeName;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (ConstParm, Parm, ZeroConstructor)
	class UAnimSequenceBase*                           SequenceAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.SendCommand
struct UASAnimInstance_SendCommand_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.ReceiveStateChange
struct UASAnimInstance_ReceiveStateChange_Params
{
	struct FString                                     PreviousStateName;                                        // (Parm, ZeroConstructor)
	struct FString                                     NextStateName;                                            // (Parm, ZeroConstructor)
};

// Function ActionSystem.ASAnimInstance.JumpMachineState
struct UASAnimInstance_JumpMachineState_Params
{
	struct FString                                     MachinName;                                               // (Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
};

// Function ActionSystem.ASAnimInstance.IsHitShift
struct UASAnimInstance_IsHitShift_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.HasTag
struct UASAnimInstance_HasTag_Params
{
	struct FName                                       Tag;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASAnimInstance.AnimNotify_StateChange
struct UASAnimInstance_AnimNotify_StateChange_Params
{
	class UASAnimNotify_StateChange*                   Notify;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterBase.SendCommand
struct AASCharacterBase_SendCommand_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterBase.SendAnimCommand
struct AASCharacterBase_SendAnimCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterBase.ReceiveStateChange
struct AASCharacterBase_ReceiveStateChange_Params
{
	struct FString                                     PreviousStateName;                                        // (Parm, ZeroConstructor)
	struct FString                                     NextStateName;                                            // (Parm, ZeroConstructor)
};

// Function ActionSystem.ASCharacterBase.OnRep_ReplicateState
struct AASCharacterBase_OnRep_ReplicateState_Params
{
};

// Function ActionSystem.ASCharacterBase.JumpMachineState
struct AASCharacterBase_JumpMachineState_Params
{
	struct FString                                     MachinName;                                               // (Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
};

// Function ActionSystem.ASCharacterBase.HasAnimTag
struct AASCharacterBase_HasAnimTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASCharacterBase.GetAnimTags
struct AASCharacterBase_GetAnimTags_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActionSystem.ASCharacter.IsSuperArmor
struct AASCharacter_IsSuperArmor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASCharacter.IsHitAttack
struct AASCharacter_IsHitAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASCharacterMovementComponent.SetImpulse
struct UASCharacterMovementComponent_SetImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	bool                                               bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterMovementComponent.SendCommand
struct UASCharacterMovementComponent_SendCommand_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand
struct UASCharacterMovementComponent_SendAnimCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCharacterMovementComponent.HasAnimTag
struct UASCharacterMovementComponent_HasAnimTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap
struct UASCollisionCapsuleComponent_OnAttackEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap
struct UASCollisionCapsuleComponent_OnAttackBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ActionSystem.ASCollisionComponent.OnAttackEndOverlap
struct UASCollisionComponent_OnAttackEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCollisionComponent.OnAttackBeginOverlap
struct UASCollisionComponent_OnAttackBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ActionSystem.ASCollisionGroupComponent.StopAttack
struct UASCollisionGroupComponent_StopAttack_Params
{
};

// Function ActionSystem.ASCollisionGroupComponent.StartAttack
struct UASCollisionGroupComponent_StartAttack_Params
{
	int                                                HitCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitInterval;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision
struct UASCollisionGroupComponent_SetActiveCollision_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap
struct UASCollisionGroupComponent_OnAttackEndOverlap_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap
struct UASCollisionGroupComponent_OnAttackBeginOverlap_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ActionSystem.ASCollisionInterface.OnAttackOverlapCallback
struct UASCollisionInterface_OnAttackOverlapCallback_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation
struct UASState_BlueprintBase_StopSlotAnimation_Params
{
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale
struct UASState_BlueprintBase_SetRootMotionScale_Params
{
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.SetPlayRate
struct UASState_BlueprintBase_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput
struct UASState_BlueprintBase_SetBlendSpaceInput_Params
{
	struct FVector                                     NewBlendInput;                                            // (Parm, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio
struct UASState_BlueprintBase_SetAnimTimeRatio_Params
{
	float                                              TimeRatio;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.SetAnimTime
struct UASState_BlueprintBase_SetAnimTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.ReceiveTick
struct UASState_BlueprintBase_ReceiveTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UASAnimationSet*                             AnimationSet;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.ReceiveFinishedTick
struct UASState_BlueprintBase_ReceiveFinishedTick_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay
struct UASState_BlueprintBase_ReceiveEndPlay_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay
struct UASState_BlueprintBase_ReceiveBeginPlay_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UASAnimationSet*                             AnimationSet;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation
struct UASState_BlueprintBase_PlaySlotAnimation_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.HasCommand
struct UASState_BlueprintBase_HasCommand_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysCanceledCommand;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.GetStateTags
struct UASState_BlueprintBase_GetStateTags_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActionSystem.ASState_BlueprintBase.GetStateName
struct UASState_BlueprintBase_GetStateName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength
struct UASState_BlueprintBase_GetAnimTimeLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASState_BlueprintBase.GetAnimTime
struct UASState_BlueprintBase_GetAnimTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter
struct UASTransition_BlueprintBase_ReceiveCanEnter_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.OutputLog
struct UASTransition_BlueprintBase_OutputLog_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd
struct UASTransition_BlueprintBase_IsPlayEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.IsInTransition
struct UASTransition_BlueprintBase_IsInTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.HasCommand
struct UASTransition_BlueprintBase_HasCommand_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime
struct UASTransition_BlueprintBase_GetElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength
struct UASTransition_BlueprintBase_GetAnimTimeLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime
struct UASTransition_BlueprintBase_GetAnimTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState
struct UASTransition_BlueprintBase_CheckCommandState_Params
{
	struct FName                                       Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimCommandState>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSystem.ASTransition_BlueprintBase.CheckCommand
struct UASTransition_BlueprintBase_CheckCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
