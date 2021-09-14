
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ChangeRequestMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewBase*> StatusViewArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> ViewModelArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EPCOrder                       StartOrder                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::ChangeRequestMember(EPCOrder StartOrder, TArray<class UBtlStatusViewBase*>* StatusViewArray, TArray<class UBtlStatusViewModelBase*>* ViewModelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ChangeRequestMember");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_ChangeRequestMember_Params params;
	params.StartOrder = StartOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusViewArray != nullptr)
		*StatusViewArray = params.StatusViewArray;
	if (ViewModelArray != nullptr)
		*ViewModelArray = params.ViewModelArray;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterBackMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> InMember                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> BackMember                     (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::FilterBackMember(TArray<class UBtlStatusViewModelBase*>* InMember, TArray<class UBtlStatusViewModelBase*>* BackMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterBackMember");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_FilterBackMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMember != nullptr)
		*InMember = params.InMember;
	if (BackMember != nullptr)
		*BackMember = params.BackMember;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterFrontMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> InMember                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> FrontMember                    (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::FilterFrontMember(TArray<class UBtlStatusViewModelBase*>* InMember, TArray<class UBtlStatusViewModelBase*>* FrontMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.FilterFrontMember");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_FilterFrontMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMember != nullptr)
		*InMember = params.InMember;
	if (FrontMember != nullptr)
		*FrontMember = params.FrontMember;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.SetMemberViewModel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewBase*> StatusViewArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> ViewModelArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::SetMemberViewModel(TArray<class UBtlStatusViewBase*>* StatusViewArray, TArray<class UBtlStatusViewModelBase*>* ViewModelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.SetMemberViewModel");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_SetMemberViewModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusViewArray != nullptr)
		*StatusViewArray = params.StatusViewArray;
	if (ViewModelArray != nullptr)
		*ViewModelArray = params.ViewModelArray;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnMakeMemberWidget
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::OnMakeMemberWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnMakeMemberWidget");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnMakeMemberWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnSwapButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSwap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::OnSwapButton(bool bIsSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnSwapButton");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnSwapButton_Params params;
	params.bIsSwap = bIsSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.Construct");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnPreOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::OnPreOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnPreOpen");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnPreOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnOpen");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnChangeMember
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::OnChangeMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.OnChangeMember");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_OnChangeMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.BindEvent");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT.TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT");

	UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
