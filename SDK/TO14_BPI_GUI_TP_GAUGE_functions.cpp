
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

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.SetShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::SetShow(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.SetShow");

	UTO14_BPI_GUI_TP_GAUGE_C_SetShow_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Close
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_TP_GAUGE_C::PFUIHelp_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Close");

	UTO14_BPI_GUI_TP_GAUGE_C_PFUIHelp_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_TP_GAUGE_C::PFUIHelp_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Open");

	UTO14_BPI_GUI_TP_GAUGE_C_PFUIHelp_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ApplyPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::ApplyPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ApplyPercent");

	UTO14_BPI_GUI_TP_GAUGE_C_ApplyPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Tick");

	UTO14_BPI_GUI_TP_GAUGE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTpMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewTp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::OnOpen(int NewTpMax, int NewTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OnOpen");

	UTO14_BPI_GUI_TP_GAUGE_C_OnOpen_Params params;
	params.NewTpMax = NewTpMax;
	params.NewTp = NewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Initlize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTpMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewTp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::Initlize(int NewTpMax, int NewTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Initlize");

	UTO14_BPI_GUI_TP_GAUGE_C_Initlize_Params params;
	params.NewTpMax = NewTpMax;
	params.NewTp = NewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::ChangeValue(int NewTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ChangeValue");

	UTO14_BPI_GUI_TP_GAUGE_C_ChangeValue_Params params;
	params.NewTp = NewTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PreConstruct");

	UTO14_BPI_GUI_TP_GAUGE_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OpneStated
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_TP_GAUGE_C::OpneStated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OpneStated");

	UTO14_BPI_GUI_TP_GAUGE_C_OpneStated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.CloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_TP_GAUGE_C::CloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.CloseFinished");

	UTO14_BPI_GUI_TP_GAUGE_C_CloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_GAUGE_C::ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE");

	UTO14_BPI_GUI_TP_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
