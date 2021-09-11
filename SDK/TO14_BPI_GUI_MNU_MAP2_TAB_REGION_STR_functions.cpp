
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

// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::Refresh(int UniqueId, const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_Refresh_Params params;
	params.UniqueId = UniqueId;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BindDeselectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDeselect                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::BindDeselectEvent(const struct FScriptDelegate& OnDeselect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BindDeselectEvent");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_BindDeselectEvent_Params params;
	params.OnDeselect = OnDeselect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BindSelectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnSelect                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::BindSelectEvent(const struct FScriptDelegate& OnSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BindSelectEvent");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_BindSelectEvent_Params params;
	params.OnSelect = OnSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Deselect");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Select");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.CustomEvent_Select
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::CustomEvent_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.CustomEvent_Select");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_CustomEvent_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.CustomEvent_Deselect
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::CustomEvent_Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.CustomEvent_Deselect");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_CustomEvent_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.Construct");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.OnDeselectEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::OnDeselectEvent__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.OnDeselectEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_OnDeselectEvent__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.OnSelectEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C::OnSelectEvent__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C.OnSelectEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C_OnSelectEvent__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
