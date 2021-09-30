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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C
// 0x0150 (0x0588 - 0x0438)
class ABP_PF_NPC_InteractEvent_Training_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBtlEncountGroupParam>               EncountGroups;                                            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bTrainingMenu_Cancel;                                     // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTrainingMenu_BattleStart;                                // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0452(0x0006) MISSED OFFSET
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDE_TrainingResult>                    PrevTrainingResult;                                       // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishGetFirstReward;                                    // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishGetTimeReward;                                     // 0x0462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishGetReward;                                         // 0x0463(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FName                                       TrainingMap;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBtlArenaData                               ArenaData;                                                // 0x0470(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PF_TrainingEventActor_C*                 TrainingEventActor;                                       // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_Training.BP_PF_NPC_InteractEvent_Training_C");
		return ptr;
	}


	void GetTrainingQuestEvent(bool* bPlayQuest);
	void GetTrainingTalkNo(const struct FString& Tag, struct FString* TalkNo);
	void EventActorSetting();
	void UserConstructionScript();
	void Event_Get_First_Reward();
	void Event_Get_Time_Reward();
	void Open_Traning_Menu();
	void MainInteract();
	void ReceiveBeginPlay();
	void Execute_Training_Menu();
	void Execute_Quest_Event();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_Training(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
