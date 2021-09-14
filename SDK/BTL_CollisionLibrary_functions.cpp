
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

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.CalculationImpactPoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UShapeComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  DestructibleActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_CalculationImpactPoint(class UShapeComponent* AttackCollision, class AActor* DestructibleActor, class UObject* __WorldContext, struct FVector* ImpactPoint, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.CalculationImpactPoint");

	UBTL_CollisionLibrary_C_CalculationImpactPoint_Params params;
	params.AttackCollision = AttackCollision;
	params.DestructibleActor = DestructibleActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DoBattleAttackHit
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         GaveComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       ReceivedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* ReceivedComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_DoBattleAttackHit(class UShapeComponent* GaveComponent, class ABtlCharacterBase* ReceivedActor, class UBtlDamageSphereComponent* ReceivedComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DoBattleAttackHit");

	UBTL_CollisionLibrary_C_DoBattleAttackHit_Params params;
	params.GaveComponent = GaveComponent;
	params.ReceivedActor = ReceivedActor;
	params.ReceivedComponent = ReceivedComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitDamageProcess
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlHitObjectMemoryBase* HitMemoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABP_BtlCharacterBase_C*  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArtsData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBtlHitStatusRecord     NewHitStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFriendlyFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RunAutoGuard                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RunAutoStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_BattleUnitAttackHitDamageProcess(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABP_BtlCharacterBase_C* HitActor, class UShapeComponent* AtkCollision, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsData& AttackArtsData, bool IsFriendlyFire, bool RunAutoGuard, bool RunAutoStep, class UObject* __WorldContext, struct FBtlHitStatusRecord* NewHitStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitDamageProcess");

	UBTL_CollisionLibrary_C_BattleUnitAttackHitDamageProcess_Params params;
	params.HitMemoryComponent = HitMemoryComponent;
	params.HitActor = HitActor;
	params.AtkCollision = AtkCollision;
	params.AtkCollisionInterface = AtkCollisionInterface;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;
	params.AttackArtsData = AttackArtsData;
	params.IsFriendlyFire = IsFriendlyFire;
	params.RunAutoGuard = RunAutoGuard;
	params.RunAutoStep = RunAutoStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewHitStatus != nullptr)
		*NewHitStatus = params.NewHitStatus;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitCheck
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlHitObjectMemoryBase* HitMemoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABP_BtlCharacterBase_C*  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AtkCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArtsData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DoDamageProcess                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ResultIsFriendlyFire           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ResultRunAutoGuard             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ResultRunAutoStep              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_BattleUnitAttackHitCheck(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABP_BtlCharacterBase_C* HitActor, class UShapeComponent* AtkCollision, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsData& AttackArtsData, class UObject* __WorldContext, bool* DoDamageProcess, bool* ResultIsFriendlyFire, bool* ResultRunAutoGuard, bool* ResultRunAutoStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitCheck");

	UBTL_CollisionLibrary_C_BattleUnitAttackHitCheck_Params params;
	params.HitMemoryComponent = HitMemoryComponent;
	params.HitActor = HitActor;
	params.AtkCollision = AtkCollision;
	params.AtkCollisionInterface = AtkCollisionInterface;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;
	params.AttackArtsData = AttackArtsData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoDamageProcess != nullptr)
		*DoDamageProcess = params.DoDamageProcess;
	if (ResultIsFriendlyFire != nullptr)
		*ResultIsFriendlyFire = params.ResultIsFriendlyFire;
	if (ResultRunAutoGuard != nullptr)
		*ResultRunAutoGuard = params.ResultRunAutoGuard;
	if (ResultRunAutoStep != nullptr)
		*ResultRunAutoStep = params.ResultRunAutoStep;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DestructionMesh
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleComponent*  DestructibleComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ImpactPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EDestructibleType              DestructibleType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDestruction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_DestructionMesh(class UDestructibleComponent* DestructibleComponent, const struct FVector& ImpactPoint, EDestructibleType DestructibleType, class UObject* __WorldContext, bool* IsDestruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DestructionMesh");

	UBTL_CollisionLibrary_C_DestructionMesh_Params params;
	params.DestructibleComponent = DestructibleComponent;
	params.ImpactPoint = ImpactPoint;
	params.DestructibleType = DestructibleType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDestruction != nullptr)
		*IsDestruction = params.IsDestruction;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ConvertCircleToSquare
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Vec2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Result                         (Parm, OutParm, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_ConvertCircleToSquare(const struct FVector2D& Vec2, class UObject* __WorldContext, struct FVector2D* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ConvertCircleToSquare");

	UBTL_CollisionLibrary_C_ConvertCircleToSquare_Params params;
	params.Vec2 = Vec2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ProcessBattleUnitAttackHit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlHitObjectMemoryBase* HitMemoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       GaveActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         GaveComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       ReceivedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* ReceivedComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CollisionLibrary_C::STATIC_ProcessBattleUnitAttackHit(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABtlCharacterBase* GaveActor, class UShapeComponent* GaveComponent, class ABtlCharacterBase* ReceivedActor, class UBtlDamageSphereComponent* ReceivedComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ProcessBattleUnitAttackHit");

	UBTL_CollisionLibrary_C_ProcessBattleUnitAttackHit_Params params;
	params.HitMemoryComponent = HitMemoryComponent;
	params.GaveActor = GaveActor;
	params.GaveComponent = GaveComponent;
	params.ReceivedActor = ReceivedActor;
	params.ReceivedComponent = ReceivedComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
