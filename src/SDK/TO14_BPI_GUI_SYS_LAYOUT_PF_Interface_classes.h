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

// BlueprintGeneratedClass TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_SYS_LAYOUT_PF_Interface.TO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C");
		return ptr;
	}


	void RestructTutorialKeyButtonIconAll(bool* bSuccess);
	void CallIsPFHelpUIOpenCheck(bool* OutIsOpen);
	void AbortShortChat(bool* bSuccess);
	void ClearShortChat(bool* bSuccess);
	void IsShowCPAction(bool* bShow);
	void IsShowPFUIHelp(bool* bShow);
	void IsShowLongChatInfo(bool* bShow);
	void IsShowNextMapName(bool* bShow);
	void IsShowInfoOptionCheck(EOption Option, bool* bShow);
	void IsPlayableHelpButtonShow(bool* IsShow);
	void GetShownPlayableHelpLabel(struct FString* Label);
	void ShowSubQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, bool* bSuccess);
	void HideKeyHelp(bool* bSuccess);
	void ShowKeyHelp(TEnumAsByte<EKeyHelpMode> Mode, bool* bSuccess);
	void HidePlayableHelp(bool* bSuccess);
	void ShowPlayableHelp(const struct FModifiedText& Title, const struct FModifiedText& Text, bool IsShowButton, const struct FString& CachedLabel, bool* bSuccess);
	void CloseShortChat(bool* bSuccess);
	void PlayShortChat(EAriseCharaIconID CharaIconID, const struct FText& Message, bool* bSuccess);
	void ShowLocation(const struct FString& LocationName, const struct FString& OldLocationName, bool* bSuccess);
	void HideActInfo(bool* bSuccess);
	void ShowActInfo(const struct FModifiedText& Info, const struct FString& ButtonLabel, bool Condition, int InCPPoint, bool* bSuccess);
	void HideNextMapName(bool* bSuccess);
	void ShowNextMapName(const struct FModifiedText& MapName, bool* bSuccess);
	void ShowMainQuest(const struct FModifiedText& Name, const struct FModifiedText& OldName, bool* bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
