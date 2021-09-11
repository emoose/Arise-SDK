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

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_TIT2_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exit
struct UTO14_BPI_GUI_MNU_TIT2_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Init
struct UTO14_BPI_GUI_MNU_TIT2_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ReadWait
struct UTO14_BPI_GUI_MNU_TIT2_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec
struct UTO14_BPI_GUI_MNU_TIT2_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetNextScene
struct UTO14_BPI_GUI_MNU_TIT2_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish
struct UTO14_BPI_GUI_MNU_TIT2_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.StoreCursorIndex
struct UTO14_BPI_GUI_MNU_TIT2_C_StoreCursorIndex_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Top;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListTopIndex
struct UTO14_BPI_GUI_MNU_TIT2_C_GetSklListTopIndex_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListStartIndex
struct UTO14_BPI_GUI_MNU_TIT2_C_GetSklListStartIndex_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_ExecSklList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputCloseSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_CheckInputCloseSklList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.HideSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_HideSklList_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ShowSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_ShowSklList_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputViewSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_CheckInputViewSklList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecPad
struct UTO14_BPI_GUI_MNU_TIT2_C_ExecPad_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.LoadCursorPosition
struct UTO14_BPI_GUI_MNU_TIT2_C_LoadCursorPosition_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.SaveCursorPosition
struct UTO14_BPI_GUI_MNU_TIT2_C_SaveCursorPosition_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.FinishMain
struct UTO14_BPI_GUI_MNU_TIT2_C_FinishMain_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.InitMain
struct UTO14_BPI_GUI_MNU_TIT2_C_InitMain_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_MAIN_C*               Main;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish2D
struct UTO14_BPI_GUI_MNU_TIT2_C_Finish2D_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish3D
struct UTO14_BPI_GUI_MNU_TIT2_C_Finish3D_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec2D
struct UTO14_BPI_GUI_MNU_TIT2_C_Exec2D_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec3D
struct UTO14_BPI_GUI_MNU_TIT2_C_Exec3D_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableStart_FromMain
struct UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnSkipableStart_FromMain_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableEnd_FromMain
struct UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnSkipableEnd_FromMain_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmStart_FromMain
struct UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnExpConfirmStart_FromMain_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmEnd_FromMain
struct UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnExpConfirmEnd_FromMain_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnShowSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_OnShowSklList_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnHideSklList
struct UTO14_BPI_GUI_MNU_TIT2_C_OnHideSklList_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TIT2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewClose
struct UTO14_BPI_GUI_MNU_TIT2_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit3D
struct UTO14_BPI_GUI_MNU_TIT2_C_CustomEvent_OnInit3D_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit2D
struct UTO14_BPI_GUI_MNU_TIT2_C_CustomEvent_OnInit2D_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_C_BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_TIT2_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2
struct UTO14_BPI_GUI_MNU_TIT2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
