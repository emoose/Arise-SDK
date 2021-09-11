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

// BlueprintGeneratedClass BP_BTL_USS_GUARD_HATE_UP.BP_BTL_USS_GUARD_HATE_UP_C
// 0x001F (0x00C8 - 0x00A9)
class UBP_BTL_USS_GUARD_HATE_UP_C : public UBP_USS_RUNTIME_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (Transient, DuplicateTransient)
	float                                              EffectInterval;                                           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FTimerHandle                                IntervalTimerHandle;                                      // 0x00C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_USS_GUARD_HATE_UP.BP_BTL_USS_GUARD_HATE_UP_C");
		return ptr;
	}


	void OnHateEffect();
	void BeginGuardAction();
	void EndGuardAction();
	void OnEnabled();
	void OnDisabled();
	void OnApplySkill();
	void OnUnapplySkill();
	void ExecuteUbergraph_BP_BTL_USS_GUARD_HATE_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
