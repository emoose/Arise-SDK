
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_DebugWindow.BP_DebugWindow_C.RenderAutoLayout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InWinX                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InWinY                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          oRenderHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::RenderAutoLayout(class AHUD* MasterHUD, float InWinX, float InWinY, float* oRenderHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.RenderAutoLayout");

	UBP_DebugWindow_C_RenderAutoLayout_Params params;
	params.MasterHUD = MasterHUD;
	params.InWinX = InWinX;
	params.InWinY = InWinY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oRenderHeight != nullptr)
		*oRenderHeight = params.oRenderHeight;
}


// Function BP_DebugWindow.BP_DebugWindow_C.SetRenderEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::SetRenderEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.SetRenderEnable");

	UBP_DebugWindow_C_SetRenderEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.PrintDebugState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPrint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::PrintDebugState(bool bPrint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.PrintDebugState");

	UBP_DebugWindow_C_PrintDebugState_Params params;
	params.bPrint = bPrint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddDirCursorWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBPDebWid_DirCursor_C*   Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddDirCursorWidget(const struct FString& Name, class UBPDebWid_DirCursor_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddDirCursorWidget");

	UBP_DebugWindow_C_AddDirCursorWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.GetWidgetByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WidgetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBP_DebugWidget_C*       FindWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::GetWidgetByName(const struct FString& WidgetName, class UBP_DebugWidget_C** FindWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.GetWidgetByName");

	UBP_DebugWindow_C_GetWidgetByName_Params params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindWidget != nullptr)
		*FindWidget = params.FindWidget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddCheckBoxWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBPDebWid_CheckBox_C*    Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddCheckBoxWidget(const struct FString& Name, class UBPDebWid_CheckBox_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddCheckBoxWidget");

	UBP_DebugWindow_C_AddCheckBoxWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddSliderWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBPDebWid_Slider_C*      Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddSliderWidget(const struct FString& Name, class UBPDebWid_Slider_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddSliderWidget");

	UBP_DebugWindow_C_AddSliderWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddTextWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBPDebWid_Text_C*        Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddTextWidget(const struct FString& Name, class UBPDebWid_Text_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddTextWidget");

	UBP_DebugWindow_C_AddTextWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddInstLogWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBPDebWid_InstLog_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddInstLogWidget(const struct FString& Name, class UBPDebWid_InstLog_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddInstLogWidget");

	UBP_DebugWindow_C_AddInstLogWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_DebugWindow.BP_DebugWindow_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DebugWidget_C*       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::AddWidget(class UBP_DebugWidget_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.AddWidget");

	UBP_DebugWindow_C_AddWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.RenderWindowBody
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MusterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::RenderWindowBody(class AHUD* MusterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.RenderWindowBody");

	UBP_DebugWindow_C_RenderWindowBody_Params params;
	params.MusterHUD = MusterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.DrawBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_DebugWindow_C::DrawBox(class AHUD* MasterHUD, float X, float Y, float W, float H, const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.DrawBox");

	UBP_DebugWindow_C_DrawBox_Params params;
	params.MasterHUD = MasterHUD;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewW                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewH                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::OnMouseMove(float Cx, float cy, float ViewW, float ViewH)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.OnMouseMove");

	UBP_DebugWindow_C_OnMouseMove_Params params;
	params.Cx = Cx;
	params.cy = cy;
	params.ViewW = ViewW;
	params.ViewH = ViewH;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.DrawWindowFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::DrawWindowFrame(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.DrawWindowFrame");

	UBP_DebugWindow_C_DrawWindowFrame_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.InWindowCorner?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bin                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::InWindowCorner_(float Cx, float cy, bool* bin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.InWindowCorner?");

	UBP_DebugWindow_C_InWindowCorner__Params params;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bin != nullptr)
		*bin = params.bin;
}


// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::OnMouseUp(float Cx, float cy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.OnMouseUp");

	UBP_DebugWindow_C_OnMouseUp_Params params;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::OnMouseDown(float Cx, float cy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.OnMouseDown");

	UBP_DebugWindow_C_OnMouseDown_Params params;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugWindow.BP_DebugWindow_C.InWindow?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Cx                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          cy                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bin                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::InWindow_(float Cx, float cy, bool* bin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.InWindow?");

	UBP_DebugWindow_C_InWindow__Params params;
	params.Cx = Cx;
	params.cy = cy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bin != nullptr)
		*bin = params.bin;
}


// Function BP_DebugWindow.BP_DebugWindow_C.Render
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugWindow_C::Render(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugWindow.BP_DebugWindow_C.Render");

	UBP_DebugWindow_C_Render_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
