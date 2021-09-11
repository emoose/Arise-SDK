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

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize2nd
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Initialize2nd_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Activate
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Activate_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetCurrentId
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetCurrentId_Params
{
	struct FString                                     ID;                                                       // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.BindDecideEvent
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetIconIsDisable
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetIconIsDisable_Params
{
	int                                                InLineIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InIconIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsDisable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseHovered
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_CB_MouseHovered_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.CB_MouseClicked
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_CB_MouseClicked_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Initialize_Params
{
	bool                                               bDelayInit2nd;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeSelectCursor
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ChangeSelectCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PadWork
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PadWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.IconTextAnimation
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_IconTextAnimation_Params
{
	int                                                Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetInitializeData
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetInitializeData_Params
{
	int                                                IndexH;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexV;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTopmenuIconData                            OutData;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ChangeIconData
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ChangeIconData_Params
{
	struct FString                                     TargetMenuID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMenuIconType                                      NewIconType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewMenuID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.InitializeIcon
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_InitializeIcon_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.GetAnimationFinishFlag
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_GetAnimationFinishFlag_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationStarted
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayVerticalAnimation
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayVerticalAnimation_Params
{
	int                                                NewLine;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldLine;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayHorizontalAnimation
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayHorizontalAnimation_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.Construct
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnInit
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnInit_Params
{
	bool                                               bDelayed2ndInit;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.OnDecideEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_OnDecideEvent__DelegateSignature_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationH__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayIconAnimationH__DelegateSignature_Params
{
	bool                                               IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C.PlayIconAnimationV__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C_PlayIconAnimationV__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
