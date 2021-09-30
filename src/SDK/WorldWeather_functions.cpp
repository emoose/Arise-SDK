
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

// Function WorldWeather.WorldWeatherManager.SetOverrideWeather
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EWorldWeatherType              Weather                        (Parm, ZeroConstructor, IsPlainOldData)

void UWorldWeatherManager::STATIC_SetOverrideWeather(EWorldWeatherType Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldWeather.WorldWeatherManager.SetOverrideWeather");

	UWorldWeatherManager_SetOverrideWeather_Params params;
	params.Weather = Weather;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldWeather.WorldWeatherManager.SetAppWeather
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EWorldWeatherType              Weather                        (Parm, ZeroConstructor, IsPlainOldData)

void UWorldWeatherManager::STATIC_SetAppWeather(EWorldWeatherType Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldWeather.WorldWeatherManager.SetAppWeather");

	UWorldWeatherManager_SetAppWeather_Params params;
	params.Weather = Weather;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldWeather.WorldWeatherManager.GetWeather
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWorldWeatherType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldWeatherType UWorldWeatherManager::STATIC_GetWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldWeather.WorldWeatherManager.GetWeather");

	UWorldWeatherManager_GetWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldWeather.WorldWeatherManager.GetOverrideWeather
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWorldWeatherType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldWeatherType UWorldWeatherManager::STATIC_GetOverrideWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldWeather.WorldWeatherManager.GetOverrideWeather");

	UWorldWeatherManager_GetOverrideWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldWeather.WorldWeatherManager.GetAppWeather
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWorldWeatherType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWorldWeatherType UWorldWeatherManager::STATIC_GetAppWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldWeather.WorldWeatherManager.GetAppWeather");

	UWorldWeatherManager_GetAppWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
