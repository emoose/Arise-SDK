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

// BlueprintGeneratedClass GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGUI_InstanceManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C");
		return ptr;
	}


	void Terminate();
	void GetNewstInfoManager(class UNewsInfoManager** NewstInfoManager);
	void SeNewstInfoManager(class UNewsInfoManager* NewstInfoManager);
	void SetSystemWindow_Reserved(class UUserWidget* Widget);
	void GetSystemWindow_Reserved(class UUserWidget** Widget);
	void SetFishingToolSelect(class UUserWidget* FishingToolSelect);
	void GetFishingToolSelect(class UUserWidget** FishingToolSelect);
	void SetPauseWindow(class UUserWidget* PauseWindow);
	void GetPauseWindow(class UUserWidget** PauseWindow);
	void SetFishingResult(class UUserWidget* FishingResult);
	void GetFishingResult(class UUserWidget** FishingResult);
	void SetAliasGetWindow(class UUserWidget* AliasGetWindow);
	void GetAliasGetWindow(class UUserWidget** AliasGetWindow);
	void SetTPCurrent(float TPCurrent);
	void GetTPCurrent(float* TPCurrent);
	void SetTPRecent(float TPRecent);
	void GetTPRecent(float* TPRecent);
	void SetNeedShowTP(bool NeedShowTP);
	void GetNeedShowTP(bool* NeedShowTP);
	void SetNavimapFootprintManager(class UNavimapFootprintManager* NavimapFootprint);
	void GetNavimapFootprintManager(class UNavimapFootprintManager** NavimapFootprint);
	void SetPopupInfoManager(class UPopupInfoManager* PopupInfoManager);
	void GetPopupInfoManager(class UPopupInfoManager** PopupInfoManager);
	void SetSystemWindow(class UUserWidget* SystemWindow);
	void GetSystemWindow(class UUserWidget** SystemWindow);
	void SetMessageWindow(class UUserWidget* MessageWindow);
	void GetMessageWindow(class UUserWidget** MessageWindow);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
