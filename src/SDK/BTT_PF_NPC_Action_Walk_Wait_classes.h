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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_Wait.BTT_PF_NPC_Action_Walk_Wait_C
// 0x00AC (0x014C - 0x00A0)
class UBTT_PF_NPC_Action_Walk_Wait_C : public UBTT_PF_NPC_Action_Walk_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BKS_MoveLocation;                                         // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_MoveIndex;                                            // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_Move;                                                 // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_MoveLastIndex;                                        // 0x0120(0x0028) (Edit, BlueprintVisible)
	int                                                NodeIndex;                                                // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_Wait.BTT_PF_NPC_Action_Walk_Wait_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Wait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
