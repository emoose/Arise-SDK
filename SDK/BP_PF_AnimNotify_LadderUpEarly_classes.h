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

// BlueprintGeneratedClass BP_PF_AnimNotify_LadderUpEarly.BP_PF_AnimNotify_LadderUpEarly_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_AnimNotify_LadderUpEarly_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AnimNotify_LadderUpEarly.BP_PF_AnimNotify_LadderUpEarly_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
