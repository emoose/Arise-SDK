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

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_QUE_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.Exit
struct UTO14_BPI_GUI_MNU_QUE_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.Init
struct UTO14_BPI_GUI_MNU_QUE_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.ReadWait
struct UTO14_BPI_GUI_MNU_QUE_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.Exec
struct UTO14_BPI_GUI_MNU_QUE_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.GetNextScene
struct UTO14_BPI_GUI_MNU_QUE_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.Finish
struct UTO14_BPI_GUI_MNU_QUE_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.CheckPrimary
struct UTO14_BPI_GUI_MNU_QUE_C_CheckPrimary_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.LocationOpenCheck
struct UTO14_BPI_GUI_MNU_QUE_C_LocationOpenCheck_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.ChangeKeyGuide
struct UTO14_BPI_GUI_MNU_QUE_C_ChangeKeyGuide_Params
{
	int                                                Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.SearchQuest
struct UTO14_BPI_GUI_MNU_QUE_C_SearchQuest_Params
{
	TArray<struct FQuestData>                          QuestData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     TargetID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_QUE_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.SaveCursorStatus
struct UTO14_BPI_GUI_MNU_QUE_C_SaveCursorStatus_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.InitCursorStatus
struct UTO14_BPI_GUI_MNU_QUE_C_InitCursorStatus_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.QuestListWork2
struct UTO14_BPI_GUI_MNU_QUE_C_QuestListWork2_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.InitQuestList2
struct UTO14_BPI_GUI_MNU_QUE_C_InitQuestList2_Params
{
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TopIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SelectQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.FindQuestIndex
struct UTO14_BPI_GUI_MNU_QUE_C_FindQuestIndex_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Tab;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.SetMarkerQuest
struct UTO14_BPI_GUI_MNU_QUE_C_SetMarkerQuest_Params
{
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.GetMarkerQuest
struct UTO14_BPI_GUI_MNU_QUE_C_GetMarkerQuest_Params
{
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.GetQuestDatabase
struct UTO14_BPI_GUI_MNU_QUE_C_GetQuestDatabase_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_QUE_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.OnViewClose
struct UTO14_BPI_GUI_MNU_QUE_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.Construct
struct UTO14_BPI_GUI_MNU_QUE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.OnAnimationStarted
struct UTO14_BPI_GUI_MNU_QUE_C_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_QUE_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE.TO14_BPI_GUI_MNU_QUE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE
struct UTO14_BPI_GUI_MNU_QUE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
