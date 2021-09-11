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

// Enum CEBANK.ENetSocketCipherMode
enum class ENetSocketCipherMode : uint8_t
{
	ENetSocketCipherMode__None     = 0,
	ENetSocketCipherMode__ECB      = 1,
	ENetSocketCipherMode__CBC      = 2,
	ENetSocketCipherMode__ENetSocketCipherMode_MAX = 3
};


// Enum CEBANK.ENetSocketEventID
enum class ENetSocketEventID : uint8_t
{
	ENetSocketEventID__Connected   = 0,
	ENetSocketEventID__Disconnected = 1,
	ENetSocketEventID__Receive     = 2,
	ENetSocketEventID__ENetSocketEventID_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
