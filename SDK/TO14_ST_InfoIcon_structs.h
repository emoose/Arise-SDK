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

// UserDefinedStruct TO14_ST_InfoIcon.TO14_ST_InfoIcon
// 0x0014
struct FTO14_ST_InfoIcon
{
	TEnumAsByte<ETO14_InfoIconType>                    Type_2_0A39BC9E4D9A2BFBC6DEF4A46A3864A2;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   IconOffset_6_30138B2643DD320C7C0B4D920929E2E7;            // 0x0004(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FrameOffset_8_AE499D1E445898060D17FE9FBA3CE78A;           // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
