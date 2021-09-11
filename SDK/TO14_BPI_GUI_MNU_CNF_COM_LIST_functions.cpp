
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

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.StopTextChangeAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::StopTextChangeAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.StopTextChangeAnime");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_StopTextChangeAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetModifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           InModifiedText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           InIsAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::SetModifiedText(const struct FModifiedText& InModifiedText, bool InIsAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetModifiedText");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_SetModifiedText_Params params;
	params.InModifiedText = InModifiedText;
	params.InIsAnim = InIsAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTextLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::SetText(const struct FName& InTextLabel, bool InIsAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetText");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_SetText_Params params;
	params.InTextLabel = InTextLabel;
	params.InIsAnim = InIsAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::MouseHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseHovered__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_MouseHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsCursorL                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_COM_LIST_C::MouseClicked__DelegateSignature(bool InIsCursorL)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseClicked__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_MouseClicked__DelegateSignature_Params params;
	params.InIsCursorL = InIsCursorL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
