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

// BlueprintGeneratedClass BP_PF_EnSym_LookOutState.BP_PF_EnSym_LookOutState_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_EnSym_LookOutState_C : public UBP_PF_EnSym_BaseState_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_EnSym_LookOutState.BP_PF_EnSym_LookOutState_C");
		return ptr;
	}


	void Finished(class UAnimInstance* AnimInstance);
	void ReceiveFinishedTick(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
