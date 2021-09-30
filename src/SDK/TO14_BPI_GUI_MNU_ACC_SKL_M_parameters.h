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

// Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetItemID
struct UTO14_BPI_GUI_MNU_ACC_SKL_M_C_SetItemID_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL_M.TO14_BPI_GUI_MNU_ACC_SKL_M_C.SetSkillData
struct UTO14_BPI_GUI_MNU_ACC_SKL_M_C_SetSkillData_Params
{
	struct FItemAbilityWorkData                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
