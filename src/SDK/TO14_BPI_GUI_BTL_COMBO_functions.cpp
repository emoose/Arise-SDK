
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

// Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_COMBO_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_COMBO_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.OnOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_COMBO_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.OnOpen");

	UTO14_BPI_GUI_BTL_COMBO_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_COMBO_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.BindEvent");

	UTO14_BPI_GUI_BTL_COMBO_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.EventOnHitComb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TotalHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_COMBO_C::EventOnHitComb(int TotalHit, int TotalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.EventOnHitComb");

	UTO14_BPI_GUI_BTL_COMBO_C_EventOnHitComb_Params params;
	params.TotalHit = TotalHit;
	params.TotalDamage = TotalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_COMBO
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_COMBO_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_COMBO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_COMBO.TO14_BPI_GUI_BTL_COMBO_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_COMBO");

	UTO14_BPI_GUI_BTL_COMBO_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_COMBO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
