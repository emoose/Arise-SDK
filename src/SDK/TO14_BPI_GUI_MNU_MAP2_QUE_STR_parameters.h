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

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.FontOpenAnim
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_FontOpenAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ChangeDefaultVisible
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_ChangeDefaultVisible_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.Refresh
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_Refresh_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                StepNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.CustomEvent_Refresh
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_CustomEvent_Refresh_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                StepNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_QUE_STR.TO14_BPI_GUI_MNU_MAP2_QUE_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR
struct UTO14_BPI_GUI_MNU_MAP2_QUE_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_QUE_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
