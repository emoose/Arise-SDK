
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Init");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.GetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::GetWidget(int Index, class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.GetWidget");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_GetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetUniqueID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::SetUniqueID(int Index, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetUniqueID");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetUniqueID_Params params;
	params.Index = Index;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetItemVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::SetItemVisible(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetItemVisible");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetItemVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetArtsLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::SetArtsLabel(int Index, const struct FName& Label, int CharacterID, bool BattleMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SetArtsLabel_Params params;
	params.Index = Index;
	params.Label = Label;
	params.CharacterID = CharacterID;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.DeselectLineDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::DeselectLineDelegate__DelegateSignature(int Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.DeselectLineDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_DeselectLineDelegate__DelegateSignature_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SelectLineDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Line                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C::SelectLineDelegate__DelegateSignature(int Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C.SelectLineDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C_SelectLineDelegate__DelegateSignature_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
