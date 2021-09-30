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

// BlueprintGeneratedClass BP_PF_HUD_Interface.BP_PF_HUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_HUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_HUD_Interface.BP_PF_HUD_Interface_C");
		return ptr;
	}


	void GetDefaultShow(TArray<bool>* IsDefaultShow);
	void Hide(bool* bSuccess);
	void CheckPastStory(bool* OutIsPastStory);
	void Refresh(bool* bSuccess);
	void ChangePFUIPattern(EPFUIPattern InEPFUIPattern, bool InIsChangeLock, bool* bSuccess);
	void UpdateDuringControl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult);
	void GetPFLayoutInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PFLayout);
	void RequestInitializeLongChatManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
