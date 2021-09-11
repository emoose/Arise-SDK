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

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Init
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnDeselected
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnSelected
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.GetWidget
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_GetWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C*        Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetUniqueID
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetUniqueID_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetItemVisible
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetItemVisible_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetArtsLabel
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetArtsLabel_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.DeselectLineDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_DeselectLineDelegate__DelegateSignature_Params
{
	int                                                Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SelectLineDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SelectLineDelegate__DelegateSignature_Params
{
	int                                                Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
