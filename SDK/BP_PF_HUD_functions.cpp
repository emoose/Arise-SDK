
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

// Function BP_PF_HUD.BP_PF_HUD_C.GetDefaultShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<bool>                   IsDefaultShow                  (Parm, OutParm, ZeroConstructor)

void ABP_PF_HUD_C::GetDefaultShow(TArray<bool>* IsDefaultShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.GetDefaultShow");

	ABP_PF_HUD_C_GetDefaultShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDefaultShow != nullptr)
		*IsDefaultShow = params.IsDefaultShow;
}


// Function BP_PF_HUD.BP_PF_HUD_C.Hide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::Hide(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.Hide");

	ABP_PF_HUD_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD.BP_PF_HUD_C.CheckPastStory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsPastStory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::CheckPastStory(bool* OutIsPastStory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.CheckPastStory");

	ABP_PF_HUD_C_CheckPastStory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPastStory != nullptr)
		*OutIsPastStory = params.OutIsPastStory;
}


// Function BP_PF_HUD.BP_PF_HUD_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::Refresh(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.Refresh");

	ABP_PF_HUD_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPattern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIPattern                   InEPFUIPattern                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsChangeLock                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::ChangePFUIPattern(EPFUIPattern InEPFUIPattern, bool InIsChangeLock, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPattern");

	ABP_PF_HUD_C_ChangePFUIPattern_Params params;
	params.InEPFUIPattern = InEPFUIPattern;
	params.InIsChangeLock = InIsChangeLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIParts                     InPFUIParts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::UpdateDuringControl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControl");

	ABP_PF_HUD_C_UpdateDuringControl_Params params;
	params.InPFUIParts = InPFUIParts;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function BP_PF_HUD.BP_PF_HUD_C.GetPFLayoutInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PFLayout                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::GetPFLayoutInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PFLayout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.GetPFLayoutInterface");

	ABP_PF_HUD_C_GetPFLayoutInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFLayout != nullptr)
		*PFLayout = params.PFLayout;
}


// Function BP_PF_HUD.BP_PF_HUD_C.Destory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::Destory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.Destory");

	ABP_PF_HUD_C_Destory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.IsPastStory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPastStory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::IsPastStory(bool* OutIsPastStory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.IsPastStory");

	ABP_PF_HUD_C_IsPastStory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPastStory != nullptr)
		*OutIsPastStory = params.OutIsPastStory;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateShowPastStoryUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UpdateShowPastStoryUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateShowPastStoryUI");

	ABP_PF_HUD_C_UpdateShowPastStoryUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControlImpl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIParts                     InPFUIParts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::UpdateDuringControlImpl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControlImpl");

	ABP_PF_HUD_C_UpdateDuringControlImpl_Params params;
	params.InPFUIParts = InPFUIParts;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUICloseCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsClose                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::IsPFHelpUICloseCheck(bool* OutIsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUICloseCheck");

	ABP_PF_HUD_C_IsPFHelpUICloseCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsClose != nullptr)
		*OutIsClose = params.OutIsClose;
}


// Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUIOpenCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsOpen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::IsPFHelpUIOpenCheck(bool* OutIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUIOpenCheck");

	ABP_PF_HUD_C_IsPFHelpUIOpenCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsOpen != nullptr)
		*OutIsOpen = params.OutIsOpen;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateLongchatShow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UpdateLongchatShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateLongchatShow");

	ABP_PF_HUD_C_UpdateLongchatShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateNextMainQuestShow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UpdateNextMainQuestShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateNextMainQuestShow");

	ABP_PF_HUD_C_UpdateNextMainQuestShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.RefreshImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::RefreshImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.RefreshImpl");

	ABP_PF_HUD_C_RefreshImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateBtlResultShow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UpdateBtlResultShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateBtlResultShow");

	ABP_PF_HUD_C_UpdateBtlResultShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UpdateShortChatShow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UpdateShortChatShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UpdateShortChatShow");

	ABP_PF_HUD_C_UpdateShortChatShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.SetDefaultShowFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PF_HUD_C::SetDefaultShowFlag(class UUserWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.SetDefaultShowFlag");

	ABP_PF_HUD_C_SetDefaultShowFlag_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.CurrentDefaultShowFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::CurrentDefaultShowFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.CurrentDefaultShowFlag");

	ABP_PF_HUD_C_CurrentDefaultShowFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.SetShowParts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::SetShowParts(class UUserWidget* InWidget, bool InIsShow, bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.SetShowParts");

	ABP_PF_HUD_C_SetShowParts_Params params;
	params.InWidget = InWidget;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ShowPartsCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::ShowPartsCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ShowPartsCheck");

	ABP_PF_HUD_C_ShowPartsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.SetUserWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             InSetWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUserWidget*             InBaseWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PF_HUD_C::SetUserWidget(class UUserWidget* InSetWidget, class UUserWidget* InBaseWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.SetUserWidget");

	ABP_PF_HUD_C_SetUserWidget_Params params;
	params.InSetWidget = InSetWidget;
	params.InBaseWidget = InBaseWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.SetPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::SetPartsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.SetPartsWidget");

	ABP_PF_HUD_C_SetPartsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPatternImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIPattern                   InEPFUIPattern                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsChangeLock                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::ChangePFUIPatternImpl(EPFUIPattern InEPFUIPattern, bool InIsChangeLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPatternImpl");

	ABP_PF_HUD_C_ChangePFUIPatternImpl_Params params;
	params.InEPFUIPattern = InEPFUIPattern;
	params.InIsChangeLock = InIsChangeLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.IsVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RetVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::IsVisible(bool* RetVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.IsVisible");

	ABP_PF_HUD_C_IsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetVal != nullptr)
		*RetVal = params.RetVal;
}


// Function BP_PF_HUD.BP_PF_HUD_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::SetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.SetVisible");

	ABP_PF_HUD_C_SetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.HideImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::HideImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.HideImpl");

	ABP_PF_HUD_C_HideImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.Show");

	ABP_PF_HUD_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.Initialize");

	ABP_PF_HUD_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.UserConstructionScript");

	ABP_PF_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ReceiveTick");

	ABP_PF_HUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_HUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ReceiveBeginPlay");

	ABP_PF_HUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.RequestInitializeLongChatManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_HUD_C::RequestInitializeLongChatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.RequestInitializeLongChatManager");

	ABP_PF_HUD_C_RequestInitializeLongChatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.ExecuteUbergraph_BP_PF_HUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::ExecuteUbergraph_BP_PF_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.ExecuteUbergraph_BP_PF_HUD");

	ABP_PF_HUD_C_ExecuteUbergraph_BP_PF_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_HUD.BP_PF_HUD_C.PauseShortChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_HUD_C::PauseShortChat__DelegateSignature(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD.BP_PF_HUD_C.PauseShortChat__DelegateSignature");

	ABP_PF_HUD_C_PauseShortChat__DelegateSignature_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
