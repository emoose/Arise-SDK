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

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Update
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_Update_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveRequest
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_MoveRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveActive
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_MoveActive_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetPadEnable
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_SetPadEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetActive
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_SetActive_Params
{
	int                                                NewSelectIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Initialize
struct UTO14_BPI_GUI_MNU_MAS_CATE_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
