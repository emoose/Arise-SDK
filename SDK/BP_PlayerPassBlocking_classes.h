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

// BlueprintGeneratedClass BP_PlayerPassBlocking.BP_PlayerPassBlocking_C
// 0x0160 (0x04B8 - 0x0358)
class ABP_PlayerPassBlocking_C : public APlayerPassBlocking
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class UEventComponent*                             EventComponent;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_QuestComponent_C*                        BP_QuestComponent;                                        // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShortChatComponent*                         ShortChat;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Blocking;                                                 // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Overlaped;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHitEvent;                                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	struct FVector                                     BoxSize;                                                  // 0x03AC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OverlapOffset;                                            // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<struct FScenarioConditionNamed>             ActiveScenario;                                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StringDictionaryName;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StringDictionaryPath;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    PrimitiveMaterial;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        BoxIndexs;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BoxVers;                                                  // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAriseGameProcess*                           GameProcess;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    WatchScriptProcess;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_EventManager_C*                          EventManager;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoPlayEvent;                                              // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bEventPlayed;                                             // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FPassBlockData                              MyDatabaseRecord;                                         // 0x0458(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayAsyncLoadProcessOnce;                                // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSystemBlock;                                             // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              CheckInstallInterval;                                     // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPassblockActive;                                         // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class ABP_PF_NpcObject_C*                          NPCObject;                                                // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPassBlocking.BP_PlayerPassBlocking_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void SystemBlockManagement(float Tick);
	void DoProcess();
	void RunNpcTalkScript();
	void GetDatabaseRow(struct FPassBlockData* Record);
	void CanAcceptBlockAction(bool* bAccept);
	void RunScript();
	void ResizeAndRelocationPM();
	void SwitchScenarioCondition();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HIT);
	void BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void OnChangeScenarioCounter(int counter, int Prev);
	void OnChangeScenarioFlag(int Flag, bool bValid);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWatchScriptEvent();
	void OnPlayEvent();
	void OnShowEvent();
	void OnShowSysBlockMessage();
	void Set_NPC_PassBlocking(bool bActive);
	void EventDelayShowMessage();
	void ExecuteUbergraph_BP_PlayerPassBlocking(int EntryPoint);
	void DoPlayEvent__DelegateSignature();
	void WatchScriptProcess__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
