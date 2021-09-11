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

// UserDefinedStruct STR_PFCharLock.STR_PFCharLock
// 0x0018
struct FSTR_PFCharLock
{
	struct FString                                     UserName_10_A543D7BC4686F1151D64F6BDFC789857;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bLock_4_A69887D842006A4F0A128B813E756B5D;                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              UnlockDelay_7_0FE7D3A342D174FF81C6D38A77C2FF6E;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
