
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

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetDefaultActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::SetDefaultActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetDefaultActive");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_SetDefaultActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.GetTacticsData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        Data                           (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::GetTacticsData(struct FMenuTacticsData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.GetTacticsData");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_GetTacticsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::Update(const struct FMenuTacticsData& TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Update");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_Update_Params params;
	params.TacticsData = TacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetCursorActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::SetCursorActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetCursorActive");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_SetCursorActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::Initialize(const struct FMenuTacticsData& TacticsData, const struct FString& ButtonLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_Initialize_Params params;
	params.TacticsData = TacticsData;
	params.ButtonLabel = ButtonLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SET_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR");

	UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
