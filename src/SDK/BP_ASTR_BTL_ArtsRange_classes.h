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

// BlueprintGeneratedClass BP_ASTR_BTL_ArtsRange.BP_ASTR_BTL_ArtsRange_C
// 0x0000 (0x0050 - 0x0050)
class UBP_ASTR_BTL_ArtsRange_C : public UASTransition_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ASTR_BTL_ArtsRange.BP_ASTR_BTL_ArtsRange_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
