
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

// Function AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.IsOverlapCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABtlMagicActor*          OwnerActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlMagicTask_NotifyCollisionBase::IsOverlapCollision(class ABtlMagicActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.IsOverlapCollision");

	UBtlMagicTask_NotifyCollisionBase_IsOverlapCollision_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.BtlNotifyCollisionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UBtlMagicTask_NotifyCollisionBase::BtlNotifyCollisionSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.BtlNotifyCollisionSignature__DelegateSignature");

	UBtlMagicTask_NotifyCollisionBase_BtlNotifyCollisionSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlMagicTask_CreateSkeletalMeshBase.GetMasterMeshComponent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UBtlMagicTask_CreateSkeletalMeshBase::GetMasterMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlMagicTask_CreateSkeletalMeshBase.GetMasterMeshComponent");

	UBtlMagicTask_CreateSkeletalMeshBase_GetMasterMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualTask_MaterialBase.OnRebuildingMaterials
// (Final, Native, Private)

void UBtlVisualTask_MaterialBase::OnRebuildingMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualTask_MaterialBase.OnRebuildingMaterials");

	UBtlVisualTask_MaterialBase_OnRebuildingMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AriseBattleInternal.BtlVisualTask_CommonParticle.VisualTaskParticleSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UParticleSystemComponent* NewPsCmp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlVisualTask_CommonParticle::VisualTaskParticleSignature__DelegateSignature(class UParticleSystemComponent* NewPsCmp)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseBattleInternal.BtlVisualTask_CommonParticle.VisualTaskParticleSignature__DelegateSignature");

	UBtlVisualTask_CommonParticle_VisualTaskParticleSignature__DelegateSignature_Params params;
	params.NewPsCmp = NewPsCmp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlVisualTask_CommonParticle.OnSystemEnd
// (Final, Native, Public)
// Parameters:
// class UParticleSystemComponent* PsComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBtlVisualTask_CommonParticle::OnSystemEnd(class UParticleSystemComponent* PsComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualTask_CommonParticle.OnSystemEnd");

	UBtlVisualTask_CommonParticle_OnSystemEnd_Params params;
	params.PsComp = PsComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.RunVisualTask
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VisualTaskType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBtlVisualTaskBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBtlVisualTaskBase* UBtlVisualRootTaskBlueprintBase::RunVisualTask(class UClass* VisualTaskType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.RunVisualTask");

	UBtlVisualRootTaskBlueprintBase_RunVisualTask_Params params;
	params.VisualTaskType = VisualTaskType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_OnReceiveMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 UserMessage                    (Parm, ZeroConstructor)
// class UObject*                 UserData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBtlVisualRootTaskBlueprintBase::Received_OnReceiveMessage(const struct FString& UserMessage, class UObject* UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_OnReceiveMessage");

	UBtlVisualRootTaskBlueprintBase_Received_OnReceiveMessage_Params params;
	params.UserMessage = UserMessage;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_EndPlay
// (Event, Protected, BlueprintEvent)

void UBtlVisualRootTaskBlueprintBase::Received_EndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_EndPlay");

	UBtlVisualRootTaskBlueprintBase_Received_EndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_Begin
// (Event, Protected, BlueprintEvent)

void UBtlVisualRootTaskBlueprintBase::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_Begin");

	UBtlVisualRootTaskBlueprintBase_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.K2_GetOwnerActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBtlVisualRootTaskBlueprintBase::K2_GetOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.K2_GetOwnerActor");

	UBtlVisualRootTaskBlueprintBase_K2_GetOwnerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.IsMonsterModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlVisualRootTaskBlueprintBase::IsMonsterModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.IsMonsterModel");

	UBtlVisualRootTaskBlueprintBase_IsMonsterModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerMaterials
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<TEnumAsByte<EAchCharacterBuildComponent>> BuildTypeArray                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMaterialInstanceDynamic*> UBtlVisualRootTaskBlueprintBase::GetOwnerMaterials(TArray<TEnumAsByte<EAchCharacterBuildComponent>> BuildTypeArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerMaterials");

	UBtlVisualRootTaskBlueprintBase_GetOwnerMaterials_Params params;
	params.BuildTypeArray = BuildTypeArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABtlCharacterBase* UBtlVisualRootTaskBlueprintBase::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerCharacter");

	UBtlVisualRootTaskBlueprintBase_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerBuildComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAchCharacterBuildComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAchCharacterBuildComponent* UBtlVisualRootTaskBlueprintBase::GetOwnerBuildComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerBuildComponent");

	UBtlVisualRootTaskBlueprintBase_GetOwnerBuildComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerAllMaterials
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bIsBuildComponentOnly          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMaterialInstanceDynamic*> UBtlVisualRootTaskBlueprintBase::GetOwnerAllMaterials(bool bIsBuildComponentOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerAllMaterials");

	UBtlVisualRootTaskBlueprintBase_GetOwnerAllMaterials_Params params;
	params.bIsBuildComponentOnly = bIsBuildComponentOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetBattleUnitEffectSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EBtlEffectSizeType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBtlEffectSizeType UBtlVisualRootTaskBlueprintBase::GetBattleUnitEffectSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetBattleUnitEffectSize");

	UBtlVisualRootTaskBlueprintBase_GetBattleUnitEffectSize_Params params;

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
