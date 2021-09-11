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

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.SetLocatorInfo
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_SetLocatorInfo_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.SetAlpha
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_SetAlpha_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.SetDistance
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_SetDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.SetOut
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_SetOut_Params
{
	bool                                               IsOutLeft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutTop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutRight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutBottom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.ApplyConfig
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_ApplyConfig_Params
{
	bool                                               ShowMain;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSub;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_QUESTGUIDE_ICN.TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_QUESTGUIDE_ICN
struct UTO14_BPI_GUI_SYS_QUESTGUIDE_ICN_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_QUESTGUIDE_ICN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
