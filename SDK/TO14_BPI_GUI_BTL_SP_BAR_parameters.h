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

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSPInternal
struct UTO14_BPI_GUI_BTL_SP_BAR_C_SetSPInternal_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSP
struct UTO14_BPI_GUI_BTL_SP_BAR_C_SetSP_Params
{
	float                                              NewSpInternal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.Initialize
struct UTO14_BPI_GUI_BTL_SP_BAR_C_Initialize_Params
{
	float                                              NewSpInternal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewSpInternalMax;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSpMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStartAnim;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PlayNotUseAnim
struct UTO14_BPI_GUI_BTL_SP_BAR_C_PlayNotUseAnim_Params
{
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PreConstruct
struct UTO14_BPI_GUI_BTL_SP_BAR_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.StartAnimPoint
struct UTO14_BPI_GUI_BTL_SP_BAR_C_StartAnimPoint_Params
{
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_SP_BAR_C_BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR
struct UTO14_BPI_GUI_BTL_SP_BAR_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
