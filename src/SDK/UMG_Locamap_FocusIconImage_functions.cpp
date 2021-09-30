
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

// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.IsCanDecide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCanDecide                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::IsCanDecide(bool* bCanDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.IsCanDecide");

	UUMG_Locamap_FocusIconImage_C_IsCanDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanDecide != nullptr)
		*bCanDecide = params.bCanDecide;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetCanDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanDecide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::SetCanDecide(bool bCanDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetCanDecide");

	UUMG_Locamap_FocusIconImage_C_SetCanDecide_Params params;
	params.bCanDecide = bCanDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecide                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_Locamap_FocusIconImage_C::BindOnDecideEvent(const struct FScriptDelegate& OnDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDecideEvent");

	UUMG_Locamap_FocusIconImage_C_BindOnDecideEvent_Params params;
	params.OnDecide = OnDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDeselectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDeselect                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_Locamap_FocusIconImage_C::BindOnDeselectEvent(const struct FScriptDelegate& OnDeselect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnDeselectEvent");

	UUMG_Locamap_FocusIconImage_C_BindOnDeselectEvent_Params params;
	params.OnDeselect = OnDeselect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnSelectEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnSelect                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_Locamap_FocusIconImage_C::BindOnSelectEvent(const struct FScriptDelegate& OnSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BindOnSelectEvent");

	UUMG_Locamap_FocusIconImage_C_BindOnSelectEvent_Params params;
	params.OnSelect = OnSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Decide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::Decide(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Decide");

	UUMG_Locamap_FocusIconImage_C_Decide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Deselect");

	UUMG_Locamap_FocusIconImage_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Select");

	UUMG_Locamap_FocusIconImage_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetClickable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bClickable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::SetClickable(bool bClickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetClickable");

	UUMG_Locamap_FocusIconImage_C_SetClickable_Params params;
	params.bClickable = bClickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.GetOwnerUserWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             OwnerUserWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::GetOwnerUserWidget(class UUserWidget** OwnerUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.GetOwnerUserWidget");

	UUMG_Locamap_FocusIconImage_C_GetOwnerUserWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerUserWidget != nullptr)
		*OwnerUserWidget = params.OwnerUserWidget;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetOwnerUserWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             OwnerUserWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::SetOwnerUserWidget(class UUserWidget* OwnerUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetOwnerUserWidget");

	UUMG_Locamap_FocusIconImage_C_SetOwnerUserWidget_Params params;
	params.OwnerUserWidget = OwnerUserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconImageData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapIconType                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::SetIconImageData(EMapIconType RowName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconImageData");

	UUMG_Locamap_FocusIconImage_C_SetIconImageData_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconIndex
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::SetIconIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.SetIconIndex");

	UUMG_Locamap_FocusIconImage_C_SetIconIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnHovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::OnHovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnHovered_FreeCursor");

	UUMG_Locamap_FocusIconImage_C_OnHovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnUnhovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::OnUnhovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnUnhovered_FreeCursor");

	UUMG_Locamap_FocusIconImage_C_OnUnhovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecide_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::OnDecide_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecide_FreeCursor");

	UUMG_Locamap_FocusIconImage_C_OnDecide_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimSelect
// (BlueprintCallable, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::OnAnimSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimSelect");

	UUMG_Locamap_FocusIconImage_C_OnAnimSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimDeselect
// (BlueprintCallable, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::OnAnimDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnAnimDeselect");

	UUMG_Locamap_FocusIconImage_C_OnAnimDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.Construct");

	UUMG_Locamap_FocusIconImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.ExecuteUbergraph_UMG_Locamap_FocusIconImage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::ExecuteUbergraph_UMG_Locamap_FocusIconImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.ExecuteUbergraph_UMG_Locamap_FocusIconImage");

	UUMG_Locamap_FocusIconImage_C_ExecuteUbergraph_UMG_Locamap_FocusIconImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecideEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_Locamap_FocusIconImage_C::OnDecideEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDecideEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_OnDecideEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDeselectEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::OnDeselectEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnDeselectEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_OnDeselectEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnSelectEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_Locamap_FocusIconImage_C::OnSelectEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Locamap_FocusIconImage.UMG_Locamap_FocusIconImage_C.OnSelectEvent__DelegateSignature");

	UUMG_Locamap_FocusIconImage_C_OnSelectEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
