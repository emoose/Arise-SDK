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

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.GetSelectEffectID
struct UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_GetSelectEffectID_Params
{
	struct FString                                     EffectID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InputPad
struct UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_InputPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ToggleEffect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.SetupItem
struct UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_SetupItem_Params
{
	struct FString                                     EffectID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MapIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DataIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.RestructList
struct UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_RestructList_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_LIST.TO14_BPI_GUI_MNU_AFT_CMD_LIST_C.InitList
struct UTO14_BPI_GUI_MNU_AFT_CMD_LIST_C_InitList_Params
{
	TArray<struct FArtifactData>                       Database;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
