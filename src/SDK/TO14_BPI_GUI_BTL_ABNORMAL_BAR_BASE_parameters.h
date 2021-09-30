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

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.RefreshIcons
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_RefreshIcons_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetPlayingBuffArrowAnimationTime
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_GetPlayingBuffArrowAnimationTime_Params
{
	float                                              CurrentTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ClearIcons
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_ClearIcons_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.FindIcon
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_FindIcon_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*           IconWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.GetAbnormalIconList
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_GetAbnormalIconList_Params
{
	TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>   Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.BindEvent
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginAbnormal
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnBeginAbnormal_Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndAbnormal
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnEndAbnormal_Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Construct
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.Destruct
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeTimeAbnormal_
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnChangeTimeAbnormal__Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnBeginBuff
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnBeginBuff_Params
{
	EBattleHudAbnormalType                             BuffType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuffValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnEndBuff
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnEndBuff_Params
{
	EBattleHudAbnormalType                             BuffType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuffValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnChangeAttribute
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnChangeAttribute_Params
{
	EBattleHudAbnormalType                             PrevType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             NextType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.OnPostBeginBattle
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_OnPostBeginBattle_Params
{
};

// Function TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE
struct UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
