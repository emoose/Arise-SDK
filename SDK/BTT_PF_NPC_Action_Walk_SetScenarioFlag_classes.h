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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_SetScenarioFlag.BTT_PF_NPC_Action_Walk_SetScenarioFlag_C
// 0x0058 (0x00F8 - 0x00A0)
class UBTT_PF_NPC_Action_Walk_SetScenarioFlag_C : public UBTT_PF_NPC_Action_Walk_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BKS_ScenarioFlagName;                                     // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_ScenarioFlagValue;                                    // 0x00D0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_SetScenarioFlag.BTT_PF_NPC_Action_Walk_SetScenarioFlag_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_SetScenarioFlag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
