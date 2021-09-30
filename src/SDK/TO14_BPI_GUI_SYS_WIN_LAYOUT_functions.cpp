
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

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseImmidiate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::CloseImmidiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseImmidiate");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseImmidiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnableDecideSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetEnableDecideSE(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnableDecideSE");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetEnableDecideSE_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetArtsMulti
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           ArtsLabels                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetArtsMulti(TArray<struct FName>* ArtsLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetArtsMulti");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetArtsMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsLabels != nullptr)
		*ArtsLabels = params.ArtsLabels;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveItems
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::RemoveItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveItems");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_RemoveItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ForceDecide
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::ForceDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ForceDecide");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_ForceDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Abort
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Abort");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItemStructMulti
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSysWinItemData> ItemDataArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetItemStructMulti(TArray<struct FSysWinItemData>* ItemDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItemStructMulti");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetItemStructMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDataArray != nullptr)
		*ItemDataArray = params.ItemDataArray;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetRisePoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetRisePoint(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetRisePoint");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetRisePoint_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetGald
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetGald(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetGald");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetGald_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpened");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseRisePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::CloseRisePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseRisePoint");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseGald
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::CloseGald()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseGald");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseGald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenRisePoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OpenRisePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenRisePoint");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OpenRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenGald
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OpenGald()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenGald");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OpenGald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnClosed");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::Decide(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Decide");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Decide_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.GetLastResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::GetLastResult(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.GetLastResult");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_GetLastResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::IsClose(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.IsClose");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Close");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdatePad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::UpdatePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdatePad");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_UpdatePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadTerm");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadInit");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Open");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideTitle");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideText");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideRisePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideRisePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideRisePoint");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideRisePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideGald
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideGald()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideGald");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideGald_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::RemoveSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveSelection");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_RemoveSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideItem
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideItem");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideEnemy");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddRisePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddRP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::AddRisePoint(int AddRP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddRisePoint");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_AddRisePoint_Params params;
	params.AddRP = AddRP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddGald
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddGald                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::AddGald(int AddGald)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddGald");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_AddGald_Params params;
	params.AddGald = AddGald;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModifiedText>   SelectList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberPerPage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetSelection(int DefaultIndex, bool EnableCancel, int NumberPerPage, TArray<struct FModifiedText>* SelectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetSelection");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetSelection_Params params;
	params.DefaultIndex = DefaultIndex;
	params.EnableCancel = EnableCancel;
	params.NumberPerPage = NumberPerPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectList != nullptr)
		*SelectList = params.SelectList;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetText(const struct FModifiedText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetText");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetItem(const struct FString& ItemID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItem");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetItem_Params params;
	params.ItemID = ItemID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetEnemy(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnemy");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetEnemy_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetTitle(const struct FModifiedText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetTitle");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideAll");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Construct");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdateTick");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetupDelegate");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::CloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseFinished");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.EventCancel
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::EventCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.EventCancel");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_EventCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OnOpenStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenStartEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpenStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OnCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_LAYOUT_C::OnOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
