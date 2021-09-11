
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

// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.PadWork
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C::PadWork(class AMenuPadProcess* PadProcess, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.PadWork");

	UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.Tick");

	UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.SetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C::SetTimer(float Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.SetTimer");

	UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_SetTimer_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT");

	UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
