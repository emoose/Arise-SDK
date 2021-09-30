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

// BlueprintGeneratedClass BP_PF_AT_SearchOwl_ToTakeOff.BP_PF_AT_SearchOwl_ToTakeOff_C
// 0x0008 (0x0058 - 0x0050)
class UBP_PF_AT_SearchOwl_ToTakeOff_C : public UASTransition_BlueprintBase
{
public:
	struct FName                                       MotionName;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AT_SearchOwl_ToTakeOff.BP_PF_AT_SearchOwl_ToTakeOff_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
