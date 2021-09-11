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

// BlueprintGeneratedClass BP_WatchScenarioCounter.BP_WatchScenarioCounter_C
// 0x0018 (0x0340 - 0x0328)
class ABP_WatchScenarioCounter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventSettingsDatabase*                      EventSettingsDatabase;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WatchScenarioCounter.BP_WatchScenarioCounter_C");
		return ptr;
	}


	void UpdateKPI(int CurCount, int PrevCount);
	void UserConstructionScript();
	void OnChangeScenarioCounter(int counter, int Prev);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_WatchScenarioCounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
