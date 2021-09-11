
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

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetEULAFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseTextWidget*        InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::SetEULAFont(class UAriseTextWidget* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetEULAFont");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_SetEULAFont_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.CloseImmidiate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::CloseImmidiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.CloseImmidiate");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_CloseImmidiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.getListWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_SYS_WIN_SELECT_C* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::getListWidget(int InIndex, class UTO14_BPI_GUI_SYS_WIN_SELECT_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.getListWidget");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_getListWidget_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnMouseWheel");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnOpened");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnClosed");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Close");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::IsClose(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.IsClose");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.GetLastResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::GetLastResult(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.GetLastResult");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_GetLastResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Next");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Prev");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::UpdatePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdatePad");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UpdatePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadTerm");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadInit");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewUniqueId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Select(int NewUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Select");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Select_Params params;
	params.NewUniqueId = NewUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Decide(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Decide");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.RestructText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EULA_Language                  Language                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::RestructText(EULA_Language Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.RestructText");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_RestructText_Params params;
	params.Language = Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TitleLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 AgreeLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 DisagreeLabel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLanguageSelectEnabled         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InSelectID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Open(const struct FString& TitleLabel, const struct FString& TextLabel, const struct FString& AgreeLabel, const struct FString& DisagreeLabel, bool bLanguageSelectEnabled, int InSelectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Open");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Open_Params params;
	params.TitleLabel = TitleLabel;
	params.TextLabel = TextLabel;
	params.AgreeLabel = AgreeLabel;
	params.DisagreeLabel = DisagreeLabel;
	params.bLanguageSelectEnabled = bLanguageSelectEnabled;
	params.InSelectID = InSelectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewOpen");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewClose");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Construct");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventRestructText
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::EventRestructText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventRestructText");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventRestructText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdateTick");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::EventActivate(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventActivate");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventActivate_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.񣌘򠳾񍯐�0�0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::񣌘򠳾񍯐�0�0_1(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.񣌘򠳾񍯐�0�0_1");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_񣌘򠳾񍯐�0�0_1_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.BindTitleBackEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::BindTitleBackEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.BindTitleBackEvent");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_BindTitleBackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UnbindTitleBackEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::UnbindTitleBackEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UnbindTitleBackEvent");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UnbindTitleBackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventGoBackTitle
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::EventGoBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventGoBackTitle");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventGoBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_LAYOUT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT");

	UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
