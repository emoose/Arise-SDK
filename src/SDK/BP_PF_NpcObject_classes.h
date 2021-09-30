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

// BlueprintGeneratedClass BP_PF_NpcObject.BP_PF_NpcObject_C
// 0x01BE (0x05E6 - 0x0428)
class ABP_PF_NpcObject_C : public APFPlacementNpc
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             QuestLocation;                                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Label;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPFNpcBehavior                                     Behavior;                                                 // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UClass*                                      AnimClass;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPFNpcPlacementData                         PlacementInfo;                                            // 0x0450(0x0178) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EDE_PF_NpcPawnSpec>                    Spec;                                                     // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCollision;                                            // 0x05C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAI;                                                   // 0x05CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFootstep;                                             // 0x05CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPFNpcSpawnType                                    Type;                                                     // 0x05CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoCollision;                                             // 0x05CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05CE(0x0002) MISSED OFFSET
	int                                                SpawnID;                                                  // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	class ABP_PFG_InfluenceMap_C*                      InfluenceMap;                                             // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCameraFade;                                           // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideInteractReceiverDisable;                         // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideInteractIconForceDisplay;                        // 0x05E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRenderCulling;                                        // 0x05E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePoolObject;                                           // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPFActorInteractState>                 OverrideInteractReceiverState;                            // 0x05E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcObject.BP_PF_NpcObject_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void CreateInfluenceMap();
	void SetOverrideInteractReceiverState(TEnumAsByte<EPFActorInteractState> OverrideInteractReceiverState);
	void ApplySpawnStatus(EPFNpcSpawnType SpawnType);
	void DestroyInfluenceMap();
	void UpdateInfluenceMap();
	void SpawnSpecSkeletalMesh(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class AActor** Actor);
	void SetCollide(class AActor* Actor, bool bCentering);
	void SpawnSpecEmpty(const struct FTransform& Transform, class AActor** Actor);
	void GetChildrenActors(class UClass* ActorClass, TArray<class AActor*>* Actors);
	void OnTryChangeScenarioConditionRespawn(bool bBlock);
	void OnTryDespawn();
	void GetSpec(const struct FPFNpcPlacementData& PlacementData, TEnumAsByte<EDE_PF_NpcPawnSpec>* ReturnSpec);
	void SpawnSpecStand(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class APawn** Pawn);
	void SpawnSpecStaticMesh(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class AActor** Actor);
	void CopyComponent(class AActor* Actor);
	void SetInteractionInfo(EPFNpcInteractionType Type, const struct FPFNpcInteractionData& Data, class AActor* Actor);
	void SetInteractionReceiverData(class UClass* SymbolInfoClass, class UClass* ReceiverInfoClass, class UClass* EventClass);
	void DisableComponent(class UActorComponent* Component);
	void OnTrySpawn(bool bBlock, EPFNpcSpawnType SpawnType, bool bLoadImmediate);
	void SpawnCharacter(bool bBlock, bool bLoadImmediate, class AActor** Actor, bool* bCollisionCentering);
	void UserConstructionScript();
	void OnUpdateInteraction(class AActor* PawnActor, const struct FPFNpcInteractionUpdateInfo& UpdateInfo);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpawnRequest(EPFNpcSpawnType SpawnType, bool bLoadImmediate);
	void OnDespawnRequest();
	void ReceiveDoUpdateSpawn();
	void ReceiveDestroyed();
	void On_Spawn_Influence_Map();
	void ExecuteUbergraph_BP_PF_NpcObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
