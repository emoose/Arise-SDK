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

// BlueprintGeneratedClass EventTrophyUnlocker.EventTrophyUnlocker_C
// 0x0020 (0x0348 - 0x0328)
class AEventTrophyUnlocker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_EventManager_C*                          EventManager;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPostEventMiscDatabase*                      TrophyDatabase;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTrophyUnlocker.EventTrophyUnlocker_C");
		return ptr;
	}


	void FindTrophyRecord(const struct FString& EventName, bool* HIT, struct FPostEventTrophyData* TrophyRecord);
	void UserConstructionScript();
	void Unlock(const struct FString& TrophyName);
	void OnBattleEnd(const struct FBtlResultInfo& ResultInfo);
	void EventEnd(const struct FString& EventName);
	void BattleEnd(const struct FBtlResultInfo& ResultInfo);
	void OnEventEnd(const struct FString& EventName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EventTrophyUnlocker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
