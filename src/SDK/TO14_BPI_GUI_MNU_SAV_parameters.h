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

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_SAV_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exit
struct UTO14_BPI_GUI_MNU_SAV_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Init
struct UTO14_BPI_GUI_MNU_SAV_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ReadWait
struct UTO14_BPI_GUI_MNU_SAV_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exec
struct UTO14_BPI_GUI_MNU_SAV_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetNextScene
struct UTO14_BPI_GUI_MNU_SAV_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Finish
struct UTO14_BPI_GUI_MNU_SAV_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsWait
struct UTO14_BPI_GUI_MNU_SAV_C_IsWait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetPackageNames
struct UTO14_BPI_GUI_MNU_SAV_C_GetPackageNames_Params
{
	TArray<struct FString>                             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FModifiedText                               Out;                                                      // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.CombineWithCRLF
struct UTO14_BPI_GUI_MNU_SAV_C_CombineWithCRLF_Params
{
	struct FModifiedText                               Text1;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               Text2;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FModifiedText                               Out;                                                      // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCErrorProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecDLCErrorProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.MouseControlForWaiting
struct UTO14_BPI_GUI_MNU_SAV_C_MouseControlForWaiting_Params
{
	bool                                               bInteractable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetDLC_CategoryError
struct UTO14_BPI_GUI_MNU_SAV_C_GetDLC_CategoryError_Params
{
	struct FString                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             DicText;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCWarningProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecDLCWarningProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDefaultProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecDefaultProcess_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExNewFirst
struct UTO14_BPI_GUI_MNU_SAV_C_StartExNewFirst_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecExNewFirstProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecExNewFirstProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecErrorProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecErrorProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsExcludeAutoSave
struct UTO14_BPI_GUI_MNU_SAV_C_IsExcludeAutoSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExit
struct UTO14_BPI_GUI_MNU_SAV_C_StartExit_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecInitializeProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecInitializeProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SlotToIndex
struct UTO14_BPI_GUI_MNU_SAV_C_SlotToIndex_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.nativeInitialize
struct UTO14_BPI_GUI_MNU_SAV_C_nativeInitialize_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetSelectedSlot
struct UTO14_BPI_GUI_MNU_SAV_C_GetSelectedSlot_Params
{
	int                                                Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartLoad
struct UTO14_BPI_GUI_MNU_SAV_C_StartLoad_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartSave
struct UTO14_BPI_GUI_MNU_SAV_C_StartSave_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartDelete
struct UTO14_BPI_GUI_MNU_SAV_C_StartDelete_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecLoadProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecLoadProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecSaveProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecSaveProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDeleteProcess
struct UTO14_BPI_GUI_MNU_SAV_C_ExecDeleteProcess_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DecideSub
struct UTO14_BPI_GUI_MNU_SAV_C_DecideSub_Params
{
	int                                                iNewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SelectSub
struct UTO14_BPI_GUI_MNU_SAV_C_SelectSub_Params
{
	int                                                iNewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                iOldIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ListDecide
struct UTO14_BPI_GUI_MNU_SAV_C_ListDecide_Params
{
	int                                                iNewIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.RestructList
struct UTO14_BPI_GUI_MNU_SAV_C_RestructList_Params
{
	bool                                               KeepCursor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DoDLCError
struct UTO14_BPI_GUI_MNU_SAV_C_DoDLCError_Params
{
	TArray<int>                                        ErrorDLCItemID;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_SAV_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewClose
struct UTO14_BPI_GUI_MNU_SAV_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Construct
struct UTO14_BPI_GUI_MNU_SAV_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Tick
struct UTO14_BPI_GUI_MNU_SAV_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClose
struct UTO14_BPI_GUI_MNU_SAV_C_OnClose_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClosed
struct UTO14_BPI_GUI_MNU_SAV_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.WaitingEnd
struct UTO14_BPI_GUI_MNU_SAV_C_WaitingEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV
struct UTO14_BPI_GUI_MNU_SAV_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
