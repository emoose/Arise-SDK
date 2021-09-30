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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_RefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.RefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_RefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_OnRefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.OnRefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_OnRefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
