
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

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetMouseCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::SetMouseCursorPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetMouseCursorPosition");

	UTO14_BPI_GUI_SYS_WIN_00_C_SetMouseCursorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxAddChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 InWidgetObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::ItemBoxAddChildren(class UWidget* InWidgetObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxAddChildren");

	UTO14_BPI_GUI_SYS_WIN_00_C_ItemBoxAddChildren_Params params;
	params.InWidgetObject = InWidgetObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxClearChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::ItemBoxClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxClearChildren");

	UTO14_BPI_GUI_SYS_WIN_00_C_ItemBoxClearChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Cancel");

	UTO14_BPI_GUI_SYS_WIN_00_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AddCustomParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SysWin_PartsBase_C*  Parts                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::AddCustomParts(class UBP_SysWin_PartsBase_C* Parts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AddCustomParts");

	UTO14_BPI_GUI_SYS_WIN_00_C_AddCustomParts_Params params;
	params.Parts = Parts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::GetSelectedIndex(int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.GetSelectedIndex");

	UTO14_BPI_GUI_SYS_WIN_00_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PagePrev
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::PagePrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PagePrev");

	UTO14_BPI_GUI_SYS_WIN_00_C_PagePrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PageNext
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::PageNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PageNext");

	UTO14_BPI_GUI_SYS_WIN_00_C_PageNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Next");

	UTO14_BPI_GUI_SYS_WIN_00_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Prev");

	UTO14_BPI_GUI_SYS_WIN_00_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::Decide(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Decide");

	UTO14_BPI_GUI_SYS_WIN_00_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.CalcPageNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Total                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PerPage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PageNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::CalcPageNum(int Total, int PerPage, int* PageNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.CalcPageNum");

	UTO14_BPI_GUI_SYS_WIN_00_C_CalcPageNum_Params params;
	params.Total = Total;
	params.PerPage = PerPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PageNum != nullptr)
		*PageNum = params.PageNum;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewUniqueId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::Select(int NewUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Select");

	UTO14_BPI_GUI_SYS_WIN_00_C_Select_Params params;
	params.NewUniqueId = NewUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::SetPage(int CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetPage");

	UTO14_BPI_GUI_SYS_WIN_00_C_SetPage_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideText");

	UTO14_BPI_GUI_SYS_WIN_00_C_HideText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::HideTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideTitle");

	UTO14_BPI_GUI_SYS_WIN_00_C_HideTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.RemoveSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::RemoveSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.RemoveSelection");

	UTO14_BPI_GUI_SYS_WIN_00_C_RemoveSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectionList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num_Per_Page                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::SetSelection(int DefaultIndex, int Num_Per_Page, TArray<struct FModifiedText>* SelectionList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetSelection");

	UTO14_BPI_GUI_SYS_WIN_00_C_SetSelection_Params params;
	params.DefaultIndex = DefaultIndex;
	params.Num_Per_Page = Num_Per_Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectionList != nullptr)
		*SelectionList = params.SelectionList;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_SYS_WIN_00_C::SetText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetText");

	UTO14_BPI_GUI_SYS_WIN_00_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_00_C::SetTitle(const struct FModifiedText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetTitle");

	UTO14_BPI_GUI_SYS_WIN_00_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_00_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_WIN_00_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00");

	UTO14_BPI_GUI_SYS_WIN_00_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnCancel__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_00_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnDecide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_00_C::OnDecide__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnDecide__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_00_C_OnDecide__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_00_C::AnimationFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AnimationFinish__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_00_C_AnimationFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
