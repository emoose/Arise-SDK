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

// ScriptStruct LandscapeWall.LandscapeWallBoxInfo
// 0x0050
struct FLandscapeWallBoxInfo
{
	struct FVector                                     BoxExtent;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FName                                       OverrideCollisionPresetName;                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
