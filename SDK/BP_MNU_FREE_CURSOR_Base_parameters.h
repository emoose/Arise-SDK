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

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsRunningGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_IsRunningGroupJump_Params
{
	bool                                               bRunning;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ForceRunGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_ForceRunGroupJump_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhoverAll
struct UBP_MNU_FREE_CURSOR_Base_C_MouseUnhoverAll_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseUnhover
struct UBP_MNU_FREE_CURSOR_Base_C_MouseUnhover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MouseHover
struct UBP_MNU_FREE_CURSOR_Base_C_MouseHover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RequestInitGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_RequestInitGroupJump_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckInitGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_CheckInitGroupJump_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ContainsHitVisibleHoveredAreas
struct UBP_MNU_FREE_CURSOR_Base_C_ContainsHitVisibleHoveredAreas_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetDragMoveSpeedScale
struct UBP_MNU_FREE_CURSOR_Base_C_SetDragMoveSpeedScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DragMove
struct UBP_MNU_FREE_CURSOR_Base_C_DragMove_Params
{
	struct FVector2D                                   MousePos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetWidgetComponent
struct UBP_MNU_FREE_CURSOR_Base_C_SetWidgetComponent_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnbindDecideEvent
struct UBP_MNU_FREE_CURSOR_Base_C_UnbindDecideEvent_Params
{
	struct FScriptDelegate                             OnDecide;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindMoveCanvasEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.IsAdsorbEnable
struct UBP_MNU_FREE_CURSOR_Base_C_IsAdsorbEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetAdsorbEnable
struct UBP_MNU_FREE_CURSOR_Base_C_SetAdsorbEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanAdsorb
struct UBP_MNU_FREE_CURSOR_Base_C_CanAdsorb_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveSpeedScale
struct UBP_MNU_FREE_CURSOR_Base_C_SetMoveSpeedScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetEntityVisible
struct UBP_MNU_FREE_CURSOR_Base_C_SetEntityVisible_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetEntityWidget
struct UBP_MNU_FREE_CURSOR_Base_C_GetEntityWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_StopGroupJump_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.StopAdsorb
struct UBP_MNU_FREE_CURSOR_Base_C_StopAdsorb_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DeReaction
struct UBP_MNU_FREE_CURSOR_Base_C_DeReaction_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EndReaction;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Reaction
struct UBP_MNU_FREE_CURSOR_Base_C_Reaction_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartReaction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Hover
struct UBP_MNU_FREE_CURSOR_Base_C_Hover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ClampMoveLimit
struct UBP_MNU_FREE_CURSOR_Base_C_ClampMoveLimit_Params
{
	struct FVector2D                                   InPos;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   OutPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetMoveLimitOffset
struct UBP_MNU_FREE_CURSOR_Base_C_SetMoveLimitOffset_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindDecideEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             OnDecide;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ResetMove
struct UBP_MNU_FREE_CURSOR_Base_C_ResetMove_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverAreaAll
struct UBP_MNU_FREE_CURSOR_Base_C_RemoveHoverAreaAll_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindEndGroupJumpEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindEndGroupJumpEvent_Params
{
	struct FScriptDelegate                             OnEndGroupJump;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindStartGroupJumpEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindStartGroupJumpEvent_Params
{
	struct FScriptDelegate                             OnStartGroupJump;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CanInput
struct UBP_MNU_FREE_CURSOR_Base_C_CanInput_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetHoveredAreas
struct UBP_MNU_FREE_CURSOR_Base_C_GetHoveredAreas_Params
{
	TArray<class UWidget*>                             HoveredAreas;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.SetGroupJumpInputButtons
struct UBP_MNU_FREE_CURSOR_Base_C_SetGroupJumpInputButtons_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_MenuFreeCursorButton>            Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.GetGroupJumpArea
struct UBP_MNU_FREE_CURSOR_Base_C_GetGroupJumpArea_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Unhover
struct UBP_MNU_FREE_CURSOR_Base_C_Unhover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.UnhoverAll
struct UBP_MNU_FREE_CURSOR_Base_C_UnhoverAll_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RemoveHoverArea
struct UBP_MNU_FREE_CURSOR_Base_C_RemoveHoverArea_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecGroupJump
struct UBP_MNU_FREE_CURSOR_Base_C_ExecGroupJump_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindUnhoveredEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindUnhoveredEvent_Params
{
	struct FScriptDelegate                             OnUnhovered;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindHoveredEvent
struct UBP_MNU_FREE_CURSOR_Base_C_BindHoveredEvent_Params
{
	struct FScriptDelegate                             OnHovered;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunMove
struct UBP_MNU_FREE_CURSOR_Base_C_RunMove_Params
{
	struct FVector2D                                   InputAxis;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup1Jump
struct UBP_MNU_FREE_CURSOR_Base_C_RunGroup1Jump_Params
{
	struct FVector2D                                   InputDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.RunGroup0Jump
struct UBP_MNU_FREE_CURSOR_Base_C_RunGroup0Jump_Params
{
	struct FVector2D                                   InputDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddGroupJumpArea
struct UBP_MNU_FREE_CURSOR_Base_C_AddGroupJumpArea_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             Widgets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.DecideHoveredAreas
struct UBP_MNU_FREE_CURSOR_Base_C_DecideHoveredAreas_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDecideInput
struct UBP_MNU_FREE_CURSOR_Base_C_CheckDecideInput_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.BindMoveCanvasWidget
struct UBP_MNU_FREE_CURSOR_Base_C_BindMoveCanvasWidget_Params
{
	class UWidget*                                     MoveCanvastWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddHoverArea
struct UBP_MNU_FREE_CURSOR_Base_C_AddHoverArea_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.AddAdsorbAreas
struct UBP_MNU_FREE_CURSOR_Base_C_AddAdsorbAreas_Params
{
	class UWidget*                                     Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<class UBP_MenuFreeCursorAdsorbArea_C*>      AdsorbAreas;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Term
struct UBP_MNU_FREE_CURSOR_Base_C_Term_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup1JumpInput
struct UBP_MNU_FREE_CURSOR_Base_C_CheckGroup1JumpInput_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputDir;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMoveInput
struct UBP_MNU_FREE_CURSOR_Base_C_CheckMoveInput_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputAxis;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.FindNearlyAdsorbArea
struct UBP_MNU_FREE_CURSOR_Base_C_FindNearlyAdsorbArea_Params
{
	class UWidget*                                     Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<class UBP_MenuFreeCursorAdsorbArea_C*>      OutNearlyAdsorbAreaHierarchy;                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_MenuFreeCursorAdsorbArea_C*              NearlyAdsorbArea;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckGroup0JumpInput
struct UBP_MNU_FREE_CURSOR_Base_C_CheckGroup0JumpInput_Params
{
	class AInputExtInputProcessBase*                   PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputDir;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckDushInput
struct UBP_MNU_FREE_CURSOR_Base_C_CheckDushInput_Params
{
	class AInputExtInputProcessBase*                   PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.MoveCanvas
struct UBP_MNU_FREE_CURSOR_Base_C_MoveCanvas_Params
{
	struct FVector2D                                   DeltaMove;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Threshold;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckMouseCursorHover
struct UBP_MNU_FREE_CURSOR_Base_C_CheckMouseCursorHover_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckPadCursorHover
struct UBP_MNU_FREE_CURSOR_Base_C_CheckPadCursorHover_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecAdsorb
struct UBP_MNU_FREE_CURSOR_Base_C_ExecAdsorb_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecPadInput
struct UBP_MNU_FREE_CURSOR_Base_C_ExecPadInput_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecMouseInput
struct UBP_MNU_FREE_CURSOR_Base_C_ExecMouseInput_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.CheckControl
struct UBP_MNU_FREE_CURSOR_Base_C_CheckControl_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMouse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Exec
struct UBP_MNU_FREE_CURSOR_Base_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuData                                   GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Init
struct UBP_MNU_FREE_CURSOR_Base_C_Init_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnCloseSystemWindow
struct UBP_MNU_FREE_CURSOR_Base_C_OnCloseSystemWindow_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMouseControlStart
struct UBP_MNU_FREE_CURSOR_Base_C_OnMouseControlStart_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnPadControlStart
struct UBP_MNU_FREE_CURSOR_Base_C_OnPadControlStart_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushStart
struct UBP_MNU_FREE_CURSOR_Base_C_OnDushStart_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDushEnd
struct UBP_MNU_FREE_CURSOR_Base_C_OnDushEnd_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnOpenSystemWindow
struct UBP_MNU_FREE_CURSOR_Base_C_OnOpenSystemWindow_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.Destruct
struct UBP_MNU_FREE_CURSOR_Base_C_Destruct_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base
struct UBP_MNU_FREE_CURSOR_Base_C_ExecuteUbergraph_BP_MNU_FREE_CURSOR_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnMoveCanvas__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnMoveCanvas__DelegateSignature_Params
{
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnDecideEvent__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnDecideEvent__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnEndGroupJump__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnEndGroupJump__DelegateSignature_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnStartGroupJump__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnStartGroupJump__DelegateSignature_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnUnhovered__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Base.BP_MNU_FREE_CURSOR_Base_C.OnHovered__DelegateSignature
struct UBP_MNU_FREE_CURSOR_Base_C_OnHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
