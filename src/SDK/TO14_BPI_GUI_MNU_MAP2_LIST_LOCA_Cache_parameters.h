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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_ClearQuest_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_GetQuest_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ActorIDs;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             QuestIDs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_CacheQuest_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             QuestIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.Term
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_Term_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.ClearBeforeSubQuestActorIDs
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_ClearBeforeSubQuestActorIDs_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.GetBeforeSubQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_GetBeforeSubQuest_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ActorIDs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C.CacheBeforeSubQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C_CacheBeforeSubQuest_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
