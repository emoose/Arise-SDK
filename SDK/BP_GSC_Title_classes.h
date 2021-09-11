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

// BlueprintGeneratedClass BP_GSC_Title.BP_GSC_Title_C
// 0x0101 (0x0149 - 0x0048)
class UBP_GSC_Title_C : public UTitleSceneController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_TTL_TEST_C*                UMG2;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AInputExtPlayerController*                   PlayerController;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_GSC_Field_Interface_C>  FieldScneController;                                      // 0x0068(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDispDebugLog;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunScriptAtTitleClose;                                   // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugMode;                                               // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	class UClass*                                      FinalizeScriptClass;                                      // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_GameScriptBase_C*                        FinalizeScriptInst;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_EmptyScene_C*                            EmptyScene;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_TTL_C*                     UMG;                                                      // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AMenuPadProcess*>                     MenuPadProcesses;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ConnectControllerId;                                      // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class ABP_StreamLevelLoader_C*                     StreamLevelLoader;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LevelMenuStagePath;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LevelMenuStageName;                                       // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLevelLoaded;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChengBackUI;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsLevemUnLoad;                                            // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FString                                     NEWGAME_MAP;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ChengBackFlameSword;                                      // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bMenuMaskOn;                                              // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMenuMaskOnWhenCloseAndBack;                              // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoviePlay;                                              // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x011B(0x0005) MISSED OFFSET
	class ACharacter*                                  PlayerCharacter;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EmitterRemoveEvent;                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FString>                             MenuBackArray;                                            // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ESavedVoiceLanguage                                BootVoiceLanguage;                                        // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Title.BP_GSC_Title_C");
		return ptr;
	}


	void GetGSCTitle_IsTitleMoviePlay(bool* OutIsTitleMoviePlay);
	void MenuBackImageUnLoad();
	void MenuBackImageLoad();
	void GetNewGameMap(struct FString* MapName);
	void IsTitleMoviePlay(bool* OutIsTitleMoviePlay);
	bool IsEnableSystemPause();
	bool IsPausePossibleState();
	void SetPlayerCharacterVisibility(bool IsVisibility);
	void ResetConfig();
	void IsMaskWhenTitleUIClosed(const struct FString& Menu, bool* IsMask);
	void SetShowTitleLevel(bool InIsShow);
	void PreloadNewGameMap();
	void UnLoadEndLevel();
	void UnLoadLevel();
	void LoadEndLevel();
	void LoadLevel();
	void MountMainFunction();
	void HideNowLoading();
	void GameStart(const struct FString& StartMap, bool InitGameData, bool LoadStart);
	void ManagementScript();
	bool TitleUIClosed_(struct FString* SelectedMenu);
	void BootDebugMap();
	void SetupFieldMap();
	void DebugPrintSceneState();
	void SetupScene();
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Tick(float DeltaTime);
	void BPE_Wakeup(unsigned char PrevScene);
	void BPE_Sleep(unsigned char nextScene);
	void OnMenuShowDome();
	void OnMenuOpenStart();
	void OnMenuCloseViewStart();
	void ExecuteUbergraph_BP_GSC_Title(int EntryPoint);
	void EmitterRemoveEvent__DelegateSignature();
	void ChengBackFlameSword__DelegateSignature(bool InIsShow);
	void ChengBackUI__DelegateSignature(bool InIsShow);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
