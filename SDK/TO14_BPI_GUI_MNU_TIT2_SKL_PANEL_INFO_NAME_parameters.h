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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.Restruct
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_Restruct_Params
{
	struct FBtlAliasData                               BtlAliasData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ChangedVisibleDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_ChangedVisibleDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.EnabledDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_EnabledDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.CompletedDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_CompletedDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DeselectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_DeselectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.SelectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_SelectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DecideDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_DecideDelegate__DelegateSignature_Params
{
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ActivateDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_ActivateDelegate__DelegateSignature_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
