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

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_MAS_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exit
struct UTO14_BPI_GUI_MNU_MAS_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Init
struct UTO14_BPI_GUI_MNU_MAS_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ReadWait
struct UTO14_BPI_GUI_MNU_MAS_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exec
struct UTO14_BPI_GUI_MNU_MAS_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.GetNextScene
struct UTO14_BPI_GUI_MNU_MAS_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Finish
struct UTO14_BPI_GUI_MNU_MAS_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SelfArtsCheck
struct UTO14_BPI_GUI_MNU_MAS_C_SelfArtsCheck_Params
{
	bool                                               CheckOK;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CategoryTabWork
struct UTO14_BPI_GUI_MNU_MAS_C_CategoryTabWork_Params
{
	class AMenuPadProcess*                             Pad;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChanged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CheckKPIData
struct UTO14_BPI_GUI_MNU_MAS_C_CheckKPIData_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitKPICheckData
struct UTO14_BPI_GUI_MNU_MAS_C_InitKPICheckData_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.BattleArtsUseCheck
struct UTO14_BPI_GUI_MNU_MAS_C_BattleArtsUseCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.TargetSelectWork
struct UTO14_BPI_GUI_MNU_MAS_C_TargetSelectWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitBattleMemberList
struct UTO14_BPI_GUI_MNU_MAS_C_InitBattleMemberList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteHeal
struct UTO14_BPI_GUI_MNU_MAS_C_ExecuteHeal_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Using;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AllTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.HealArtsWork
struct UTO14_BPI_GUI_MNU_MAS_C_HealArtsWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsUseCheck
struct UTO14_BPI_GUI_MNU_MAS_C_ArtsUseCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SaveCursorData
struct UTO14_BPI_GUI_MNU_MAS_C_SaveCursorData_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitCursorData
struct UTO14_BPI_GUI_MNU_MAS_C_InitCursorData_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CloseProcedure
struct UTO14_BPI_GUI_MNU_MAS_C_CloseProcedure_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeArtsListHelp
struct UTO14_BPI_GUI_MNU_MAS_C_ChangeArtsListHelp_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotChangeCheck
struct UTO14_BPI_GUI_MNU_MAS_C_SlotChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeMovieMouse
struct UTO14_BPI_GUI_MNU_MAS_C_ChangeMovieMouse_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.AllArtsListWork
struct UTO14_BPI_GUI_MNU_MAS_C_AllArtsListWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsListInit
struct UTO14_BPI_GUI_MNU_MAS_C_ArtsListInit_Params
{
	bool                                               UseSaveIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotResetWork
struct UTO14_BPI_GUI_MNU_MAS_C_SlotResetWork_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ListSelectWork
struct UTO14_BPI_GUI_MNU_MAS_C_ListSelectWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotSelectWork
struct UTO14_BPI_GUI_MNU_MAS_C_SlotSelectWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SetVisibleState
struct UTO14_BPI_GUI_MNU_MAS_C_SetVisibleState_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpenEnd
struct UTO14_BPI_GUI_MNU_MAS_C_OnViewOpenEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAS_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewCloseEnd
struct UTO14_BPI_GUI_MNU_MAS_C_OnViewCloseEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAS_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList1
struct UTO14_BPI_GUI_MNU_MAS_C_OnShowList1_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList2
struct UTO14_BPI_GUI_MNU_MAS_C_OnShowList2_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList1
struct UTO14_BPI_GUI_MNU_MAS_C_OnHideList1_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList2
struct UTO14_BPI_GUI_MNU_MAS_C_OnHideList2_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowSlot
struct UTO14_BPI_GUI_MNU_MAS_C_OnShowSlot_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowAllList
struct UTO14_BPI_GUI_MNU_MAS_C_OnShowAllList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Tick
struct UTO14_BPI_GUI_MNU_MAS_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAS_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS
struct UTO14_BPI_GUI_MNU_MAS_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
