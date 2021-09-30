#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_VoiceTimePatternRecord.STR_VoiceTimePatternRecord
// 0x0020
struct FSTR_VoiceTimePatternRecord
{
	float                                              Time_3_73364BC7499CC44998400FBC88F8463E;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Comment_6_B69D5F43429FB70F86D712A43A0C4ADE;               // 0x0008(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
