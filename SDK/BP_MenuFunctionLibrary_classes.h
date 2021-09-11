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

// BlueprintGeneratedClass BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MenuFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ResetMenuArenaSelect(class UObject* __WorldContext);
	void STATIC_CallOnCookingEvent(EArisePartyID PartyId, int RecipeID, class UObject* __WorldContext);
	struct FModifiedText STATIC_GetAreaNameModifiedText(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext, bool* found);
	void STATIC_MENU_GetIcnMnuAnim_ANM_NAME(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_MENU_GetIcnMnuAnim_ANM_FONT(class UObject* __WorldContext, class UWidgetAnimation** Animation);
	void STATIC_MENU_GetIcnMnuAnimInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface);
	bool STATIC_IsAUG_Closed(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext);
	void STATIC_SwitchHelpWidgetHitTest(bool bInteractable, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_GetQuestIDSecondary(class UObject* __WorldContext, struct FString* QuestIDSecondary);
	void STATIC_GetQuestID(class UObject* __WorldContext, struct FString* QuestID);
	void STATIC_GetOpenMapLocationSecondary(class UObject* __WorldContext, struct FString* OpenMapLocationSecondary);
	void STATIC_GetOpenMapLocation(class UObject* __WorldContext, struct FString* OpenMapLocation);
	void STATIC_CheckPrevMenuCount(const struct FString& MenuID, class UObject* __WorldContext, int* Count);
	void STATIC_SetQuestIDSecondary(const struct FString& QuestIDSecondary, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetQuestID(const struct FString& QuestID, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetOpenMapLocation(const struct FString& OpenMapLocation, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_GetBtlControlChara(class UObject* __WorldContext, EArisePartyID* CharaID);
	void STATIC_NotifyOnChangeEquipment(EArisePartyID PartyId, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetCharaOffset(const struct FVector2D& Offset, class UObject* __WorldContext);
	void STATIC_SetVisibilityHeaderWidget(ESlateVisibility InVisibility, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetBtlUsetItemID(const struct FString& ItemID, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_GetBtlItemID(class UObject* __WorldContext, struct FString* BtlItemID);
	void STATIC_GetIsNewGameStart(class UObject* __WorldContext, bool* IsNewGameStart);
	void STATIC_SetIsNewGameStart(bool IsNewGameStart, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_GetNextSceneID(class UObject* __WorldContext, struct FString* NextSceneID);
	void STATIC_SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetSaveDataLoaded(bool Loaded, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_PrepareToCloseView(const struct FString& NextMenuID, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_SetMenuLoadedSlot(int LoadedSlot, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_ShowMenuHelpWidget(class UObject* __WorldContext, bool* bSuccess);
	void STATIC_GetCurrentMenuID(class UObject* __WorldContext, struct FString* MenuID);
	void STATIC_GetMenuHelpWidget(class UObject* __WorldContext, class UUserWidget** HelpWidget);
	void STATIC_GetMenuPadProcess(class UObject* __WorldContext, class AMenuPadProcess** PadProcess);
	void STATIC_GetIsTitleMoviePlay(class UObject* __WorldContext, bool* IsTitleMoviePlay);
	void STATIC_GetMenuBGType(class UObject* __WorldContext, EMenuBGType* BGType);
	void STATIC_GetMenuPrevSceneCount(class UObject* __WorldContext, int* Count);
	void STATIC_IsSaveDataLoaded(class UObject* __WorldContext, bool* bLoaded);
	void STATIC_MenuOpen(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_IsMenuClose(class UObject* __WorldContext, bool* IsClose);
	void STATIC_GetMenuManagerInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface);
	void STATIC_CheckMenuSysUpdated(class UObject* __WorldContext, bool* IsUpdated);
	TEnumAsByte<EPauseMenuOpenType> STATIC_GetPauseMenuOpenType(class UObject* __WorldContext);
	void STATIC_ClearMenuUpdatedByData(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_ClearMenuUpdatedByID(const struct FString& MenuID, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_CheckMenuUpdatedByDataBase(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* IsUpdated);
	void STATIC_CheckMenuUpdatedByData(const struct FMenuData& MenuData, class UObject* __WorldContext, bool* IsUpdated);
	void STATIC_CheckMenuColUpdated(class UObject* __WorldContext, bool* IsUpdated);
	void STATIC_CheckMenuUpdatedByID(const struct FString& MenuID, class UObject* __WorldContext, bool* IsUpdated);
	void STATIC_SetIntWithSpace(class UAriseTextWidget* Target, int Num, int Digit, class UObject* __WorldContext);
	void STATIC_TickMaterialWhenPaused(bool DoTick, class UObject* __WorldContext);
	void STATIC_GetLocationNameModifiedTextByIndex(int Index, bool IsShortName, int ScenarioCounter, class UObject* __WorldContext, struct FModifiedText* Text);
	bool STATIC_IsDEQ_Closed(const struct FString& AreaName, int ScenarioCounter, class UObject* __WorldContext);
	void STATIC_AllowInputChangeMenu(class UObject* __WorldContext, bool* bAllow);
	void STATIC_StartEndingScene(class UObject* __WorldContext);
	void STATIC_GetLocationNameModifiedTextBase(const struct FMapLocationData& LocationData, bool IsShortName, int ScenarioCounter, class UObject* __WorldContext, struct FModifiedText* Text);
	void STATIC_GetMapLinkNameModifiedText(const struct FString& NextLocation, const struct FString& CurrentLocation, class UObject* __WorldContext, struct FModifiedText* Text);
	void STATIC_SetMenuInputHelp(const struct FString& Label, class UObject* __WorldContext);
	void STATIC_FadeInForMenuLevel(class UObject* __WorldContext);
	void STATIC_FadeOutForMenuLevel(class UObject* __WorldContext);
	void STATIC_PFMenuPartyTopChanged(class UObject* __WorldContext);
	void STATIC_BattleMenuArtsSettingChanged(EArisePartyID PartyId, class UObject* __WorldContext);
	void STATIC_GetLocationNameModifiedText(const struct FString& Location, bool IsShortName, class UObject* __WorldContext, struct FModifiedText* Text);
	void STATIC_BattleMenuTacticsRefreshRequest(class UObject* __WorldContext);
	void STATIC_BattleMenuWeaponChanged(EArisePartyID PartyId, const struct FName& WeaponItemLabel, class UObject* __WorldContext);
	void STATIC_SetBattleMenuArtsParam(EArisePartyID User, const struct FName& ArtsLabel, class UObject* __WorldContext);
	void STATIC_GetBattleMenuParam(class UObject* __WorldContext, struct FBattleMenuParam* Param);
	void STATIC_CursorAnimationUpdate(class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget, bool IsActive, bool IsSelect, class UObject* __WorldContext, float* PauseTime);
	void STATIC_CursorControl(class UTO14_BPI_GUI_SYS_CURSOR_C* CursorWidget, bool IsActive, bool IsSelect, class UObject* __WorldContext);
	void STATIC_GetPartyIDList_Enum_(class UObject* __WorldContext, TArray<EArisePartyID>* List_Enum_);
	void STATIC_GetPartyIDList_int_(class UObject* __WorldContext, TArray<int>* List);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
