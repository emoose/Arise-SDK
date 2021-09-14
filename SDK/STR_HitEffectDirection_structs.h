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

// UserDefinedStruct STR_HitEffectDirection.STR_HitEffectDirection
// 0x0012
struct FSTR_HitEffectDirection
{
	struct FRotator                                    Direction_2_D4D3BD6140FB77F05CA533B059F6239E;             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EffectLocationRate_6_52E4C75A45B01D0A14BE57B002E88585;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlHitEffectCalculateRotationType                 RotationCalculate_15_CA6D7D264A627716B763ADA536727C4C;    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlHitEffectOffsetRotationType                    RotationOffset_16_1BBB282144D92DDB8240A19AC4C91295;       // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
