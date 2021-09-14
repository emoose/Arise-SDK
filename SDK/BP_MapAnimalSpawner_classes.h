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

// BlueprintGeneratedClass BP_MapAnimalSpawner.BP_MapAnimalSpawner_C
// 0x0109 (0x0431 - 0x0328)
class ABP_MapAnimalSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            PlayerApproachCheckCollision;                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SpawnedMeshes;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TEnumAsByte<ENM_SpawnMeshType>                     SpawnMeshType;                                            // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                SpawnNum;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRadius;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENM_SpawnSnapType>                     SnapType;                                                 // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              RandomScaleMin;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomScaleMax;                                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomAddYaw;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomAddPitch;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomAddRoll;                                            // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UASAnimationSet*                             AnimationSet;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnToTurnEndCrossfadeTime;                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveXY_Speed;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveUpSpeed;                                              // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveEaseOut;                                             // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveEaseIn;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	class UASStateMachine*                             StateMachine;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerApproachCheckRadius;                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      MovingElapsedTime;                                        // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ENM_SpawnMapAnimalState>>       SpawnedAnimalState;                                       // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             MoveInitialRelativeLocations;                             // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             MoveTargetRelativeLocations;                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              OrientToMovementTime;                                     // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TArray<float>                                      MoveInitialRelativeRollAngles;                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MoveTargetRelativeRollAngles;                             // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bOrientRotationToMovement;                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FString                                     SEEventName;                                              // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bApproached;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapAnimalSpawner.BP_MapAnimalSpawner_C");
		return ptr;
	}


	void ClearMoveTempParams();
	float ClacBlendAlpha(float ElapsedTime, float TotalTime);
	void Move_Internal(class USkeletalMeshComponent* SkeletalMeshComponent, float ElapsedTime, const struct FVector& InitialRelativeLocation, const struct FVector& TargetRelativeLocation, float InitialRelativeRollAngle, float TargetRelativeRollAngle);
	void Move(int Index);
	void BeginMove(class USkeletalMeshComponent* SkeletalMeshComponent, float MoveValue);
	void OnMovingPerAnimal(int Index, float DeltaSeconds);
	void FadeOut(class USkeletalMeshComponent* SpawnedMesh, float ElapsedTime);
	void AreAllAnimalDestroyed(bool* bResult);
	void DespawnAnimal(class USkeletalMeshComponent* Component);
	void DespawnAll();
	void GetComponentForward(class USceneComponent* Component, struct FVector* Forward);
	void Respawn();
	void GetAnimInstance(class USkeletalMeshComponent* SkeletalMeshComponent, class UMapAnimalAnimInstance** AnimInstance);
	void OnPlayerApproaching();
	void TestPlayerApproaching();
	void SnapPosition(const struct FVector& InLocation, struct FVector* ModifiedLocation);
	void CalcSpawnRelativeTransform(int Index, struct FTransform* Result);
	void SpawnSkeletalMesh(const struct FTransform& RelativeTransform);
	void SpawnSkeletalMeshes();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnAnimStateChange(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FString& PreviousStateName, const struct FString& NextStateName, float Turn, float Move);
	void OnRotated(class USceneComponent* Moved);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MapAnimalSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
