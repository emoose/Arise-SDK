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

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonHovered
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ButtonHovered_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetPlatformType
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetPlatformType_Params
{
	EGamePlatform                                      PlatformType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWorkCategory
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_PadWorkCategory_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChanged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ButtonClicked
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ButtonClicked_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Initialize
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_Initialize_Params
{
	bool                                               Dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.PadWork
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedDevice
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetSelectedDevice_Params
{
	EInputDeviceType                                   DeviceType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetSelectedCategory
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetSelectedCategory_Params
{
	EInputCategory                                     Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.GetMap
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_GetMap_Params
{
	TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> WidgetMap;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.SetConfigText
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_SetConfigText_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewOpen
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ViewClose
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.Construct
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_WIN.TO14_BPI_GUI_MNU_PAU_CNT_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN
struct UTO14_BPI_GUI_MNU_PAU_CNT_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_WIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
