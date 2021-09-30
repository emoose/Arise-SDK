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

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetEULAFont
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_SetEULAFont_Params
{
	class UAriseTextWidget*                            InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.CloseImmidiate
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_CloseImmidiate_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.getListWidget
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_getListWidget_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_WIN_SELECT_C*              OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnMouseWheel
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnOpened
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnOpened_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnClosed
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Close
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.IsClose
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_IsClose_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.GetLastResult
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_GetLastResult_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Next
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Next_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Prev
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Prev_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdatePad
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UpdatePad_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadTerm
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.PadInit
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_PadInit_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Select
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Select_Params
{
	int                                                NewUniqueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Decide
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.RestructText
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_RestructText_Params
{
	EULA_Language                                      Language;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Open
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Open_Params
{
	struct FString                                     TitleLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     AgreeLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     DisagreeLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLanguageSelectEnabled;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSelectID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewOpen
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.OnViewClose
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.Construct
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventRestructText
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventRestructText_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UpdateTick
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.SetupDelegate
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventActivate
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventActivate_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.񣌘򠳾񍯐�0�0_1
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_񣌘򠳾񍯐�0�0_1_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.BindTitleBackEvent
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_BindTitleBackEvent_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.UnbindTitleBackEvent
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_UnbindTitleBackEvent_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.EventGoBackTitle
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_EventGoBackTitle_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_LAYOUT.TO14_BPI_GUI_SYS_EULA_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT
struct UTO14_BPI_GUI_SYS_EULA_LAYOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_LAYOUT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
