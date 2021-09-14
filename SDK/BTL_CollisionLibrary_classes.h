#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTL_CollisionLibrary.BTL_CollisionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBTL_CollisionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_CollisionLibrary.BTL_CollisionLibrary_C");
		return ptr;
	}


	void STATIC_CalculationImpactPoint(class UShapeComponent* AttackCollision, class AActor* DestructibleActor, class UObject* __WorldContext, struct FVector* ImpactPoint, bool* Success);
	void STATIC_DoBattleAttackHit(class UShapeComponent* GaveComponent, class ABtlCharacterBase* ReceivedActor, class UBtlDamageSphereComponent* ReceivedComponent, class UObject* __WorldContext);
	void STATIC_BattleUnitAttackHitDamageProcess(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABP_BtlCharacterBase_C* HitActor, class UShapeComponent* AtkCollision, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsData& AttackArtsData, bool IsFriendlyFire, bool RunAutoGuard, bool RunAutoStep, class UObject* __WorldContext, struct FBtlHitStatusRecord* NewHitStatus);
	void STATIC_BattleUnitAttackHitCheck(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABP_BtlCharacterBase_C* HitActor, class UShapeComponent* AtkCollision, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsData& AttackArtsData, class UObject* __WorldContext, bool* DoDamageProcess, bool* ResultIsFriendlyFire, bool* ResultRunAutoGuard, bool* ResultRunAutoStep);
	void STATIC_DestructionMesh(class UDestructibleComponent* DestructibleComponent, const struct FVector& ImpactPoint, EDestructibleType DestructibleType, class UObject* __WorldContext, bool* IsDestruction);
	void STATIC_ConvertCircleToSquare(const struct FVector2D& Vec2, class UObject* __WorldContext, struct FVector2D* Result);
	void STATIC_ProcessBattleUnitAttackHit(class UBtlHitObjectMemoryBase* HitMemoryComponent, class ABtlCharacterBase* GaveActor, class UShapeComponent* GaveComponent, class ABtlCharacterBase* ReceivedActor, class UBtlDamageSphereComponent* ReceivedComponent, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
