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

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.DisableInteractionFocusIcons
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_DisableInteractionFocusIcons_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.EnableInteractionFocusIcon
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_EnableInteractionFocusIcon_Params
{
	class UUMG_LocamapFocusIcon_C*                     FocusIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.IsFreeCursorAdsorbEnable
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_IsFreeCursorAdsorbEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.SetFreeCursorAdsorbEnable
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_SetFreeCursorAdsorbEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetFreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ResetFreeCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToFastTravelPoint
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToFastTravelPoint_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToPlayer
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToPlayer_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FindQuestWidgetByID
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FindQuestWidgetByID_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     Icons;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetQuestAreaIcons
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_GetQuestAreaIcons_Params
{
	TArray<class UUMG_LayerIconBase_C*>                Icons;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToMaplink
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToMaplink_Params
{
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToQuest
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToQuest_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnChangedMapFinishedEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnChangedMapFinishedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Terminate
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindFreeCursor
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindFreeCursor_Params
{
	class UBP_MNU_FREE_CURSOR_Base_C*                  FreeCursor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnGotoQuestEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnGotoQuestEvent_Params
{
	struct FScriptDelegate                             OnQuest;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Initialize
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnFastTravelEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnFastTravelEvent_Params
{
	struct FScriptDelegate                             OnFastTravel;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnMapLinkEvent
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnMapLinkEvent_Params
{
	struct FScriptDelegate                             OnMapLink;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetFocusIcons
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_GetFocusIcons_Params
{
	TArray<class UUMG_LocamapFocusIcon_C*>             FocusIcons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetZoom
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ResetZoom_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.RunZoom
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_RunZoom_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CheckZoom
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_CheckZoom_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Axis;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecPad
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ExecPad_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Refresh
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Refresh_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuest_QuestIcon
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnGotoQuest_QuestIcon_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravel_FastTravelIcon
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnFastTravel_FastTravelIcon_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLink_MapLinkIcon
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnMapLink_MapLinkIcon_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnRefreshed_FucusIconLayer
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnRefreshed_FucusIconLayer_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CustomEvent_Refresh
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_CustomEvent_Refresh_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnResetZoom
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnResetZoom_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMap
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedMap_Params
{
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedDefaultScale
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedDefaultScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Construct
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMapFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedMapFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuestEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnGotoQuestEvent__DelegateSignature_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravelEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnFastTravelEvent__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLinkEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnMapLinkEvent__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenFinishedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
