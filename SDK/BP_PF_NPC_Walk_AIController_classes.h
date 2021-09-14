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

// BlueprintGeneratedClass BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C
// 0x0061 (0x0499 - 0x0438)
class ABP_PF_NPC_Walk_AIController_C : public ABP_PF_DetourAIController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_PF_NPC_Waypoint_C*                       Waypoint;                                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             MoveSegments;                                             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAriseWaypointComponent*                     WaypointComp;                                             // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FST_PF_NPC_Walk_WaypointActionData>  WaypointActionList;                                       // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WaypointActionIndex;                                      // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystemComp;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     OnStop_ActionKey;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               OnStop_LookAt;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C");
		return ptr;
	}


	void IsNavigationEnabled(bool* Enabled);
	void GetNodeFollowingListEx(int StartIndex, int EndIndex, TArray<int>* FollowingIndexList);
	void SetNextWaypointAction();
	void GetCurrentWaypointAction(struct FST_PF_NPC_Walk_WaypointActionData* WaypointAction);
	void SetWaypoint(class ABP_PF_NPC_Waypoint_C* Waypoint);
	void SetMoveSegment(int StartIndex, int* LastIndex);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_PF_NPC_Walk_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
