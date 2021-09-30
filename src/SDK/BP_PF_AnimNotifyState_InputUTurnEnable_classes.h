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

// BlueprintGeneratedClass BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C
// 0x0001 (0x0031 - 0x0030)
class UBP_PF_AnimNotifyState_InputUTurnEnable_C : public UAnimNotifyState
{
public:
	bool                                               bWalkTurn;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	void SetInputUTurnEnable(class AActor* InActor, bool bEnable);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
