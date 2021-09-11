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

// BlueprintGeneratedClass BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_AnimState_EnableRotationControl_C : public UASState_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C");
		return ptr;
	}


	void SetRotationControlEnable(class UAnimInstance* InAnimInstance, bool InEnable);
	void ReceiveEndPlay(class UAnimInstance* AnimInstance);
	void ReceiveFinishedTick(class UAnimInstance* AnimInstance);
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
