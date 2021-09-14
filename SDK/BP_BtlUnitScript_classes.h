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

// BlueprintGeneratedClass BP_BtlUnitScript.BP_BtlUnitScript_C
// 0x0008 (0x00C0 - 0x00B8)
class UBP_BtlUnitScript_C : public UBtlUnitScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlUnitScript.BP_BtlUnitScript_C");
		return ptr;
	}


	void ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel);
	void CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled);
	bool GetUnitParameterAsBool(const struct FBtlUnitParameterLabel& Label);
	int GetUnitParameterAsInt(const struct FBtlUnitParameterLabel& Label);
	float GetUnitParameter(const struct FBtlUnitParameterLabel& Label);
	void OnComboNext(const struct FName& PrevArts, bool* Override, struct FName* NextArts);
	void OnGetBoostAttackAirSub(struct FName* Result);
	void OnGetBoostAttackAir(struct FName* Result);
	void OnGetBoostAttackSub(struct FName* Result);
	void OnGetBoostAttack(struct FName* Result);
	void ApplyBreakEffect(EBtlStrikeType StrikeType);
	void ApplyBreakVisibility(EBtlStrikeType StrikeType);
	void OnBreakRush(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnBreakArmor(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnBreakSuperAvoid(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnReceiveFireSword(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnDead();
	void OnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel);
	void OnDeadAction();
	void OnBreakChant(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnCutsceneResetAnimation(const struct FName& ArtsLabel);
	void OnSuccessJustGuard();
	void OnSuccessJustAvoid();
	void OnBreakFlying(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision);
	void OnFrozenAction();
	void ExecuteUbergraph_BP_BtlUnitScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
