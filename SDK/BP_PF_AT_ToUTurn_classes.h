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

// BlueprintGeneratedClass BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C
// 0x0000 (0x0050 - 0x0050)
class UBP_PF_AT_ToUTurn_C : public UASTransition_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C");
		return ptr;
	}


	void IsWalkUTurn(bool* Out);
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
