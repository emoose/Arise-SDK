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

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillID
struct UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetSkillID_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetFontColor
struct UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetFontColor_Params
{
	bool                                               DisableColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.SetSkillData
struct UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_SetSkillData_Params
{
	struct FItemAbilityWorkData                        AbilityData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.OnWidgetCreated
struct UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_OnWidgetCreated_Params
{
};

// Function TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR.TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR
struct UTO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SHP_SKL_WIN_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
