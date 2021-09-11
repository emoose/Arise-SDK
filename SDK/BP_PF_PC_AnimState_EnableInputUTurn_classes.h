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

// BlueprintGeneratedClass BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C
// 0x0001 (0x0039 - 0x0038)
class UBP_PF_PC_AnimState_EnableInputUTurn_C : public UASState_BlueprintBase
{
public:
	bool                                               bWalkTurn;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_PC_AnimState_EnableInputUTurn.BP_PF_PC_AnimState_EnableInputUTurn_C");
		return ptr;
	}


	void SetInputEnable(class UAnimInstance* InAnimInstance, bool bInEnable);
	void ReceiveEndPlay(class UAnimInstance* AnimInstance);
	void ReceiveFinishedTick(class UAnimInstance* AnimInstance);
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
