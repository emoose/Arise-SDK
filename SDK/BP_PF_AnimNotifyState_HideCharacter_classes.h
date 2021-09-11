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

// BlueprintGeneratedClass BP_PF_AnimNotifyState_HideCharacter.BP_PF_AnimNotifyState_HideCharacter_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PF_AnimNotifyState_HideCharacter_C : public UAnimNotifyState
{
public:
	float                                              FadeOutTime;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AnimNotifyState_HideCharacter.BP_PF_AnimNotifyState_HideCharacter_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
