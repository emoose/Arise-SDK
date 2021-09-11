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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.UpdatePosition
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_UpdatePosition_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SetWidgetComponent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_SetWidgetComponent_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.AdjustScaling
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_AdjustScaling_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Refresh
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.GetOwnerWidget
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_GetOwnerWidget_Params
{
	class UWidget*                                     OwnerWidget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Restruct
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Restruct_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Initialize
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Initialize_Params
{
	class UWidget*                                     OwnerWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestShow
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CustomEvent_RequestShow_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          Panel;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestHide
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CustomEvent_RequestHide_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ChangedVisibleDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ChangedVisibleDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.EnabledDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_EnabledDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CompletedDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CompletedDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DeselectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_DeselectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SelectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_SelectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DecideDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_DecideDelegate__DelegateSignature_Params
{
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ActivateDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ActivateDelegate__DelegateSignature_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
