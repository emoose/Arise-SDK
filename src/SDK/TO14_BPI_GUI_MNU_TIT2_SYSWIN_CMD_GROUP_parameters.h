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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.BindInfo
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_BindInfo_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C*        Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.SetItemData
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_SetItemData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.MakeData
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_MakeData_Params
{
	struct FListWidgetInitData                         InitDta;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.DataConstruct
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_DataConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseMove
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CB_MouseMove_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CB_MouseEnter_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CursorSelect
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CursorSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ItemDataChange
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_ItemDataChange_Params
{
	struct FListWidgetInitData                         WidgetInitData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseClick__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnMouseClick__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseOver__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnMouseOver__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
