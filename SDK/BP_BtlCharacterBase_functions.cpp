
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

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostArtsHandle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlArtsHandle          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBtlArtsHandle ABP_BtlCharacterBase_C::GetCollisionHostArtsHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostArtsHandle");

	ABP_BtlCharacterBase_C_GetCollisionHostArtsHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostCharacter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABtlCharacterBase* ABP_BtlCharacterBase_C::GetCollisionHostCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostCharacter");

	ABP_BtlCharacterBase_C_GetCollisionHostCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostHitObjectMemory
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBtlHitObjectMemoryBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBtlHitObjectMemoryBase* ABP_BtlCharacterBase_C::GetCollisionHostHitObjectMemory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostHitObjectMemory");

	ABP_BtlCharacterBase_C_GetCollisionHostHitObjectMemory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverrideDeep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtl_MagicSpawnLocationParam OverrideLocation               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtl_MagicSpawnRotationParam OverrideRotation               (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnCreateMagicAssetOverrideDeep(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnLocationParam& OverrideLocation, const struct FBtl_MagicSpawnRotationParam& OverrideRotation, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverrideDeep");

	ABP_BtlCharacterBase_C_OnCreateMagicAssetOverrideDeep_Params params;
	params.MagicAsset = MagicAsset;
	params.OverrideLocation = OverrideLocation;
	params.OverrideRotation = OverrideRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtl_MagicSpawnParam    SpawnParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnCreateMagicAssetOverride(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnParam& SpawnParam, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverride");

	ABP_BtlCharacterBase_C_OnCreateMagicAssetOverride_Params params;
	params.MagicAsset = MagicAsset;
	params.SpawnParam = SpawnParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicAsset*          MagicAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlMagicActor*          SpawnMagic                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnCreateMagicAsset(class UBtlMagicAsset* MagicAsset, class ABtlMagicActor** SpawnMagic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAsset");

	ABP_BtlCharacterBase_C_OnCreateMagicAsset_Params params;
	params.MagicAsset = MagicAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnMagic != nullptr)
		*SpawnMagic = params.SpawnMagic;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanBoostAttackBreak
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReceiveUnit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCharacterBase_C::CanBoostAttackBreak(class ABtlCharacterBase* ReceiveUnit, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanBoostAttackBreak");

	ABP_BtlCharacterBase_C_CanBoostAttackBreak_Params params;
	params.ReceiveUnit = ReceiveUnit;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnBeginMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginMove");

	ABP_BtlCharacterBase_C_OnBeginMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanMysticAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCharacterBase_C::CanMysticAction(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanMysticAction");

	ABP_BtlCharacterBase_C_CanMysticAction_Params params;
	params.TargetUnit = TargetUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanParalyzeAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleActionState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCharacterBase_C::CanParalyzeAction(EBattleActionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanParalyzeAction");

	ABP_BtlCharacterBase_C_CanParalyzeAction_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseStrikeResource
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::UseStrikeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseStrikeResource");

	ABP_BtlCharacterBase_C_UseStrikeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.NotifyDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       DeadCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::NotifyDead(class ABtlCharacterBase* DeadCharacter, struct FBtlArtsData* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.NotifyDead");

	ABP_BtlCharacterBase_C_NotifyDead_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginOverlimit
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestAccepted                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         ActionQuery                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnBeginOverlimit(bool* RequestAccepted, class UBtlActionQuery** ActionQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginOverlimit");

	ABP_BtlCharacterBase_C_OnBeginOverlimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestAccepted != nullptr)
		*RequestAccepted = params.RequestAccepted;
	if (ActionQuery != nullptr)
		*ActionQuery = params.ActionQuery;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.FindLookAtRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           IgnoreZAxis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_BtlCharacterBase_C::FindLookAtRotation(const struct FVector& Start, const struct FVector& Target, bool IgnoreZAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.FindLookAtRotation");

	ABP_BtlCharacterBase_C_FindLookAtRotation_Params params;
	params.Start = Start;
	params.Target = Target;
	params.IgnoreZAxis = IgnoreZAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetDirectionByTargetToCollision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatingSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::GetDirectionByTargetToCollision(class USceneComponent* AttackCollision, class AActor* Target, float Speed, float FloatingSpeed, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetDirectionByTargetToCollision");

	ABP_BtlCharacterBase_C_GetDirectionByTargetToCollision_Params params;
	params.AttackCollision = AttackCollision;
	params.Target = Target;
	params.Speed = Speed;
	params.FloatingSpeed = FloatingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SuperAvoidProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            AttackArtsData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuperAvoid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SuperAvoidProcess(class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& AttackArtsData, bool* IsSuperAvoid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SuperAvoidProcess");

	ABP_BtlCharacterBase_C_SuperAvoidProcess_Params params;
	params.DmgActor = DmgActor;
	params.AttackArtsData = AttackArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuperAvoid != nullptr)
		*IsSuperAvoid = params.IsSuperAvoid;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetFlashRaidPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FlashRaidPoint                 (Parm, OutParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::GetFlashRaidPoint(float Distance, bool IsAir, struct FVector* FlashRaidPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetFlashRaidPoint");

	ABP_BtlCharacterBase_C_GetFlashRaidPoint_Params params;
	params.Distance = Distance;
	params.IsAir = IsAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlashRaidPoint != nullptr)
		*FlashRaidPoint = params.FlashRaidPoint;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealBadStatus
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitEffect                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCharacterBase_C::HealBadStatus(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealBadStatus");

	ABP_BtlCharacterBase_C_HealBadStatus_Params params;
	params.Target = Target;
	params.HitEffect = HitEffect;
	params.ArtsName = ArtsName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadEvent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnDeadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadEvent");

	ABP_BtlCharacterBase_C_OnDeadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RaiseDead
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitEffect                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultHealValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::RaiseDead(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName, int* ResultHealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RaiseDead");

	ABP_BtlCharacterBase_C_RaiseDead_Params params;
	params.Target = Target;
	params.HitEffect = HitEffect;
	params.ArtsName = ArtsName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultHealValue != nullptr)
		*ResultHealValue = params.ResultHealValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealMagic
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitEffect                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResultHealValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::HealMagic(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName, int* ResultHealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealMagic");

	ABP_BtlCharacterBase_C_HealMagic_Params params;
	params.Target = Target;
	params.HitEffect = HitEffect;
	params.ArtsName = ArtsName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultHealValue != nullptr)
		*ResultHealValue = params.ResultHealValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadCharacterEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DeadCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::OnDeadCharacterEvent(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* DeadCharacter, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadCharacterEvent");

	ABP_BtlCharacterBase_C_OnDeadCharacterEvent_Params params;
	params.Attacker = Attacker;
	params.DeadCharacter = DeadCharacter;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnStateChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnStateChange(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnStateChange");

	ABP_BtlCharacterBase_C_OnStateChange_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAttackBeginEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            NowArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAttackBeginEvent(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAttackBeginEvent");

	ABP_BtlCharacterBase_C_OnAttackBeginEvent_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NowArts = NowArts;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAlphaMaskComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAlphaMaskComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAlphaMaskComponent* ABP_BtlCharacterBase_C::GetAlphaMaskComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAlphaMaskComponent");

	ABP_BtlCharacterBase_C_GetAlphaMaskComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseItemProcess
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlCharacterBase_C::UseItemProcess(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseItemProcess");

	ABP_BtlCharacterBase_C_UseItemProcess_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealHateProcess
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::HealHateProcess(class ABtlCharacterBase* Target, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealHateProcess");

	ABP_BtlCharacterBase_C_HealHateProcess_Params params;
	params.Target = Target;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.DamageHateProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DmgValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetIsDie                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::DamageHateProcess(class ABtlCharacterBase* DmgActor, int DmgValue, bool TargetIsDie, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.DamageHateProcess");

	ABP_BtlCharacterBase_C_DamageHateProcess_Params params;
	params.DmgActor = DmgActor;
	params.DmgValue = DmgValue;
	params.TargetIsDie = TargetIsDie;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAbnormalEffectLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::GetAbnormalEffectLocation(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAbnormalEffectLocation");

	ABP_BtlCharacterBase_C_GetAbnormalEffectLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ParalyzeOnAction
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::ParalyzeOnAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ParalyzeOnAction");

	ABP_BtlCharacterBase_C_ParalyzeOnAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AbnormalTimerOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsGuard                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeakness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::AbnormalTimerOnHit(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AbnormalTimerOnHit");

	ABP_BtlCharacterBase_C_AbnormalTimerOnHit_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;
	params.IsGuard = IsGuard;
	params.IsCritical = IsCritical;
	params.IsWeakness = IsWeakness;
	params.IsResistance = IsResistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TickAbnormal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::TickAbnormal(EAbnormalType Abnormal, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TickAbnormal");

	ABP_BtlCharacterBase_C_TickAbnormal_Params params;
	params.Abnormal = Abnormal;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EndAbnormal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::EndAbnormal(EAbnormalType Abnormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EndAbnormal");

	ABP_BtlCharacterBase_C_EndAbnormal_Params params;
	params.Abnormal = Abnormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BeginAbnormal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAbnormalType                  Abnormal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BeginAbnormal(EAbnormalType Abnormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BeginAbnormal");

	ABP_BtlCharacterBase_C_BeginAbnormal_Params params;
	params.Abnormal = Abnormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AddAbnormalValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsGuard                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeakness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCharacterBase_C::AddAbnormalValue(class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistance, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AddAbnormalValue");

	ABP_BtlCharacterBase_C_AddAbnormalValue_Params params;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;
	params.IsGuard = IsGuard;
	params.IsCritical = IsCritical;
	params.IsWeakness = IsWeakness;
	params.IsResistance = IsResistance;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoStepProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoStep                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::AutoStepProcess(class ABtlCharacterBase* DmgActor, bool* IsAutoStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoStepProcess");

	ABP_BtlCharacterBase_C_AutoStepProcess_Params params;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAutoStep != nullptr)
		*IsAutoStep = params.IsAutoStep;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnEndOverlimit
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::EventOnEndOverlimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnEndOverlimit");

	ABP_BtlCharacterBase_C_EventOnEndOverlimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnBeginOverlimit
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestAccepted                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         ActionQuery                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::EventOnBeginOverlimit(bool* RequestAccepted, class UBtlActionQuery** ActionQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnBeginOverlimit");

	ABP_BtlCharacterBase_C_EventOnBeginOverlimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestAccepted != nullptr)
		*RequestAccepted = params.RequestAccepted;
	if (ActionQuery != nullptr)
		*ActionQuery = params.ActionQuery;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.StopTurnTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::StopTurnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.StopTurnTarget");

	ABP_BtlCharacterBase_C_StopTurnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateStrikeAttackValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeakness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::UpdateStrikeAttackValue(bool IsCritical, bool IsWeakness, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateStrikeAttackValue");

	ABP_BtlCharacterBase_C_UpdateStrikeAttackValue_Params params;
	params.IsCritical = IsCritical;
	params.IsWeakness = IsWeakness;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitStopProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBtlAttackCollisionInterface> AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HitStopSec                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::HitStopProcess(class ABtlCharacterBase* DmgActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollision, class UBtlDamageSphereComponent* DmgCollision, float HitStopSec, bool IsCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitStopProcess");

	ABP_BtlCharacterBase_C_HitStopProcess_Params params;
	params.DmgActor = DmgActor;
	params.AtkCollision = AtkCollision;
	params.DmgCollision = DmgCollision;
	params.HitStopSec = HitStopSec;
	params.IsCritical = IsCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReactionProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitEffectLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                HitEffectRotation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsCritical                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::ReactionProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FVector& HitEffectLocation, const struct FRotator& HitEffectRotation, bool bIsCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReactionProcess");

	ABP_BtlCharacterBase_C_ReactionProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;
	params.HitEffectLocation = HitEffectLocation;
	params.HitEffectRotation = HitEffectRotation;
	params.bIsCritical = bIsCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitEffectLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                HitEffectRotation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            DmgValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::HitProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, const struct FVector& HitEffectLocation, const struct FRotator& HitEffectRotation, int DmgValue, bool IsCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitProcess");

	ABP_BtlCharacterBase_C_HitProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;
	params.HitEffectLocation = HitEffectLocation;
	params.HitEffectRotation = HitEffectRotation;
	params.DmgValue = DmgValue;
	params.IsCritical = IsCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GuardProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitEffectLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            DmgValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::GuardProcess(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, class ABtlCharacterBase* DmgActor, const struct FVector& HitEffectLocation, int DmgValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GuardProcess");

	ABP_BtlCharacterBase_C_GuardProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgCollision = DmgCollision;
	params.DmgActor = DmgActor;
	params.HitEffectLocation = HitEffectLocation;
	params.DmgValue = DmgValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsTargetGuard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RunAutoGuard                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGuard                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::IsTargetGuard(class ABtlCharacterBase* DmgActor, bool RunAutoGuard, bool* IsGuard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsTargetGuard");

	ABP_BtlCharacterBase_C_IsTargetGuard_Params params;
	params.DmgActor = DmgActor;
	params.RunAutoGuard = RunAutoGuard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGuard != nullptr)
		*IsGuard = params.IsGuard;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HoldHeightOnHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBtlAttackCollisionInterface> AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::HoldHeightOnHit(const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollision, class ABtlCharacterBase* DmgActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HoldHeightOnHit");

	ABP_BtlCharacterBase_C_HoldHeightOnHit_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BlowProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          KnockBackSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          KnockFloatSpeed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMighty                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DownSec                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BlowProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, float KnockBackSpeed, float KnockFloatSpeed, bool IsMighty, float DownSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BlowProcess");

	ABP_BtlCharacterBase_C_BlowProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;
	params.KnockBackSpeed = KnockBackSpeed;
	params.KnockFloatSpeed = KnockFloatSpeed;
	params.IsMighty = IsMighty;
	params.DownSec = DownSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.KnockbackProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::KnockbackProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.KnockbackProcess");

	ABP_BtlCharacterBase_C_KnockbackProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CalculateHitEffectTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::CalculateHitEffectTransform(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CalculateHitEffectTransform");

	ABP_BtlCharacterBase_C_CalculateHitEffectTransform_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDamageProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          KnockbackSec                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                HitEffectRotation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCharacterBase_C::TargetDamageProcess(class ABtlCharacterBase* DmgActor, float KnockbackSec, const struct FRotator& HitEffectRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDamageProcess");

	ABP_BtlCharacterBase_C_TargetDamageProcess_Params params;
	params.DmgActor = DmgActor;
	params.KnockbackSec = KnockbackSec;
	params.HitEffectRotation = HitEffectRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BodyDamageProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            DmgValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNotDie                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInstantDeath                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetDie                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSuccessBoostAttackBreak      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BodyDamageProcess(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData, int DmgValue, bool IsNotDie, bool IsInstantDeath, bool IsCritical, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, bool* TargetDie, bool* IsSuccessBoostAttackBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BodyDamageProcess");

	ABP_BtlCharacterBase_C_BodyDamageProcess_Params params;
	params.AtkCollision = AtkCollision;
	params.DmgCollision = DmgCollision;
	params.DmgActor = DmgActor;
	params.ArtsData = ArtsData;
	params.DmgValue = DmgValue;
	params.IsNotDie = IsNotDie;
	params.IsInstantDeath = IsInstantDeath;
	params.IsCritical = IsCritical;
	params.AtkCollisionInterface = AtkCollisionInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetDie != nullptr)
		*TargetDie = params.TargetDie;
	if (IsSuccessBoostAttackBreak != nullptr)
		*IsSuccessBoostAttackBreak = params.IsSuccessBoostAttackBreak;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CoreDamageProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            DmgValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsCoreBreak                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::CoreDamageProcess(class UBtlDamageSphereComponent* DmgCollision, int DmgValue, class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData, bool* IsCoreBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CoreDamageProcess");

	ABP_BtlCharacterBase_C_CoreDamageProcess_Params params;
	params.DmgCollision = DmgCollision;
	params.DmgValue = DmgValue;
	params.DmgActor = DmgActor;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCoreBreak != nullptr)
		*IsCoreBreak = params.IsCoreBreak;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustStepProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           JustStep                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::JustStepProcess(class ABtlCharacterBase* DmgActor, bool* JustStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustStepProcess");

	ABP_BtlCharacterBase_C_JustStepProcess_Params params;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JustStep != nullptr)
		*JustStep = params.JustStep;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustGuardProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           JustGuard                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::JustGuardProcess(class ABtlCharacterBase* DmgActor, bool* JustGuard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustGuardProcess");

	ABP_BtlCharacterBase_C_JustGuardProcess_Params params;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JustGuard != nullptr)
		*JustGuard = params.JustGuard;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoGuardProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoGuard                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::AutoGuardProcess(class ABtlCharacterBase* DmgActor, bool* IsAutoGuard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoGuardProcess");

	ABP_BtlCharacterBase_C_AutoGuardProcess_Params params;
	params.DmgActor = DmgActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAutoGuard != nullptr)
		*IsAutoGuard = params.IsAutoGuard;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsCorrectHitCollisionProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFriendlyFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCorrect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::IsCorrectHitCollisionProcess(class ABtlCharacterBase* DmgActor, bool IsFriendlyFire, bool* IsCorrect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsCorrectHitCollisionProcess");

	ABP_BtlCharacterBase_C_IsCorrectHitCollisionProcess_Params params;
	params.DmgActor = DmgActor;
	params.IsFriendlyFire = IsFriendlyFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCorrect != nullptr)
		*IsCorrect = params.IsCorrect;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetSemiautoComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBtlSemiautoComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBtlSemiautoComponent* ABP_BtlCharacterBase_C::GetSemiautoComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetSemiautoComponent");

	ABP_BtlCharacterBase_C_GetSemiautoComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimRotationYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetAnimRotationYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimRotationYaw");

	ABP_BtlCharacterBase_C_SetAnimRotationYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingRotationToDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetAnimMovingRotationToDirection(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingRotationToDirection");

	ABP_BtlCharacterBase_C_SetAnimMovingRotationToDirection_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingToArtsTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::SetAnimMovingToArtsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingToArtsTarget");

	ABP_BtlCharacterBase_C_SetAnimMovingToArtsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetAnimMovingTargetLocation(const struct FVector& TargetPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingTargetLocation");

	ABP_BtlCharacterBase_C_SetAnimMovingTargetLocation_Params params;
	params.TargetPoint = TargetPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateManualTurn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StickVectorInWorld             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::UpdateManualTurn(const struct FVector& StickVectorInWorld, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateManualTurn");

	ABP_BtlCharacterBase_C_UpdateManualTurn_Params params;
	params.StickVectorInWorld = StickVectorInWorld;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetHomingMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetHomingMove(bool Enable, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetHomingMove");

	ABP_BtlCharacterBase_C_SetHomingMove_Params params;
	params.Enable = Enable;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTargetArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::SetTurnTargetArts(const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTargetArts");

	ABP_BtlCharacterBase_C_SetTurnTargetArts_Params params;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetTurnTarget(float Range, float Speed, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTarget");

	ABP_BtlCharacterBase_C_SetTurnTarget_Params params;
	params.Range = Range;
	params.Speed = Speed;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UserConstructionScript");

	ABP_BtlCharacterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationRelativeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RelativeOnGroundHeight         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnSetLocationRelativeTarget(float Distance, float Height, bool RelativeOnGroundHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationRelativeTarget");

	ABP_BtlCharacterBase_C_OnSetLocationRelativeTarget_Params params;
	params.Distance = Distance;
	params.Height = Height;
	params.RelativeOnGroundHeight = RelativeOnGroundHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnSetLocationWorld(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationWorld");

	ABP_BtlCharacterBase_C_OnSetLocationWorld_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetRotationWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnSetRotationWorld(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetRotationWorld");

	ABP_BtlCharacterBase_C_OnSetRotationWorld_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuperArmor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeSuperArmorEnd(bool SuperArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeSuperArmorEnd_Params params;
	params.SuperArmor = SuperArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuperArmor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeSuperArmorBegin(bool SuperArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeSuperArmorBegin_Params params;
	params.SuperArmor = SuperArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotDie                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeIsNotDieEnd(bool IsNotDie)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeIsNotDieEnd_Params params;
	params.IsNotDie = IsNotDie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AngleMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimAimWeaponBegin(float AngleMin, float AngleMax, float AngleSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponBegin");

	ABP_BtlCharacterBase_C_OnAnimAimWeaponBegin_Params params;
	params.AngleMin = AngleMin;
	params.AngleMax = AngleMax;
	params.AngleSpeed = AngleSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimAimWeaponEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponEnd");

	ABP_BtlCharacterBase_C_OnAnimAimWeaponEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotDie                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeIsNotDieBegin(bool IsNotDie)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeIsNotDieBegin_Params params;
	params.IsNotDie = IsNotDie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeBegin
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimDangerNoticeBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeBegin");

	ABP_BtlCharacterBase_C_OnAnimDangerNoticeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimDangerNoticeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeEnd");

	ABP_BtlCharacterBase_C_OnAnimDangerNoticeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimRadialBlurBegin(const struct FName& SocketName, float Strength, float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurBegin");

	ABP_BtlCharacterBase_C_OnAnimRadialBlurBegin_Params params;
	params.SocketName = SocketName;
	params.Strength = Strength;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimRadialBlurTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurTick");

	ABP_BtlCharacterBase_C_OnAnimRadialBlurTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimRadialBlurEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurEnd");

	ABP_BtlCharacterBase_C_OnAnimRadialBlurEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimDynamicsWeightBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightBegin");

	ABP_BtlCharacterBase_C_OnAnimDynamicsWeightBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimUseKeyFrameAnimBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimBegin");

	ABP_BtlCharacterBase_C_OnAnimUseKeyFrameAnimBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimUseKeyFrameAnimEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimEnd");

	ABP_BtlCharacterBase_C_OnAnimUseKeyFrameAnimEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimDynamicsWeightEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightEnd");

	ABP_BtlCharacterBase_C_OnAnimDynamicsWeightEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimGravityPowerBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerBegin");

	ABP_BtlCharacterBase_C_OnAnimGravityPowerBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimGravityPowerEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerEnd");

	ABP_BtlCharacterBase_C_OnAnimGravityPowerEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimDampingPowerBegin(float Value, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerBegin");

	ABP_BtlCharacterBase_C_OnAnimDampingPowerBegin_Params params;
	params.Value = Value;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimDampingPowerEnd(bool Reset, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerEnd");

	ABP_BtlCharacterBase_C_OnAnimDampingPowerEnd_Params params;
	params.Reset = Reset;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAnimPhysSimSpaceType          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimSimulationSpaceBegin(EAnimPhysSimSpaceType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceBegin");

	ABP_BtlCharacterBase_C_OnAnimSimulationSpaceBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimSimulationSpaceEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceEnd");

	ABP_BtlCharacterBase_C_OnAnimSimulationSpaceEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimUpperPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsBegin");

	ABP_BtlCharacterBase_C_OnAnimUpperPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimUpperPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsEnd");

	ABP_BtlCharacterBase_C_OnAnimUpperPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimLowerPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsBegin");

	ABP_BtlCharacterBase_C_OnAnimLowerPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimLowerPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsEnd");

	ABP_BtlCharacterBase_C_OnAnimLowerPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimHairPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsBegin");

	ABP_BtlCharacterBase_C_OnAnimHairPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimHairPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsEnd");

	ABP_BtlCharacterBase_C_OnAnimHairPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimGroundCollisionBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionBegin");

	ABP_BtlCharacterBase_C_OnAnimGroundCollisionBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimGroundCollisionEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionEnd");

	ABP_BtlCharacterBase_C_OnAnimGroundCollisionEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReceiveDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeReceiveDamageEnd(bool ReceiveDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeReceiveDamageEnd_Params params;
	params.ReceiveDamage = ReceiveDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimExtraPartsBegin(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsBegin");

	ABP_BtlCharacterBase_C_OnAnimExtraPartsBegin_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimExtraPartsEnd(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsEnd");

	ABP_BtlCharacterBase_C_OnAnimExtraPartsEnd_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlCharacterBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReceiveBeginPlay");

	ABP_BtlCharacterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnReceiveFlexibleAnimNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyBegin");

	ABP_BtlCharacterBase_C_OnReceiveFlexibleAnimNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyEnd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnReceiveFlexibleAnimNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyEnd");

	ABP_BtlCharacterBase_C_OnReceiveFlexibleAnimNotifyEnd_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReceiveDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeReceiveDamageBegin(bool ReceiveDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeReceiveDamageBegin_Params params;
	params.ReceiveDamage = ReceiveDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeInvincibleEnd(bool Invincible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeInvincibleEnd_Params params;
	params.Invincible = Invincible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Invincible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeInvincibleBegin(bool Invincible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeInvincibleBegin_Params params;
	params.Invincible = Invincible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReviveProcess
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::ReviveProcess(class ABtlCharacterBase* Healer, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReviveProcess");

	ABP_BtlCharacterBase_C_ReviveProcess_Params params;
	params.Healer = Healer;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AttackEndEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::AttackEndEvent_Event(class ABtlCharacterBase* SelfCharacter, EBattleActionState NowState, const struct FBtlArtsData& PreArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AttackEndEvent_Event");

	ABP_BtlCharacterBase_C_AttackEndEvent_Event_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NowState = NowState;
	params.PreArts = PreArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeVisibilityEnd(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeVisibilityEnd_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeVisibilityBegin(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeVisibilityBegin_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimRotationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationEnd");

	ABP_BtlCharacterBase_C_OnAnimRotationEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimRotationBegin(float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationBegin");

	ABP_BtlCharacterBase_C_OnAnimRotationBegin_Params params;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDeadProcess
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::TargetDeadProcess(class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDeadProcess");

	ABP_BtlCharacterBase_C_TargetDeadProcess_Params params;
	params.DmgActor = DmgActor;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimMovingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingEnd");

	ABP_BtlCharacterBase_C_OnAnimMovingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimMovingBegin(float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingBegin");

	ABP_BtlCharacterBase_C_OnAnimMovingBegin_Params params;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnIgnoreUnitPushEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushEnd");

	ABP_BtlCharacterBase_C_OnIgnoreUnitPushEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushBegin
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnIgnoreUnitPushBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushBegin");

	ABP_BtlCharacterBase_C_OnIgnoreUnitPushBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnManualTurnBegin(float RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnBegin");

	ABP_BtlCharacterBase_C_OnManualTurnBegin_Params params;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.򹘞򬿾�0{k
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::򹘞򬿾�0{k()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.򹘞򬿾�0{k");

	ABP_BtlCharacterBase_C_򹘞򬿾�0{k_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnManualTurnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnEnd");

	ABP_BtlCharacterBase_C_OnManualTurnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.PlayFlashRaidEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::PlayFlashRaidEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.PlayFlashRaidEnable");

	ABP_BtlCharacterBase_C_PlayFlashRaidEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GravityScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeGravityTick(float GravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityTick");

	ABP_BtlCharacterBase_C_OnAnimChangeGravityTick_Params params;
	params.GravityScale = GravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleRange                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimTurnTargetBegin(float InterpSpeed, float AngleRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetBegin");

	ABP_BtlCharacterBase_C_OnAnimTurnTargetBegin_Params params;
	params.InterpSpeed = InterpSpeed;
	params.AngleRange = AngleRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimTurnTargetEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetEnd");

	ABP_BtlCharacterBase_C_OnAnimTurnTargetEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnAnimChangeGravityEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityEnd");

	ABP_BtlCharacterBase_C_OnAnimChangeGravityEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GravityScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnAnimChangeGravityBegin(float GravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityBegin");

	ABP_BtlCharacterBase_C_OnAnimChangeGravityBegin_Params params;
	params.GravityScale = GravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndInspirationArts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InspirationArts                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnEndInspirationArts(class ABtlCharacterBase* Unit, const struct FName& InspirationArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndInspirationArts");

	ABP_BtlCharacterBase_C_OnEndInspirationArts_Params params;
	params.Unit = Unit;
	params.InspirationArts = InspirationArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnReceiveMessage(const struct FString& Message, class UObject* UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveMessage");

	ABP_BtlCharacterBase_C_OnReceiveMessage_Params params;
	params.Message = Message;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlFlashRaidState             Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlFlashRaidState             Now                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature(class ABtlCharacterBase* Unit, EBtlFlashRaidState Prev, EBtlFlashRaidState Now)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature_Params params;
	params.Unit = Unit;
	params.Prev = Prev;
	params.Now = Now;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSelfDead
// (Event, Public, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnSelfDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSelfDead");

	ABP_BtlCharacterBase_C_OnSelfDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidIn
// (Event, Public, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnFlashRaidIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidIn");

	ABP_BtlCharacterBase_C_OnFlashRaidIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnFlashRaidIn
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::EventOnFlashRaidIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnFlashRaidIn");

	ABP_BtlCharacterBase_C_EventOnFlashRaidIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPostGiveDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::OnPostGiveDamage(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPostGiveDamage");

	ABP_BtlCharacterBase_C_OnPostGiveDamage_Params params;
	params.TargetUnit = TargetUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RequestMysticArts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::RequestMysticArts(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RequestMysticArts");

	ABP_BtlCharacterBase_C_RequestMysticArts_Params params;
	params.TargetUnit = TargetUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PrevOperationUnit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NowOperationUnit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature_Params params;
	params.PrevOperationUnit = PrevOperationUnit;
	params.NowOperationUnit = NowOperationUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPlayerOperationDisabled
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnPlayerOperationDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPlayerOperationDisabled");

	ABP_BtlCharacterBase_C_OnPlayerOperationDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseBtlUnits
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetCapsuleCollisionResponseBtlUnits(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseBtlUnits");

	ABP_BtlCharacterBase_C_SetCapsuleCollisionResponseBtlUnits_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseOnAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::SetCapsuleCollisionResponseOnAttack(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseOnAttack");

	ABP_BtlCharacterBase_C_SetCapsuleCollisionResponseOnAttack_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCollisionSignatureData CollisionParam                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature(const struct FBtlCollisionSignatureData& CollisionParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature_Params params;
	params.CollisionParam = CollisionParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndCounterRaid
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlCharacterBase_C::OnEndCounterRaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndCounterRaid");

	ABP_BtlCharacterBase_C_OnEndCounterRaid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCharacterBase_C::BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FBtlArtsHandle          ArtsHandle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlCharacterBase_C::BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature(const struct FBtlArtsHandle& ArtsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature_Params params;
	params.ArtsHandle = ArtsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBtlArtsQuery*           ArtsQuery                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature(class UBtlArtsQuery* ArtsQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature");

	ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature_Params params;
	params.ArtsQuery = ArtsQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidNotAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlActionQuery*         ActionQuery                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::OnFlashRaidNotAccept(class UBtlActionQuery* ActionQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidNotAccept");

	ABP_BtlCharacterBase_C_OnFlashRaidNotAccept_Params params;
	params.ActionQuery = ActionQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ExecuteUbergraph_BP_BtlCharacterBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCharacterBase_C::ExecuteUbergraph_BP_BtlCharacterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ExecuteUbergraph_BP_BtlCharacterBase");

	ABP_BtlCharacterBase_C_ExecuteUbergraph_BP_BtlCharacterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
