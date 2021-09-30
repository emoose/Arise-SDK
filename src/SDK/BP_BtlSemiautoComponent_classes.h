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

// BlueprintGeneratedClass BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C
// 0x0058 (0x0208 - 0x01B0)
class UBP_BtlSemiautoComponent_C : public UBtlSemiautoComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class UBtlActionProcessor*                         BtlActionProcessor;                                       // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_BtlCharacterBase_C*                      BtlUnit;                                                  // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBtlActionQuery*                             StepQuery;                                                // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	class UBtlActionQuery*                             RequestArtsQuery;                                         // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBtlActionQuery*                             RequestGuardEndQuery;                                     // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitMove;                                                 // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FindMovePoint;                                            // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	float                                              MoveTimer;                                                // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindSafeTimer;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FindSafeDirection;                                        // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	struct FVector                                     SafeDirection;                                            // 0x01F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveProcessTimer;                                         // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C");
		return ptr;
	}


	bool CanMysticArts(const struct FName& ArtsLabel);
	EBtlSemiautoPhase CanImmediatelyArts(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData);
	bool IsOperationSemiauto();
	void GetNextPhaseForMove(bool IsAttackState, bool IsAirArts, bool IsAttackArts, bool IsExternalOrder, const struct FBtlResultArtsRange& ArtsRange, EBtlSemiautoPhase* NextPhase);
	void PlayMystic();
	void PhaseComboEnd();
	void PhaseMove();
	void PhaseMoveToSafePlace();
	void PhaseMoveAwayFromTarget();
	void PhaseJumpToPoint();
	void PhaseJump();
	void GuardEndRequest(bool* Wait);
	void PauseAI(bool on);
	void PhaseComboStart();
	void PlayComboStart(bool* Result);
	void PhaseWaitNextCombo();
	void PhaseAutoStep();
	void PhaseAutoGuard();
	void PhaseArtsMagic();
	void PhaseStep();
	void PhaseIdle();
	void GetActionTarget(bool IgnoreTemporary, class ABtlCharacterBase** Target);
	void PlayAutoStep();
	void PlayAutoGuard();
	void PlayArtsMagic();
	void GetOwnerToTargetYaw(float* Yaw);
	void PlayStepToTurnTarget();
	void BtlChangeEvent(EBattleState NowState, EBattleState PreState);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void AttackEnd(class ABtlCharacterBase* SelfCharacter, EBattleActionState NowState, const struct FBtlArtsData& PreArts);
	void ExecuteUbergraph_BP_BtlSemiautoComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
