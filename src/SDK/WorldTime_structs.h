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
	EWorldTimeZone__Morning        = 0,
	EWorldTimeZone__Daytime        = 1,
	EWorldTimeZone__Evening        = 2,
	EWorldTimeZone__Night          = 3,
	EWorldTimeZone__Max            = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
