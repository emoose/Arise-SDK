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

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.IsChengeCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_IsChengeCheck_Params
{
	bool                                               OutIsCheck;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.SetTitleBGMHelp
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_SetTitleBGMHelp_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ListRequestCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_ListRequestCheck_Params
{
	struct FConfigBgmData                              InConfigBgmData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CreateList
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CreateList_Params
{
	TArray<struct FConfigBgmData>                      InBgmDataList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_GetText_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutText_;                                                 // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.DiarogCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_DiarogCheck_Params
{
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMSave
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_BGMSave_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventChengBGMName
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_EventChengBGMName_Params
{
	struct FString                                     InPlayBGMName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CommonControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CommonControl_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.BGMselectControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_BGMselectControl_Params
{
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.GameTitleControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_GameTitleControl_Params
{
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.EventRefreshSoundList
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_EventRefreshSoundList_Params
{
	int                                                InGameTitleSrot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.CloseAnima
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_CloseAnima_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.OpenAnima
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_OpenAnima_Params
{
	struct FConfigData                                 InConfigData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_BASE.TO14_BPI_GUI_MNU_CNF_BGM_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE
struct UTO14_BPI_GUI_MNU_CNF_BGM_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
