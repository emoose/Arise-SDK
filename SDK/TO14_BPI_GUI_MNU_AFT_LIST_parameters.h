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

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.CalcDisplayMaxNum
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_CalcDisplayMaxNum_Params
{
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.GetSelectArtifactData
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_GetSelectArtifactData_Params
{
	struct FArtifactData                               ArtifactData;                                             // (Parm, OutParm)
	bool                                               PartsComp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ExParts;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InputPad
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_InputPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OpenTalk;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OpenEffect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.SetupItem
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_SetupItem_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MapIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DataIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.RestructList
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_RestructList_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.InitList
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_InitList_Params
{
	TArray<struct FArtifactData>                       Database;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.Construct
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.OnCursorMove
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_OnCursorMove_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_LIST.TO14_BPI_GUI_MNU_AFT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST
struct UTO14_BPI_GUI_MNU_AFT_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
