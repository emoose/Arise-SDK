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

// BlueprintGeneratedClass BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C
// 0x0008 (0x0090 - 0x0088)
class UBP_BTL_USS_JUST_HEAL_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C");
		return ptr;
	}


	void OnJustGuard(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver);
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_BTL_USS_JUST_HEAL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
