
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

// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.Skip
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.Skip");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::UpdatePad(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.UpdatePad");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_UpdatePad_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.PadTerm");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.PadInit");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.IsOpenMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NeedShowTIT                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::IsOpenMenu(bool* NeedShowTIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.IsOpenMenu");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_IsOpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedShowTIT != nullptr)
		*NeedShowTIT = params.NeedShowTIT;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetMenuEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSkipEnabled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::SetMenuEnabled(bool bIsSkipEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetMenuEnabled");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_SetMenuEnabled_Params params;
	params.bIsSkipEnabled = bIsSkipEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_SYS_PF_TIT_GET_C::IsClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.IsClose");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetAlias
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AliasLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::SetAlias(const struct FString& AliasLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetAlias");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_SetAlias_Params params;
	params.AliasLabel = AliasLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SEL_TO14_SYS_TITLE_GET_PLAY
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::SEL_TO14_SYS_TITLE_GET_PLAY()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SEL_TO14_SYS_TITLE_GET_PLAY");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_SEL_TO14_SYS_TITLE_GET_PLAY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.Construct");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.EventOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::EventOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.EventOpen");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_EventOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.UpdateTick");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.CustomEvent_1");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SEL_TO14_SYS_TITLE_GET_B_PLAY
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::SEL_TO14_SYS_TITLE_GET_B_PLAY()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.SEL_TO14_SYS_TITLE_GET_B_PLAY");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_SEL_TO14_SYS_TITLE_GET_B_PLAY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.EventMouseClicked
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::EventMouseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.EventMouseClicked");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_EventMouseClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.CustomEvent");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TIT_GET
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_TIT_GET_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TIT_GET(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_TIT_GET.TO14_BPI_GUI_SYS_PF_TIT_GET_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TIT_GET");

	UTO14_BPI_GUI_SYS_PF_TIT_GET_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TIT_GET_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
