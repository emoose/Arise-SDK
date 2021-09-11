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

// BlueprintGeneratedClass BP_PF_NPC_AT_ToDeriveAction.BP_PF_NPC_AT_ToDeriveAction_C
// 0x0008 (0x0058 - 0x0050)
class UBP_PF_NPC_AT_ToDeriveAction_C : public UASTransition_BlueprintBase
{
public:
	struct FName                                       KeyName;                                                  // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_AT_ToDeriveAction.BP_PF_NPC_AT_ToDeriveAction_C");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
