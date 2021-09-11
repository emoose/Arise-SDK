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

// BlueprintGeneratedClass TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BP_MenuManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C");
		return ptr;
	}


	void ResetMenuArenaSelect();
	void CallOnCookingEvent(EArisePartyID PartyId, int RecipeID);
	void UnbindOnCookingEvent(const struct FAriseCookingEventData& Event);
	void BindOnCookingEvent(const struct FAriseCookingEventData& Event);
	void GetIcnMnuAnimInterface(TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface);
	void NotifyOnChangeEquipment(EArisePartyID PartyId);
	void GetBtlControlChara(EArisePartyID* NewParam);
	void SetVisibilityHeaderWidget(ESlateVisibility InVisibility, bool* bSuccess);
	void SetBtlUsetItemID(const struct FString& ItemID, bool* bSuccess);
	void GetIsNewGameStart(bool* IsNewGameStart);
	void SetIsNewGameStart(bool bIsNewGameStart, bool* bSuccess);
	void GetNextSceneID(struct FString* NextSceneID);
	void SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, bool* bSuccess);
	void SetSaveDataLoaded(bool InSaveDataLoaded, bool* bSuccess);
	void SetLoadedSlot(int LoadedSlot, bool* bSuccess);
	void ShowHelpWidget(bool* bSuccess);
	void UnbindOnShowLight(const struct FOnMenuSimpleShow& Event);
	void BindOnShowLight(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowTopParticle(const struct FOnMenuSimpleShow& Event);
	void BindOnShowTopParticle(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event);
	void BindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event);
	void UnbindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event);
	void BindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event);
	void UnbindOnLevelActivate(const struct FOnMenuLevelActivate& Event);
	void BindOnLevelActivate(const struct FOnMenuLevelActivate& Event);
	void GetCurrentMenuData(struct FMenuData* CurrentMenuData);
	void SetHeaderWidget3D(class UUserWidget* HeaderWidget3D, bool* bSuccess);
	void SetHeaderActor(class AActor* HeaderActor, bool* bSuccess);
	void SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, bool* bSuccess);
	void GetShowAlias(struct FString* Label);
	void GetHelpWidget(class UUserWidget** HelpWidget);
	void GetQuestID(struct FString* QuestID);
	void Close(bool* bSuccess);
	void GetOpenMapLocation(struct FString* OpenMapLocation);
	void GetOpenMapLocationSecondary(struct FString* OpenMapLocationSecondary);
	void GetQuestIDSecondary(struct FString* QuestIDSecondary);
	void CallGetBackMenuID(struct FString* MenuID);
	void SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, bool* bSuccess);
	void SetOpenMapLocation(const struct FString& OpenMapLocation, bool* bSuccess);
	void SetQuestIDSecondary(const struct FString& QuestIDSecondary, bool* bSuccess);
	void SetQuestID(const struct FString& QuestID, bool* bSuccess);
	void CheckPrevMenuCount(const struct FString& MenuID, int* Count);
	void GetPadProcess(class AMenuPadProcess** PadProcess);
	void PrepareToCloseView(const struct FString& NextMenuID, bool* bSuccess);
	void SetShowAlias(const struct FString& Label, bool* bSuccess);
	void SetHelpID(const struct FString& HelpID, bool* bSuccess);
	void UnbindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event);
	void BindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event);
	void UnbindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event);
	void BindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event);
	void GetMenuBGType(EMenuBGType* BGType);
	void SetExternalHelpInnerWidget(class UUserWidget* HelpInnerWidget, bool* bSuccess);
	void GetPrevSceneCount(int* Count);
	void CheckIsClose(bool* IsClose);
	void Open(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, bool* bSuccess);
	void GetShopID(struct FString* ShopID);
	void IsAllowInputChangeMenu(bool* bAllow);
	void SetHelp(const struct FString& HelpLabel, bool* bSuccess);
	void FadeInForLevel(bool* bSuccess);
	void FadeOutForLevel(bool* bSuccess);
	void SetBattleMenuParam(const struct FBattleMenuParam& BattleMenuParam, bool* bSuccess);
	void GetBattleMenuParam(struct FBattleMenuParam* BattleMenuParam);
	void GetBtlItemID(struct FString* BtlItemID);
	void ForceFinalize(bool* bSuccess);
	void GetCurrentMenuID(struct FString* MenuID);
	void IsTutorialState(bool* bTutorialState);
	void CheckAndExecCurrentMenuTutorial(bool* bExecTutorial);
	void UnbindOnCloseEndEvent(const struct FAriseSimpleEventData& Event);
	void BindOnCloseEndEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnOpenEndEvent(const struct FAriseSimpleEventData& Event);
	void BindOnOpenEndEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event);
	void BindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event);
	void UnbindOnCloseStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnCloseStartEvent(const struct FAriseSimpleEventData& Event);
	void UnbindOnOpenStartEvent(const struct FAriseSimpleEventData& Event);
	void BindOnOpenStartEvent(const struct FAriseSimpleEventData& Event);
	void GetMenuResult(struct FString* Result);
	void RestoreInheritFlags();
	void GetLoadedSlot(int* OutLoadedSlot);
	void IsSaveDataLoaded(bool* OutSaveDataLoaded);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
