
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CheckVisibleChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::CheckVisibleChange(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CheckVisibleChange");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_CheckVisibleChange_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BindToggleCheckEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnToggleCheck                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BindToggleCheckEvent(const struct FScriptDelegate& OnToggleCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BindToggleCheckEvent");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BindToggleCheckEvent_Params params;
	params.OnToggleCheck = OnToggleCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::SetActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SetActive");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_SetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLeft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::SortStart(bool bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortStart");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_SortStart_Params params;
	params.bLeft = bLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsLineData    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::Refresh(const struct FMenuTacticsLineData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Refresh");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_Refresh_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::SortMode(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortMode");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_SortMode_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ActDetailPadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ActDetailPadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ActDetailPadWork");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ActDetailPadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ChangeActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeActive");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeAllVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ChangeAllVisibility(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeAllVisibility");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeAllVisibility_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.PadWork");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsLineData    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::Update(const struct FMenuTacticsLineData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Update");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_Update_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.InitializeNewData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::InitializeNewData(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.InitializeNewData");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_InitializeNewData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeDetailVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ChangeDetailVisibility(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeDetailVisibility");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeDetailVisibility_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::CB_MouseOver(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseOver");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_CB_MouseOver_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuTacticsLineData    TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::Initialize(int Index, const struct FMenuTacticsLineData& TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_Initialize_Params params;
	params.Index = Index;
	params.TacticsData = TacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimSelect
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimSelect");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChange
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChange");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnVisible
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnVisible");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimDefault
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimDefault");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOff
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOff");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenL
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeOpenL()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenL");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenLFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeOpenLFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenLFinished");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenLFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseL
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeCloseL()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseL");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseLFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeCloseLFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseLFinished");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseLFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseR
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeCloseR()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseR");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseRFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeCloseRFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseRFinished");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseRFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenR
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeOpenR()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenR");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenRFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimChangeOpenRFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenRFinished");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenRFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ToggleCheckEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::ToggleCheckEvent__DelegateSignature(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ToggleCheckEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_ToggleCheckEvent__DelegateSignature_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.IndexMove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MoveValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTrigger                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::IndexMove__DelegateSignature(int MoveValue, int ListIndex, int ChildIndex, bool IsTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.IndexMove__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_IndexMove__DelegateSignature_Params params;
	params.MoveValue = MoveValue;
	params.ListIndex = ListIndex;
	params.ChildIndex = ChildIndex;
	params.IsTrigger = IsTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::MouseEnter__DelegateSignature(int ListIndex, int ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseEnter__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_MouseEnter__DelegateSignature_Params params;
	params.ListIndex = ListIndex;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_C::MouseOver__DelegateSignature(int ListIndex, int ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseOver__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_C_MouseOver__DelegateSignature_Params params;
	params.ListIndex = ListIndex;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
