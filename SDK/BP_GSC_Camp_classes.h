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

// BlueprintGeneratedClass BP_GSC_Camp.BP_GSC_Camp_C
// 0x007D (0x00C5 - 0x0048)
class UBP_GSC_Camp_C : public UTitleSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ScreenMaskBase_C*                        CampScreenMask;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseScreenMask;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     LevelMenuStagePath;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LevelMenuStageName;                                       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLevelLoaded;                                             // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class ABP_PF_CampActorBase_C*                      CampBase;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Camp_SCHManager_C*                       ShortChatManager;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenOtherMenu;                                           // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class ATO14_BP_MenuManagerBase_C*                  MenuManager;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRebuild;                                                 // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialize;                                              // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	class AScreenMaskBase*                             PrevScreenMask;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WorkDelayTime;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInstantlyDestroy;                                        // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Camp.BP_GSC_Camp_C");
		return ptr;
	}


	void CampLevelUnload();
	void IsCampLevelUnloaded(bool* bEntry);
	bool IsPausePossibleState();
	bool IsEnableSystemPause();
	void DestroyScreenMask();
	void ShowTopMenu(bool bShow);
	void SetScreenMask(const struct FString& Type, bool MaskOn);
	void SceneRunning();
	void SceneFinalize(float DeltaTime);
	void SceneInitialize(float DeltaTime);
	void WaitExitCampCompleted(bool* bCompleted);
	void ExitCamp();
	void UnloadCamp();
	void LoadCamp(bool* bResult);
	void WaitInitCampCompleted(bool* bCompleted);
	void InitCamp();
	void ShowCampMap(bool bShow);
	void PFCharacterActive(bool bEnable, class AActor** PlayerActor);
	void ShowCharcterStage(bool bShow);
	void SetupScreenMask(bool NewScreenMask);
	void CreateScreenMask();
	void DebugPrintSceneState();
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Sleep(unsigned char nextScene);
	void BPE_Wakeup(unsigned char PrevScene);
	void ExecuteUbergraph_BP_GSC_Camp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
