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

// BlueprintGeneratedClass BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C
// 0x00C0 (0x04C0 - 0x0400)
class ABP_PF_NPC_Walk_System_C : public APFNpcWalkSystem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_NPC_Waypoint_C*                       Waypoint;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FPFNpcDefineID                              DefineID;                                                 // 0x0410(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_PF_NPC_Walk_PawnData>            PopList_DEPRECATED;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAriseWaypointComponent*                     WaypointComp;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              PopSpan;                                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PopDistance;                                              // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumPopMax;                                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PopMaxDistance;                                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepopMaxDistance;                                         // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccludedLineTraceHeightOffset;                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightAngle;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_PF_NpcCharacterWalk_C*>           PopCharacterList;                                         // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bPopRequest_DEPRECATED;                                   // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FTimerHandle                                SpawnEventHandle;                                         // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPopLock;                                                 // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PopOnRootNode;                                            // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActOnPop;                                                 // 0x047A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x047B(0x0001) MISSED OFFSET
	float                                              PopRotation;                                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NaturalTurn;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	TArray<struct FST_PF_NPC_Walk_WaypointActionData>  WaypointAction;                                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     OnStop_ActionKey;                                         // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               OnStop_LookAt;                                            // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FString                                     EndFlagName;                                              // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C");
		return ptr;
	}


	void ShrinkPopCharacter();
	void SetAIControllerFromWaypoint(class UObject* Controller, class APFWalkableNpcCharacter* Character, int WaypointIndex);
	void CheckDisappearing();
	bool OnRespawnCharacter(class APFNpcCharacterBase* Character);
	void GetSpawnTransformFromWaypoint(bool bImmediately, bool* bValid, struct FTransform* Transform, int* WaypointIndex);
	bool IsSpawnLocked();
	class APFNpcCharacterBase* OnSpawnCharacter(const struct FPFNpWalkSpawnData& SpawnData, bool bImmediately);
	void GetPopDistanceWaypoint(float Distance, TArray<int>* InIndexes, TArray<int>* OutIndexes);
	void GetDistanceWaypoint(float Distance, TArray<int>* InIndexs, TArray<int>* OutIndexs);
	void GetPawnWaypoint(bool bImmediately, TArray<int>* Waypoint);
	void GetOccludedWaypoint(TArray<int>* InIndexs, TArray<int>* OutIndexs);
	void GetInSightWaypoint(TArray<int>* InIndexs, TArray<int>* InSightIndexs, TArray<int>* OutSightIndexs);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDoUpdateSpawn();
	void OnDespawnCharacter(class APFNpcCharacterBase* Target);
	void ReceiveDoSetVisibility(bool bEnable);
	void ExecuteUbergraph_BP_PF_NPC_Walk_System(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
