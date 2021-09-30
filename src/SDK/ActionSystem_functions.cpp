
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ActionSystem.ASAnimationSet.GetStateMachine
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UASStateMachine*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UASStateMachine* UASAnimationSet::GetStateMachine(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetStateMachine");

	UASAnimationSet_GetStateMachine_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASAnimationSet.GetSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UAnimSequenceBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequenceBase* UASAnimationSet::GetSequence(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetSequence");

	UASAnimationSet_GetSequence_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASAnimationSet.GetBlendSpace
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UBlendSpaceBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlendSpaceBase* UASAnimationSet::GetBlendSpace(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetBlendSpace");

	UASAnimationSet_GetBlendSpace_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.SetDynamicSubMachine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AnimNodeName                   (ConstParm, Parm, ZeroConstructor)
// struct FString                 StateName                      (ConstParm, Parm, ZeroConstructor)
// class UASStateMachine*         StateMachineAsset              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UASAnimInstance::SetDynamicSubMachine(const struct FString& AnimNodeName, const struct FString& StateName, class UASStateMachine* StateMachineAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicSubMachine");

	UASAnimInstance_SetDynamicSubMachine_Params params;
	params.AnimNodeName = AnimNodeName;
	params.StateName = StateName;
	params.StateMachineAsset = StateMachineAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASAnimInstance.SetDynamicSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AnimNodeName                   (ConstParm, Parm, ZeroConstructor)
// struct FString                 StateName                      (ConstParm, Parm, ZeroConstructor)
// class UAnimSequenceBase*       SequenceAsset                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UASAnimInstance::SetDynamicSequence(const struct FString& AnimNodeName, const struct FString& StateName, class UAnimSequenceBase* SequenceAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicSequence");

	UASAnimInstance_SetDynamicSequence_Params params;
	params.AnimNodeName = AnimNodeName;
	params.StateName = StateName;
	params.SequenceAsset = SequenceAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASAnimInstance.SendCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UASAnimInstance::SendCommand(const struct FName& Command, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SendCommand");

	UASAnimInstance_SendCommand_Params params;
	params.Command = Command;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASAnimInstance.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PreviousStateName              (Parm, ZeroConstructor)
// struct FString                 NextStateName                  (Parm, ZeroConstructor)

void UASAnimInstance::ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.ReceiveStateChange");

	UASAnimInstance_ReceiveStateChange_Params params;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASAnimInstance.JumpMachineState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MachinName                     (Parm, ZeroConstructor)
// struct FString                 StateName                      (Parm, ZeroConstructor)

void UASAnimInstance::JumpMachineState(const struct FString& MachinName, const struct FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.JumpMachineState");

	UASAnimInstance_JumpMachineState_Params params;
	params.MachinName = MachinName;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASAnimInstance.IsHitShift
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASAnimInstance::IsHitShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.IsHitShift");

	UASAnimInstance_IsHitShift_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.HasTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASAnimInstance::HasTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.HasTag");

	UASAnimInstance_HasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.AnimNotify_StateChange
// (Native, Public)
// Parameters:
// class UASAnimNotify_StateChange* Notify                         (Parm, ZeroConstructor, IsPlainOldData)

void UASAnimInstance::AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.AnimNotify_StateChange");

	UASAnimInstance_AnimNotify_StateChange_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.SendCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AASCharacterBase::SendCommand(const struct FName& Command, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.SendCommand");

	AASCharacterBase_SendCommand_Params params;
	params.Command = Command;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.SendAnimCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AASCharacterBase::SendAnimCommand(const struct FString& Command, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.SendAnimCommand");

	AASCharacterBase_SendAnimCommand_Params params;
	params.Command = Command;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PreviousStateName              (Parm, ZeroConstructor)
// struct FString                 NextStateName                  (Parm, ZeroConstructor)

void AASCharacterBase::ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.ReceiveStateChange");

	AASCharacterBase_ReceiveStateChange_Params params;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.OnRep_ReplicateState
// (Final, Native, Public)

void AASCharacterBase::OnRep_ReplicateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.OnRep_ReplicateState");

	AASCharacterBase_OnRep_ReplicateState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.JumpMachineState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MachinName                     (Parm, ZeroConstructor)
// struct FString                 StateName                      (Parm, ZeroConstructor)

void AASCharacterBase::JumpMachineState(const struct FString& MachinName, const struct FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.JumpMachineState");

	AASCharacterBase_JumpMachineState_Params params;
	params.MachinName = MachinName;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterBase.HasAnimTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AASCharacterBase::HasAnimTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.HasAnimTag");

	AASCharacterBase_HasAnimTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASCharacterBase.GetAnimTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AASCharacterBase::GetAnimTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.GetAnimTags");

	AASCharacterBase_GetAnimTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASCharacter.IsSuperArmor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AASCharacter::IsSuperArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacter.IsSuperArmor");

	AASCharacter_IsSuperArmor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASCharacter.IsHitAttack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AASCharacter::IsHitAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacter.IsHitAttack");

	AASCharacter_IsHitAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASCharacterMovementComponent.SetImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// bool                           bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UASCharacterMovementComponent::SetImpulse(const struct FVector& Impulse, bool bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SetImpulse");

	UASCharacterMovementComponent_SetImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterMovementComponent.SendCommand
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UASCharacterMovementComponent::SendCommand(const struct FName& Command, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SendCommand");

	UASCharacterMovementComponent_SendCommand_Params params;
	params.Command = Command;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UASCharacterMovementComponent::SendAnimCommand(const struct FString& Command, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand");

	UASCharacterMovementComponent_SendAnimCommand_Params params;
	params.Command = Command;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCharacterMovementComponent.HasAnimTag
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASCharacterMovementComponent::HasAnimTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.HasAnimTag");

	UASCharacterMovementComponent_HasAnimTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UASCollisionCapsuleComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap");

	UASCollisionCapsuleComponent_OnAttackEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UASCollisionCapsuleComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap");

	UASCollisionCapsuleComponent_OnAttackBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionComponent.OnAttackEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UASCollisionComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionComponent.OnAttackEndOverlap");

	UASCollisionComponent_OnAttackEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionComponent.OnAttackBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UASCollisionComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionComponent.OnAttackBeginOverlap");

	UASCollisionComponent_OnAttackBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionGroupComponent.StopAttack
// (Final, Native, Public, BlueprintCallable)

void UASCollisionGroupComponent::StopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.StopAttack");

	UASCollisionGroupComponent_StopAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionGroupComponent.StartAttack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            HitCount                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitInterval                    (Parm, ZeroConstructor, IsPlainOldData)

void UASCollisionGroupComponent::StartAttack(int HitCount, float HitInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.StartAttack");

	UASCollisionGroupComponent_StartAttack_Params params;
	params.HitCount = HitCount;
	params.HitInterval = HitInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UASCollisionGroupComponent::SetActiveCollision(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision");

	UASCollisionGroupComponent_SetActiveCollision_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UASCollisionGroupComponent::OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap");

	UASCollisionGroupComponent_OnAttackEndOverlap_Params params;
	params.MyComp = MyComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UASCollisionGroupComponent::OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap");

	UASCollisionGroupComponent_OnAttackBeginOverlap_Params params;
	params.MyComp = MyComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASCollisionInterface.OnAttackOverlapCallback
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASCollisionInterface::OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionInterface.OnAttackOverlapCallback");

	UASCollisionInterface_OnAttackOverlapCallback_Params params;
	params.MyComp = MyComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::StopSlotAnimation(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation");

	UASState_BlueprintBase_StopSlotAnimation_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::SetRootMotionScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale");

	UASState_BlueprintBase_SetRootMotionScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.SetPlayRate
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetPlayRate");

	UASState_BlueprintBase_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput
// (Final, Native, Protected, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 NewBlendInput                  (Parm, IsPlainOldData)

void UASState_BlueprintBase::SetBlendSpaceInput(const struct FVector& NewBlendInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput");

	UASState_BlueprintBase_SetBlendSpaceInput_Params params;
	params.NewBlendInput = NewBlendInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                          TimeRatio                      (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::SetAnimTimeRatio(float TimeRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio");

	UASState_BlueprintBase_SetAnimTimeRatio_Params params;
	params.TimeRatio = TimeRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.SetAnimTime
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::SetAnimTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetAnimTime");

	UASState_BlueprintBase_SetAnimTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UASAnimationSet*         AnimationSet                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveTick");

	UASState_BlueprintBase_ReceiveTick_Params params;
	params.DeltaTime = DeltaTime;
	params.AnimInstance = AnimInstance;
	params.AnimationSet = AnimationSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveFinishedTick
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::ReceiveFinishedTick(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveFinishedTick");

	UASState_BlueprintBase_ReceiveFinishedTick_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::ReceiveEndPlay(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay");

	UASState_BlueprintBase_ReceiveEndPlay_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UASAnimationSet*         AnimationSet                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay");

	UASState_BlueprintBase_ReceiveBeginPlay_Params params;
	params.AnimInstance = AnimInstance;
	params.AnimationSet = AnimationSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// class UAnimSequenceBase*       AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void UASState_BlueprintBase::PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation");

	UASState_BlueprintBase_PlaySlotAnimation_Params params;
	params.AnimSequence = AnimSequence;
	params.BlendTime = BlendTime;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASState_BlueprintBase.HasCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlwaysCanceledCommand         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnce                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASState_BlueprintBase::HasCommand(const struct FName& Command, bool bAlwaysCanceledCommand, bool bOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.HasCommand");

	UASState_BlueprintBase_HasCommand_Params params;
	params.Command = Command;
	params.bAlwaysCanceledCommand = bAlwaysCanceledCommand;
	params.bOnce = bOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetStateTags
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UASState_BlueprintBase::GetStateTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetStateTags");

	UASState_BlueprintBase_GetStateTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetStateName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UASState_BlueprintBase::GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetStateName");

	UASState_BlueprintBase_GetStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UASState_BlueprintBase::GetAnimTimeLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength");

	UASState_BlueprintBase_GetAnimTimeLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetAnimTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UASState_BlueprintBase::GetAnimTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetAnimTime");

	UASState_BlueprintBase_GetAnimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASTransition_BlueprintBase::ReceiveCanEnter(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter");

	UASTransition_BlueprintBase_ReceiveCanEnter_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.OutputLog
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UASTransition_BlueprintBase::OutputLog(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.OutputLog");

	UASTransition_BlueprintBase_OutputLog_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASTransition_BlueprintBase::IsPlayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd");

	UASTransition_BlueprintBase_IsPlayEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.IsInTransition
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASTransition_BlueprintBase::IsInTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.IsInTransition");

	UASTransition_BlueprintBase_IsInTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.HasCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnce                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASTransition_BlueprintBase::HasCommand(const struct FName& Command, bool bOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.HasCommand");

	UASTransition_BlueprintBase_HasCommand_Params params;
	params.Command = Command;
	params.bOnce = bOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UASTransition_BlueprintBase::GetElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime");

	UASTransition_BlueprintBase_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UASTransition_BlueprintBase::GetAnimTimeLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength");

	UASTransition_BlueprintBase_GetAnimTimeLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UASTransition_BlueprintBase::GetAnimTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime");

	UASTransition_BlueprintBase_GetAnimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Command                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnce                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAnimCommandState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAnimCommandState> UASTransition_BlueprintBase::CheckCommandState(const struct FName& Command, bool bOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState");

	UASTransition_BlueprintBase_CheckCommandState_Params params;
	params.Command = Command;
	params.bOnce = bOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.CheckCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)
// bool                           bOnce                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UASTransition_BlueprintBase::CheckCommand(const struct FString& Command, bool bOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.CheckCommand");

	UASTransition_BlueprintBase_CheckCommand_Params params;
	params.Command = Command;
	params.bOnce = bOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
