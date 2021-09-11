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

// BlueprintGeneratedClass BP_BtlUnitManager.BP_BtlUnitManager_C
// 0x0010 (0x0410 - 0x0400)
class ABP_BtlUnitManager_C : public ABtlUnitManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                PostSpawnEnemyReinforcementHandle;                        // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlUnitManager.BP_BtlUnitManager_C");
		return ptr;
	}


	void CancelAttack_AllUnit();
	bool SwapPartyOrder(class ABtlCharacterBase* FromUnit, class ABtlCharacterBase* ToUnit);
	void SwapFront2SubInternal(class ABtlCharacterBase* FromUnit, class ABtlCharacterBase* ToUnit);
	void ForceUpdateAI_AllUnit();
	void SpawnEnemyReinforcement(struct FBtlUnitEnemyReinforcementData* SpawnElement, bool* Finish);
	void OnChangePartyOrder(EArisePartyID FromPartyID, EPCOrder FromOrder, EArisePartyID ToPartyID, EPCOrder ToOrder);
	void PlayAI_AllUnit(EBtlBitFlagCategory Category);
	void StopAI_AllUnit(EBtlBitFlagCategory Category);
	void UserConstructionScript();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature(const struct FBtlCutSceneEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature(const struct FBtlCutSceneBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void RequestAddEnemyReinforcement();
	void OnSpawnReinforrcement();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature(const struct FBtlSpecialStrikeBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature(const struct FBtlSpecialStrikeEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature(class ABtlCharacterBase* Unit, EBtlSemiautoPhase OldState, EBtlSemiautoPhase NewState);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature(class ABtlCharacterBase* Unit, EAbnormalType AbnormalType);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature(class ABtlCharacterBase* Unit, EAbnormalType AbnormalType);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature(class ABtl_AIControllerBase* BtlAIController);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature(class ABtl_AIControllerBase* BtlAIController);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature(class ABtlCharacterBase* NewMainMember, class ABtlCharacterBase* NewSubMember);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature(EOperationMode OldMode, EOperationMode NewMode);
	void ExecuteUbergraph_BP_BtlUnitManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
