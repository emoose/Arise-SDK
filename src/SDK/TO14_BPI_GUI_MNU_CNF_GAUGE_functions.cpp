
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

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChenge
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::ValueChenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChenge");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ValueChenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.GetGaugePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutPercent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::GetGaugePercent(int* OutPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.GetGaugePercent");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_GetGaugePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPercent != nullptr)
		*OutPercent = params.OutPercent;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.AddGaugePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::AddGaugePercent(int InPercent, bool* OutIsResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.AddGaugePercent");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_AddGaugePercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.SetGaugePercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::SetGaugePercent(int InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.SetGaugePercent");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_SetGaugePercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Tick");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseCaptureEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::MouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseCaptureEnd");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_MouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChengeEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::ValueChengeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChengeEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ValueChengeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GAUGE_C::MouseHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseHovered__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GAUGE_C_MouseHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
