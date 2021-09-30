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

// BlueprintGeneratedClass BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C
// 0x0060 (0x0100 - 0x00A0)
class UBTT_PF_NPC_Action_MoveTo_Move_C : public UBTT_PF_NPC_Action_MoveTo_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      MoveLocation;                                             // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class AAIController*                               OwnerController;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      Action;                                                   // 0x00D8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C");
		return ptr;
	}


	void SetActionUpdate();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CustomEvent_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
