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

// BlueprintGeneratedClass BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C
// 0x0040 (0x03C0 - 0x0380)
class ABP_PF_NPC_Waypoint_C : public APFNpcWaypoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class UAriseWaypointComponent*                     Waypoint;                                                 // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Angle;                                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<struct FVector>                             TraceLocations;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TraceIndexs;                                              // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ClosedLoop;                                               // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreNavigation;                                         // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCrowdSimulation;                                   // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03BB(0x0001) MISSED OFFSET
	int                                                EndNodeIndex;                                             // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C");
		return ptr;
	}


	void GetTraceIndexs(TArray<int>* Indexs);
	void GetTraceLocations(TArray<struct FVector>* Locations);
	void GetTraceLocationAtWaypointIndex(int Index, bool* bIsValid, struct FVector* Location);
	void GetLocationAtWaypointIndex(int Index, struct FVector* Location);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_NPC_Waypoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
