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

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.OpenAnimation
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_OpenAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLabel
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsLabel_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsLineData
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsLineData_Params
{
	struct FMenuTacticsLineData                        TacticsLineData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.RefreshAsTacticsData
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_RefreshAsTacticsData_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Hide
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_Hide_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_DET.TO14_BPI_GUI_MNU_TAG2_DET_C.Show
struct UTO14_BPI_GUI_MNU_TAG2_DET_C_Show_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
