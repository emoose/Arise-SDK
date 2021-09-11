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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.GetHierarchyCount
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_GetHierarchyCount_Params
{
	TArray<struct FLocationTreeData>                   LocationTreeDataArray;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsRegion
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshAsRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.RefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_RefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsRegion
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshAsRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.OnRefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_OnRefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
