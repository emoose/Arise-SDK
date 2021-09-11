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

// BlueprintGeneratedClass BP_PF_PC_AnimState_ApplyMaxSpeedEnable.BP_PF_PC_AnimState_ApplyMaxSpeedEnable_C
// 0x0001 (0x0039 - 0x0038)
class UBP_PF_PC_AnimState_ApplyMaxSpeedEnable_C : public UASState_BlueprintBase
{
public:
	TEnumAsByte<EPFActorMovementState>                 ApplyState;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_PC_AnimState_ApplyMaxSpeedEnable.BP_PF_PC_AnimState_ApplyMaxSpeedEnable_C");
		return ptr;
	}


	void ReceiveEndPlay(class UAnimInstance* AnimInstance);
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
