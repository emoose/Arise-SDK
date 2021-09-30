
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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.BindInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C* Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::BindInfo(class UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C** Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.BindInfo");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_BindInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.SetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::SetItemData(int Index, int ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.SetItemData");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_SetItemData_Params params;
	params.Index = Index;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.MakeData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     InitDta                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::MakeData(struct FListWidgetInitData* InitDta)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.MakeData");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_MakeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitDta != nullptr)
		*InitDta = params.InitDta;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.DataConstruct
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::DataConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.DataConstruct");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::CB_MouseMove(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CB_MouseMove_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::CB_MouseEnter(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CB_MouseEnter_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CursorSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::CursorSelect(int Index, bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.CursorSelect");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_CursorSelect_Params params;
	params.Index = Index;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ItemDataChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     WidgetInitData                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::ItemDataChange(const struct FListWidgetInitData& WidgetInitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ItemDataChange");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_ItemDataChange_Params params;
	params.WidgetInitData = WidgetInitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::OnMouseClick__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseClick__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnMouseClick__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C::OnMouseOver__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C.OnMouseOver__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_GROUP_C_OnMouseOver__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
