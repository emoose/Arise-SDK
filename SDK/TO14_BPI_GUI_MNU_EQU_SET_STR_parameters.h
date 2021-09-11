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

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.CheckSelectColor
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_CheckSelectColor_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetVisualItem
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetVisualItem_Params
{
	struct FMenuVisualData                             VisualData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorVisible
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCursorVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetNameText
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetNameText_Params
{
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     DictionaryID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryVisible
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCategoryVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetupVisualJumpText
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetupVisualJumpText_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetMouseActivate
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetMouseActivate_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetTextOnly
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetTextOnly_Params
{
	struct FDictionaryText                             TextData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorAnimation
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCursorAnimation_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.AnimeUpdate
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_AnimeUpdate_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetActivate
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetActivate_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetItemID
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetItemID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryText
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCategoryText_Params
{
	struct FString                                     GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     DictionaryID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnWidgetCreated
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnWidgetCreated_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.Tick
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR
struct UTO14_BPI_GUI_MNU_EQU_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
