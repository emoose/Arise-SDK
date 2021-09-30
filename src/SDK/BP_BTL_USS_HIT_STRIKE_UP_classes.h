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

// BlueprintGeneratedClass BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C
// 0x0008 (0x0090 - 0x0088)
class UBP_BTL_USS_HIT_STRIKE_UP_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C");
		return ptr;
	}


	void OnHiCombo(class ABtlCharacterBase* DamageCharacter, class ABtlCharacterBase* Attacker, int HitCount, int TotalDamage);
	void OnHitPlayerTarget(int HitCount);
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
