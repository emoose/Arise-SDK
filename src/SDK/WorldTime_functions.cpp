
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

// Function WorldTime.WorldTimeActor.UpdateTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeActor::UpdateTime(float CurrentHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeActor.UpdateTime");

	AWorldTimeActor_UpdateTime_Params params;
	params.CurrentHour = CurrentHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeBPLibrary.WorldTimeSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Param                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeBPLibrary::STATIC_WorldTimeSampleFunction(float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeBPLibrary.WorldTimeSampleFunction");

	UWorldTimeBPLibrary_WorldTimeSampleFunction_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.SetTimePerDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newTimePerDay                  (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetTimePerDay(float newTimePerDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetTimePerDay");

	UWorldTimeManager_SetTimePerDay_Params params;
	params.newTimePerDay = newTimePerDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newTimeHour                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableWorldDayUpdate          (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetTime(float newTimeHour, bool bEnableWorldDayUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetTime");

	UWorldTimeManager_SetTime_Params params;
	params.newTimeHour = newTimeHour;
	params.bEnableWorldDayUpdate = bEnableWorldDayUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetSaveRealTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newTimeHour                    (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetSaveRealTime(float newTimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetSaveRealTime");

	UWorldTimeManager_SetSaveRealTime_Params params;
	params.newTimeHour = newTimeHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetReversePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetReversePlayback(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetReversePlayback");

	UWorldTimeManager_SetReversePlayback_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newTimeRate                    (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetRate(float newTimeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetRate");

	UWorldTimeManager_SetRate_Params params;
	params.newTimeRate = newTimeRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           newPause                       (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetPause(bool newPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetPause");

	UWorldTimeManager_SetPause_Params params;
	params.newPause = newPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetLimitTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          limitTimeHour                  (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetLimitTime(float limitTimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetLimitTime");

	UWorldTimeManager_SetLimitTime_Params params;
	params.limitTimeHour = limitTimeHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetGameTimeRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          timeRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetGameTimeRate(float timeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetGameTimeRate");

	UWorldTimeManager_SetGameTimeRate_Params params;
	params.timeRate = timeRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetFixedTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FixTimeMorning                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FixTimeDaytime                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FixTimeEvening                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FixTimeNight                   (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetFixedTime(float FixTimeMorning, float FixTimeDaytime, float FixTimeEvening, float FixTimeNight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetFixedTime");

	UWorldTimeManager_SetFixedTime_Params params;
	params.FixTimeMorning = FixTimeMorning;
	params.FixTimeDaytime = FixTimeDaytime;
	params.FixTimeEvening = FixTimeEvening;
	params.FixTimeNight = FixTimeNight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SetDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            newDay                         (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::SetDay(int newDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SetDay");

	UWorldTimeManager_SetDay_Params params;
	params.newDay = newDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.SaveTime
// (Final, Native, Public, BlueprintCallable)

void UWorldTimeManager::SaveTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.SaveTime");

	UWorldTimeManager_SaveTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.LoadTime
// (Final, Native, Public, BlueprintCallable)

void UWorldTimeManager::LoadTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.LoadTime");

	UWorldTimeManager_LoadTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.IsFixedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorldTimeManager::IsFixedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.IsFixedTime");

	UWorldTimeManager_IsFixedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetTimeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWorldTimeManager::GetTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetTimeString");

	UWorldTimeManager_GetTimeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetTimePerDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetTimePerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetTimePerDay");

	UWorldTimeManager_GetTimePerDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetReversePlayback
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorldTimeManager::GetReversePlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetReversePlayback");

	UWorldTimeManager_GetReversePlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetRate");

	UWorldTimeManager_GetRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetModifyTimeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWorldTimeManager::GetModifyTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetModifyTimeString");

	UWorldTimeManager_GetModifyTimeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetModifyMinuteInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldTimeManager::GetModifyMinuteInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetModifyMinuteInt");

	UWorldTimeManager_GetModifyMinuteInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetModifyMinuteFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetModifyMinuteFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetModifyMinuteFloat");

	UWorldTimeManager_GetModifyMinuteFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetModifyHourInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldTimeManager::GetModifyHourInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetModifyHourInt");

	UWorldTimeManager_GetModifyHourInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetModifyHourFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetModifyHourFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetModifyHourFloat");

	UWorldTimeManager_GetModifyHourFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetMinuteInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldTimeManager::GetMinuteInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetMinuteInt");

	UWorldTimeManager_GetMinuteInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetMinuteFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetMinuteFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetMinuteFloat");

	UWorldTimeManager_GetMinuteFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetHourOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetHourOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetHourOfDay");

	UWorldTimeManager_GetHourOfDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetHourInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldTimeManager::GetHourInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetHourInt");

	UWorldTimeManager_GetHourInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetHourFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetHourFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetHourFloat");

	UWorldTimeManager_GetHourFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetFixedTimeNight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetFixedTimeNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetFixedTimeNight");

	UWorldTimeManager_GetFixedTimeNight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetFixedTimeMorning
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetFixedTimeMorning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetFixedTimeMorning");

	UWorldTimeManager_GetFixedTimeMorning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetFixedTimeHour
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetFixedTimeHour()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetFixedTimeHour");

	UWorldTimeManager_GetFixedTimeHour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetFixedTimeEvening
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetFixedTimeEvening()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetFixedTimeEvening");

	UWorldTimeManager_GetFixedTimeEvening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetFixedTimeDaytime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldTimeManager::GetFixedTimeDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetFixedTimeDaytime");

	UWorldTimeManager_GetFixedTimeDaytime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetDayInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorldTimeManager::GetDayInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetDayInt");

	UWorldTimeManager_GetDayInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetCurrentTimeZoneShift
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWorldTimeZone                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldTimeZone UWorldTimeManager::GetCurrentTimeZoneShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetCurrentTimeZoneShift");

	UWorldTimeManager_GetCurrentTimeZoneShift_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.GetCurrentTimeZoneReal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWorldTimeZone                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldTimeZone UWorldTimeManager::GetCurrentTimeZoneReal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.GetCurrentTimeZoneReal");

	UWorldTimeManager_GetCurrentTimeZoneReal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.ConvertTimeZoneShift
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TimeHour                       (Parm, ZeroConstructor, IsPlainOldData)
// EWorldTimeZone                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldTimeZone UWorldTimeManager::ConvertTimeZoneShift(float TimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ConvertTimeZoneShift");

	UWorldTimeManager_ConvertTimeZoneShift_Params params;
	params.TimeHour = TimeHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.ConvertTimeZoneReal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TimeHour                       (Parm, ZeroConstructor, IsPlainOldData)
// EWorldTimeZone                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldTimeZone UWorldTimeManager::ConvertTimeZoneReal(float TimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ConvertTimeZoneReal");

	UWorldTimeManager_ConvertTimeZoneReal_Params params;
	params.TimeHour = TimeHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldTime.WorldTimeManager.ConvertSeparateToLinearTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            sepHour                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            sepMin                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          linearTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::ConvertSeparateToLinearTime(int sepHour, int sepMin, float* linearTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ConvertSeparateToLinearTime");

	UWorldTimeManager_ConvertSeparateToLinearTime_Params params;
	params.sepHour = sepHour;
	params.sepMin = sepMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (linearTime != nullptr)
		*linearTime = params.linearTime;
}


// Function WorldTime.WorldTimeManager.ConvertLinearToSeparateTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          linearTime                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            sepHour                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            sepMin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::ConvertLinearToSeparateTime(float linearTime, int* sepHour, int* sepMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ConvertLinearToSeparateTime");

	UWorldTimeManager_ConvertLinearToSeparateTime_Params params;
	params.linearTime = linearTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sepHour != nullptr)
		*sepHour = params.sepHour;
	if (sepMin != nullptr)
		*sepMin = params.sepMin;
}


// Function WorldTime.WorldTimeManager.ChangeRealTime
// (Final, Native, Public, BlueprintCallable)

void UWorldTimeManager::ChangeRealTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ChangeRealTime");

	UWorldTimeManager_ChangeRealTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldTime.WorldTimeManager.ChangeFixedTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fixTimeHour                    (Parm, ZeroConstructor, IsPlainOldData)

void UWorldTimeManager::ChangeFixedTime(float fixTimeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldTime.WorldTimeManager.ChangeFixedTime");

	UWorldTimeManager_ChangeFixedTime_Params params;
	params.fixTimeHour = fixTimeHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
