
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR_NONE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
