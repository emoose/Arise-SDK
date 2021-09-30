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

// BlueprintGeneratedClass BP_DebugWindow.BP_DebugWindow_C
// 0x0078 (0x00B0 - 0x0038)
class UBP_DebugWindow_C : public UDebugWindow
{
public:
	bool                                               bRenderEnable;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FLinearColor                                WindowColor;                                              // 0x003C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WinX;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinY;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinW;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinH;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDrag;                                                    // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInWindowCorner;                                          // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInWindow;                                                // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	float                                              CornerSize;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     DrarAction;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MoveSx;                                                   // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSy;                                                   // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWX;                                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWY;                                                    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWW;                                                    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWH;                                                    // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadParamed;                                             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              WinTitleSize;                                             // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBP_DebugWidget_C*>                   Widgets;                                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_DebugWidget_C*                           ActiveWidget;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugWindow.BP_DebugWindow_C");
		return ptr;
	}


	void RenderAutoLayout(class AHUD* MasterHUD, float InWinX, float InWinY, float* oRenderHeight);
	void SetRenderEnable(bool bEnable);
	void PrintDebugState(bool bPrint);
	void AddDirCursorWidget(const struct FString& Name, class UBPDebWid_DirCursor_C** Widget);
	void GetWidgetByName(const struct FString& WidgetName, class UBP_DebugWidget_C** FindWidget);
	void AddCheckBoxWidget(const struct FString& Name, class UBPDebWid_CheckBox_C** Widget);
	void AddSliderWidget(const struct FString& Name, class UBPDebWid_Slider_C** Widget);
	void AddTextWidget(const struct FString& Name, class UBPDebWid_Text_C** Widget);
	void AddInstLogWidget(const struct FString& Name, class UBPDebWid_InstLog_C** Widget);
	void AddWidget(class UBP_DebugWidget_C* Widget);
	void RenderWindowBody(class AHUD* MusterHUD);
	void DrawBox(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor);
	void OnMouseMove(float Cx, float cy, float ViewW, float ViewH);
	void DrawWindowFrame(class AHUD* MasterHUD);
	void InWindowCorner_(float Cx, float cy, bool* bin);
	void OnMouseUp(float Cx, float cy);
	void OnMouseDown(float Cx, float cy);
	void InWindow_(float Cx, float cy, bool* bin);
	void Render(class AHUD* MasterHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
