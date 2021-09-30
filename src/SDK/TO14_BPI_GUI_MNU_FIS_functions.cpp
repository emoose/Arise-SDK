
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

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.InitEquipItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::InitEquipItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.InitEquipItemData");

	UTO14_BPI_GUI_MNU_FIS_C_InitEquipItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SaveEquipData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRod                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::SaveEquipData(bool IsRod, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SaveEquipData");

	UTO14_BPI_GUI_MNU_FIS_C_SaveEquipData_Params params;
	params.IsRod = IsRod;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.CloseList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::CloseList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.CloseList");

	UTO14_BPI_GUI_MNU_FIS_C_CloseList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OpenList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::OpenList(int Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OpenList");

	UTO14_BPI_GUI_MNU_FIS_C_OpenList_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OnClosed");

	UTO14_BPI_GUI_MNU_FIS_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Close");

	UTO14_BPI_GUI_MNU_FIS_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Exec
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::Exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Exec");

	UTO14_BPI_GUI_MNU_FIS_C_Exec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::PadTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadTerm");

	UTO14_BPI_GUI_MNU_FIS_C_PadTerm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::PadInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadInit");

	UTO14_BPI_GUI_MNU_FIS_C_PadInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingAreaData        AreaData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_C::Init(const struct FFishingAreaData& AreaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Init");

	UTO14_BPI_GUI_MNU_FIS_C_Init_Params params;
	params.AreaData = AreaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_FIS_C::IsClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.IsClose");

	UTO14_BPI_GUI_MNU_FIS_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.EventOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingAreaData        AreaData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_FIS_C::EventOpen(const struct FFishingAreaData& AreaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.EventOpen");

	UTO14_BPI_GUI_MNU_FIS_C_EventOpen_Params params;
	params.AreaData = AreaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.UpdateTick");

	UTO14_BPI_GUI_MNU_FIS_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SetupDelegate");

	UTO14_BPI_GUI_MNU_FIS_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS");

	UTO14_BPI_GUI_MNU_FIS_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectLure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            lureId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::ChangeSelectLure__DelegateSignature(int lureId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectLure__DelegateSignature");

	UTO14_BPI_GUI_MNU_FIS_C_ChangeSelectLure__DelegateSignature_Params params;
	params.lureId = lureId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectRod__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RodId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_C::ChangeSelectRod__DelegateSignature(int RodId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectRod__DelegateSignature");

	UTO14_BPI_GUI_MNU_FIS_C_ChangeSelectRod__DelegateSignature_Params params;
	params.RodId = RodId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
