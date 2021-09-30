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

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetReturnValue
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_GetReturnValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.GetRenderSize
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_GetRenderSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ButtonSizeCheck
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_ButtonSizeCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseButtonDown
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnable
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseEnter
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.OnMouseLeave
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.Tick
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.TextChange
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_TextChange_Params
{
	struct FText                                       UpdateText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     DictionaryGroup;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayOpenAnimation
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_PlayOpenAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.PlayCloseAnimation
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_PlayCloseAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetReturnValue
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetReturnValue_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetEnabled
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetEnabled_Params
{
	bool                                               IsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.SetOwnerWidget
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_SetOwnerWidget_Params
{
	class UWidget*                                     SystemWindow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_BUTTON.TO14_BPI_GUI_SYS_WIN_BUTTON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON
struct UTO14_BPI_GUI_SYS_WIN_BUTTON_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_BUTTON_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
