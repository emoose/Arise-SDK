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

// UserDefinedStruct BattleMenuParam.BattleMenuParam
// 0x0011
struct FBattleMenuParam
{
	int                                                ItemId_2_2884CE5B4ED429AEF96EFC97008FA9DE;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ArtsLabel_5_3B61BD164BA3422774A6AA82F8740A45;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      ArtsUser_9_5A8F451C4BE9AC2E1A7A8A83CD1834E5;              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
