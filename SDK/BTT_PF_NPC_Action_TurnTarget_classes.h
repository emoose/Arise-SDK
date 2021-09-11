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

// BlueprintGeneratedClass BTT_PF_NPC_Action_TurnTarget.BTT_PF_NPC_Action_TurnTarget_C
// 0x00C0 (0x0160 - 0x00A0)
class UBTT_PF_NPC_Action_TurnTarget_C : public UBTT_PF_NPC_Action_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetLocation;                                           // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Action;                                                   // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ActionKey;                                                // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TurnImmediate;                                            // 0x0120(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EPFActorInteractState>                 SavedInteractReceiverState;                               // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class UPFActorComponent*                           ActorComponent;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APawn*                                       Actor;                                                    // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_TurnTarget.BTT_PF_NPC_Action_TurnTarget_C");
		return ptr;
	}


	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_TurnTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
