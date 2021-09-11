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

// BlueprintGeneratedClass BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C
// 0x000C (0x0094 - 0x0088)
class UBP_BTL_USS_RESENTMENT_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	float                                              GuardDamage;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C");
		return ptr;
	}


	float GetRevengeBaseElementAttack();
	float GetRevengeBasePhysicalAttack();
	float GetRevengeEffectValue(float MaxEffectValue);
	void OnGuard(float Damage);
	void OnDamage(int Damage);
	void DamageCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue);
	void StateChanged(EBattleActionState NowState, EBattleActionState PreState);
	void OnActionChanged(EBattleActionState NowState, EBattleActionState PreState);
	void ChangeStatusRise(bool Enabled);
	void OnEnabled();
	void OnDisabled();
	void OnApplySkill();
	void OnUnapplySkill();
	void ExecuteUbergraph_BP_BTL_USS_RESENTMENT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
