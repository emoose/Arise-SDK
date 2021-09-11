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

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_FOR2_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exit
struct UTO14_BPI_GUI_MNU_FOR2_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Init
struct UTO14_BPI_GUI_MNU_FOR2_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ReadWait
struct UTO14_BPI_GUI_MNU_FOR2_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Exec
struct UTO14_BPI_GUI_MNU_FOR2_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetNextScene
struct UTO14_BPI_GUI_MNU_FOR2_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Finish
struct UTO14_BPI_GUI_MNU_FOR2_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetBtlLookChek
struct UTO14_BPI_GUI_MNU_FOR2_C_GetBtlLookChek_Params
{
	int                                                InCharaID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsChemge;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsLook;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChek
struct UTO14_BPI_GUI_MNU_FOR2_C_SelectChek_Params
{
	int                                                InSelectIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsSelect;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChengImageChek
struct UTO14_BPI_GUI_MNU_FOR2_C_ChengImageChek_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetBtlParty
struct UTO14_BPI_GUI_MNU_FOR2_C_SetBtlParty_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetChengeOrders
struct UTO14_BPI_GUI_MNU_FOR2_C_GetChengeOrders_Params
{
	struct FMenuFormationData                          InPartyData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GetIsCheng;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EFBtlChangeOrderType                               GetChengeOrderType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               GetLock;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitializePatly
struct UTO14_BPI_GUI_MNU_FOR2_C_InitializePatly_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetCancelHelpText
struct UTO14_BPI_GUI_MNU_FOR2_C_SetCancelHelpText_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetListTargetIndex
struct UTO14_BPI_GUI_MNU_FOR2_C_SetListTargetIndex_Params
{
	int                                                InListIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SetHelpText
struct UTO14_BPI_GUI_MNU_FOR2_C_SetHelpText_Params
{
	struct FString                                     InTextLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.AllDeathErrorWindow
struct UTO14_BPI_GUI_MNU_FOR2_C_AllDeathErrorWindow_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MainMemberAllDeathCheck
struct UTO14_BPI_GUI_MNU_FOR2_C_MainMemberAllDeathCheck_Params
{
	bool                                               OutIsAllDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.InitBtlControlCheck
struct UTO14_BPI_GUI_MNU_FOR2_C_InitBtlControlCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OpushonTriggerCheck
struct UTO14_BPI_GUI_MNU_FOR2_C_OpushonTriggerCheck_Params
{
	class AMenuPadProcess*                             InPadData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ControllChangeCheck
struct UTO14_BPI_GUI_MNU_FOR2_C_ControllChangeCheck_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.IsListLRChangeCheck
struct UTO14_BPI_GUI_MNU_FOR2_C_IsListLRChangeCheck_Params
{
	int                                                InBtnID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             InPadData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OuRresult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetPadTrigger
struct UTO14_BPI_GUI_MNU_FOR2_C_GetPadTrigger_Params
{
	class AMenuPadProcess*                             InMenuPad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutTriggerID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangePartyData
struct UTO14_BPI_GUI_MNU_FOR2_C_ChangePartyData_Params
{
	int                                                InNewSelect;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuFormationData                          InCharaData1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMenuFormationData                          InCharaData2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.RestoreSelect
struct UTO14_BPI_GUI_MNU_FOR2_C_RestoreSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MouseDecision
struct UTO14_BPI_GUI_MNU_FOR2_C_MouseDecision_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_FOR2_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ListStateChange
struct UTO14_BPI_GUI_MNU_FOR2_C_ListStateChange_Params
{
	int                                                InNewIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.WindowWait
struct UTO14_BPI_GUI_MNU_FOR2_C_WindowWait_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.MakeErrorWindow
struct UTO14_BPI_GUI_MNU_FOR2_C_MakeErrorWindow_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.GetTargetWidget
struct UTO14_BPI_GUI_MNU_FOR2_C_GetTargetWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FOR2_CHARA_C*              Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorChangeWork
struct UTO14_BPI_GUI_MNU_FOR2_C_CursorChangeWork_Params
{
	int                                                InNewIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InOldIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.UpdateControllChange
struct UTO14_BPI_GUI_MNU_FOR2_C_UpdateControllChange_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationFinish
struct UTO14_BPI_GUI_MNU_FOR2_C_ChangeAnimationFinish_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ChangeAnimationWait
struct UTO14_BPI_GUI_MNU_FOR2_C_ChangeAnimationWait_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectAnimationStart
struct UTO14_BPI_GUI_MNU_FOR2_C_SelectAnimationStart_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.SelectChangeWork
struct UTO14_BPI_GUI_MNU_FOR2_C_SelectChangeWork_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CursorWork
struct UTO14_BPI_GUI_MNU_FOR2_C_CursorWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.StartAnimationWait
struct UTO14_BPI_GUI_MNU_FOR2_C_StartAnimationWait_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_FOR2_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_FOR2_C_CB_MouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewClose
struct UTO14_BPI_GUI_MNU_FOR2_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.Construct
struct UTO14_BPI_GUI_MNU_FOR2_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_FOR2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2.TO14_BPI_GUI_MNU_FOR2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2
struct UTO14_BPI_GUI_MNU_FOR2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
