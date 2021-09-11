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

// BlueprintGeneratedClass BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C
// 0x0059 (0x04FA - 0x04A1)
class ABP_PF_Gimmick_PlayerAction_Base_C : public ABP_PF_GimmickBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventComponent*                             EventComponent;                                           // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_EventManager_C*                          EventManager;                                             // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMapjumped;                                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayed;                                                  // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArisePartyID                                      ActParty;                                                 // 0x04CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x04CB(0x0005) MISSED OFFSET
	TArray<struct FMapGimmickShortChatBlock>           PreShortChatParam;                                        // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMapGimmickShortChatBlock>           PostShortChatParam;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TPCost;                                                   // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckScenario;                                           // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTP;                                                   // 0x04F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateQuestAuto;                                         // 0x04F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetPlayer;                                             // 0x04F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostEventBlackOut;                                       // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableUnlockScenario;                                    // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C");
		return ptr;
	}


	void IsOverScenarioFlag(bool* Result);
	void FreezeCharacter(bool Enable);
	void GetTPCost(int* Value);
	void ResetPlayer();
	void UnlockProcess();
	void IsEnoughTP(bool* Result);
	void InteractLock(class ABP_PF_Gimmick_InteractActorBase_C* Interact, bool Enable);
	void DebugUnlocked();
	void InteractWakeup(class ABP_PF_Gimmick_InteractActorBase_C* Interact);
	void InteractSleep(class ABP_PF_Gimmick_InteractActorBase_C* Interact);
	void GetInteract(class UChildActorComponent* ChildActor, class ABP_PF_Gimmick_InteractActorBase_C** Result);
	void SelectShortChat(TArray<struct FMapGimmickShortChatBlock>* Params, struct FString* ID, float* Interval);
	void SetDebugLabel();
	void PlaySequencer();
	void ConsumeTP();
	void CheckShortChatScenarioCondition(TArray<struct FMapGimmickShortChatBlock>* ShortChatBlock, int* idx);
	void PlayShortChat(const struct FString& ShortChatID, bool* bResult);
	void RandomizeShortChat(TArray<struct FMapGimmickShortChatID>* ShortChatID, struct FString* ID, float* Interval);
	void IsMySelfEvent(const struct FString& EventName, bool* Same);
	void DebugEventStart();
	void UpdateDebugText(bool bConstruction);
	void IsPlayerCollision(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer);
	void UserConstructionScript();
	void PlayUnlockEvent();
	void RunPostEvent();
	void RunPreEvent(class AActor* Actor);
	void OnLockInteraction();
	void OnUnlockInteraction();
	void ReceiveBeginPlay();
	void OnScenarioFlagChange(int Flag, bool bValid);
	void OnScenarioCounterChange(int counter, int Prev);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnPostEvent(const struct FString& EventName, const struct FString& OptionName);
	void On_Receive_Interact(class AActor* InSender);
	void OnChangedScenarioCondition();
	void InitJustBeforePlaySequencer();
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void OnFoundTrapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPlayEvent();
	void Unlocked();
	void OnPostEventProcessNotify(const struct FString& EventName);
	void RunPostEventProcessNotify();
	void OnPFStart();
	void ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
