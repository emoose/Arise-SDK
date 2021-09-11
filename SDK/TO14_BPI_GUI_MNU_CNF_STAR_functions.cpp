
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

// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.SetStarValid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsValid                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::SetStarValid(bool InIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.SetStarValid");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_SetStarValid_Params params;
	params.InIsValid = InIsValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_STAR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_STAR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_STAR");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_STAR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.MouseHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::MouseHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.MouseHovered__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_MouseHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.MouseClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InStarIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_STAR_C::MouseClicked__DelegateSignature(int InStarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_STAR.TO14_BPI_GUI_MNU_CNF_STAR_C.MouseClicked__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_STAR_C_MouseClicked__DelegateSignature_Params params;
	params.InStarIndex = InStarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
