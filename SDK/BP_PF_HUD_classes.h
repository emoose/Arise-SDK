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

// BlueprintGeneratedClass BP_PF_HUD.BP_PF_HUD_C
// 0x0111 (0x0441 - 0x0330)
class ABP_PF_HUD_C : public APF_HUD_Manager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_LAYOUT_PF_C*               PF_HUD_Layout;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UIconLayer_PF_C*                             Icons;                                                    // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UIconLayer_SE_C*                             SEIcons;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 NaviMap;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 DestinationStarIcon;                                      // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 PopUpAnnounce;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 PlayableHelp;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 OperationButtonHelp;                                      // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 MaplinkDestination;                                       // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 InteractIcon;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 InteractButtonHelp;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 StarSpiritualGauge;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 DietaryEffectGauge;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 NextMainQuestText;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 NextSubQuestText;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 EncounterGauge;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 EnemyApproachIcon;                                        // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 BattleResult;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 LongChatButton;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ShortChat;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 MessageWindow;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 SystemWindow;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<bool>                                       IsDefaultShow;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EPFUIPattern                                       BeforePFUIPattern;                                        // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UUserWidget*                                 AreaChangeName;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 TPGauge;                                                  // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsChangeLock;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UAriseGameStateController*                   GameState;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PauseShortChat;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIsInitialized;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_HUD.BP_PF_HUD_C");
		return ptr;
	}


	void GetDefaultShow(TArray<bool>* IsDefaultShow);
	void Hide(bool* bSuccess);
	void CheckPastStory(bool* OutIsPastStory);
	void Refresh(bool* bSuccess);
	void ChangePFUIPattern(EPFUIPattern InEPFUIPattern, bool InIsChangeLock, bool* bSuccess);
	void UpdateDuringControl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult);
	void GetPFLayoutInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PFLayout);
	void Destory();
	void IsPastStory(bool* OutIsPastStory);
	void UpdateShowPastStoryUI();
	void UpdateDuringControlImpl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult);
	void IsPFHelpUICloseCheck(bool* OutIsClose);
	void IsPFHelpUIOpenCheck(bool* OutIsOpen);
	void UpdateLongchatShow();
	void UpdateNextMainQuestShow();
	void RefreshImpl();
	void UpdateBtlResultShow();
	void UpdateShortChatShow();
	void SetDefaultShowFlag(class UUserWidget* InWidget);
	void CurrentDefaultShowFlag();
	void SetShowParts(class UUserWidget* InWidget, bool InIsShow, bool* OutIsShow);
	void ShowPartsCheck();
	void SetUserWidget(class UUserWidget* InSetWidget, class UUserWidget* InBaseWidget);
	void SetPartsWidget();
	void ChangePFUIPatternImpl(EPFUIPattern InEPFUIPattern, bool InIsChangeLock);
	void IsVisible(bool* RetVal);
	void SetVisible(bool IsVisible);
	void HideImpl();
	void Show();
	void Initialize();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void RequestInitializeLongChatManager();
	void ExecuteUbergraph_BP_PF_HUD(int EntryPoint);
	void PauseShortChat__DelegateSignature(bool Show);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
