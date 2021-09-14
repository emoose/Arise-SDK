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

// BlueprintGeneratedClass BP_ASTR_BTL_ElapsedState.BP_ASTR_BTL_ElapsedState_C
// 0x0004 (0x0054 - 0x0050)
class UBP_ASTR_BTL_ElapsedState_C : public UASTransition_BlueprintBase
{
public:
	float                                              ElapsedSec;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ASTR_BTL_ElapsedState.BP_ASTR_BTL_ElapsedState_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
