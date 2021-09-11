
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

// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BindBackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnBack                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BindBackEvent(const struct FScriptDelegate& OnBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BindBackEvent");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BindBackEvent_Params params;
	params.OnBack = OnBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BACK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BACK(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BACK");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BACK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.IsClosing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::IsClosing(bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.IsClosing");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_IsClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BindEnterEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnEnter                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BindEnterEvent(const struct FScriptDelegate& OnEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BindEnterEvent");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BindEnterEvent_Params params;
	params.OnEnter = OnEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.Enter
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::Enter(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.Enter");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_Enter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.CheckPadInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::CheckPadInput(class AMenuPadProcess* PadProcess, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.CheckPadInput");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_CheckPadInput_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::Exec(class AMenuPadProcess* PadProcess, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_Exec_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_18_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_18_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_18_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_18_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnBackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnBackEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnBackEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnBackEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnEnterEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C::OnEnterEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE.TO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C.OnEnterEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_BTN_CHANGE_MODE_C_OnEnterEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
