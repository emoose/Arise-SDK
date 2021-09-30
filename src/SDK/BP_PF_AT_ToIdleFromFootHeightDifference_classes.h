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

// BlueprintGeneratedClass BP_PF_AT_ToIdleFromFootHeightDifference.BP_PF_AT_ToIdleFromFootHeightDifference_C
// 0x0010 (0x0060 - 0x0050)
class UBP_PF_AT_ToIdleFromFootHeightDifference_C : public UASTransition_BlueprintBase
{
public:
	struct FString                                     MotionName;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AT_ToIdleFromFootHeightDifference.BP_PF_AT_ToIdleFromFootHeightDifference_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
