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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_WaitForApproaching.BTT_PF_NPC_Action_Walk_WaitForApproaching_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTT_PF_NPC_Action_Walk_WaitForApproaching_C : public UBTT_PF_NPC_Action_Walk_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BKS_WaypointWaitParam;                                    // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_WaitForApproaching.BTT_PF_NPC_Action_Walk_WaitForApproaching_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_WaitForApproaching(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
