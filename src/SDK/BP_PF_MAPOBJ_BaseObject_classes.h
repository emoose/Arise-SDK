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

// BlueprintGeneratedClass BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C
// 0x0029 (0x0401 - 0x03D8)
class ABP_PF_MAPOBJ_BaseObject_C : public APFPlacementInteraction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               FoundTrap;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Label;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMinimapIcon>                          MiniMapIcon;                                              // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScenarioChange;                                          // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsQuestTarget;                                           // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bActive;                                                  // 0x03F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDE_PF_MAPOBJ_EventType>               EventType;                                                // 0x03F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UClass*                                      InteractActInfo;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebShowInfo;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C");
		return ptr;
	}


	bool GetActiveCondition();
	bool IsEnableChangeState();
	void GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor);
	bool Received_OnChangeState(float DeltaSeconds);
	void ChangeActive(bool bActive);
	void SetRecieverEnable(bool bEnable);
	void ReceiveUpdateActive();
	void UpdateActive();
	void GetCurrentQuestComponent(class UBP_QuestComponent_C** Component);
	void CheckQuest();
	void GetMinimapIconName(struct FString* Name);
	void OnFoundTrapIn();
	void UserConstructionScript();
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void Event_OnFoundTrapIn(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DB_ShowInformation();
	void ReceiveBeginPlay();
	void Event_OnChangeScenarioCounter(int counter, int Prev);
	void Event_OnChageScenarioFlag(int Flag, bool bValid);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void RequestUpdateActive();
	void ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
