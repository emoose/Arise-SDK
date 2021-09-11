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

// BlueprintGeneratedClass BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C
// 0x0009 (0x0099 - 0x0090)
class UBP_USS_GUARD_IGNITION_C : public UBP_USS_ALWAYS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	bool                                               IsJustGuardIgnition;                                      // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C");
		return ptr;
	}


	float GetEffectValue(const struct FAriseSkillEffect& Effect);
	void OnGuardIgnitionRankChanged();
	void OnEnabled();
	void OnInitialized();
	void ExecuteUbergraph_BP_USS_GUARD_IGNITION(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
