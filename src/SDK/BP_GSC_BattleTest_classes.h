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

// BlueprintGeneratedClass BP_GSC_BattleTest.BP_GSC_BattleTest_C
// 0x0050 (0x00D0 - 0x0080)
class UBP_GSC_BattleTest_C : public UBattleSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	class UBtl_EncountEffectWidget*                    EncountEffectWidget;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsLoadAssetsComplete;                                     // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyEncountEffect;                                     // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHiddenFieldComplete;                                    // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowBattleFieldComplete;                                // 0x0093(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FBtlEncountGroupParam>               EncountInfo;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               IsBattleSection;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyHiddenField;                                       // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FTimerHandle                                ScreenMaskSafetyHandle;                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FTimerHandle                                ScreenMaskHandle;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     BattleSceneState;                                         // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_BattleTest.BP_GSC_BattleTest_C");
		return ptr;
	}


	bool IsPausePossibleState();
	void OnReadyBattle();
	void TickPreInitialize();
	void TickWaitShowBattleField();
	void TickWaitHiddenField();
	void OnEncountEffectStarted();
	void PreInitialize();
	void TickWaitScreenMask();
	void TickWaitLoadingAssets();
	void InitializeBattleState();
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BeginScene();
	void BPE_Wakeup(unsigned char PrevScene);
	void EventHideFieldMap();
	void EventRefreshFeildMap();
	void BPE_Initialize(ESceneInitializeMode initMode);
	void Battle_ForceTerminationBattleComplated();
	void OnScreenMaskCheck();
	void OnScreenMaskCheckSafety();
	void ExecuteUbergraph_BP_GSC_BattleTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
