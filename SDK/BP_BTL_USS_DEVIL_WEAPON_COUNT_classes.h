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

// BlueprintGeneratedClass BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C
// 0x0009 (0x0091 - 0x0088)
class UBP_BTL_USS_DEVIL_WEAPON_COUNT_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	EArisePartyID                                      PartyId;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C");
		return ptr;
	}


	void GetPartyId(EArisePartyID* EnumValue);
	void AddDefautCount();
	void OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnDeadEnemy();
	void OnDisabled();
	void OnEnabled();
	void ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
