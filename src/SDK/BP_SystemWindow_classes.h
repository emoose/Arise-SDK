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

// BlueprintGeneratedClass BP_SystemWindow.BP_SystemWindow_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SystemWindow_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemWindow.BP_SystemWindow_C");
		return ptr;
	}


	void STATIC_OpenSysGetGaldCore(const struct FModifiedText& Title, const struct FModifiedText& Text, int AddGald, int DefaultIndex, bool Loss, int DiffGald, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList);
	void STATIC_OpenSysGetGaldLoss(int Gald, int DefaultIndex, bool Loss, int GotGald, class UObject* __WorldContext);
	void STATIC_SysCloseImmidiate(class UObject* __WorldContext);
	void STATIC_CloseGald(class UObject* __WorldContext);
	void STATIC_OpenSysGetGald(int AddGald, class UObject* __WorldContext);
	void STATIC_OpenSysApplyResolution(float Timer, class UObject* __WorldContext);
	void STATIC_OpenSysTimer(const struct FModifiedText& Title, const struct FModifiedText& Text, const struct FModifiedText& TimerText, float Timer, int DefaultIndex, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList);
	void STATIC_OpenSysInstallBlock(class UObject* __WorldContext);
	void STATIC_OpenSysInstallMessageCore(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext);
	void STATIC_OpenSysInstallMessage(class UObject* __WorldContext);
	void STATIC_OpenSysGetArts(EArisePartyID Chara, class UObject* __WorldContext, TArray<struct FName>* ArtsLabel);
	void STATIC_OpenSysEulaPP(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection);
	void STATIC_OpenSysAutoSaveNotice(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext);
	void STATIC_OpenSysGetItemMultiCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<struct FSysWinItemData>* ItemData);
	void STATIC_GetSysLastResultPureCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, class UObject* __WorldContext, int* Result);
	void STATIC_OpenSysMessageCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext);
	void STATIC_OpenSysGetItemCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, const struct FString& ItemID, int ItemNum, class UObject* __WorldContext);
	void STATIC_IsSysCloseCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, class UObject* __WorldContext, bool* IsClosed);
	void STATIC_OpenSysSelectCore(class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C* Target, const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, bool EnableDecideSE, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection);
	void STATIC_OpenSysGetItemMulti(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, bool EnableCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<struct FSysWinItemData>* ItemData);
	void STATIC_OpenHelpWindowForBattle(const struct FString& HelpLabel, class UObject* __WorldContext);
	void STATIC_GetFishingToolSelectWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_FIS_C** ResultWindow);
	void STATIC_IsCloseFishingToolSelect(class UObject* __WorldContext, bool* IsClose);
	void STATIC_OpenFishingToolSelect(const struct FFishingAreaData& AreaData, class UObject* __WorldContext);
	void STATIC_IsMenuClosed(class UObject* __WorldContext, bool* IsClosed);
	void STATIC_OpenMenu(const struct FString& MenuID, class UObject* __WorldContext);
	void STATIC_IsSkipFromPause(class UObject* __WorldContext, bool* bDoSkip);
	void STATIC_IsPauseClose(class UObject* __WorldContext, bool* IsClose);
	void STATIC_GetPauseWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_PAU_C** NewParam);
	void STATIC_OpenSimplePause(bool IsSimple, class UObject* __WorldContext);
	void STATIC_GetFishingResultWindow(class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_FIS_RESULT_C** ResultWindow);
	void STATIC_IsCloseFisingResult(class UObject* __WorldContext, bool* IsClose);
	void STATIC_OpenFishingResult(const struct FString& Label, int Size, class UObject* __WorldContext);
	void STATIC_IsAliasGetClose(class UObject* __WorldContext, bool* NewParam);
	void STATIC_ShowAliasGetEffect(const struct FString& AliasID, bool EnableOpenMenu, class UObject* __WorldContext);
	void STATIC_DebugOpenMemoWindow(const struct FString& Message, class UObject* __WorldContext);
	void STATIC_IsHelpWindowClose(class UObject* __WorldContext, bool* IsClosed);
	void STATIC_OpenHelpWindow(const struct FString& HelpLabel, class UObject* __WorldContext);
	void STATIC_OpenHelpInner(const struct FString& HelpLabel, bool ShowBG, class UObject* __WorldContext, class UTO14_BPI_GUI_MNU_COL_HLP_TUT_C** Widget);
	void STATIC_ShowLocationName(const struct FString& LevelName, class UObject* __WorldContext);
	void STATIC_OpenPauseMenu(EAriseGameState ChangedGameState, bool Condition, class UObject* __WorldContext);
	void STATIC_ShowQuestClearEffect(const struct FString& QuestID, class UObject* __WorldContext, class UUserWidget** Widget);
	void STATIC_ShowQuestStartEffect(const struct FString& QuestID, class UObject* __WorldContext, class UUserWidget** Widget);
	void STATIC_GetSysLastResultPure(class UObject* __WorldContext, int* Result);
	void STATIC_OpenSysMessage(const struct FModifiedText& Title, const struct FModifiedText& Message, class UObject* __WorldContext);
	void STATIC_OpenSysGetItem(const struct FModifiedText& Title, const struct FModifiedText& Message, const struct FString& ItemID, int ItemNum, class UObject* __WorldContext);
	void STATIC_GetSysLastResult(class UObject* __WorldContext, int* Result);
	void STATIC_IsSysClose(class UObject* __WorldContext, bool* NewParam);
	void STATIC_GetSysWidget(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C** NewParam);
	void STATIC_OpenSysSelect(const struct FModifiedText& Title, const struct FModifiedText& Message, int DefaultIndex, int NumPerPage, bool EnableCancel, bool EnableDecideSE, class UObject* __WorldContext, TArray<struct FModifiedText>* Selection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
