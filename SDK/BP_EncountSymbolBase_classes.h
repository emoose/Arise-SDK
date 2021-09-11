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

// BlueprintGeneratedClass BP_EncountSymbolBase.BP_EncountSymbolBase_C
// 0x012C (0x0C0C - 0x0AE0)
class ABP_EncountSymbolBase_C : public APFEncountSymbol
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (Transient, DuplicateTransient)
	class UPFAC_EnSym_AlphaMaskComponent_C*            EncountAlphaMaskComponent;                                // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EqsCollision;                                             // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SearchBox;                                                // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CaptureCollision;                                         // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EncountCollision;                                         // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WanderingAreaSize;                                        // 0x0B20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B2C(0x0004) MISSED OFFSET
	class APFBP_EnSym_SplineActor_C*                   AIMoveRoute;                                              // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APFAIC_EnSym_Base_C*                         AIController;                                             // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               Chase;                                                    // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               Detect;                                                   // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               RandomWalk;                                               // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               SplineWalk;                                               // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_EncountGroup_C*                          CacheGroup;                                               // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_EncountManager_C*                        CacheManager;                                             // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  CachePC;                                                  // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PrvState;                                                 // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APFEnSymTargetPoint*                         TargetPoint;                                              // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpAngle;                                                // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEntrySearchBox;                                          // 0x0B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanUpdateRisk;                                           // 0x0B8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanUpdateNotify;                                         // 0x0B8E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0B8F(0x0001) MISSED OFFSET
	float                                              JumpSpeed;                                                // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RushTime;                                                 // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSearchBox;                                             // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Boss;                                                     // 0x0B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bModelCreated;                                            // 0x0B9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEncounted;                                               // 0x0B9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomWaitState;                                         // 0x0B9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRelative;                                                // 0x0B9E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbortEncount;                                            // 0x0B9F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbortCapture;                                            // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableChaseHitCollision;                                 // 0x0BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequestCapture;                                          // 0x0BA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitActionState;                                         // 0x0BA3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecRepop;                                               // 0x0BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRushEnd;                                                 // 0x0BA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0BA6(0x0002) MISSED OFFSET
	struct FVector                                     LastTargetLocation;                                       // 0x0BA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SearchBoxSize;                                            // 0x0BB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WakeupPlayerLocation;                                     // 0x0BC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CacheFlyLocationZ;                                        // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeFlyHeight;                                        // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesiredFlyHeight;                                         // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CacheViewDistanceMag;                                     // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	TArray<struct FPFST_EnSym_SplineData>              SplineData;                                               // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Variation;                                                // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitCollision;                                           // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AcceptDistance;                                           // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountSymbolBase.BP_EncountSymbolBase_C");
		return ptr;
	}


	void GetSphereRadius(float* Result);
	void GetRadar(bool* Result);
	void Activate();
	void SetRelativeLocation();
	void OnChangeStateImpl(EAriseGameState State, bool NewState);
	void GetModelBounds(float* Value);
	void EnableBlockSphereCollision(bool InEnable);
	void IsFindedMimicSymbol(bool* Result);
	bool BPE_IsEntrySearchBox();
	void SetupUsePathFinding();
	void CanEncounting(bool* Result);
	float GetDesiredFlyHeight();
	void InitFlyMode();
	void GetDestination(const struct FVector& InDestination, struct FVector* Result);
	float GetRelativeFlyHeight();
	void SetBoxExtent(class UBoxComponent* Box, float Range);
	void SetWanderingMode();
	void EnableEncountCollision(bool Enable);
	void InitSplineData();
	void IsFlyState(bool* Result);
	void IsRandomWaitState(bool* Result);
	void SetFlyMode();
	void Postinitialize();
	void IsGround(bool* Result);
	void RespawnParameter();
	void EnableOrientRotation(bool Enable);
	void Deactive();
	void EncountLink();
	void IsInvisible(bool* Value);
	void GetAIController();
	void DetectSearchBox();
	void SetCeilMoveMode(const struct FVector& Location);
	void SetupActionState();
	void Setup(class APFBP_EnSym_Placement_C* Placement);
	void GetMyGroup(class ABP_EncountGroup_C** Group);
	void UserConstructionScript();
	void OnDoSceneCapture(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera);
	void EncounProcess();
	void OnEncount(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InitCallback();
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlapCaptuer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void FadeOut(bool bNotDelete);
	void FadeIn();
	void OnBuildCharacter();
	void OnEndEncount(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCompleteFadeOutEvent(bool NotDelete);
	void OnCompleteFadeInEvent();
	void OnCollisionEnable(EAriseGameState ChangedState, bool NewState);
	void OnCapture(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InitEncountSystem();
	void ReceiveBeginPlay();
	void TickNavMeshRecovery(float DeltaTime, const struct FVector& Location, const struct FVector& RecoveryDestination);
	void OnPostInitialized();
	void OnPFMovementStateDash();
	void BPE_ExecEntrySearchBox();
	void BPE_ResearchAIRoute();
	void OnFindedTarget();
	void OnLostTarget();
	void BPE_ForceRepop();
	void BPE_UpdateSearchBoxSize();
	void BPE_UpdateMinimapVisibleSymbol(bool bVisible);
	void ExecuteUbergraph_BP_EncountSymbolBase(int EntryPoint);
	void OnHitCollision__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
