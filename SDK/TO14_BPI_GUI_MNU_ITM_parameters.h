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

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_ITM_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exit
struct UTO14_BPI_GUI_MNU_ITM_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Init
struct UTO14_BPI_GUI_MNU_ITM_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ReadWait
struct UTO14_BPI_GUI_MNU_ITM_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Exec
struct UTO14_BPI_GUI_MNU_ITM_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.GetNextScene
struct UTO14_BPI_GUI_MNU_ITM_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Finish
struct UTO14_BPI_GUI_MNU_ITM_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SkillDetailWork
struct UTO14_BPI_GUI_MNU_ITM_C_SkillDetailWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeSkillDetailMode
struct UTO14_BPI_GUI_MNU_ITM_C_ChangeSkillDetailMode_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_CPUP
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_CPUP_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleRevive
struct UTO14_BPI_GUI_MNU_ITM_C_UseCheck_BattleRevive_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Revive
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_Revive_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseCheck_BattleHP
struct UTO14_BPI_GUI_MNU_ITM_C_UseCheck_BattleHP_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateGuide
struct UTO14_BPI_GUI_MNU_ITM_C_UpdateGuide_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SortDisable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Using;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Battle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_StatusUpWork
struct UTO14_BPI_GUI_MNU_ITM_C_Use_StatusUpWork_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUse;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_StatusUp
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_StatusUp_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ChangeData
struct UTO14_BPI_GUI_MNU_ITM_C_ChangeData_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_ITM_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SaveScrollSaveData
struct UTO14_BPI_GUI_MNU_ITM_C_SaveScrollSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.InitScrollSaveData
struct UTO14_BPI_GUI_MNU_ITM_C_InitScrollSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Cook
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_Cook_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork1
struct UTO14_BPI_GUI_MNU_ITM_C_TrashWork1_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SearchItemData
struct UTO14_BPI_GUI_MNU_ITM_C_SearchItemData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuItemData                               TargetData;                                               // (Parm, OutParm)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.FIndItemList
struct UTO14_BPI_GUI_MNU_ITM_C_FIndItemList_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Use_HealHPWork
struct UTO14_BPI_GUI_MNU_ITM_C_Use_HealHPWork_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_Common
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_Common_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealTP
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_HealTP_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SetGuideText
struct UTO14_BPI_GUI_MNU_ITM_C_SetGuideText_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.IsItemUsable
struct UTO14_BPI_GUI_MNU_ITM_C_IsItemUsable_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUse;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemSortChange
struct UTO14_BPI_GUI_MNU_ITM_C_ItemSortChange_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.MouseEnableChange
struct UTO14_BPI_GUI_MNU_ITM_C_MouseEnableChange_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem_HealHP
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_HealHP_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemTypeSwitch
struct UTO14_BPI_GUI_MNU_ITM_C_ItemTypeSwitch_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UseItem
struct UTO14_BPI_GUI_MNU_ITM_C_UseItem_Params
{
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutputText;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemUseWork
struct UTO14_BPI_GUI_MNU_ITM_C_ItemUseWork_Params
{
	int                                                DecideIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUse;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.SceneFinishStart
struct UTO14_BPI_GUI_MNU_ITM_C_SceneFinishStart_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashWork
struct UTO14_BPI_GUI_MNU_ITM_C_TrashWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TrashButtonCheck
struct UTO14_BPI_GUI_MNU_ITM_C_TrashButtonCheck_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrashType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UpdateItemDate
struct UTO14_BPI_GUI_MNU_ITM_C_UpdateItemDate_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ItemHealWork
struct UTO14_BPI_GUI_MNU_ITM_C_ItemHealWork_Params
{
	int                                                SortItemIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.TabChangeWork
struct UTO14_BPI_GUI_MNU_ITM_C_TabChangeWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TabMove;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseOpen
struct UTO14_BPI_GUI_MNU_ITM_C_OnUseOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnUseClose
struct UTO14_BPI_GUI_MNU_ITM_C_OnUseClose_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailOpen
struct UTO14_BPI_GUI_MNU_ITM_C_OnDetailOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnDetailClose
struct UTO14_BPI_GUI_MNU_ITM_C_OnDetailClose_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.Construct
struct UTO14_BPI_GUI_MNU_ITM_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_ITM_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowClose
struct UTO14_BPI_GUI_MNU_ITM_C_OnThrowClose_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewClose
struct UTO14_BPI_GUI_MNU_ITM_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnThrowOpen
struct UTO14_BPI_GUI_MNU_ITM_C_OnThrowOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_ITM_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM
struct UTO14_BPI_GUI_MNU_ITM_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM.TO14_BPI_GUI_MNU_ITM_C.UsingItemFlow__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_C_UsingItemFlow__DelegateSignature_Params
{
	class AMenuPadProcess*                             MenuPad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
