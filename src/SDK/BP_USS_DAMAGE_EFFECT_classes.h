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

// BlueprintGeneratedClass BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C
// 0x0008 (0x0090 - 0x0088)
class UBP_USS_DAMAGE_EFFECT_C : public UBtlUnitSkillScriptBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C");
		return ptr;
	}


	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_BP_USS_DAMAGE_EFFECT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
