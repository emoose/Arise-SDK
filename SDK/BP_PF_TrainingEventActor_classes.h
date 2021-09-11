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

// BlueprintGeneratedClass BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C
// 0x01F9 (0x0521 - 0x0328)
class ABP_PF_TrainingEventActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBP_PF_TrainingComponent_C*                  TrainingComponent;                                        // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SendActor;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FBtlEncountGroupParam>               TrainingEncountGroups;                                    // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TrainingMap;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CharacterID;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBtlArenaData                               TrainingData;                                             // 0x0378(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPostEventEnd;                                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class ABP_GP_PlayEventActor_C*                     EventPlayer;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     PostEventID;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBtlArenaEventData                          PostEventData;                                            // 0x04A8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasPostEvent;                                            // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FBtlArenaEventData                          PreEventData;                                             // 0x04E8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasPreEvent;                                             // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_TrainingEventActor.BP_PF_TrainingEventActor_C");
		return ptr;
	}


	void SwitchShowMap(bool bShowArenaMap);
	void IsBattleMapLoaded(bool* bLoaded);
	void CheckTrophy();
	void IsArenaMapVisibled(bool* bVisibled);
	void SetTime(float NewTime);
	void DoTrainingStart(const struct FName& MapName, const struct FBtlArenaData& ArenaData, TArray<struct FBtlEncountGroupParam>* EncountGroups);
	void GetResult(TEnumAsByte<EDE_TrainingResult>* NewParam);
	void SetResult(TEnumAsByte<EDE_TrainingResult> Result);
	void DoBattleStart();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void On_Training_Battle_End(unsigned char PrevScene);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void On_Training_Event_Start();
	void On_Go_Back_Title();
	void ExecuteUbergraph_BP_PF_TrainingEventActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
