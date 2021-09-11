
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

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotVisualItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::SetSlotVisualItem(int Index, const struct FMenuVisualData& VisualData, int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotVisualItem");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_SetSlotVisualItem_Params params;
	params.Index = Index;
	params.VisualData = VisualData;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::SetCursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetCursorVisible");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_SetCursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetListMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::SetListMode(int Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetListMode");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_SetListMode_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.TargetActiveChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::TargetActiveChange(int Index, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.TargetActiveChange");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_TargetActiveChange_Params params;
	params.Index = Index;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SelectValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::PadWork(class AMenuPadProcess* PadProcess, bool* IsSelect, int* SelectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.PadWork");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
	if (SelectValue != nullptr)
		*SelectValue = params.SelectValue;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::CB_MouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_CB_MouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::SetSlotItem(int Index, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotItem");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_SetSlotItem_Params params;
	params.Index = Index;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET2_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.Initialize");

	UTO14_BPI_GUI_MNU_EQU_SET2_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
