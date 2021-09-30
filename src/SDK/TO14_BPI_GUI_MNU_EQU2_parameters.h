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

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_EQU2_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exit
struct UTO14_BPI_GUI_MNU_EQU2_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Init
struct UTO14_BPI_GUI_MNU_EQU2_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ReadWait
struct UTO14_BPI_GUI_MNU_EQU2_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Exec
struct UTO14_BPI_GUI_MNU_EQU2_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetNextScene
struct UTO14_BPI_GUI_MNU_EQU2_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Finish
struct UTO14_BPI_GUI_MNU_EQU2_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackupVisualStatus
struct UTO14_BPI_GUI_MNU_EQU2_C_BackupVisualStatus_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.KPICheck
struct UTO14_BPI_GUI_MNU_EQU2_C_KPICheck_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SaveEquipVisualItem
struct UTO14_BPI_GUI_MNU_EQU2_C_SaveEquipVisualItem_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText_Item
struct UTO14_BPI_GUI_MNU_EQU2_C_UpdateHelpText_Item_Params
{
	struct FMenuVisualData                             VisualData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog2
struct UTO14_BPI_GUI_MNU_EQU2_C_EXNewDialog2_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.EXNewDialog1
struct UTO14_BPI_GUI_MNU_EQU2_C_EXNewDialog1_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.AttachmentError
struct UTO14_BPI_GUI_MNU_EQU2_C_AttachmentError_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetModelChangeFlag
struct UTO14_BPI_GUI_MNU_EQU2_C_SetModelChangeFlag_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CheckVisualState
struct UTO14_BPI_GUI_MNU_EQU2_C_CheckVisualState_Params
{
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetLoadFailureWork
struct UTO14_BPI_GUI_MNU_EQU2_C_MysetLoadFailureWork_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.BackHelpText
struct UTO14_BPI_GUI_MNU_EQU2_C_BackHelpText_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.UpdateHelpText
struct UTO14_BPI_GUI_MNU_EQU2_C_UpdateHelpText_Params
{
	int                                                CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotno;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MySet;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MySetSave;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MySetLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               View;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.NoWeaponWork
struct UTO14_BPI_GUI_MNU_EQU2_C_NoWeaponWork_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ViewModeWork
struct UTO14_BPI_GUI_MNU_EQU2_C_ViewModeWork_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetCharaDefault
struct UTO14_BPI_GUI_MNU_EQU2_C_GetCharaDefault_Params
{
	TMap<EArisePartyID, struct FVector>                Default;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitDefaultValue
struct UTO14_BPI_GUI_MNU_EQU2_C_InitDefaultValue_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.InitStage
struct UTO14_BPI_GUI_MNU_EQU2_C_InitStage_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_EQU2_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetChangeWindowWait
struct UTO14_BPI_GUI_MNU_EQU2_C_MysetChangeWindowWait_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetSelectWindowWait
struct UTO14_BPI_GUI_MNU_EQU2_C_MysetSelectWindowWait_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SlotSelectSaveWork
struct UTO14_BPI_GUI_MNU_EQU2_C_SlotSelectSaveWork_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.MysetTypeSelect
struct UTO14_BPI_GUI_MNU_EQU2_C_MysetTypeSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetVisualItem
struct UTO14_BPI_GUI_MNU_EQU2_C_SetVisualItem_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuVisualData                             VisualData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.FinishAnim
struct UTO14_BPI_GUI_MNU_EQU2_C_FinishAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.GetRebuildRequest
struct UTO14_BPI_GUI_MNU_EQU2_C_GetRebuildRequest_Params
{
	TArray<int>                                        OutIdList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Request;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Attach;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Hair;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Body;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ListSelect
struct UTO14_BPI_GUI_MNU_EQU2_C_ListSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.PartSelect
struct UTO14_BPI_GUI_MNU_EQU2_C_PartSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.IsFinish
struct UTO14_BPI_GUI_MNU_EQU2_C_IsFinish_Params
{
	bool                                               Finish;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Execute
struct UTO14_BPI_GUI_MNU_EQU2_C_Execute_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ChangeCharacter
struct UTO14_BPI_GUI_MNU_EQU2_C_ChangeCharacter_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Initialize
struct UTO14_BPI_GUI_MNU_EQU2_C_Initialize_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_EQU2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.OnViewClose
struct UTO14_BPI_GUI_MNU_EQU2_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.Tick
struct UTO14_BPI_GUI_MNU_EQU2_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2
struct UTO14_BPI_GUI_MNU_EQU2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU2.TO14_BPI_GUI_MNU_EQU2_C.SetTabMouseVisible__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU2_C_SetTabMouseVisible__DelegateSignature_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
