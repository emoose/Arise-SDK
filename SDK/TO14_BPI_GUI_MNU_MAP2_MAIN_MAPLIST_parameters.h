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

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exit
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Init
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ReadWait
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.GetNextScene
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Finish
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Term
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Term_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindRefreshRegionEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindRefreshRegionEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.FogAttach
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_FogAttach_Params
{
	class UWidget*                                     FOG1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindChnageAreaEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindChnageAreaEvent_Params
{
	struct FScriptDelegate                             OnChangeArea;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ChangeArea
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ChangeArea_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitLocaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitLocaList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitAreaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitAreaList_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecLocaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecLocaList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecAreaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecAreaList_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshLocation
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshRegion
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitRegionTab
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitRegionTab_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecRegionTab
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecRegionTab_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindBackEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindBackEvent_Params
{
	struct FScriptDelegate                             OnBack;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RunBack
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RunBack_Params
{
	bool                                               Exit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CheckBack
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CheckBack_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecPad
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecPad_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Open_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitEvent_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindInitializedEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindInitializedEvent_Params
{
	struct FScriptDelegate                             OnInitialized;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.IsInitialized
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_IsInitialized_Params
{
	bool                                               Initialized;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_LocaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnDecide_LocaList_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHasHierarchy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_AreaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnDecide_AreaList_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHasHierarchy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnSelect_AreaList
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnSelect_AreaList_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHasHierarchy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshRegion
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshRegion_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshLocation
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshQuest_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnBack
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnBack_Params
{
	bool                                               Exit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnChangedSelect_RegionTab
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnChangedSelect_RegionTab_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Exec
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Init
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnInitialized
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnInitialized_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Destruct
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshQuestEvent__DelegateSignature_Params
{
	struct FString                                     MainQuestID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                MainStepIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SubQuestIDs;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SubStepIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnChangeAreaEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnChangeAreaEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshLocationEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshLocationEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshRegionEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshRegionEvent__DelegateSignature_Params
{
	struct FString                                     RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnBackEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnBackEvent__DelegateSignature_Params
{
	bool                                               Exit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnInitializedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnInitializedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
