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

// Function BP_DebugWidget.BP_DebugWidget_C.GetWorldPosition
struct UBP_DebugWidget_C_GetWorldPosition_Params
{
	float                                              Wx;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Wy;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.RenderCross
struct UBP_DebugWidget_C_RenderCross_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.RenderBox
struct UBP_DebugWidget_C_RenderBox_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseMove
struct UBP_DebugWidget_C_OnMouseMove_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseUp
struct UBP_DebugWidget_C_OnMouseUp_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.OnMouseDown
struct UBP_DebugWidget_C_OnMouseDown_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.InWindown
struct UBP_DebugWidget_C_InWindown_Params
{
	float                                              Cx;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              cy;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugWidget.BP_DebugWidget_C.Render
struct UBP_DebugWidget_C_Render_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
