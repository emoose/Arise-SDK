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

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.WidgetSetVisible
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_WidgetSetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Visiable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ConvBool2Visiblity
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_ConvBool2Visiblity_Params
{
	bool                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.CreateSubMemberView
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_CreateSubMemberView_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPost
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuPost_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPrev
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuPrev_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuNext
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuNext_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitilizePartyViewArray
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_InitilizePartyViewArray_Params
{
	TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             ViewModelArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterBackMember
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_FilterBackMember_Params
{
	TArray<class UBtlStatusViewModelBase*>             InMember;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ChangeRequest
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_ChangeRequest_Params
{
	TArray<class UBtlStatusViewModelBase*>             ViewModelArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> PartyViewArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitializePartyView
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_InitializePartyView_Params
{
	TArray<class UBtlStatusViewModelBase*>             ViewModelArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewBase*>                  MemberTargetWidgetArray;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterFrontMember
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_FilterFrontMember_Params
{
	TArray<class UBtlStatusViewModelBase*>             InMember;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnPreOpen
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnPreOpen_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.EventOnClose
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_EventOnClose_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.UnBindEvent
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_UnBindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BindEvent
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_BindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangeMember
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangeMember_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePlayer
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangePlayer_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnMenuChangePlayerPrePhase
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnMenuChangePlayerPrePhase_Params
{
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePreset
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT
struct UBPI_BTL_LAYOUT_PARTY_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
