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

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.IsClosing
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_IsClosing_Params
{
	bool                                               IsClosing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.BindChangedSelectEvent
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_BindChangedSelectEvent_Params
{
	struct FScriptDelegate                             OnChangedSelect;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh_FontLoc
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Refresh_FontLoc_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMove
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMove_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMoveNext
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMoveNext_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.RunMovePrev
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_RunMovePrev_Params
{
	bool                                               Suceess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMoveNext
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CheckMoveNext_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CheckMovePrev
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CheckMovePrev_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Exec_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecPad
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_ExecPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Refresh
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Refresh_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Open_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnSelect_Str
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnSelect_Str_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnDeselect_Str
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnDeselect_Str_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.CustomEvent_Refresh
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_CustomEvent_Refresh_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.Construct
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnChangedSelect__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnChangedSelect__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_TAB_LOCA.TO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C.OnViewOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_TAB_LOCA_C_OnViewOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
