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

// UserDefinedStruct TO14_SCHT_DATA.TO14_SCHT_DATA
// 0x0028
struct FTO14_SCHT_DATA
{
	EAriseCharaIconID                                  IconID_2_2314DFCE46BDE6C1626C9FA03ABE678F;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       OverrideIconLabel_10_1B9537954616CBD3EA9E64B9BD714181;    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message_6_EE587559489FDA700CAA17BA21317DBB;               // 0x0010(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
