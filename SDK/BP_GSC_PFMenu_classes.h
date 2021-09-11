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

// BlueprintGeneratedClass BP_GSC_PFMenu.BP_GSC_PFMenu_C
// 0x0065 (0x00AD - 0x0048)
class UBP_GSC_PFMenu_C : public UTitleSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ScreenMaskBase_C*                        ScreenMask;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseScreenMask;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     LevelMenuStagePath;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LevelMenuStageName;                                       // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_StreamLevelLoader_C*                     StreamLevelLoader;                                        // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLevelLoaded;                                             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScreenMaskEnabled;                                       // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FString                                     MenuID;                                                   // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRecentWorldTimePaused;                                   // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnedActorsStored;                                     // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRecentPFCharacterActive;                                 // 0x00AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESceneControllerState                              WakeUpSceneState;                                         // 0x00AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESceneControllerWorkState                          WakeUpWorkState;                                          // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_PFMenu.BP_GSC_PFMenu_C");
		return ptr;
	}


	bool IsEnableSystemPause();
	bool IsPausePossibleState();
	void PFCharacterLockIfNeed(class AActor** PlayerActor);
	void PFCharacterUnlockIfNeed(class AActor** PlayerActor);
	void ShowCharcterStage(bool bShow);
	void MaskPFMap(bool bMask);
	void SetupScreenMack(bool NewScreenMask);
	void CreateScreenMask();
	void DebugPrintSceneState();
	void UnbindPause();
	void BPE_Tick(float DeltaTime);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BindPause();
	void Resume();
	void ResumePF();
	void PausePF();
	void CancelPause();
	void BPE_Wakeup(unsigned char PrevScene);
	void BPE_Sleep(unsigned char nextScene);
	void ExecuteUbergraph_BP_GSC_PFMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
