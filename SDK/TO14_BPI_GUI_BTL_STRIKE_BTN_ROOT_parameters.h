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

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ChangeRequestMember
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_ChangeRequestMember_Params
{
	TArray<class UBtlStatusViewBase*>                  StatusViewArray;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             ViewModelArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EPCOrder                                           StartOrder;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterBackMember
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_FilterBackMember_Params
{
	TArray<class UBtlStatusViewModelBase*>             InMember;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             BackMember;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterFrontMember
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_FilterFrontMember_Params
{
	TArray<class UBtlStatusViewModelBase*>             InMember;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             FrontMember;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.SetMemberViewModel
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_SetMemberViewModel_Params
{
	TArray<class UBtlStatusViewBase*>                  StatusViewArray;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBtlStatusViewModelBase*>             ViewModelArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnMakeMemberWidget
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnMakeMemberWidget_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnSwapButton
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnSwapButton_Params
{
	bool                                               bIsSwap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.Construct
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnPreOpen
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnPreOpen_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnOpen
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnOpen_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnChangeMember
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnChangeMember_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.BindEvent
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT
struct UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
