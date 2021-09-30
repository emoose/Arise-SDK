
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

// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategoryEnum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMenuCategoryIconType          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::SetIconCategoryEnum(EMenuCategoryIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategoryEnum");

	UTO14_BPI_GUI_ICN_CATE_C_SetIconCategoryEnum_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.AnimationWork
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_CATE_C::AnimationWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.AnimationWork");

	UTO14_BPI_GUI_ICN_CATE_C_AnimationWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetMouseEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::SetMouseEnabled(bool IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetMouseEnabled");

	UTO14_BPI_GUI_ICN_CATE_C_SetMouseEnabled_Params params;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_ICN_CATE_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnDeselected");

	UTO14_BPI_GUI_ICN_CATE_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_ICN_CATE_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.OnSelected");

	UTO14_BPI_GUI_ICN_CATE_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::SetIconActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconActive");

	UTO14_BPI_GUI_ICN_CATE_C_SetIconActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryNo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::SetIconCategory(int CategoryNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.SetIconCategory");

	UTO14_BPI_GUI_ICN_CATE_C_SetIconCategory_Params params;
	params.CategoryNo = CategoryNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.Tick");

	UTO14_BPI_GUI_ICN_CATE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_ICN_CATE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_ICN_CATE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_ICN_CATE_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_ICN_CATE_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_CATE_C::ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_CATE.TO14_BPI_GUI_ICN_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE");

	UTO14_BPI_GUI_ICN_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_CATE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
