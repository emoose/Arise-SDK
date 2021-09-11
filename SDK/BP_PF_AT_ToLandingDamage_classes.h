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

// BlueprintGeneratedClass BP_PF_AT_ToLandingDamage.BP_PF_AT_ToLandingDamage_C
// 0x0000 (0x0054 - 0x0054)
class UBP_PF_AT_ToLandingDamage_C : public UBP_PF_AT_ToLandingBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AT_ToLandingDamage.BP_PF_AT_ToLandingDamage_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
