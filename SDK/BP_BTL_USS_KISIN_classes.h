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

// BlueprintGeneratedClass BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C
// 0x000C (0x0094 - 0x0088)
class UBP_BTL_USS_KISIN_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	int                                                RefCount;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C");
		return ptr;
	}


	float GetEffectValue(const struct FAriseSkillEffect& Effect);
	void InitializeRefCount();
	void OnTargetCharacterChanged(class ABtlCharacterBase* Unit, class ABtlCharacterBase* NewCharacter, class ABtlCharacterBase* PrevCharacter);
	void OnTargetChanged(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent);
	void TargetChanged(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent);
	void OnFocus();
	void OnOutOfFocus();
	void OnDisabled();
	void OnEnabled();
	void OnDeadUnit(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void ExecuteUbergraph_BP_BTL_USS_KISIN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
