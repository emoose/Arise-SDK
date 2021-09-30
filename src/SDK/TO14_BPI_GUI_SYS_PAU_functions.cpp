
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

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsSkip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDoSkip                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::IsSkip(bool* bDoSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsSkip");

	UTO14_BPI_GUI_SYS_PAU_C_IsSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDoSkip != nullptr)
		*bDoSkip = params.bDoSkip;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::IsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsClose");

	UTO14_BPI_GUI_SYS_PAU_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PAU_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadInit");

	UTO14_BPI_GUI_SYS_PAU_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PAU_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadTerm");

	UTO14_BPI_GUI_SYS_PAU_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PAU_C::EventClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventClose");

	UTO14_BPI_GUI_SYS_PAU_C_EventClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSimple                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::EventOpen(bool IsSimple)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOpen");

	UTO14_BPI_GUI_SYS_PAU_C_EventOpen_Params params;
	params.IsSimple = IsSimple;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.UpdateTick");

	UTO14_BPI_GUI_SYS_PAU_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PAU_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_PAU_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.Tick");

	UTO14_BPI_GUI_SYS_PAU_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOnClosed
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PAU_C::EventOnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOnClosed");

	UTO14_BPI_GUI_SYS_PAU_C_EventOnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PAU_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU");

	UTO14_BPI_GUI_SYS_PAU_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
