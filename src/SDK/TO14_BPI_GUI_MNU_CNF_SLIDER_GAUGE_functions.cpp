
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

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.GetSaveValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutSaveValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::GetSaveValue(int* OutSaveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.GetSaveValue");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_GetSaveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSaveValue != nullptr)
		*OutSaveValue = params.OutSaveValue;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::ChengeValue(float InPercent, float* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeValue");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ChengeValue_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeGaugePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutPercent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::ChengeGaugePercent(float InValue, float* OutPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeGaugePercent");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ChengeGaugePercent_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPercent != nullptr)
		*OutPercent = params.OutPercent;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.SetUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::SetUpdate(int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.SetUpdate");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_SetUpdate_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.AddGaugePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::AddGaugePercent(float InPercent, bool* OutIsResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.AddGaugePercent");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_AddGaugePercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.MouseCaptureEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::MouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.MouseCaptureEnd");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_MouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Tick");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE");

	UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
