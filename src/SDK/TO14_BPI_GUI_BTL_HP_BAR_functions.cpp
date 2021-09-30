
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

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.GetNativeUiParts
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*            OutProgressBar                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* OutBarMaterial                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_HP_BAR_C::GetNativeUiParts(class UProgressBar** OutProgressBar, class UMaterialInstanceDynamic** OutBarMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.GetNativeUiParts");

	UTO14_BPI_GUI_BTL_HP_BAR_C_GetNativeUiParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProgressBar != nullptr)
		*OutProgressBar = params.OutProgressBar;
	if (OutBarMaterial != nullptr)
		*OutBarMaterial = params.OutBarMaterial;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.RefreshPinchMode
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::RefreshPinchMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.RefreshPinchMode");

	UTO14_BPI_GUI_BTL_HP_BAR_C_RefreshPinchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Construct");

	UTO14_BPI_GUI_BTL_HP_BAR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Destruct");

	UTO14_BPI_GUI_BTL_HP_BAR_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnBeginWorkPinch
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::EventOnBeginWorkPinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnBeginWorkPinch");

	UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnBeginWorkPinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnEndWorkPinch
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::EventOnEndWorkPinch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnEndWorkPinch");

	UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnEndWorkPinch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_HP_BAR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Tick");

	UTO14_BPI_GUI_BTL_HP_BAR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnGaugeAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_HP_BAR_C::EventOnGaugeAnimationFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnGaugeAnimationFinish");

	UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnGaugeAnimationFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_HP_BAR_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR");

	UTO14_BPI_GUI_BTL_HP_BAR_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
