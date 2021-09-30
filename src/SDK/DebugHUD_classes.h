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

// BlueprintGeneratedClass DebugHUD.DebugHUD_C
// 0x00F8 (0x0528 - 0x0430)
class ADebugHUD_C : public ASubHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	bool                                               bRenderEnableGS;                                          // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	TArray<class UBP_DebugWindow_C*>                   DebugWindows;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DispDebugWIndow;                                          // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMouseDown;                                               // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0452(0x0006) MISSED OFFSET
	class UBP_DebugWindow_C*                           ActiveWindow;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_DebugWindow_C*                           GameStateWindow;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_DebugWindow_C*                           WorldTimeWindow;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_Slider_C*                          WorldTimeSlider;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_Text_C*                            WorldTimeText;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWorldTimeManager*                           WorldTimeManager;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_CheckBox_C*                        WroldTimeCbPause;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_InstLog_C*                         GameStateLog;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_MapLinkWindow;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_WorldTime;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_MapLinkInfo;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_MapLocatorInfo;                                     // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_GameState;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_MapInfoWindow;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_CheckBox_C*                        chkMapLinkInfo;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_CheckBox_C*                        chkMapLocatorInfo;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_DebugWindow_C*                           MapLinkDebWindow;                                         // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_DebugWindow_C*                           MapInfoDebWindow;                                         // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_DirCursor_C*                       MapCompassWidget;                                         // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_Text_C*                            TextPlayerPositionWidget;                                 // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_Text_C*                            TextPhysicalMaterialWidget;                               // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_DebugWindow;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventExRender;                                            // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBPDebWid_Text_C*                            TextLocationNameWidget;                                   // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinX;                                                     // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinY;                                                     // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugHUD.DebugHUD_C");
		return ptr;
	}


	void IsRenderGameStateWindow(bool* bRender);
	void DrawBox(float X, float Y, float W, float H, const struct FLinearColor& LineColor);
	void CreateMapInfoWidget();
	void CreateMapLinkWidget();
	void GetDebugWidget(class UBP_DebugWindow_C* BaseWindow, const struct FString& WidgetName, class UBP_DebugWidget_C** Widget);
	void CreateGameStateWidget();
	void WorldTimeManagement();
	void CreateWorldTimeWidget();
	void GetDebugWindow(const struct FString& WindowName, class UBP_DebugWindow_C** NewParam);
	void DebugWindowManagement();
	void CreateDebugWindow(const struct FString& WindowName, class UBP_DebugWindow_C** NewWindow);
	void RenderGameState();
	void AddStringGameState(const struct FString& String, const struct FLinearColor& Color);
	void PrintString(float X, float Y, const struct FString& DrawText, const struct FLinearColor& Color);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnChangineWorldTimeSlider();
	void OnChangeEndWorldTimeSlider();
	void OnChangeWorldTimePause();
	void OnChangeChkMapLocator();
	void OnChangeChkMapLink();
	void ReceiveBeginPlay();
	void RenderHUD();
	void OnDBPChanged_MapInfoDevWindow();
	void OnDBPChanged_MapLocatorInfo();
	void OnDBPChanged_MapLinkWindow();
	void OnDBPChanged_MapLinkInfo();
	void ExecuteUbergraph_DebugHUD(int EntryPoint);
	void EventExRender__DelegateSignature(class AHUD* MasterHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
