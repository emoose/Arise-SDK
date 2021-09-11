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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetPlayerStatus
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_SetPlayerStatus_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.GetGaugeWidget
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_GetGaugeWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C*           Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.SetGaugeListCount
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_SetGaugeListCount_Params
{
	int                                                GaugeNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.Construct
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.InitializeData
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_InitializeData_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST.TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
