
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

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.TPCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewTpMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InNewTp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::TPCheck(int InNewTpMax, int InNewTp, bool* IsChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.TPCheck");

	UTO14_BPI_GUI_SYS_PF_TP_C_TPCheck_Params params;
	params.InNewTpMax = InNewTpMax;
	params.InNewTp = InNewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChange != nullptr)
		*IsChange = params.IsChange;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_TP_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::GetIsEvent(bool* OutIsEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsEvent");

	UTO14_BPI_GUI_SYS_PF_TP_C_GetIsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEvent != nullptr)
		*OutIsEvent = params.OutIsEvent;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::SetIsEvent(bool InIsEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsEvent");

	UTO14_BPI_GUI_SYS_PF_TP_C_SetIsEvent_Params params;
	params.InIsEvent = InIsEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsOen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsOpen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::SetIsOen(bool InIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsOen");

	UTO14_BPI_GUI_SYS_PF_TP_C_SetIsOen_Params params;
	params.InIsOpen = InIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsOpen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::GetIsOpen(bool* OutIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsOpen");

	UTO14_BPI_GUI_SYS_PF_TP_C_GetIsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsOpen != nullptr)
		*OutIsOpen = params.OutIsOpen;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsPinch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPinch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::GetIsPinch(bool* OutIsPinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsPinch");

	UTO14_BPI_GUI_SYS_PF_TP_C_GetIsPinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPinch != nullptr)
		*OutIsPinch = params.OutIsPinch;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PinchColorCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsCPAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsShow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::PinchColorCheck(bool InIsCPAction, bool* OutIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PinchColorCheck");

	UTO14_BPI_GUI_SYS_PF_TP_C_PinchColorCheck_Params params;
	params.InIsCPAction = InIsCPAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsShow != nullptr)
		*OutIsShow = params.OutIsShow;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::SetShow(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetShow");

	UTO14_BPI_GUI_SYS_PF_TP_C_SetShow_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNewTpMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InNewTp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::PFUIHelp_Initialize(int InNewTpMax, int InNewTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Initialize");

	UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Initialize_Params params;
	params.InNewTpMax = InNewTpMax;
	params.InNewTp = InNewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Close
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::PFUIHelp_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Close");

	UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::PFUIHelp_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Open");

	UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PreConstruct");

	UTO14_BPI_GUI_SYS_PF_TP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Construct");

	UTO14_BPI_GUI_SYS_PF_TP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::ChangeValue(int NewTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ChangeValue");

	UTO14_BPI_GUI_SYS_PF_TP_C_ChangeValue_Params params;
	params.NewTp = NewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneStated
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::OpneStated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneStated");

	UTO14_BPI_GUI_SYS_PF_TP_C_OpneStated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::CloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseFinished");

	UTO14_BPI_GUI_SYS_PF_TP_C_CloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpenAnime
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::OpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpenAnime");

	UTO14_BPI_GUI_SYS_PF_TP_C_OpenAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseAnime
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::CloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseAnime");

	UTO14_BPI_GUI_SYS_PF_TP_C_CloseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::OpneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneEnd");

	UTO14_BPI_GUI_SYS_PF_TP_C_OpneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TP_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP");

	UTO14_BPI_GUI_SYS_PF_TP_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OnOpenAnimeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TP_C::OnOpenAnimeFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OnOpenAnimeFinished__DelegateSignature");

	UTO14_BPI_GUI_SYS_PF_TP_C_OnOpenAnimeFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
