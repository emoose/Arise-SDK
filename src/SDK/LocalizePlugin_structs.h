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
	ELocalizeSupportLanguage__ja_JP = 0,
	ELocalizeSupportLanguage__en_US = 1,
	ELocalizeSupportLanguage__fr_FR = 2,
	ELocalizeSupportLanguage__it_IT = 3,
	ELocalizeSupportLanguage__de_DE = 4,
	ELocalizeSupportLanguage__es   = 5,
	ELocalizeSupportLanguage__es_MX = 6,
	ELocalizeSupportLanguage__pt_BR = 7,
	ELocalizeSupportLanguage__ru_RU = 8,
	ELocalizeSupportLanguage__zh_TW = 9,
	ELocalizeSupportLanguage__ko_KR = 10,
	ELocalizeSupportLanguage__ELocalizeSupportLanguage_MAX = 11
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
