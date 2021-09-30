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

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.IsCanDecide
struct UUMG_Locamap_FocusIconImage_C_IsCanDecide_Params
{
	bool                                               bCanDecide;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetCanDecide
struct UUMG_Locamap_FocusIconImage_C_SetCanDecide_Params
{
	bool                                               bCanDecide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDecideEvent
struct UUMG_Locamap_FocusIconImage_C_BindOnDecideEvent_Params
{
	struct FScriptDelegate                             OnDecide;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDeselectEvent
struct UUMG_Locamap_FocusIconImage_C_BindOnDeselectEvent_Params
{
	struct FScriptDelegate                             OnDeselect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnSelectEvent
struct UUMG_Locamap_FocusIconImage_C_BindOnSelectEvent_Params
{
	struct FScriptDelegate                             OnSelect;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Decide
struct UUMG_Locamap_FocusIconImage_C_Decide_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Deselect
struct UUMG_Locamap_FocusIconImage_C_Deselect_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Select
struct UUMG_Locamap_FocusIconImage_C_Select_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetClickable
struct UUMG_Locamap_FocusIconImage_C_SetClickable_Params
{
	bool                                               bClickable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.GetOwnerUserWidget
struct UUMG_Locamap_FocusIconImage_C_GetOwnerUserWidget_Params
{
	class UUserWidget*                                 OwnerUserWidget;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetOwnerUserWidget
struct UUMG_Locamap_FocusIconImage_C_SetOwnerUserWidget_Params
{
	class UUserWidget*                                 OwnerUserWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconImageData
struct UUMG_Locamap_FocusIconImage_C_SetIconImageData_Params
{
	EMapIconType                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconIndex
struct UUMG_Locamap_FocusIconImage_C_SetIconIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnHovered_FreeCursor
struct UUMG_Locamap_FocusIconImage_C_OnHovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnUnhovered_FreeCursor
struct UUMG_Locamap_FocusIconImage_C_OnUnhovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecide_FreeCursor
struct UUMG_Locamap_FocusIconImage_C_OnDecide_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimSelect
struct UUMG_Locamap_FocusIconImage_C_OnAnimSelect_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimDeselect
struct UUMG_Locamap_FocusIconImage_C_OnAnimDeselect_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Construct
struct UUMG_Locamap_FocusIconImage_C_Construct_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.ExecuteUbergraph_UMG_Locamap_FocusIconImage
struct UUMG_Locamap_FocusIconImage_C_ExecuteUbergraph_UMG_Locamap_FocusIconImage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecideEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_OnDecideEvent__DelegateSignature_Params
{
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDeselectEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_OnDeselectEvent__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnSelectEvent__DelegateSignature
struct UUMG_Locamap_FocusIconImage_C_OnSelectEvent__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
