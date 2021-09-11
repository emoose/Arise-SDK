#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WorldTime.WorldTimeActor.UpdateTime
struct AWorldTimeActor_UpdateTime_Params
{
	float                                              CurrentHour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeBPLibrary.WorldTimeSampleFunction
struct UWorldTimeBPLibrary_WorldTimeSampleFunction_Params
{
	float                                              Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetTimePerDay
struct UWorldTimeManager_SetTimePerDay_Params
{
	float                                              newTimePerDay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetTime
struct UWorldTimeManager_SetTime_Params
{
	float                                              newTimeHour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldDayUpdate;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetSaveRealTime
struct UWorldTimeManager_SetSaveRealTime_Params
{
	float                                              newTimeHour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetReversePlayback
struct UWorldTimeManager_SetReversePlayback_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetRate
struct UWorldTimeManager_SetRate_Params
{
	float                                              newTimeRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetPause
struct UWorldTimeManager_SetPause_Params
{
	bool                                               newPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetLimitTime
struct UWorldTimeManager_SetLimitTime_Params
{
	float                                              limitTimeHour;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetGameTimeRate
struct UWorldTimeManager_SetGameTimeRate_Params
{
	float                                              timeRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetFixedTime
struct UWorldTimeManager_SetFixedTime_Params
{
	float                                              FixTimeMorning;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FixTimeDaytime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FixTimeEvening;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FixTimeNight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SetDay
struct UWorldTimeManager_SetDay_Params
{
	int                                                newDay;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.SaveTime
struct UWorldTimeManager_SaveTime_Params
{
};

// Function WorldTime.WorldTimeManager.LoadTime
struct UWorldTimeManager_LoadTime_Params
{
};

// Function WorldTime.WorldTimeManager.IsFixedTime
struct UWorldTimeManager_IsFixedTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetTimeString
struct UWorldTimeManager_GetTimeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WorldTime.WorldTimeManager.GetTimePerDay
struct UWorldTimeManager_GetTimePerDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetReversePlayback
struct UWorldTimeManager_GetReversePlayback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetRate
struct UWorldTimeManager_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetModifyTimeString
struct UWorldTimeManager_GetModifyTimeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WorldTime.WorldTimeManager.GetModifyMinuteInt
struct UWorldTimeManager_GetModifyMinuteInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetModifyMinuteFloat
struct UWorldTimeManager_GetModifyMinuteFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetModifyHourInt
struct UWorldTimeManager_GetModifyHourInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetModifyHourFloat
struct UWorldTimeManager_GetModifyHourFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetMinuteInt
struct UWorldTimeManager_GetMinuteInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetMinuteFloat
struct UWorldTimeManager_GetMinuteFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetHourOfDay
struct UWorldTimeManager_GetHourOfDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetHourInt
struct UWorldTimeManager_GetHourInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetHourFloat
struct UWorldTimeManager_GetHourFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetFixedTimeNight
struct UWorldTimeManager_GetFixedTimeNight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetFixedTimeMorning
struct UWorldTimeManager_GetFixedTimeMorning_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetFixedTimeHour
struct UWorldTimeManager_GetFixedTimeHour_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetFixedTimeEvening
struct UWorldTimeManager_GetFixedTimeEvening_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetFixedTimeDaytime
struct UWorldTimeManager_GetFixedTimeDaytime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetDayInt
struct UWorldTimeManager_GetDayInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetCurrentTimeZoneShift
struct UWorldTimeManager_GetCurrentTimeZoneShift_Params
{
	EWorldTimeZone                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.GetCurrentTimeZoneReal
struct UWorldTimeManager_GetCurrentTimeZoneReal_Params
{
	EWorldTimeZone                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.ConvertTimeZoneShift
struct UWorldTimeManager_ConvertTimeZoneShift_Params
{
	float                                              TimeHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EWorldTimeZone                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.ConvertTimeZoneReal
struct UWorldTimeManager_ConvertTimeZoneReal_Params
{
	float                                              TimeHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EWorldTimeZone                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.ConvertSeparateToLinearTime
struct UWorldTimeManager_ConvertSeparateToLinearTime_Params
{
	int                                                sepHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sepMin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              linearTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.ConvertLinearToSeparateTime
struct UWorldTimeManager_ConvertLinearToSeparateTime_Params
{
	float                                              linearTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sepHour;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                sepMin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldTime.WorldTimeManager.ChangeRealTime
struct UWorldTimeManager_ChangeRealTime_Params
{
};

// Function WorldTime.WorldTimeManager.ChangeFixedTime
struct UWorldTimeManager_ChangeFixedTime_Params
{
	float                                              fixTimeHour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
