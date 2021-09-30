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

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.GetViewType
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_GetViewType_Params
{
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetViewType
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_SetViewType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.PadWork
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChanged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.SetQuestData
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_SetQuestData_Params
{
	struct FQuestData                                  QuestData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HighPriority;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.DataConstruct
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_DataConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB
struct UTO14_BPI_GUI_MNU_QUE_SUB_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
