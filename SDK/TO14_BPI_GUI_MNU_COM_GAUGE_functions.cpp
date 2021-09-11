
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

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Reset");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::SetPreview(int ChangeNum, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetPreview");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetPreview_Params params;
	params.ChangeNum = ChangeNum;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.AnimationWork
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::AnimationWork(float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.AnimationWork");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_AnimationWork_Params params;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetStatusAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimeTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::SetStatusAnimation(int ChangeNum, const struct FLinearColor& Color, float WaitTime, float AnimeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetStatusAnimation");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetStatusAnimation_Params params;
	params.ChangeNum = ChangeNum;
	params.Color = Color;
	params.WaitTime = WaitTime;
	params.AnimeTime = AnimeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetBarStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Now                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::SetBarStatus(int Now, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetBarStatus");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetBarStatus_Params params;
	params.Now = Now;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Construct");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Tick");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.DataConstruct
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.DataConstruct");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COM_GAUGE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE");

	UTO14_BPI_GUI_MNU_COM_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
