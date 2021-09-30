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

// Function BP_DebugWindow.BP_DebugWindow_C.RenderAutoLayout
struct UBP_DebugWindow_C_RenderAutoLayout_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWinX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWinY;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              oRenderHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.SetRenderEnable
struct UBP_DebugWindow_C_SetRenderEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.PrintDebugState
struct UBP_DebugWindow_C_PrintDebugState_Params
{
	bool                                               bPrint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddDirCursorWidget
struct UBP_DebugWindow_C_AddDirCursorWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBPDebWid_DirCursor_C*                       Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.GetWidgetByName
struct UBP_DebugWindow_C_GetWidgetByName_Params
{
	struct FString                                     WidgetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBP_DebugWidget_C*                           FindWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddCheckBoxWidget
struct UBP_DebugWindow_C_AddCheckBoxWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBPDebWid_CheckBox_C*                        Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddSliderWidget
struct UBP_DebugWindow_C_AddSliderWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBPDebWid_Slider_C*                          Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddTextWidget
struct UBP_DebugWindow_C_AddTextWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBPDebWid_Text_C*                            Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddInstLogWidget
struct UBP_DebugWindow_C_AddInstLogWidget_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBPDebWid_InstLog_C*                         Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.AddWidget
struct UBP_DebugWindow_C_AddWidget_Params
{
	class UBP_DebugWidget_C*                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.RenderWindowBody
struct UBP_DebugWindow_C_RenderWindowBody_Params
{
	class AHUD*                                        MusterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.DrawBox
struct UBP_DebugWindow_C_DrawBox_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseMove
struct UBP_DebugWindow_C_OnMouseMove_Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewW;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewH;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.DrawWindowFrame
struct UBP_DebugWindow_C_DrawWindowFrame_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.InWindowCorner?
struct UBP_DebugWindow_C_InWindowCorner__Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseUp
struct UBP_DebugWindow_C_OnMouseUp_Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.OnMouseDown
struct UBP_DebugWindow_C_OnMouseDown_Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.InWindow?
struct UBP_DebugWindow_C_InWindow__Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWindow.BP_DebugWindow_C.Render
struct UBP_DebugWindow_C_Render_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
