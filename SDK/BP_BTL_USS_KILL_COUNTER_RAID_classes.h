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

// BlueprintGeneratedClass BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C
// 0x0009 (0x0091 - 0x0088)
class UBP_BTL_USS_KILL_COUNTER_RAID_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	bool                                               IsDefeated;                                               // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C");
		return ptr;
	}


	bool CanCounterRaid(class ABtlCharacterBase* Attacker);
	void DeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnDefeated();
	void OnTargetChanged();
	void TargetChanged(class ABtlCharacterBase* SelfCharacter, class UBtlTargetCursorComponent* NewTargetComponent, class ABtlCharacterBase* NewTargetCharacter, class UBtlTargetCursorComponent* PrevTargetComponent);
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
