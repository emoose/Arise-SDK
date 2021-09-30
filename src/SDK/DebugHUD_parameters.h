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

// Function DebugHUD.DebugHUD_C.IsRenderGameStateWindow
struct ADebugHUD_C_IsRenderGameStateWindow_Params
{
	bool                                               bRender;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.DrawBox
struct ADebugHUD_C_DrawBox_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.CreateMapInfoWidget
struct ADebugHUD_C_CreateMapInfoWidget_Params
{
};

// Function DebugHUD.DebugHUD_C.CreateMapLinkWidget
struct ADebugHUD_C_CreateMapLinkWidget_Params
{
};

// Function DebugHUD.DebugHUD_C.GetDebugWidget
struct ADebugHUD_C_GetDebugWidget_Params
{
	class UBP_DebugWindow_C*                           BaseWindow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WidgetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBP_DebugWidget_C*                           Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.CreateGameStateWidget
struct ADebugHUD_C_CreateGameStateWidget_Params
{
};

// Function DebugHUD.DebugHUD_C.WorldTimeManagement
struct ADebugHUD_C_WorldTimeManagement_Params
{
};

// Function DebugHUD.DebugHUD_C.CreateWorldTimeWidget
struct ADebugHUD_C_CreateWorldTimeWidget_Params
{
};

// Function DebugHUD.DebugHUD_C.GetDebugWindow
struct ADebugHUD_C_GetDebugWindow_Params
{
	struct FString                                     WindowName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBP_DebugWindow_C*                           NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.DebugWindowManagement
struct ADebugHUD_C_DebugWindowManagement_Params
{
};

// Function DebugHUD.DebugHUD_C.CreateDebugWindow
struct ADebugHUD_C_CreateDebugWindow_Params
{
	struct FString                                     WindowName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UBP_DebugWindow_C*                           NewWindow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.RenderGameState
struct ADebugHUD_C_RenderGameState_Params
{
};

// Function DebugHUD.DebugHUD_C.AddStringGameState
struct ADebugHUD_C_AddStringGameState_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.PrintString
struct ADebugHUD_C_PrintString_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DrawText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.UserConstructionScript
struct ADebugHUD_C_UserConstructionScript_Params
{
};

// Function DebugHUD.DebugHUD_C.ReceiveTick
struct ADebugHUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.OnChangineWorldTimeSlider
struct ADebugHUD_C_OnChangineWorldTimeSlider_Params
{
};

// Function DebugHUD.DebugHUD_C.OnChangeEndWorldTimeSlider
struct ADebugHUD_C_OnChangeEndWorldTimeSlider_Params
{
};

// Function DebugHUD.DebugHUD_C.OnChangeWorldTimePause
struct ADebugHUD_C_OnChangeWorldTimePause_Params
{
};

// Function DebugHUD.DebugHUD_C.OnChangeChkMapLocator
struct ADebugHUD_C_OnChangeChkMapLocator_Params
{
};

// Function DebugHUD.DebugHUD_C.OnChangeChkMapLink
struct ADebugHUD_C_OnChangeChkMapLink_Params
{
};

// Function DebugHUD.DebugHUD_C.ReceiveBeginPlay
struct ADebugHUD_C_ReceiveBeginPlay_Params
{
};

// Function DebugHUD.DebugHUD_C.RenderHUD
struct ADebugHUD_C_RenderHUD_Params
{
};

// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapInfoDevWindow
struct ADebugHUD_C_OnDBPChanged_MapInfoDevWindow_Params
{
};

// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLocatorInfo
struct ADebugHUD_C_OnDBPChanged_MapLocatorInfo_Params
{
};

// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkWindow
struct ADebugHUD_C_OnDBPChanged_MapLinkWindow_Params
{
};

// Function DebugHUD.DebugHUD_C.OnDBPChanged_MapLinkInfo
struct ADebugHUD_C_OnDBPChanged_MapLinkInfo_Params
{
};

// Function DebugHUD.DebugHUD_C.ExecuteUbergraph_DebugHUD
struct ADebugHUD_C_ExecuteUbergraph_DebugHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugHUD.DebugHUD_C.EventExRender__DelegateSignature
struct ADebugHUD_C_EventExRender__DelegateSignature_Params
{
	class AHUD*                                        MasterHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
