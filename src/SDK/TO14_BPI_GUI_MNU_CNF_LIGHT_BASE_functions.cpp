
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

// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.UpdateChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::UpdateChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.UpdateChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_UpdateChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutText                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::GetText(const struct FString& inString, struct FModifiedText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_GetText_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.UpdateGameSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::UpdateGameSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.UpdateGameSaveData");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_UpdateGameSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CursorAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCursorLAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::CursorAnim(bool InCursorLAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CursorAnim");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_CursorAnim_Params params;
	params.InCursorLAnim = InCursorLAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CursorAnimeCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::CursorAnimeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CursorAnimeCheck");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_CursorAnimeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnDeselected");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnSelected");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.PadControl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::PadControl(class AMenuPadProcess* InPadProsess, bool* OutIsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsEnd != nullptr)
		*OutIsEnd = params.OutIsEnd;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::Initialize(const struct FConfigData& InConfigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_Initialize_Params params;
	params.InConfigData = InConfigData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CloseAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::CloseAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.CloseAnima");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_CloseAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OpenAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::OpenAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OpenAnima");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_OpenAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.MouseCaptureEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::MouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.MouseCaptureEnd");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_MouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Tick");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_LIGHT_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_LIGHT_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_LIGHT_BASE");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnChangeHelp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsChange                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C::OnChangeHelp__DelegateSignature(bool InIsChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_LIGHT_BASE.TO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C.OnChangeHelp__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_LIGHT_BASE_C_OnChangeHelp__DelegateSignature_Params params;
	params.InIsChange = InIsChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
