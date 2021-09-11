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

// BlueprintGeneratedClass BP_EventAreaBase.BP_EventAreaBase_C
// 0x0132 (0x045A - 0x0328)
class ABP_EventAreaBase_C : public AEventActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        DebugText;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Interaction;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventComponent*                             EventComponent;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               EventArea;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAriseGameMode*                              GameMode;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AEventManager*                               EventManager;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoPlayEvent;                                              // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDoPostMapJump;                                           // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMapjumped;                                               // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	TArray<struct FVector>                             BoxVers;                                                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BoxIndexs;                                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     AreaSize;                                                 // 0x03B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bOnetime;                                                 // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayed;                                                  // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PrimitiveMaterial;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_GSC_Field_C*                             FieldController;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreloadDistance;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPreloadDistance;                                     // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInteraction;                                          // 0x03D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	class ABP_EventAreaInteraction_C*                  InteractionActor;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      InteractionIcon;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionIconOffset;                                    // 0x03E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UClass*                                      InteractionActorClass;                                    // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugEventArea;                                          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              CollisionDelayTick;                                       // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCollisionEnable;                                         // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               illegalCollisionSettings;                                 // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayAtScenarioConditionSatisfy;                          // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x040B(0x0005) MISSED OFFSET
	class UEventSettingsDatabase*                      EventDatabase;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPFNpcDefineID>                      ExcludeNpc;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       NameNpcManager;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceAreaInCheckOnPFStart;                               // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRunInEvent;                                         // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPostLoadGame;                                            // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNpcSpawn;                                                // 0x0433(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoPostMapjumpRuntime;                                    // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreLoadComponent;                                        // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0436(0x0002) MISSED OFFSET
	struct FScenarioConditionNamed                     PreLoadCondition;                                         // 0x0438(0x0020) (Edit, BlueprintVisible)
	bool                                               bSatisfyConditionPostMapJumpSkipNpcSpawn;                 // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNpcClearFreeObjectPool;                                  // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventAreaBase.BP_EventAreaBase_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void _ClearFreeObjectPoolNpc();
	void _DespawnNpc();
	void _SetPreMapJumped();
	void _SetMapJumped();
	void _SetAreaMeshColor(bool Active);
	void _BuildProcedualMesh();
	void _SceneStateCheck(bool* bOk);
	void _ScreenMaskedOnMapjumpEvent();
	void _IsNpcSpawned(bool bCheckedSpawn, bool* bSpawnedOrDontCare);
	void _SpawnNpc(bool* bSpawn);
	void DebugEventStart();
	void CheckIligalCollision();
	void SetEventAreaCollisionEnable(bool bEnable);
	void ResizeEventArea();
	void UpdateMeshSize();
	void CanPlayEvent_(bool* bCanPlay);
	void UpdateDebugText(bool bConstruction);
	void EnableEventCollision();
	void IsPlayerCollision_(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer);
	void UserConstructionScript();
	void OnPlayEvent();
	void OnScenarioCounterChange(int counter, int Prev);
	void OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void OnFieldWakeup();
	void OnScenarioFlagChange(int Flag, bool bValid);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void OnLoadGame();
	void On_Event_Finalize(const struct FString& EventName, const struct FString& OptionName);
	void ExecuteUbergraph_BP_EventAreaBase(int EntryPoint);
	void DoPlayEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
