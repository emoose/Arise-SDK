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

// BlueprintGeneratedClass BP_PF_NPC_AnimNotify_PlayActionLatestQueue.BP_PF_NPC_AnimNotify_PlayActionLatestQueue_C
// 0x0008 (0x0040 - 0x0038)
class UBP_PF_NPC_AnimNotify_PlayActionLatestQueue_C : public UAnimNotify
{
public:
	struct FName                                       DefaultActionKey;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_AnimNotify_PlayActionLatestQueue.BP_PF_NPC_AnimNotify_PlayActionLatestQueue_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
