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

// BlueprintGeneratedClass BPD_DebugCommand.BPD_DebugCommand_C
// 0x000A (0x0482 - 0x0478)
class ABPD_DebugCommand_C : public ABtlDebugCommand
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	bool                                               FrameSkip;                                                // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseScript;                                                // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPD_DebugCommand.BPD_DebugCommand_C");
		return ptr;
	}


	void SetUnlimitedOverlimit(class UBtlStatusComponent* BattleStatusComponent, bool on);
	void UserConstructionScript();
	bool PostChangeProfile(const struct FBtlDebugParameter& Prev);
	void @Pause_SkipFrame();
	void BattleStartProfile();
	void Received_Begin();
	void EventBack();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement);
	void ReceiveTick(float DeltaSeconds);
	void OnBattleStateChange(EBattleState NowState, EBattleState PrevState);
	void OnBattleSubStateEnd(EBattleState State);
	void OnBattleSubStateStart(EBattleState State);
	void ReceiveBeginPlay();
	void OnSwitchBeginPIEAndSIE(bool bIsSimulating);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void ExecuteUbergraph_BPD_DebugCommand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
