
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

// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.SetTP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TP_C::SetTP(int Value, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.SetTP");

	UTO14_BPI_GUI_BTL_TP_C_SetTP_Params params;
	params.Value = Value;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnChangeTp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::OnChangeTp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnChangeTp");

	UTO14_BPI_GUI_BTL_TP_C_OnChangeTp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnOpen");

	UTO14_BPI_GUI_BTL_TP_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnClose");

	UTO14_BPI_GUI_BTL_TP_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_TP_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BindEvent");

	UTO14_BPI_GUI_BTL_TP_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnNotUseArtsForTp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArtsIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TP_C::OnNotUseArtsForTp(int ArtsIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.OnNotUseArtsForTp");

	UTO14_BPI_GUI_BTL_TP_C_OnNotUseArtsForTp_Params params;
	params.ArtsIndex = ArtsIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BndEvt__Tp_K2Node_ComponentBoundEvent_0_BtlUISimpleSignature__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::BndEvt__Tp_K2Node_ComponentBoundEvent_0_BtlUISimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BndEvt__Tp_K2Node_ComponentBoundEvent_0_BtlUISimpleSignature__DelegateSignature");

	UTO14_BPI_GUI_BTL_TP_C_BndEvt__Tp_K2Node_ComponentBoundEvent_0_BtlUISimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_TP_C::BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_TP_C_BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TP_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_TP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TP.TO14_BPI_GUI_BTL_TP_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TP");

	UTO14_BPI_GUI_BTL_TP_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_TP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
