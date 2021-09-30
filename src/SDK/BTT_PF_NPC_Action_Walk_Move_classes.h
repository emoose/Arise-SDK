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

// BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C
// 0x0110 (0x01B0 - 0x00A0)
class UBTT_PF_NPC_Action_Walk_Move_C : public UBTT_PF_NPC_Action_Walk_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BKS_MoveLocation;                                         // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     Destination;                                              // 0x00D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BKS_Move;                                                 // 0x00E0(0x0028) (Edit, BlueprintVisible)
	class AAIController*                               OwnerController;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BKS_WaypointWaitParam;                                    // 0x0110(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_WaypointLook;                                         // 0x0138(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_ActionKey;                                            // 0x0160(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_StopDisableTime;                                      // 0x0188(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C");
		return ptr;
	}


	void CheckObstruction(const struct FVector& Location, const struct FVector& Forword, float DeltaSeconds, bool* Obstructed);
	void SetRotationRate(const struct FVector& Location, const struct FVector& Forword, class UPawnMovementComponent* Movement);
	void StopMovement(class AActor* Actor, const struct FScriptDelegate& Delegate, bool MoveCompleted);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void CustomEvent_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
