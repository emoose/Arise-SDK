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

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadTerm
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.PadInit
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_PadInit_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.OnClosed
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdatePad
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_UpdatePad_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.IsClose
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_IsClose_Params
{
	bool                                               Close;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.Close
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.StarInit
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_StarInit_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.EventOpen
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_EventOpen_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewRecode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.UpdateTick
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.SetupDelegate
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_RESULT.TO14_BPI_GUI_MNU_FIS_RESULT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT
struct UTO14_BPI_GUI_MNU_FIS_RESULT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_RESULT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
