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

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.StopAllAnimation
struct UTO14_BPI_GUI_MNU_ACC_SKL_C_StopAllAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.EffectOff
struct UTO14_BPI_GUI_MNU_ACC_SKL_C_EffectOff_Params
{
};

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.RankupAnimation
struct UTO14_BPI_GUI_MNU_ACC_SKL_C_RankupAnimation_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.AddAnimation
struct UTO14_BPI_GUI_MNU_ACC_SKL_C_AddAnimation_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ACC_SKL.TO14_BPI_GUI_MNU_ACC_SKL_C.SetSkillID
struct UTO14_BPI_GUI_MNU_ACC_SKL_C_SetSkillID_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
