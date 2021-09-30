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

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetItemSkillData
struct UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetItemSkillData_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetSkill
struct UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetSkill_Params
{
	struct FString                                     Skill1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Skill2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetViewType
struct UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetViewType_Params
{
	bool                                               Detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.UpdateItem
struct UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_UpdateItem_Params
{
};

// Function TO14_BPI_GUI_MNU_ACC_SKL_EXP.TO14_BPI_GUI_MNU_ACC_SKL_EXP_C.SetUniqueID
struct UTO14_BPI_GUI_MNU_ACC_SKL_EXP_C_SetUniqueID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
