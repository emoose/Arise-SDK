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

// BlueprintGeneratedClass BP_PF_LadderActorBase.BP_PF_LadderActorBase_C
// 0x00E0 (0x0460 - 0x0380)
class ABP_PF_LadderActorBase_C : public APFLadderActorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               HitBox;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             BeginPoint_Top;                                           // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             BeginPoint_Bottom;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 Mesh_Top;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh_Bottom;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh_Middle;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshHeight;                                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalJumpPosition;                                        // 0x03C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                StepNum;                                                  // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleMeshNum;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class ABP_PF_LadderInteractPointBottom_C*          InteractActor_Bottom;                                     // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PF_LadderInteractPointTop_C*             InteractActor_Top;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PhysMaterialName;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScenarioConditionNamed                     ScenarioCondition;                                        // 0x03F0(0x0020) (Edit, BlueprintVisible)
	struct FScenarioCondition                          ScenarioConditionCache;                                   // 0x0410(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bCachedScenarioCondition;                                 // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHiddenAlaways;                                           // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0433(0x0001) MISSED OFFSET
	float                                              HitTimer;                                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  HitTarget;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HitAngle;                                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitTime;                                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HitCollisionSize;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Meshes;                                                   // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_LadderActorBase.BP_PF_LadderActorBase_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void ReceiveSerializeLadderPointParameter(struct FPFPlacementLadderPointDatabaseRow* DestinationParameter);
	void IsLadderHide(bool* OutHide);
	void UpdateLadderVisibility();
	void IsLadderEnable(bool* bOut);
	void SetScenaroiCondition(const struct FScenarioConditionNamed& InNewCondition);
	void GetJumpPosition(struct FVector* Position);
	void AddMesh(class UStaticMesh* Mesh, float HeightOffset);
	void BuildMesh(int InMiddleNum);
	void UserConstructionScript();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HIT);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnScenarioFlagChanged(int InFlagNo, bool bInFlagValid);
	void OnScenarioCounterChanged(int InNew, int InOld);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_LadderActorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
