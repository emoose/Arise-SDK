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

// Enum LocalizePlugin.ELocalizeSupportLanguage
enum class ELocalizeSupportLanguage : uint8_t
{
	ja_JP                          = 0,
	en_US                          = 1,
	fr_FR                          = 2,
	it_IT                          = 3,
	de_DE                          = 4,
	es                             = 5,
	es_MX                          = 6,
	pt_BR                          = 7,
	ru_RU                          = 8,
	zh_TW                          = 9,
	ko_KR                          = 10,
	ELocalizeSupportLanguage_MAX   = 11
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LocalizePlugin.CultureCallbackHandle
// 0x0004
struct FCultureCallbackHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
