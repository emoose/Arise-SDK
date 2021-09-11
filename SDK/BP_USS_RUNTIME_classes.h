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

// BlueprintGeneratedClass BP_USS_RUNTIME.BP_USS_RUNTIME_C
// 0x0021 (0x00A9 - 0x0088)
class UBP_USS_RUNTIME_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	float                                              EffectTime;                                               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoolTime;                                                 // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EffectTimerHandle;                                        // 0x0098(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                CoolTimeHandle;                                           // 0x00A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsCoolTime;                                              // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_RUNTIME.BP_USS_RUNTIME_C");
		return ptr;
	}


	bool GetUnitParameterAsBool(const struct FBtlUnitParameterLabel& Label);
	int GetUnitParameterAsInt(const struct FBtlUnitParameterLabel& Label);
	float GetUnitParameter(const struct FBtlUnitParameterLabel& Label);
	void OnCoolTimeOut();
	void SetEffectTime(float EffectTime);
	void OnTimeOut();
	void SetEffectTimeIfNeeded();
	void SetCoolTimeIfNeeded();
	void SetCoolTime(float CoolTime);
	void CoolTimeOut();
	void OnApplySkill();
	void OnDeadCharacter(class ABtlCharacterBase* SelfCharacter, class ABtlCharacterBase* Attacker, const struct FBtlArtsData& PreArts);
	void OnDead();
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_USS_RUNTIME(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
