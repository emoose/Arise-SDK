#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum WorldWeather.EWorldWeatherType
enum class EWorldWeatherType : uint8_t
{
	EWorldWeatherType__Default     = 0,
	EWorldWeatherType__Sunny       = 1,
	EWorldWeatherType__Cloudy      = 2,
	EWorldWeatherType__Rainy       = 3,
	EWorldWeatherType__Snowy       = 4,
	EWorldWeatherType__EWorldWeatherType_MAX = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
