
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

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ChangeButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::ChangeButtonText(int SlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ChangeButtonText");

	UTO14_BPI_GUI_MNU_MAS_SET_C_ChangeButtonText_Params params;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::Select(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Select");

	UTO14_BPI_GUI_MNU_MAS_SET_C_Select_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SetTitleText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetTitleText");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SetTitleText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.MouseMoveRequestCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMove                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::MouseMoveRequestCheck(bool* IsMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.MouseMoveRequestCheck");

	UTO14_BPI_GUI_MNU_MAS_SET_C_MouseMoveRequestCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMove != nullptr)
		*IsMove = params.IsMove;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetArtsLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::GetArtsLabel(int Index, struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_SET_C_GetArtsLabel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetArtsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SetArtsLabel(int SlotIndex, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SetArtsLabel_Params params;
	params.SlotIndex = SlotIndex;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.IsSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Select                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::IsSelect(bool* Select, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.IsSelect");

	UTO14_BPI_GUI_MNU_MAS_SET_C_IsSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Select != nullptr)
		*Select = params.Select;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SelectChange(int OldIndex, int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectChange");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SelectChange_Params params;
	params.OldIndex = OldIndex;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectClear
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SelectClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectClear");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SelectClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MouseCheckOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::PadWork(class AMenuPadProcess* PadProcess, bool MouseCheckOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.PadWork");

	UTO14_BPI_GUI_MNU_MAS_SET_C_PadWork_Params params;
	params.PadProcess = PadProcess;
	params.MouseCheckOnly = MouseCheckOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetCursorIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::GetCursorIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetCursorIndex");

	UTO14_BPI_GUI_MNU_MAS_SET_C_GetCursorIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::CursorDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorDown");

	UTO14_BPI_GUI_MNU_MAS_SET_C_CursorDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::CursorUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorUp");

	UTO14_BPI_GUI_MNU_MAS_SET_C_CursorUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetMouseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SetMouseEnable(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetMouseEnable");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SetMouseEnable_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.EnterRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::EnterRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.EnterRequest");

	UTO14_BPI_GUI_MNU_MAS_SET_C_EnterRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::SelectRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectRequest");

	UTO14_BPI_GUI_MNU_MAS_SET_C_SelectRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_SET_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_SET_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_SET_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.InitEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_C::InitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.InitEvent");

	UTO14_BPI_GUI_MNU_MAS_SET_C_InitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET");

	UTO14_BPI_GUI_MNU_MAS_SET_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
