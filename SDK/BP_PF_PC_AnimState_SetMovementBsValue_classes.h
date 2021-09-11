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

// BlueprintGeneratedClass BP_PF_PC_AnimState_SetMovementBsValue.BP_PF_PC_AnimState_SetMovementBsValue_C
// 0x0004 (0x003C - 0x0038)
class UBP_PF_PC_AnimState_SetMovementBsValue_C : public UASState_BlueprintBase
{
public:
	float                                              Value;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_PC_AnimState_SetMovementBsValue.BP_PF_PC_AnimState_SetMovementBsValue_C");
		return ptr;
	}


	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
