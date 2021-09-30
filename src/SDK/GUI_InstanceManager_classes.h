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

// BlueprintGeneratedClass GUI_InstanceManager.GUI_InstanceManager_C
// 0x0068 (0x0090 - 0x0028)
class UGUI_InstanceManager_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_SYS_MSG_C*                     MessageWindow;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              SystemWindow;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPopupInfoManager*                           PopupInfoManager;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNavimapFootprintManager*                    NavimapFootprint;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedShowTP;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              TPRecent;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPCurrent;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UTO14_BPI_GUI_SYS_PF_TIT_GET_C*              AliasGetWindow;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FIS_RESULT_C*              FishingResult;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_PAU_C*                     PauseWindow;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FIS_C*                     FishingToolSelect;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C*             SystemWindow_Reserved;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UNewsInfoManager*                            NewstInfoManager;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUI_InstanceManager.GUI_InstanceManager_C");
		return ptr;
	}


	void GetNewstInfoManager(class UNewsInfoManager** NewstInfoManager);
	void GetSystemWindow_Reserved(class UUserWidget** Widget);
	void GetFishingToolSelect(class UUserWidget** FishingToolSelect);
	void GetMessageWindow(class UUserWidget** MessageWindow);
	void GetSystemWindow(class UUserWidget** SystemWindow);
	void GetPopupInfoManager(class UPopupInfoManager** PopupInfoManager);
	void GetNavimapFootprintManager(class UNavimapFootprintManager** NavimapFootprint);
	void GetNeedShowTP(bool* NeedShowTP);
	void GetTPRecent(float* TPRecent);
	void GetTPCurrent(float* TPCurrent);
	void GetAliasGetWindow(class UUserWidget** AliasGetWindow);
	void GetFishingResult(class UUserWidget** FishingResult);
	void GetPauseWindow(class UUserWidget** PauseWindow);
	void SetPauseWindow(class UUserWidget* PauseWindow);
	void SetFishingResult(class UUserWidget* FishingResult);
	void SetAliasGetWindow(class UUserWidget* AliasGetWindow);
	void SetTPCurrent(float TPCurrent);
	void SetTPRecent(float TPRecent);
	void SetNeedShowTP(bool NeedShowTP);
	void SetNavimapFootprintManager(class UNavimapFootprintManager* NavimapFootprint);
	void SetPopupInfoManager(class UPopupInfoManager* PopupInfoManager);
	void SetSystemWindow(class UUserWidget* SystemWindow);
	void SetMessageWindow(class UUserWidget* MessageWindow);
	void SetFishingToolSelect(class UUserWidget* FishingToolSelect);
	void SetSystemWindow_Reserved(class UUserWidget* Widget);
	void SeNewstInfoManager(class UNewsInfoManager* NewstInfoManager);
	void Terminate();
	void ExecuteUbergraph_GUI_InstanceManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
