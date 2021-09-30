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

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageNum
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_GetPageNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageIndex
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_GetPageIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetailData
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetDetailData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PrevPage
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_PrevPage_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.NextPage
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_NextPage_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetail
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetDetail_Params
{
	struct FDetailData                                 DetailData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PopupNextPage
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_PopupNextPage_Params
{
	bool                                               IsEndPage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.InputPad
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_InputPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetHelpData
struct UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetHelpData_Params
{
	struct FHelpData                                   HelpData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
