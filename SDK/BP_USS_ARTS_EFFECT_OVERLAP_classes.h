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

// BlueprintGeneratedClass BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C
// 0x000C (0x00C4 - 0x00B8)
class UBP_USS_ARTS_EFFECT_OVERLAP_C : public UBP_USS_ARTS_EFFECT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (Transient, DuplicateTransient)
	int                                                ArtsOverlapCount;                                         // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C");
		return ptr;
	}


	float GetEffectValue(const struct FAriseSkillEffect& Effect);
	void OnUnapplySkill();
	void OnApplySkill();
	void OnEnabled();
	void OnEndArts(const struct FBtlArtsHandle& ArtsHandle);
	void ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
