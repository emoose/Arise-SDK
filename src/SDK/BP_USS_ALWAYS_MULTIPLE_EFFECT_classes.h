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

// BlueprintGeneratedClass BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C
// 0x0018 (0x00A0 - 0x0088)
class UBP_USS_ALWAYS_MULTIPLE_EFFECT_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	TArray<float>                                      Effects;                                                  // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C");
		return ptr;
	}


	void OnEnabled();
	void OnInitialized();
	void ExecuteUbergraph_BP_USS_ALWAYS_MULTIPLE_EFFECT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
