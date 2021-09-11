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

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetScreen
struct UTO14_BPI_GUI_SYS_LOADING_001_C_SetScreen_Params
{
	struct FLoadingScreenData                          LoadingScreenData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SelectScreen
struct UTO14_BPI_GUI_SYS_LOADING_001_C_SelectScreen_Params
{
	struct FLoadingScreenData                          ScreenData;                                               // (Parm, OutParm)
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.CreateScreenList
struct UTO14_BPI_GUI_SYS_LOADING_001_C_CreateScreenList_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.Construct
struct UTO14_BPI_GUI_SYS_LOADING_001_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsData
struct UTO14_BPI_GUI_SYS_LOADING_001_C_SetTipsData_Params
{
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.SetTipsVisibility
struct UTO14_BPI_GUI_SYS_LOADING_001_C_SetTipsVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ClearTipsData
struct UTO14_BPI_GUI_SYS_LOADING_001_C_ClearTipsData_Params
{
};

// Function TO14_BPI_GUI_SYS_LOADING_001.TO14_BPI_GUI_SYS_LOADING_001_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001
struct UTO14_BPI_GUI_SYS_LOADING_001_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_001_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
