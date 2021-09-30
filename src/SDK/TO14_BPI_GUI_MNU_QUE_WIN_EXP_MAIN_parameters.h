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

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetPageDisplay
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetPageDisplay_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetViewType
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetViewType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ChangeAnimation
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_ChangeAnimation_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.PadWork
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChanged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestStepData
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetQuestStepData_Params
{
	struct FQuestData                                  Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsMainQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.DataConstruct
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_DataConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.SetQuestData
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_SetQuestData_Params
{
	struct FQuestData                                  Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN.TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN
struct UTO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_WIN_EXP_MAIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
