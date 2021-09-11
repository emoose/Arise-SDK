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

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.GetQuestID
struct UUMG_LocamapFocusIcon_Quest_C_GetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.BindOnGotoQuestEvent
struct UUMG_LocamapFocusIcon_Quest_C_BindOnGotoQuestEvent_Params
{
	struct FScriptDelegate                             OnGotoQuest;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnDecide
struct UUMG_LocamapFocusIcon_Quest_C_OnDecide_Params
{
};

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.ExecuteUbergraph_UMG_LocamapFocusIcon_Quest
struct UUMG_LocamapFocusIcon_Quest_C_ExecuteUbergraph_UMG_LocamapFocusIcon_Quest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C.OnGotoQuestEvent__DelegateSignature
struct UUMG_LocamapFocusIcon_Quest_C_OnGotoQuestEvent__DelegateSignature_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
