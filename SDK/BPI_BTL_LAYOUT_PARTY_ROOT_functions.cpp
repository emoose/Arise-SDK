
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

// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.WidgetSetVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Visiable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::WidgetSetVisible(class UWidget* Widget, bool Visiable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.WidgetSetVisible");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_WidgetSetVisible_Params params;
	params.Widget = Widget;
	params.Visiable = Visiable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ConvBool2Visiblity
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPI_BTL_LAYOUT_PARTY_ROOT_C::ConvBool2Visiblity(bool Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ConvBool2Visiblity");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_ConvBool2Visiblity_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.CreateSubMemberView
// (Private, BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::CreateSubMemberView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.CreateSubMemberView");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_CreateSubMemberView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPost
// (Private, BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnBattleMenuPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPost");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPrev
// (Private, BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnBattleMenuPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuPrev");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuPrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuNext
// (Private, BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnBattleMenuNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnBattleMenuNext");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnBattleMenuNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitilizePartyViewArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> ViewModelArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::InitilizePartyViewArray(TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> TargetArray, TArray<class UBtlStatusViewModelBase*>* ViewModelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitilizePartyViewArray");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_InitilizePartyViewArray_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewModelArray != nullptr)
		*ViewModelArray = params.ViewModelArray;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterBackMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> InMember                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> Result                         (Parm, OutParm, ZeroConstructor)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::FilterBackMember(TArray<class UBtlStatusViewModelBase*>* InMember, TArray<class UBtlStatusViewModelBase*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterBackMember");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_FilterBackMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMember != nullptr)
		*InMember = params.InMember;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ChangeRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> ViewModelArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> PartyViewArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::ChangeRequest(TArray<class UBtlStatusViewModelBase*>* ViewModelArray, TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*>* PartyViewArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ChangeRequest");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_ChangeRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewModelArray != nullptr)
		*ViewModelArray = params.ViewModelArray;
	if (PartyViewArray != nullptr)
		*PartyViewArray = params.PartyViewArray;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitializePartyView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> ViewModelArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewBase*> MemberTargetWidgetArray        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::InitializePartyView(TArray<class UBtlStatusViewModelBase*>* ViewModelArray, TArray<class UBtlStatusViewBase*>* MemberTargetWidgetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.InitializePartyView");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_InitializePartyView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewModelArray != nullptr)
		*ViewModelArray = params.ViewModelArray;
	if (MemberTargetWidgetArray != nullptr)
		*MemberTargetWidgetArray = params.MemberTargetWidgetArray;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterFrontMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBtlStatusViewModelBase*> InMember                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UBtlStatusViewModelBase*> Result                         (Parm, OutParm, ZeroConstructor)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::FilterFrontMember(TArray<class UBtlStatusViewModelBase*>* InMember, TArray<class UBtlStatusViewModelBase*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.FilterFrontMember");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_FilterFrontMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMember != nullptr)
		*InMember = params.InMember;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnPreOpen
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnPreOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnPreOpen");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnPreOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.EventOnClose
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::EventOnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.EventOnClose");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_EventOnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.UnBindEvent");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BindEvent");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangeMember
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnChangeMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangeMember");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangeMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_BndEvt__BattleMenuChangePlayerNext_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_BndEvt__BattleMenuChangePlayerPrev_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePlayer
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnChangePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePlayer");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnMenuChangePlayerPrePhase
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnMenuChangePlayerPrePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnMenuChangePlayerPrePhase");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnMenuChangePlayerPrePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.OnChangePreset");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_PARTY_ROOT_C::ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_PARTY_ROOT.BPI_BTL_LAYOUT_PARTY_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT");

	UBPI_BTL_LAYOUT_PARTY_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_PARTY_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
