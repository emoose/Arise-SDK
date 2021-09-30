#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.GetQuestID
struct UUMG_NavimapCircleArea_C_GetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.Initialize
struct UUMG_NavimapCircleArea_C_Initialize_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.SetIconIndex
struct UUMG_NavimapCircleArea_C_SetIconIndex_Params
{
	unsigned char                                      Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_NavimapCircleArea.UMG_NavimapCircleArea_C.ExecuteUbergraph_UMG_NavimapCircleArea
struct UUMG_NavimapCircleArea_C_ExecuteUbergraph_UMG_NavimapCircleArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
