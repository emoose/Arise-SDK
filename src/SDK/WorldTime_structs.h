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

// Enum WorldTime.EWorldTimeZone
enum class EWorldTimeZone : uint8_t
{
	Morning                        = 0,
	Daytime                        = 1,
	Evening                        = 2,
	Night                          = 3,
	Max                            = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
