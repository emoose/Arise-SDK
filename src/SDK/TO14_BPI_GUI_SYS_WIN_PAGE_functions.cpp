
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

// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.IsMouseClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EPageClicked>      Clicked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::IsMouseClicked(TEnumAsByte<EPageClicked>* Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.IsMouseClicked");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_IsMouseClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clicked != nullptr)
		*Clicked = params.Clicked;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.SetPageNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PAGE                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::SetPageNum(int PAGE, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.SetPageNum");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_SetPageNum_Params params;
	params.PAGE = PAGE;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.MouseActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::MouseActivate(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.MouseActivate");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_MouseActivate_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.SetCA
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::SetCA()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.SetCA");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_SetCA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PAGE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_PAGE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PAGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_PAGE.TO14_BPI_GUI_SYS_WIN_PAGE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PAGE");

	UTO14_BPI_GUI_SYS_WIN_PAGE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_PAGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
