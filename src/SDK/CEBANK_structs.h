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

// Enum CEBANK.ENetSocketEventID
enum class ENetSocketEventID : uint8_t
{
	Connected                      = 0,
	Disconnected                   = 1,
	Receive                        = 2,
	ENetSocketEventID_MAX          = 3
};


// Enum CEBANK.ENetSocketCipherMode
enum class ENetSocketCipherMode : uint8_t
{
	None                           = 0,
	ECB                            = 1,
	CBC                            = 2,
	ENetSocketCipherMode_MAX       = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
