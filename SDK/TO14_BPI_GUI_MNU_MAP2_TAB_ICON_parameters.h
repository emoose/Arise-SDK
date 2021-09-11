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

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.Refresh
struct UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_Refresh_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnSelect
struct UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_CustomEvent_OnSelect_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.CustomEvent_OnDeselect
struct UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_CustomEvent_OnDeselect_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.PreConstruct
struct UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_ICON.TO14_BPI_GUI_MNU_MAP2_TAB_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON
struct UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_ICON_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
