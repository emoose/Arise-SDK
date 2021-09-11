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

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_MAP2_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exit
struct UTO14_BPI_GUI_MNU_MAP2_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Init
struct UTO14_BPI_GUI_MNU_MAP2_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ReadWait
struct UTO14_BPI_GUI_MNU_MAP2_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.GetNextScene
struct UTO14_BPI_GUI_MNU_MAP2_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Finish
struct UTO14_BPI_GUI_MNU_MAP2_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToMapListEvent
struct UTO14_BPI_GUI_MNU_MAP2_C_UnbindToMapListEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToMapListEvent
struct UTO14_BPI_GUI_MNU_MAP2_C_BindToMapListEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToLocaMapEvent
struct UTO14_BPI_GUI_MNU_MAP2_C_UnbindToLocaMapEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToLocaMapEvent
struct UTO14_BPI_GUI_MNU_MAP2_C_BindToLocaMapEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CheckPrimary
struct UTO14_BPI_GUI_MNU_MAP2_C_CheckPrimary_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_C_RefreshQuest_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshLocation
struct UTO14_BPI_GUI_MNU_MAP2_C_RefreshLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshRegion
struct UTO14_BPI_GUI_MNU_MAP2_C_RefreshRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocationData
struct UTO14_BPI_GUI_MNU_MAP2_C_InitLocationData_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitMapList
struct UTO14_BPI_GUI_MNU_MAP2_C_InitMapList_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocaMap
struct UTO14_BPI_GUI_MNU_MAP2_C_InitLocaMap_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ChangeSubMenu
struct UTO14_BPI_GUI_MNU_MAP2_C_ChangeSubMenu_Params
{
	TScriptInterface<class UTO14_BPI_MenuFunction_C>   NextSubMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitSequence
struct UTO14_BPI_GUI_MNU_MAP2_C_InitSequence_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_C_Close_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_C_Open_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackChangeArea
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackChangeArea_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeToMapList
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnChangeToMapList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedLocaMap
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnInitializedLocaMap_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnGotoQuest_Locamap
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnGotoQuest_Locamap_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_Locamap
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBack_Locamap_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToMapList
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackToMapList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToBase_Locamap
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackToBase_Locamap_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_MapList
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBack_MapList_Params
{
	bool                                               bExit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnDecideMapLink_Locamap
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnDecideMapLink_Locamap_Params
{
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeArea_MapList
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnChangeArea_MapList_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Exec
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedMapList
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnInitializedMapList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Init
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Initialized
struct UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Initialized_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_C_OnViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2
struct UTO14_BPI_GUI_MNU_MAP2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshQuestEvent__DelegateSignature_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshLocationEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshLocationEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshRegionEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshRegionEvent__DelegateSignature_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
