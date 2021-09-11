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

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategoryEnum
struct UTO14_BPI_GUI_ICN_CATE_C_SetIconCategoryEnum_Params
{
	EMenuCategoryIconType                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.AnimationWork
struct UTO14_BPI_GUI_ICN_CATE_C_AnimationWork_Params
{
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetMouseEnabled
struct UTO14_BPI_GUI_ICN_CATE_C_SetMouseEnabled_Params
{
	bool                                               IsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnDeselected
struct UTO14_BPI_GUI_ICN_CATE_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnSelected
struct UTO14_BPI_GUI_ICN_CATE_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconActive
struct UTO14_BPI_GUI_ICN_CATE_C_SetIconActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategory
struct UTO14_BPI_GUI_ICN_CATE_C_SetIconCategory_Params
{
	int                                                CategoryNo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.Tick
struct UTO14_BPI_GUI_ICN_CATE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_ICN_CATE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_ICN_CATE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE
struct UTO14_BPI_GUI_ICN_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
