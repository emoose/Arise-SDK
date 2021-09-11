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

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectLureData
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_GetSelectLureData_Params
{
	struct FLureData                                   LureData;                                                 // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.GetSelectRodData
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_GetSelectRodData_Params
{
	struct FRodData                                    RodData;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Input
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_Input_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetLureList
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_SetLureList_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.SetRodList
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_SetRodList_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C.Init
struct UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C_Init_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
