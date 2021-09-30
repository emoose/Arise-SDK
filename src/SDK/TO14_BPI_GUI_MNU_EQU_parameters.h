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

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_EQU_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.Exit
struct UTO14_BPI_GUI_MNU_EQU_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.Init
struct UTO14_BPI_GUI_MNU_EQU_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ReadWait
struct UTO14_BPI_GUI_MNU_EQU_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.Exec
struct UTO14_BPI_GUI_MNU_EQU_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.GetNextScene
struct UTO14_BPI_GUI_MNU_EQU_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.Finish
struct UTO14_BPI_GUI_MNU_EQU_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.AccessoryChangeCheckWork
struct UTO14_BPI_GUI_MNU_EQU_C_AccessoryChangeCheckWork_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.AccessoryOtherCheck
struct UTO14_BPI_GUI_MNU_EQU_C_AccessoryOtherCheck_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedCheck;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.EquipListWork
struct UTO14_BPI_GUI_MNU_EQU_C_EquipListWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.EquipSlotWork
struct UTO14_BPI_GUI_MNU_EQU_C_EquipSlotWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.SkillViewWork
struct UTO14_BPI_GUI_MNU_EQU_C_SkillViewWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.CheckSkillListOpen
struct UTO14_BPI_GUI_MNU_EQU_C_CheckSkillListOpen_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.WeaponOptionChange
struct UTO14_BPI_GUI_MNU_EQU_C_WeaponOptionChange_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ChangeKeyGuide
struct UTO14_BPI_GUI_MNU_EQU_C_ChangeKeyGuide_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ViewModeWork
struct UTO14_BPI_GUI_MNU_EQU_C_ViewModeWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.SortChangeWork
struct UTO14_BPI_GUI_MNU_EQU_C_SortChangeWork_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.InitDefaultValue
struct UTO14_BPI_GUI_MNU_EQU_C_InitDefaultValue_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.GetCharaDefault
struct UTO14_BPI_GUI_MNU_EQU_C_GetCharaDefault_Params
{
	TMap<EArisePartyID, struct FVector>                CharaDefault1;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ChangeTabMouseVisible
struct UTO14_BPI_GUI_MNU_EQU_C_ChangeTabMouseVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.CheckRebuildChara
struct UTO14_BPI_GUI_MNU_EQU_C_CheckRebuildChara_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.GetEquipWeaponList
struct UTO14_BPI_GUI_MNU_EQU_C_GetEquipWeaponList_Params
{
	TMap<int, int>                                     Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.InitStage
struct UTO14_BPI_GUI_MNU_EQU_C_InitStage_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ResetPreview
struct UTO14_BPI_GUI_MNU_EQU_C_ResetPreview_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsList;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.InitCharaStatus
struct UTO14_BPI_GUI_MNU_EQU_C_InitCharaStatus_Params
{
	int                                                CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.UpdateState
struct UTO14_BPI_GUI_MNU_EQU_C_UpdateState_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ResetEquipItem
struct UTO14_BPI_GUI_MNU_EQU_C_ResetEquipItem_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.VisibleChange
struct UTO14_BPI_GUI_MNU_EQU_C_VisibleChange_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ResetList
struct UTO14_BPI_GUI_MNU_EQU_C_ResetList_Params
{
	int                                                SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IndexKeep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_EQU_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.OnViewClose
struct UTO14_BPI_GUI_MNU_EQU_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.OnVisualOpen
struct UTO14_BPI_GUI_MNU_EQU_C_OnVisualOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.OnVisualClose
struct UTO14_BPI_GUI_MNU_EQU_C_OnVisualClose_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.Construct
struct UTO14_BPI_GUI_MNU_EQU_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.InitEvent
struct UTO14_BPI_GUI_MNU_EQU_C_InitEvent_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU.TO14_BPI_GUI_MNU_EQU_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU
struct UTO14_BPI_GUI_MNU_EQU_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
