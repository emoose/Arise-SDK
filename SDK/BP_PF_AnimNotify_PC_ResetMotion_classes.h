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

// BlueprintGeneratedClass BP_PF_AnimNotify_PC_ResetMotion.BP_PF_AnimNotify_PC_ResetMotion_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PF_AnimNotify_PC_ResetMotion_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_AnimNotify_PC_ResetMotion.BP_PF_AnimNotify_PC_ResetMotion_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
