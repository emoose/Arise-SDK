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

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetListItemNum
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetListItemNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetSortTextVisibility
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetSortTextVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.MoveCursorWork
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_MoveCursorWork_Params
{
	int                                                MoveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScrollRequest;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetMouseMove
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetMouseMove_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.RestructList2
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_RestructList2_Params
{
	TArray<struct FMenuItemData>                       ItemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               CookItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _Index;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.RegistCallback
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_RegistCallback_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetCookItemIDList
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetCookItemIDList_Params
{
	TArray<struct FMenuItemData>                       ItemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetCursorAnimation
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetCursorAnimation_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.OffSortChangeFlag
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_OffSortChangeFlag_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.GetSortChangeFlag
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_GetSortChangeFlag_Params
{
	bool                                               SortChage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.OnSelect
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_OnSelect_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetMouseResult
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetMouseResult_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetCursorIndex
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetCursorIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.GetSelectValue
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_GetSelectValue_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.RestructList
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_RestructList_Params
{
	TArray<struct FMenuItemData>                       ItemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               CookItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetMouseEnable
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetMouseEnable_Params
{
	bool                                               EnableFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetSortTypeText
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetSortTypeText_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.UpdateListItem
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_UpdateListItem_Params
{
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceNewIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuItemData                               NewItemData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.RemoveItemIndex
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_RemoveItemIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.GetCursorIndex
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_GetCursorIndex_Params
{
	int                                                ListIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.SetItemIDList
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_SetItemIDList_Params
{
	TArray<struct FMenuItemData>                       ItemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ForceNewIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.PadWork
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_PadWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.Construct
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.Tick
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_23_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.Initialize
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_LIST_000.TO14_BPI_GUI_MNU_ITM_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000
struct UTO14_BPI_GUI_MNU_ITM_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
