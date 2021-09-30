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

// BlueprintGeneratedClass BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C
// 0x0009 (0x0091 - 0x0088)
class UBP_BTL_USS_PINCH_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	bool                                               IsDead;                                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C");
		return ptr;
	}


	void OnPinchToNormal(class UBtlStatusComponent* SelfComponent);
	void OnNormalToPinch(class UBtlStatusComponent* SelfComponent);
	void OnDisabled();
	void OnEnabled();
	void OnDeadUnit(class ABtlCharacterBase* SelfCharacter, class ABtlCharacterBase* Attacker, const struct FBtlArtsData& PreArts);
	void OnRaiseDeadUnit(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void ExecuteUbergraph_BP_BTL_USS_PINCH(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
