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

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetOpenAnimStartTime
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetOpenAnimStartTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ShowAbnormalIcon
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_ShowAbnormalIcon_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowStartTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopAnimations
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_StopAnimations_Params
{
	TArray<class UWidgetAnimation*>                    WidgetAnimations;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopFadingAnim
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_StopFadingAnim_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.PlayArrowAnimation
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_PlayArrowAnimation_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetPlayginArrowAnimationTime
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetPlayginArrowAnimationTime_Params
{
	float                                              AnimationCurrentTime;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.Clear
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_Clear_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetTargetImage
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetTargetImage_Params
{
	class UImage*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.SetAbnormalType
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_SetAbnormalType_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowStartTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartAnim
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnStartAnim_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndAnim
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnEndAnim_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnChangeAbnormalTime
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnChangeAbnormalTime_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartBuffAnim
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnStartBuffAnim_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowStartTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndIcon__DelegateSignature
struct UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnEndIcon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
