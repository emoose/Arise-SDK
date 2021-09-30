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

// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshAsAlias
struct UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshAsAlias_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshBySkillID
struct UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshBySkillID_Params
{
	int                                                ActiveSkillID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT_EXP.TO14_BPI_GUI_MNU_TIT_EXP_C.RefreshByAliasID
struct UTO14_BPI_GUI_MNU_TIT_EXP_C_RefreshByAliasID_Params
{
	int                                                Alias_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
