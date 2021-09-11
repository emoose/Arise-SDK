
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

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.InitCategoryText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_C::InitCategoryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.InitCategoryText");

	UTO14_BPI_GUI_MNU_EQU_SET_C_InitCategoryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSelectCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCancel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::IsSelectCancel(bool* IsCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSelectCancel");

	UTO14_BPI_GUI_MNU_EQU_SET_C_IsSelectCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCancel != nullptr)
		*IsCancel = params.IsCancel;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSlotSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::IsSlotSelect(bool* IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSlotSelect");

	UTO14_BPI_GUI_MNU_EQU_SET_C_IsSlotSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::SetEquipItem(int Index, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetEquipItem");

	UTO14_BPI_GUI_MNU_EQU_SET_C_SetEquipItem_Params params;
	params.Index = Index;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetMouseActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::SetMouseActivate(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetMouseActivate");

	UTO14_BPI_GUI_MNU_EQU_SET_C_SetMouseActivate_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelectReset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBattlemode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::Init(int CharacterID, bool SelectReset, bool IsBattlemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Init");

	UTO14_BPI_GUI_MNU_EQU_SET_C_Init_Params params;
	params.CharacterID = CharacterID;
	params.SelectReset = SelectReset;
	params.IsBattlemode = IsBattlemode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.PadWork");

	UTO14_BPI_GUI_MNU_EQU_SET_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_EQU_SET_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::CB_MouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_EQU_SET_C_CB_MouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_EQU_SET_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Construct");

	UTO14_BPI_GUI_MNU_EQU_SET_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET");

	UTO14_BPI_GUI_MNU_EQU_SET_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
