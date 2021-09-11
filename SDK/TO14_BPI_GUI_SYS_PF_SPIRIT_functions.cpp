
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

// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.IsPlaySECheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuSoundLabel         InSoundLabel                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OutIsPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::IsPlaySECheck(const struct FMenuSoundLabel& InSoundLabel, bool* OutIsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.IsPlaySECheck");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_IsPlaySECheck_Params params;
	params.InSoundLabel = InSoundLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlay != nullptr)
		*OutIsPlay = params.OutIsPlay;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ChangeMaxAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::ChangeMaxAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ChangeMaxAnime");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_ChangeMaxAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.BonusGageStopChack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsStop                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::BonusGageStopChack(bool* IsStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.BonusGageStopChack");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_BonusGageStopChack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStop != nullptr)
		*IsStop = params.IsStop;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.RordRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::RordRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.RordRefresh");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_RordRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.Refresh");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetShowStockNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::SetShowStockNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetShowStockNum");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_SetShowStockNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ShowChack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsAnime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::ShowChack(bool InIsAnime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ShowChack");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_ShowChack_Params params;
	params.InIsAnime = InIsAnime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.UpdateAddGaugeEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::UpdateAddGaugeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.UpdateAddGaugeEvent");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_UpdateAddGaugeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetBonusValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InBonusValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::SetBonusValue(float InBonusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetBonusValue");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_SetBonusValue_Params params;
	params.InBonusValue = InBonusValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.UpdateBtlBonusGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InBonusValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::UpdateBtlBonusGauge(float InBonusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.UpdateBtlBonusGauge");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_UpdateBtlBonusGauge_Params params;
	params.InBonusValue = InBonusValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.SetValue");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.MAX_AnimeFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::MAX_AnimeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.MAX_AnimeFinished");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_MAX_AnimeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.CLOSE_AnimeFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::CLOSE_AnimeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.CLOSE_AnimeFinished");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_CLOSE_AnimeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.BtlEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::BtlEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.BtlEnd");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_BtlEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.LOOP_AnimeStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::LOOP_AnimeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.LOOP_AnimeStarted");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_LOOP_AnimeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.MAXLOOP_CD_AnimeStarted
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::MAXLOOP_CD_AnimeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.MAXLOOP_CD_AnimeStarted");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_MAXLOOP_CD_AnimeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.Construct");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.PlayContinuousBonusEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::PlayContinuousBonusEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.PlayContinuousBonusEvent");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_PlayContinuousBonusEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_SPIRIT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_PF_SPIRIT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_SPIRIT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_PF_SPIRIT.TO14_BPI_GUI_SYS_PF_SPIRIT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_SPIRIT");

	UTO14_BPI_GUI_SYS_PF_SPIRIT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_SPIRIT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
