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

// BlueprintGeneratedClass BP_PF_InteractionCondition_Ladder.BP_PF_InteractionCondition_Ladder_C
// 0x0000 (0x0030 - 0x0030)
class UBP_PF_InteractionCondition_Ladder_C : public UPFInteractCondition_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractionCondition_Ladder.BP_PF_InteractionCondition_Ladder_C");
		return ptr;
	}


	bool K2_CanEnter(class AActor* InReceiveActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
