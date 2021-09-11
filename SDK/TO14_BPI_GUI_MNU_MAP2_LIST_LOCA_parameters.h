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

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.AddWidgetAndData
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_AddWidgetAndData_Params
{
	class UClickableWidgetBase*                        iWidget;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMapLocationData                            LocationData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               LocationHierarchy;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ClearWidgetAndData
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ClearWidgetAndData_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocationDatas
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetLocationDatas_Params
{
	TArray<struct FMapLocationData>                    LocationDatas;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.UpdateCacheQuestFromLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_UpdateCacheQuestFromLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             SubBeforeQuestActorIDs;                                   // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             SubQuestActorIDs;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             SubQuestDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Term
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Term_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetLocaCache
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetLocaCache_Params
{
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C*    LocaCache;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindLocaCache
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindLocaCache_Params
{
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C*    LocaCache;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsActive
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.FontOpenAnim
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_FontOpenAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStr
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetStr_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C*      str;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindSelectEvent
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindSelectEvent_Params
{
	struct FScriptDelegate                             OnHovered;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsOpen
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Select
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Select_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Activate
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Activate_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Decide
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.BindDecideEvent
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             OnDecide;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Close
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Open
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Open_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecPad
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ExecPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Exec
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Exec_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.IsInitialized
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_IsInitialized_Params
{
	bool                                               Initialized;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.GetStrs
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_GetStrs_Params
{
	TArray<class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_STR_C*> Strs;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnClickedStr
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnClickedStr_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnHoveredStr
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnHoveredStr_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnNpcPoint
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnNpcPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPlacementFoundNpcPointCondition            cond;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnUpdateCacheQuestFromLocation
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnUpdateCacheQuestFromLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnRefreshed
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnRefreshed_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Construct
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.Destruct
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.PreConstruct
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnSelectEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnSelectEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHierarchy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_LIST_LOCA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C.OnDecideEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C_OnDecideEvent__DelegateSignature_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHasHierarchy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
