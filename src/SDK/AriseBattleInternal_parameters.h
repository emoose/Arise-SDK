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

// Function AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.IsOverlapCollision
struct UBtlMagicTask_NotifyCollisionBase_IsOverlapCollision_Params
{
	class ABtlMagicActor*                              OwnerActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction AriseBattleInternal.BtlMagicTask_NotifyCollisionBase.BtlNotifyCollisionSignature__DelegateSignature
struct UBtlMagicTask_NotifyCollisionBase_BtlNotifyCollisionSignature__DelegateSignature_Params
{
};

// Function AriseBattleInternal.BtlMagicTask_CreateSkeletalMeshBase.GetMasterMeshComponent
struct UBtlMagicTask_CreateSkeletalMeshBase_GetMasterMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualTask_MaterialBase.OnRebuildingMaterials
struct UBtlVisualTask_MaterialBase_OnRebuildingMaterials_Params
{
};

// DelegateFunction AriseBattleInternal.BtlVisualTask_CommonParticle.VisualTaskParticleSignature__DelegateSignature
struct UBtlVisualTask_CommonParticle_VisualTaskParticleSignature__DelegateSignature_Params
{
	class UParticleSystemComponent*                    NewPsCmp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualTask_CommonParticle.OnSystemEnd
struct UBtlVisualTask_CommonParticle_OnSystemEnd_Params
{
	class UParticleSystemComponent*                    PsComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.RunVisualTask
struct UBtlVisualRootTaskBlueprintBase_RunVisualTask_Params
{
	class UClass*                                      VisualTaskType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBtlVisualTaskBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_OnReceiveMessage
struct UBtlVisualRootTaskBlueprintBase_Received_OnReceiveMessage_Params
{
	struct FString                                     UserMessage;                                              // (Parm, ZeroConstructor)
	class UObject*                                     UserData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_EndPlay
struct UBtlVisualRootTaskBlueprintBase_Received_EndPlay_Params
{
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.Received_Begin
struct UBtlVisualRootTaskBlueprintBase_Received_Begin_Params
{
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.K2_GetOwnerActor
struct UBtlVisualRootTaskBlueprintBase_K2_GetOwnerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.IsMonsterModel
struct UBtlVisualRootTaskBlueprintBase_IsMonsterModel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerMaterials
struct UBtlVisualRootTaskBlueprintBase_GetOwnerMaterials_Params
{
	TArray<TEnumAsByte<EAchCharacterBuildComponent>>   BuildTypeArray;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerCharacter
struct UBtlVisualRootTaskBlueprintBase_GetOwnerCharacter_Params
{
	class ABtlCharacterBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerBuildComponent
struct UBtlVisualRootTaskBlueprintBase_GetOwnerBuildComponent_Params
{
	class UAchCharacterBuildComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetOwnerAllMaterials
struct UBtlVisualRootTaskBlueprintBase_GetOwnerAllMaterials_Params
{
	bool                                               bIsBuildComponentOnly;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseBattleInternal.BtlVisualRootTaskBlueprintBase.GetBattleUnitEffectSize
struct UBtlVisualRootTaskBlueprintBase_GetBattleUnitEffectSize_Params
{
	EBtlEffectSizeType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
