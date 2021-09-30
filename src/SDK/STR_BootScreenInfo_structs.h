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

// UserDefinedStruct STR_BootScreenInfo.STR_BootScreenInfo
// 0x0038
struct FSTR_BootScreenInfo
{
	TEnumAsByte<ENM_BootScreenState>                   State_21_72A15589484A562702AA3DB1E1C439CC;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DisplayTime_24_E6AE9E784B01DDCAA9456F979BF077F1;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredWaitTime_27_3279B62B4971147FA1A3B7B747D19D0E;     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             TexturePath_29_181BF4F74D4E9F36989953B70457683A;          // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DummyText_18_1C72031947993E2E2CB85F997620A82C;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
