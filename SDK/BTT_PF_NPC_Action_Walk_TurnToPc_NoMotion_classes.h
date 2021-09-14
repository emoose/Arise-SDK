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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_TurnToPc_NoMotion.BTT_PF_NPC_Action_Walk_TurnToPc_NoMotion_C
// 0x0009 (0x00A9 - 0x00A0)
class UBTT_PF_NPC_Action_Walk_TurnToPc_NoMotion_C : public UBTT_PF_NPC_Action_Walk_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EPFNpcActorWalk>                       WalkType;                                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_TurnToPc_NoMotion.BTT_PF_NPC_Action_Walk_TurnToPc_NoMotion_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CustomEvent_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_TurnToPc_NoMotion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
