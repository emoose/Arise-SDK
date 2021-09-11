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

// BlueprintGeneratedClass BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C
// 0x0018 (0x00D0 - 0x00B8)
class UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C : public UBP_USS_AWAKE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (Transient, DuplicateTransient)
	float                                              EffectInterval;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FTimerHandle                                IntervalTimerHandle;                                      // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C");
		return ptr;
	}


	void OnAwakeEffect();
	void OnUnapplySkill();
	void OnApplySkill();
	void OnInitialized();
	void ExecuteUbergraph_BP_USS_AWAKE_OVER_LIMIT_REGENERATION(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
