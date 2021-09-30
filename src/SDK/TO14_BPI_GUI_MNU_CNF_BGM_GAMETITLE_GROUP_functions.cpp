
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

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.ShowClickableArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::ShowClickableArea(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.ShowClickableArea");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_ShowClickableArea_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.DeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::DeselectedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.DeselectedAnim");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_DeselectedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.SelectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::SelectAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.SelectAnim");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_SelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.GetGameTitleSort
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutGameTitleSort               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::GetGameTitleSort(int* OutGameTitleSort)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.GetGameTitleSort");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_GetGameTitleSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameTitleSort != nullptr)
		*OutGameTitleSort = params.OutGameTitleSort;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigBgmData          InBgmData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::SetData(const struct FConfigBgmData& InBgmData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.SetData");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_SetData_Params params;
	params.InBgmData = InBgmData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
