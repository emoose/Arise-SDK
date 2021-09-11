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

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.MoveActive
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_MoveActive_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Input
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_Input_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SelectCategory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetPadEnable
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_SetPadEnable_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetActive
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_SetActive_Params
{
	int                                                NewSelectIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Init
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.PreConstruct
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE
struct UTO14_BPI_GUI_MNU_AFT_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
