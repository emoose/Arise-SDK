
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

// Function DebugHUD.DebugHUD_C.IsRenderGameStateWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRender                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::IsRenderGameStateWindow(bool* bRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.IsRenderGameStateWindow");

	ADebugHUD_C_IsRenderGameStateWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRender != nullptr)
		*bRender = params.bRender;
}


// Function DebugHUD.DebugHUD_C.DrawBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADebugHUD_C::DrawBox(float X, float Y, float W, float H, const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.DrawBox");

	ADebugHUD_C_DrawBox_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.CreateMapInfoWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::CreateMapInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.CreateMapInfoWidget");

	ADebugHUD_C_CreateMapInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.CreateMapLinkWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::CreateMapLinkWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.CreateMapLinkWidget");

	ADebugHUD_C_CreateMapLinkWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.GetDebugWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DebugWindow_C*       BaseWindow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WidgetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBP_DebugWidget_C*       Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::GetDebugWidget(class UBP_DebugWindow_C* BaseWindow, const struct FString& WidgetName, class UBP_DebugWidget_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.GetDebugWidget");

	ADebugHUD_C_GetDebugWidget_Params params;
	params.BaseWindow = BaseWindow;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function DebugHUD.DebugHUD_C.CreateGameStateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::CreateGameStateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.CreateGameStateWidget");

	ADebugHUD_C_CreateGameStateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.WorldTimeManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::WorldTimeManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.WorldTimeManagement");

	ADebugHUD_C_WorldTimeManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.CreateWorldTimeWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::CreateWorldTimeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.CreateWorldTimeWidget");

	ADebugHUD_C_CreateWorldTimeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.GetDebugWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WindowName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBP_DebugWindow_C*       NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::GetDebugWindow(const struct FString& WindowName, class UBP_DebugWindow_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.GetDebugWindow");

	ADebugHUD_C_GetDebugWindow_Params params;
	params.WindowName = WindowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function DebugHUD.DebugHUD_C.DebugWindowManagement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::DebugWindowManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.DebugWindowManagement");

	ADebugHUD_C_DebugWindowManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.CreateDebugWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WindowName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UBP_DebugWindow_C*       NewWindow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::CreateDebugWindow(const struct FString& WindowName, class UBP_DebugWindow_C** NewWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.CreateDebugWindow");

	ADebugHUD_C_CreateDebugWindow_Params params;
	params.WindowName = WindowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewWindow != nullptr)
		*NewWindow = params.NewWindow;
}


// Function DebugHUD.DebugHUD_C.RenderGameState
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::RenderGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.RenderGameState");

	ADebugHUD_C_RenderGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.AddStringGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADebugHUD_C::AddStringGameState(const struct FString& String, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.AddStringGameState");

	ADebugHUD_C_AddStringGameState_Params params;
	params.String = String;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.PrintString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DrawText                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADebugHUD_C::PrintString(float X, float Y, const struct FString& DrawText, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.PrintString");

	ADebugHUD_C_PrintString_Params params;
	params.X = X;
	params.Y = Y;
	params.DrawText = DrawText;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.UserConstructionScript");

	ADebugHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.ReceiveTick");

	ADebugHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnChangineWorldTimeSlider
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnChangineWorldTimeSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnChangineWorldTimeSlider");

	ADebugHUD_C_OnChangineWorldTimeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnChangeEndWorldTimeSlider
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnChangeEndWorldTimeSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnChangeEndWorldTimeSlider");

	ADebugHUD_C_OnChangeEndWorldTimeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnChangeWorldTimePause
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnChangeWorldTimePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnChangeWorldTimePause");

	ADebugHUD_C_OnChangeWorldTimePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnChangeChkMapLocator
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnChangeChkMapLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnChangeChkMapLocator");

	ADebugHUD_C_OnChangeChkMapLocator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnChangeChkMapLink
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnChangeChkMapLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnChangeChkMapLink");

	ADebugHUD_C_OnChangeChkMapLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADebugHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.ReceiveBeginPlay");

	ADebugHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.RenderHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::RenderHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.RenderHUD");

	ADebugHUD_C_RenderHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapInfoDevWindow
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnDBPChanged_MapInfoDevWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnDBPChanged_MapInfoDevWindow");

	ADebugHUD_C_OnDBPChanged_MapInfoDevWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLocatorInfo
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnDBPChanged_MapLocatorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLocatorInfo");

	ADebugHUD_C_OnDBPChanged_MapLocatorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkWindow
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnDBPChanged_MapLinkWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkWindow");

	ADebugHUD_C_OnDBPChanged_MapLinkWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkInfo
// (BlueprintCallable, BlueprintEvent)

void ADebugHUD_C::OnDBPChanged_MapLinkInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkInfo");

	ADebugHUD_C_OnDBPChanged_MapLinkInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.ExecuteUbergraph_DebugHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::ExecuteUbergraph_DebugHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.ExecuteUbergraph_DebugHUD");

	ADebugHUD_C_ExecuteUbergraph_DebugHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugHUD.DebugHUD_C.EventExRender__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHUD*                    MasterHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADebugHUD_C::EventExRender__DelegateSignature(class AHUD* MasterHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugHUD.DebugHUD_C.EventExRender__DelegateSignature");

	ADebugHUD_C_EventExRender__DelegateSignature_Params params;
	params.MasterHUD = MasterHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
