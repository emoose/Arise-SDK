#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class WorldWeather.WorldWeatherManager
// 0x0008 (0x0030 - 0x0028)
class UWorldWeatherManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WorldWeather.WorldWeatherManager");
		return ptr;
	}


	void STATIC_SetOverrideWeather(EWorldWeatherType Weather);
	void STATIC_SetAppWeather(EWorldWeatherType Weather);
	EWorldWeatherType STATIC_GetWeather();
	EWorldWeatherType STATIC_GetOverrideWeather();
	EWorldWeatherType STATIC_GetAppWeather();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
