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

// UserDefinedStruct ST_RegionData.ST_RegionData
// 0x00F0
struct FST_RegionData
{
	struct FMapRegionData                              MapRegionData_2_535F3A7C404FE6278F77208A5CFF87D3;         // 0x0000(0x0040) (Edit, BlueprintVisible)
	bool                                               Enabled_5_6C2441F54D758BDE83F06AB6131E2BCD;               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FModifiedText                               RegionShortName_16_96D6390445671A02728CF58FF75BCE9C;      // 0x0048(0x0038) (Edit, BlueprintVisible)
	struct FModifiedText                               RegionFullName_17_39B44A244A21D0608868AFA7DBA3C46C;       // 0x0080(0x0038) (Edit, BlueprintVisible)
	struct FModifiedText                               RegionFlavorText_18_2A9D7EE4405C8224D01C3D83A84F68FA;     // 0x00B8(0x0038) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
