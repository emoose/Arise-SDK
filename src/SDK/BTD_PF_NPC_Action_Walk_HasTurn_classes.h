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

// BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_HasTurn.BTD_PF_NPC_Action_Walk_HasTurn_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTD_PF_NPC_Action_Walk_HasTurn_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_HasTurn.BTD_PF_NPC_Action_Walk_HasTurn_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
