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

// UserDefinedStruct STR_AttackCollisionParam.STR_AttackCollisionParam
// 0x0042
struct FSTR_AttackCollisionParam
{
	int                                                CollisionGroupID_8_F8A9E9DA4E199F66C491129774F65B67;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitIntervalSec_21_263462284AF3495B50068DBC84848B1B;       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitStatusLabel_10_33850FF84033618075E17DB2DBB9D83D;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemEffectOnHit_14_24F125384E18045636F3F4A5DA50E08C;    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitDirectionLabel_7_FAA0AAC440D9F5740FC2DB9D04A50ECC;     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDestructibleType                                  DestructibleType_17_ED25C5544276462BD14334B464C66006;     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlDestructFilterLevel                            DestructibleFilterType_28_13C4B12144C93A924A2034BEAEC902A6;// 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FName                                       ArtsLabel_13_4FEC8426451AC0FE7A22D6B8C8B1BCB0;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitHoldHeightSec_25_9670703041C400D8780AC7ADAEFF98C6;     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PredictFrame_31_520AD7E7416721EF419540B6B07B08D8;         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInstantDeath_35_C0DC11494F502929E4FDF0AEB3B1B1B5;       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowance_36_720A4D454DB7016BA4664BA591AEFCCF;          // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFriendlyFire_38_E8946D6149F63E0AFC6AD292995790B7;       // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UnbindAnimLocation_40_AD1A6AA540A05F918463A7ACB4EA7F74;   // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageWeight_48_E6F295BC4446A19535CEDAB4C64C835E;         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideElement_42_E848ACF44ECC4CF44565648CB46E7B14;      // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlElementType                                    Element_45_32E59ACF445A3BE899EBDD818379C32F;              // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
