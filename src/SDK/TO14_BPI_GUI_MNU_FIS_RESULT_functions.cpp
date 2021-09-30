
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

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadTerm");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadInit");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.OnClosed");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::UpdatePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdatePad");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_UpdatePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Close                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::IsClose(bool* Close)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.IsClose");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Close != nullptr)
		*Close = params.Close;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.Close");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.StarInit
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::StarInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.StarInit");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_StarInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.EventOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewRecode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::EventOpen(const struct FString& Label, int Size, bool NewRecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.EventOpen");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_EventOpen_Params params;
	params.Label = Label;
	params.Size = Size;
	params.NewRecode = NewRecode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdateTick");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.SetupDelegate");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_RESULT_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT");

	UTO14_BPI_GUI_MNU_FIS_RESULT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
