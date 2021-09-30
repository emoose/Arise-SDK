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

// BlueprintGeneratedClass BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C
// 0x0008 (0x0090 - 0x0088)
class UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C");
		return ptr;
	}


	void OnDamageCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue);
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_BTL_USS_ALLY_DAMAGE_ANGER_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
