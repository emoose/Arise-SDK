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

// UserDefinedStruct DT_PF_QuestArgs.DT_PF_QuestArgs
// 0x0040
struct FDT_PF_QuestArgs
{
	struct FAchScenarioCharacterID                     MainCharacterID_2_399D44FA47D2F6E8AA70AEA6CBB0C65E;       // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FAchScenarioCharacterID                     SubCharacterID_4_0CC2CE61402ED0BD108187B85E2346B0;        // 0x0010(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EDE_PF_QuestSideType>                  Side_29_8F83C4104C6E189683FDE18E25954635;                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraParameter_31_1CD333BA4D7C979A79FA7CB420598B5E;// 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              CameraDistance_20_0F0A731D4159980F2ECD9283DE71BFD3;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation_26_99797FBE46ADA47B6B0C01B832461D4F;       // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CameraWidthOffset_37_6BE43C674C41AC7B2E8D3CA398779522;    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraHeightOffset_25_797692D242811D257A540CB2B7C7B2E5;   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraReverseYaw_38_87270677477216DA06514CB538AD3BFA;     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
