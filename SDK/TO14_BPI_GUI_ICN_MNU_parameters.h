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

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.RefreshUpdatedIcon
struct UTO14_BPI_GUI_ICN_MNU_C_RefreshUpdatedIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ClearUpdatedIcon
struct UTO14_BPI_GUI_ICN_MNU_C_ClearUpdatedIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetNameForMenuTitle
struct UTO14_BPI_GUI_ICN_MNU_C_SetNameForMenuTitle_Params
{
	struct FString                                     InMenuID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.PlayTextVisibleAnimation
struct UTO14_BPI_GUI_ICN_MNU_C_PlayTextVisibleAnimation_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OpenFont
struct UTO14_BPI_GUI_ICN_MNU_C_OpenFont_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.CheckDisabled
struct UTO14_BPI_GUI_ICN_MNU_C_CheckDisabled_Params
{
	struct FMenuData                                   MenuData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsDisabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ChangeFontDisableColor
struct UTO14_BPI_GUI_ICN_MNU_C_ChangeFontDisableColor_Params
{
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForTopMenu
struct UTO14_BPI_GUI_ICN_MNU_C_SetDataForTopMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.NoSelect
struct UTO14_BPI_GUI_ICN_MNU_C_NoSelect_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForMenuTitle
struct UTO14_BPI_GUI_ICN_MNU_C_SetDataForMenuTitle_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetData
struct UTO14_BPI_GUI_ICN_MNU_C_SetData_Params
{
	int                                                CategoryNo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDictionaryText                             DicText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnDeselected
struct UTO14_BPI_GUI_ICN_MNU_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetID
struct UTO14_BPI_GUI_ICN_MNU_C_SetID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnSelected
struct UTO14_BPI_GUI_ICN_MNU_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SelectAnimation
struct UTO14_BPI_GUI_ICN_MNU_C_SelectAnimation_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconDataDicText
struct UTO14_BPI_GUI_ICN_MNU_C_SetIconDataDicText_Params
{
	int                                                CategoryNo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Select
struct UTO14_BPI_GUI_ICN_MNU_C_Select_Params
{
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TextView;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconData
struct UTO14_BPI_GUI_ICN_MNU_C_SetIconData_Params
{
	int                                                CategoryNo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_ICN_MNU_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Construct
struct UTO14_BPI_GUI_ICN_MNU_C_Construct_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_ICN_MNU_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.AnimationReset
struct UTO14_BPI_GUI_ICN_MNU_C_AnimationReset_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU
struct UTO14_BPI_GUI_ICN_MNU_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
