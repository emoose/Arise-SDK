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

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.GuideChange
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_GuideChange_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.FlagChangeCheck
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_FlagChangeCheck_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeOK;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.SwitchItem
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_SwitchItem_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Input
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Input_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseEnter
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_CBMouseEnter_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.CBMouseOver
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_CBMouseOver_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Select
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Select_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.RestructList
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_RestructList_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_SYSWIN_000.TO14_BPI_GUI_MNU_AFT_SYSWIN_000_C.Init
struct UTO14_BPI_GUI_MNU_AFT_SYSWIN_000_C_Init_Params
{
	TArray<struct FArtifactData>                       ArtifactMaster;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
