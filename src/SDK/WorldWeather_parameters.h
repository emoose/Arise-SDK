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

// Function WorldWeather.WorldWeatherManager.SetOverrideWeather
struct UWorldWeatherManager_SetOverrideWeather_Params
{
	EWorldWeatherType                                  Weather;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldWeather.WorldWeatherManager.SetAppWeather
struct UWorldWeatherManager_SetAppWeather_Params
{
	EWorldWeatherType                                  Weather;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldWeather.WorldWeatherManager.GetWeather
struct UWorldWeatherManager_GetWeather_Params
{
	EWorldWeatherType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldWeather.WorldWeatherManager.GetOverrideWeather
struct UWorldWeatherManager_GetOverrideWeather_Params
{
	EWorldWeatherType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WorldWeather.WorldWeatherManager.GetAppWeather
struct UWorldWeatherManager_GetAppWeather_Params
{
	EWorldWeatherType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
