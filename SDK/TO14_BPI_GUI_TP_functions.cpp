
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

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetChangeColorValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::SetChangeColorValue(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetChangeColorValue");

	UTO14_BPI_GUI_TP_C_SetChangeColorValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetColorLineValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::SetColorLineValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetColorLineValue");

	UTO14_BPI_GUI_TP_C_SetColorLineValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TpPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::SetPercent(float TpPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetPercent");

	UTO14_BPI_GUI_TP_C_SetPercent_Params params;
	params.TpPercent = TpPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ConvertTpBarPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GaugeValuePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ConvertTpBarPercent(float GaugeValuePercent, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ConvertTpBarPercent");

	UTO14_BPI_GUI_TP_C_ConvertTpBarPercent_Params params;
	params.GaugeValuePercent = GaugeValuePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UseTP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BaseTP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::Preview(int UseTP, int BaseTP, int MaxTp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Preview");

	UTO14_BPI_GUI_TP_C_Preview_Params params;
	params.UseTP = UseTP;
	params.BaseTP = BaseTP;
	params.MaxTp = MaxTp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TpValue                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TpMax                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::SetTpText(int TpValue, int TpMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTpText");

	UTO14_BPI_GUI_TP_C_SetTpText_Params params;
	params.TpValue = TpValue;
	params.TpMax = TpMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::Initialize(int Value, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Initialize");

	UTO14_BPI_GUI_TP_C_Initialize_Params params;
	params.Value = Value;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PlayTpAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::PlayTpAnim(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PlayTpAnim");

	UTO14_BPI_GUI_TP_C_PlayTpAnim_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::SetTP(int Value, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTP");

	UTO14_BPI_GUI_TP_C_SetTP_Params params;
	params.Value = Value;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ApplyLine(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLine");

	UTO14_BPI_GUI_TP_C_ApplyLine_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLineColor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            LineColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ApplyLineColor(const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLineColor");

	UTO14_BPI_GUI_TP_C_ApplyLineColor_Params params;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyBaseColor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewBaseColor                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ApplyBaseColor(const struct FLinearColor& NewBaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyBaseColor");

	UTO14_BPI_GUI_TP_C_ApplyBaseColor_Params params;
	params.NewBaseColor = NewBaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ApplyPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyPercent");

	UTO14_BPI_GUI_TP_C_ApplyPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PreConstruct");

	UTO14_BPI_GUI_TP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_TP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Construct");

	UTO14_BPI_GUI_TP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Tick");

	UTO14_BPI_GUI_TP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnEndWorkPinch
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_TP_C::Received_OnEndWorkPinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnEndWorkPinch");

	UTO14_BPI_GUI_TP_C_Received_OnEndWorkPinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnBeginWorkPinch
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_TP_C::Received_OnBeginWorkPinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnBeginWorkPinch");

	UTO14_BPI_GUI_TP_C_Received_OnBeginWorkPinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ExecuteUbergraph_TO14_BPI_GUI_TP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_TP_C::ExecuteUbergraph_TO14_BPI_GUI_TP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ExecuteUbergraph_TO14_BPI_GUI_TP");

	UTO14_BPI_GUI_TP_C_ExecuteUbergraph_TO14_BPI_GUI_TP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
