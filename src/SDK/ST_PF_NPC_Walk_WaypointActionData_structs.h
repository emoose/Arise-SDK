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

// UserDefinedStruct ST_PF_NPC_Walk_WaypointActionData.ST_PF_NPC_Walk_WaypointActionData
// 0x0041
struct FST_PF_NPC_Walk_WaypointActionData
{
	TEnumAsByte<EDE_PF_NPC_Walk_WaypointActionType>    ActionType_32_A43EB6AC493A953604704EA6BE935D79;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WaitTimeOrDistance_27_12F3EE5B48110CEF267F3FB1459B8052;   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionKey_6_E978A55B4F7A6B003B1DC3BA70D14B5F;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TurnToPC_28_E1EF700A4FD73FE9938BE29375AC2AE7;             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LookAtPC_29_77B11E28405C5563496ED4A8939118A7;             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UParticleSystem*                             Effect_38_A4638BF04A5EAA3D222AEE89CD8FCAE8;               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectSocket_42_164128E140D592BD6B18D683A9238392;         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScenarioFlagName_59_5F114EA04DAE7DBECD63FABF5828012E;     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ScenarioFlagValue_61_4ED37E0D4C13C3B3997460A7BD11604B;    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
