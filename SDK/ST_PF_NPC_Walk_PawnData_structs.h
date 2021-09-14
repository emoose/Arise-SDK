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

// UserDefinedStruct ST_PF_NPC_Walk_PawnData.ST_PF_NPC_Walk_PawnData
// 0x0048
struct FST_PF_NPC_Walk_PawnData
{
	struct FAchScenarioCharacterID                     CharacterID_2_E63AA9D54C064A4E5FFB6B9ED971F6FF;           // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UASAnimationSet*                             AnimSet_6_873E9EF24C05D0184A00D481398FD67C;               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFNpcActorWalk>                       WalkType_17_961E636542A7B93F07C44AB0F280DDD2;             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             AnimSetPath_15_64AD88F7490A28346609B29FC72068CE;          // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FString                                     InitPlayAction_20_65269DC445541D3BB1CB7488C91A356A;       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
