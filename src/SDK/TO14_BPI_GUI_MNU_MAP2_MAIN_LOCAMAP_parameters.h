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

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exit
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Init
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ReadWait
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GetNextScene
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Finish
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsLocaMapClose
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_IsLocaMapClose_Params
{
	bool                                               IsClosing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunFastTravel
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunFastTravel_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindOnBackToBaseEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindOnBackToBaseEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaToList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitLocaToList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FromMapList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_FromMapList_Params
{
	bool                                               bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListBackEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindLocaToListBackEvent_Params
{
	struct FScriptDelegate                             OnLocaToListBack;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetBaseLocation
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetBaseLocation_Params
{
	struct FMapLocationData                            BaseLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetActive
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetInputEnable
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetInputEnable_Params
{
	bool                                               bInputEnable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecOnCursorInfo
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecOnCursorInfo_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Terminate
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FogAttach
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_FogAttach_Params
{
	class UWidget*                                     FOG1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshFocusIcon
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshFocusIcon_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindDecideMapLinkEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindDecideMapLinkEvent_Params
{
	struct FScriptDelegate                             OnDecideMapLink;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindBackEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindBackEvent_Params
{
	struct FScriptDelegate                             OnBack;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindGotoQuestEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindGotoQuestEvent_Params
{
	struct FScriptDelegate                             OnGotoQuest;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GotoQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_GotoQuest_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitTabLoca
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitTabLoca_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunReset
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunReset_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckReset
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckReset_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecMapLoca
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecMapLoca_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitFreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitFreeCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecFreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecFreeCursor_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaMap
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitLocaMap_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindRefreshQuestEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindRefreshQuestEvent_Params
{
	struct FScriptDelegate                             OnRefreshQuest;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunToggleIcnList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunToggleIcnList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckToggleIcnList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckToggleIcnList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaTab
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecLocaTab_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunBack
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunBack_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaToList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecLocaToList_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListEnterEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindLocaToListEnterEvent_Params
{
	struct FScriptDelegate                             OnLocaToListEnter;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckBack
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckBack_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindInitializedEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindInitializedEvent_Params
{
	struct FScriptDelegate                             OnInitialized;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsInitialized
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_IsInitialized_Params
{
	bool                                               Initialized;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshLocation
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Close_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Open_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecPad
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecPad_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnReset
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnReset_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnChangedMapFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnChangedMapFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnGotoQuest_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMapLink
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnMapLink_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnFastTravel
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnFastTravel_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnHovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnUnhovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FocusIconImage
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnHovered_FocusIconImage_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FocusIconImage
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnUnhovered_FocusIconImage_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMoveCanvas_FreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnMoveCanvas_FreeCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshRegion
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocation
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshArea
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshArea_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocationName
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshLocationName_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnEnter_LocaToList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnEnter_LocaToList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnBack_LocaToList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnBack_LocaToList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Init
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnInitialized
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnInitialized_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Exec
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnvViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnvViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackToBaseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnBackToBaseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnDecideMapLinkEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnDecideMapLinkEvent__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnBackEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnGotoQuestEvent__DelegateSignature_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnResetEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnResetEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewCloseFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnRefreshQuestEvent__DelegateSignature_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshLocationEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnRefreshLocationEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnInitializedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnInitializedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
