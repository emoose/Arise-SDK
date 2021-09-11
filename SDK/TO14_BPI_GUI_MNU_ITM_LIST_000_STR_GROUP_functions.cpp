
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

// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::CursorVisible(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CursorVisible");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_CursorVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.SetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuItemData           ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ForceNewIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NumInvisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::SetItemData(int Index, const struct FMenuItemData& ItemData, bool ForceNewIcon, bool NumInvisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.SetItemData");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_SetItemData_Params params;
	params.Index = Index;
	params.ItemData = ItemData;
	params.ForceNewIcon = ForceNewIcon;
	params.NumInvisible = NumInvisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CursorSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::CursorSelect(int Index, bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CursorSelect");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_CursorSelect_Params params;
	params.Index = Index;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.MakeData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     InitData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::MakeData(struct FListWidgetInitData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.MakeData");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_MakeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.DataConstruct");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::CB_MouseMove(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_CB_MouseMove_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::CB_MouseEnter(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_CB_MouseEnter_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnDeselected");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.ItemDataChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     WidgetInitData                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::ItemDataChange(const struct FListWidgetInitData& WidgetInitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.ItemDataChange");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_ItemDataChange_Params params;
	params.WidgetInitData = WidgetInitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnMouseClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::OnMouseClick__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnMouseClick__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_OnMouseClick__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnMouseOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C::OnMouseOver__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C.OnMouseOver__DelegateSignature");

	UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C_OnMouseOver__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
