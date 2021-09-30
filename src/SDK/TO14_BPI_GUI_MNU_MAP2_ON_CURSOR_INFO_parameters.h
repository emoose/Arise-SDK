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

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdateShow
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_UpdateShow_Params
{
	class UWidget*                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bChanged;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ShowKey;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.IsShow
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_IsShow_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Hide
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Hide_Params
{
	class UWidget*                                     Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Show
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Show_Params
{
	class UWidget*                                     Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	struct FLocatorInfo                                Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ShowKey;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetWidgetComponent
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_SetWidgetComponent_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdatePosition
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_UpdatePosition_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetPositionWidget
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_SetPositionWidget_Params
{
	class UWidget*                                     PositionWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Refresh
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Refresh_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.RefreshAsGigant
struct UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_RefreshAsGigant_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
