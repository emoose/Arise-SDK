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
	Default                        = 0,
	Sunny                          = 1,
	Cloudy                         = 2,
	Rainy                          = 3,
	Snowy                          = 4,
	EWorldWeatherType_MAX          = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
