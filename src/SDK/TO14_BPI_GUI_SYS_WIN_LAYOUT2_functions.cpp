
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

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ForceDecide
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::ForceDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ForceDecide");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_ForceDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Abort
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Abort");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpened");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnClosed");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::Decide(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Decide");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.GetLastResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::GetLastResult(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.GetLastResult");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_GetLastResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::IsClose(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.IsClose");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Close");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::UpdatePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdatePad");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_UpdatePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadTerm");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputLayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::PadInit(int InputLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadInit");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_PadInit_Params params;
	params.InputLayer = InputLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputLayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::Open(int InputLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Open");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Open_Params params;
	params.InputLayer = InputLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::HideTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideTitle");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideText");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.RemoveSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::RemoveSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.RemoveSelection");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_RemoveSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberPerPage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::SetSelection(int DefaultIndex, bool EnableCancel, int NumberPerPage, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetSelection");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetSelection_Params params;
	params.DefaultIndex = DefaultIndex;
	params.EnableCancel = EnableCancel;
	params.NumberPerPage = NumberPerPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::SetText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetText");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::SetTitle(const struct FModifiedText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetTitle");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideAll");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdateTick");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::OnOpenStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenStartEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpenStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::OnCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C::OnOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
