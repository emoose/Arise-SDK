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

// BlueprintGeneratedClass BP_EventScriptPlayArea.BP_EventScriptPlayArea_C
// 0x00E4 (0x040C - 0x0328)
class ABP_EventScriptPlayArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UEventComponent*                             EventComponent;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PlayArea;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_QuestComponent_C*                        BP_QuestComponent;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     AreaSize;                                                 // 0x0360(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BoxVers;                                                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BoxIndexs;                                                // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    PrimitiveMaterial;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAriseGameProcess*                           GameProcess;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    WatchScriptProcess;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     NeverRunScriptFlag;                                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FScenarioConditionNamed>             ScenarioConditions;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDoPostMapJump;                                           // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenMaskedPostMapJump;                                 // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSatisfyConditionPostMapJump;                             // 0x03DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMapjumped;                                               // 0x03DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class ABP_EventManager_C*                          EventManager;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayScriptProcess;                                        // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeScenarioEvent;                                      // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bRestartArea;                                             // 0x0408(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSaveSuspend;                                         // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoPostMapjumpRuntime;                                    // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSatisfyConditionPostMapJumpSkipNpcSpawn;                 // 0x040B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventScriptPlayArea.BP_EventScriptPlayArea_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void SetPreMapJumped();
	void DestroyProcess();
	void _ScreenMaskedOnMapjumpEvent();
	void SetMapJumped();
	void _AutoSaveResume();
	void _AutoSaveSuspend();
	void _SceneStateCheck(bool* bOk);
	void CheckRestartArea();
	void UnloadScript();
	void LoadScript();
	void DoProcess();
	void CanPlayEvent_(bool* bCanPlay);
	void IsSatisfyScenarioCondition(bool* bSatisfy);
	void ScenarioFlagCheck(bool* bOn);
	void UpdateMeshSize();
	void RunScript();
	void IsPlayerActor(class AActor* Actor, bool* bPlayer);
	void ResizeArea();
	void UserConstructionScript();
	void Setup_Event_Dispatchers();
	void OnPlayScript();
	void OnChangeScenario();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnWatchEventScript();
	void BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnChangeScenarioFlag(int Flag, bool bValid);
	void OnChangeScenarioCounter(int counter, int Prev);
	void ExecuteUbergraph_BP_EventScriptPlayArea(int EntryPoint);
	void ChangeScenarioEvent__DelegateSignature();
	void PlayScriptProcess__DelegateSignature();
	void WatchScriptProcess__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
