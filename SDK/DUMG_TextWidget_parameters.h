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

// Function DUMG_TextWidget.DUMG_TextWidget_C.GetBgColorAndOpacity
struct UDUMG_TextWidget_C_GetBgColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.GetTextColorAndOpacity
struct UDUMG_TextWidget_C_GetTextColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.GetText
struct UDUMG_TextWidget_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.Tick
struct UDUMG_TextWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.SetText
struct UDUMG_TextWidget_C_SetText_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.SetTextColor
struct UDUMG_TextWidget_C_SetTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.SetBgColor
struct UDUMG_TextWidget_C_SetBgColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DUMG_TextWidget.DUMG_TextWidget_C.ExecuteUbergraph_DUMG_TextWidget
struct UDUMG_TextWidget_C_ExecuteUbergraph_DUMG_TextWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
