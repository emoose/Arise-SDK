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

// BlueprintGeneratedClass BP_PF_NPC_AT_PlayDeriveAction.BP_PF_NPC_AT_PlayDeriveAction_C
// 0x0010 (0x0068 - 0x0058)
class UBP_PF_NPC_AT_PlayDeriveAction_C : public UBP_PF_NPC_AT_LoopEnd_C
{
public:
	TArray<struct FName>                               DeriveActionNames;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_AT_PlayDeriveAction.BP_PF_NPC_AT_PlayDeriveAction_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
