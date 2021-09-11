
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

// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.PreviewButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDesignTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::PreviewButton(bool bIsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.PreviewButton");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_PreviewButton_Params params;
	params.bIsDesignTime = bIsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetPadProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::SetPadProcess(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetPadProcess");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_SetPadProcess_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SET_S_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SET_S_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.OpenAnimation");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::SetLabel(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetLabel");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_SetLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.IsMouseEnter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnter                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::IsMouseEnter(bool* IsEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.IsMouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_IsMouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnter != nullptr)
		*IsEnter = params.IsEnter;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetActive");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.CustomIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::CustomIconVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.CustomIconVisible");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_CustomIconVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetTacticsData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::SetTacticsData(struct FMenuTacticsData* TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.SetTacticsData");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_SetTacticsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TacticsData != nullptr)
		*TacticsData = params.TacticsData;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.PreConstruct");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.Construct");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_S
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_S_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_S.TO14_BPI_GUI_MNU_TAG2_SET_S_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_S");

	UTO14_BPI_GUI_MNU_TAG2_SET_S_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
