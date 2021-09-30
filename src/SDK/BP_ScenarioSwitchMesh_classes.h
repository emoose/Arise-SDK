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

// BlueprintGeneratedClass BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C
// 0x0039 (0x0361 - 0x0328)
class ABP_ScenarioSwitchMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FScenarioConditionNamed>             ScenarioConditions;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECollisionEnabled>                     SaveCollisionType;                                        // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ABP_PFG_InfluenceMap_C*                      InfluenceMap;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfluenceFlag;                                           // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C");
		return ptr;
	}


	void SetInfluence(bool bInfluence);
	void DestroyInfluenceMap();
	void CreateInfluenceMap();
	void ShowModels(bool bShow);
	void CheckScenarioCondions(bool* bSatisfy);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnScenarioCounterChange(int counter, int Prev);
	void OnScenarioFlagChange(int Flag, bool bValid);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_ScenarioSwitchMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
