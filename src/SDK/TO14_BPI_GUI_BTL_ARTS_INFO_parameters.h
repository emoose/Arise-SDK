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

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.CheckPriority
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_CheckPriority_Params
{
	EBattleHudNotifyTextPriority                       InPriority;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enbale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeModifyText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_InitializeModifyText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeArts
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_InitializeArts_Params
{
	struct FBtlArts_XmlDatatableLabel                  ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInspiration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.GetAnimation
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_GetAnimation_Params
{
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            PartyBase;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BindEvent
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.PreConstruct
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnArtsText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnArtsText_Params
{
	struct FBtlArts_XmlDatatableLabel                  Arts;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnModifyNotify
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnModifyNotify_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnInspirationArts_
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnInspirationArts__Params
{
	struct FBtlArts_XmlDatatableLabel                  Arts;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.Construct
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnDictionaryText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnDictionaryText_Params
{
	struct FDictionaryText                             Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMystickArtsText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnMystickArtsText_Params
{
	struct FBtlArts_XmlDatatableLabel                  Arts;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnBeginArtsMystic
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnBeginArtsMystic_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMysticDictionaryText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnMysticDictionaryText_Params
{
	struct FDictionaryText                             Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBtlUnitGroup                                      Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudNotifyTextPriority                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnEndArtsText
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnEndArtsText_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO
struct UTO14_BPI_GUI_BTL_ARTS_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
