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

// BlueprintGeneratedClass BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_PC_AnimState_UseRootMotionBase_C : public UASState_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C");
		return ptr;
	}


	void ReceiveEndPlay(class UAnimInstance* AnimInstance);
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
