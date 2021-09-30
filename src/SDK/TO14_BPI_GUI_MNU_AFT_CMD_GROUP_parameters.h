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

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SwitchItem
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SwitchItem_Params
{
	bool                                               IsLeft;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SelectItem
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SelectItem_Params
{
	bool                                               IsLeft;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseClick
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_CB_MouseClick_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.CB_MouseMove
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_CB_MouseMove_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.SetItemData
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_SetItemData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               LeftFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               RightFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnDeselected
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseClick__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnMouseClick__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C.OnMouseOver__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C_OnMouseOver__DelegateSignature_Params
{
	int                                                UniwueID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
