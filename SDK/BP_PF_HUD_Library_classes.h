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

// BlueprintGeneratedClass BP_PF_HUD_Library.BP_PF_HUD_Library_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_HUD_Library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_HUD_Library.BP_PF_HUD_Library_C");
		return ptr;
	}


	void STATIC_PF_HUD_IsPFHelpUIOpenCheck(class UObject* __WorldContext, bool* OutIsOpen);
	void STATIC_PF_HUD_GetDefaultShow(class UObject* __WorldContext, TArray<bool>* IsDefaultShow);
	void STATIC_PF_HUD_Hide(class UObject* __WorldContext);
	void STATIC_GetPF_HUD_ManagerNative(class UObject* __WorldContext, class APF_HUD_Manager** OutBP_PF_HUD);
	void STATIC_GetPF_HUD_ManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_PF_HUD_Interface_C>* OutBP_PF_HUD);
	void STATIC_PF_HUD_AbortShortChat(class UObject* __WorldContext);
	void STATIC_PF_HUD_IsShowPFUIHelp(class UObject* __WorldContext, bool* bShow);
	void STATIC_PF_HUD_ClearShortChat(class UObject* __WorldContext);
	void STATIC_PF_HUD_IsShowCPAction(class UObject* __WorldContext, bool* bShow);
	void STATIC_PF_HUD_IsShowLongChatInfo(class UObject* __WorldContext, bool* bShow);
	void STATIC_GetPF_HUD_LayoutInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PF_Layout);
	void STATIC_PF_HUD_IsShowNextMapName_(class UObject* __WorldContext, bool* bShow);
	void STATIC_PF_HUD_AddLogFarmLivestockHarvest(class UObject* __WorldContext);
	void STATIC_PF_HUD_IsPlayableHelpButtonShow(class UObject* __WorldContext, bool* IsShow);
	void STATIC_PF_HUD_GetShownPlayableHelpLabel(class UObject* __WorldContext, struct FString* Label);
	void STATIC_GetNewsInfoManager(class UObject* __WorldContext, class UNewsInfoManager** Manager);
	void STATIC_PF_HUD_ShowSubQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, class UObject* __WorldContext);
	void STATIC_PF_HUD_Refresh(class UObject* __WorldContext);
	void STATIC_DbPrintHelpSaveStatus(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowPlayableHelpByLabel(const struct FString& Label, class UObject* __WorldContext, bool* OutResult);
	void STATIC_PF_HUD_ChangeUIControl(EPFUIPattern InPFUIPattern, bool InIsChangeLock, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogFoodEffectEnd(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowTPAnimation(float Old, float New, class UObject* __WorldContext);
	void STATIC_GetNavimapFootprintManager(class UObject* __WorldContext, class UNavimapFootprintManager** Manager);
	void STATIC_PF_HUD_HideKeyHelp(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowKeyHelp(TEnumAsByte<EKeyHelpMode> Mode, class UObject* __WorldContext);
	void STATIC_PF_HUD_HidePlayableHelp(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowPlayableHelp(const struct FModifiedText& Title, const struct FModifiedText& Text, bool IsShowButton, const struct FString& CachedLabel, class UObject* __WorldContext);
	void STATIC_PF_HUD_CloseShortChat(class UObject* __WorldContext);
	void STATIC_PF_HUD_PlayShortChat(EAriseCharaIconID CharaIconID, const struct FText& Message, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogQuestDefeatEnemy(const struct FName& EnemyID, int Num, int Max, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogFastTravelEnabled(const struct FString& LocatorName, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogQuestGetItem(const struct FString& ItemID, int Num, int Max, class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowLocation(const struct FString& LocationName, const struct FString& OldLocatiojnName, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddMainQuestUpdate(const struct FString& QuestID, int Step, const struct FString& OldQuestID, int OldStep, class UObject* __WorldContext);
	void STATIC_GetPopupInfoManager(class UObject* __WorldContext, class UPopupInfoManager** Manager);
	void STATIC_PF_HUD_HideActInfo(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowActInfo(const struct FModifiedText& Info, const struct FString& ButtonLabel, bool Condition, int InCPPoint, class UObject* __WorldContext);
	void STATIC_PF_HUD_HideNextMapName(class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowNextMapName(const struct FModifiedText& MapName, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogQuestStepUpdate(const struct FModifiedText& Name, class UObject* __WorldContext);
	void STATIC_PF_HUD_ShowMainQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddQuestUpdate(const struct FString& QuestID, int Step, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogGetItem(const struct FString& ItemID, int Num, EOption InLogOption, class UObject* __WorldContext);
	void STATIC_PF_HUD_AddLogMessageBase(const struct FModifiedText& Message, TEnumAsByte<ETO14_ImageType> inImageType, int inImageID, int inRarity, EOption InOption, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
