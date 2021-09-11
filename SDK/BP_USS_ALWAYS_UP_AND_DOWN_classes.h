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

// BlueprintGeneratedClass BP_USS_ALWAYS_UP_AND_DOWN.BP_USS_ALWAYS_UP_AND_DOWN_C
// 0x0000 (0x0090 - 0x0090)
class UBP_USS_ALWAYS_UP_AND_DOWN_C : public UBP_USS_ALWAYS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USS_ALWAYS_UP_AND_DOWN.BP_USS_ALWAYS_UP_AND_DOWN_C");
		return ptr;
	}


	float GetEffectValue(const struct FAriseSkillEffect& Effect);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
