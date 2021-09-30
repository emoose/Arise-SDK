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

// BlueprintGeneratedClass BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C
// 0x000C (0x009C - 0x0090)
class UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C : public UBP_USS_DAMAGE_EFFECT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	float                                              EnemyCount;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C");
		return ptr;
	}


	float GetEffectValue(const struct FAriseSkillEffect& Effect);
	void OnSpawnUnit(class ABtlCharacterBase* Character, bool Reinforcement);
	void OnDisabled();
	void AddUnitCount(int Count);
	void OnEnabled();
	void OnReinforced();
	void OnDefeated();
	void OnDeadUnit(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
