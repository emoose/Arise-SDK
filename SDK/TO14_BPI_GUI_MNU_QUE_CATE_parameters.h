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

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.TextAnimation
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_TextAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.PadWork
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.RequestSelectIndex
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_RequestSelectIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetActive
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_SetActive_Params
{
	int                                                NewSelectIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetPadEnable
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_SetPadEnable_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.MoveActive
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_MoveActive_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Initialize
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Construct
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE
struct UTO14_BPI_GUI_MNU_QUE_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
