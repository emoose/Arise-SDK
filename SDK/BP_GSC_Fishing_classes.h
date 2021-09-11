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

// BlueprintGeneratedClass BP_GSC_Fishing.BP_GSC_Fishing_C
// 0x0098 (0x00E0 - 0x0048)
class UBP_GSC_Fishing_C : public UGameSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_FishingSceneControllerInterface_C> FishingSecneController;                                   // 0x0058(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_FishingPointInterface_C> FishingPointActor;                                        // 0x0068(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFishingOnShip;                                           // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class AActor*                                      PauseController;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               MountBlueprints;                                          // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bFishingOnQuest;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TScriptInterface<class UBPI_SkipPauseController_C> PauseControllerIF;                                        // 0x00B0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PauseControllerName;                                      // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbortFishing;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	TArray<struct FName>                               HideLevelsAtFishing;                                      // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Fishing.BP_GSC_Fishing_C");
		return ptr;
	}


	void GetFishingSceneController(TScriptInterface<class UBP_FishingSceneControllerInterface_C>* Object);
	void PopLevelsEndFishing();
	bool IsEnableSystemPause();
	void HideLevelsStartFishing();
	void SpawnBlueprints();
	void IsBlueprintsLoaded_(bool* bLoaded);
	bool IsPausePossibleState();
	void PauseManagement(bool* bEventSkip);
	void PauseTickManagement(float Tick);
	void CheckTackle();
	bool BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params);
	void PFCharacterActive(bool Enable, class AActor** PlayerActor);
	void InitializeByFishingPoint(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPoint);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Wakeup(unsigned char PrevScene);
	void BPE_Sleep(unsigned char nextScene);
	void EventCreatePauseController();
	void ExecuteUbergraph_BP_GSC_Fishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
