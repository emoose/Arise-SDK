
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

// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSPInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_SP_BAR_C::SetSPInternal(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSPInternal");

	UTO14_BPI_GUI_BTL_SP_BAR_C_SetSPInternal_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpInternal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_SP_BAR_C::SetSP(float NewSpInternal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.SetSP");

	UTO14_BPI_GUI_BTL_SP_BAR_C_SetSP_Params params;
	params.NewSpInternal = NewSpInternal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpInternal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSpInternalMax               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSpMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseStartAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_SP_BAR_C::Initialize(float NewSpInternal, float NewSpInternalMax, int NewSpMax, bool bUseStartAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.Initialize");

	UTO14_BPI_GUI_BTL_SP_BAR_C_Initialize_Params params;
	params.NewSpInternal = NewSpInternal;
	params.NewSpInternalMax = NewSpInternalMax;
	params.NewSpMax = NewSpMax;
	params.bUseStartAnim = bUseStartAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PlayNotUseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_SP_BAR_C::PlayNotUseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PlayNotUseAnim");

	UTO14_BPI_GUI_BTL_SP_BAR_C_PlayNotUseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_SP_BAR_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.PreConstruct");

	UTO14_BPI_GUI_BTL_SP_BAR_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.StartAnimPoint
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_SP_BAR_C::StartAnimPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.StartAnimPoint");

	UTO14_BPI_GUI_BTL_SP_BAR_C_StartAnimPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_SP_BAR_C::BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_SP_BAR_C_BndEvt__OnStartAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_SP_BAR_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_SP_BAR.TO14_BPI_GUI_BTL_SP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR");

	UTO14_BPI_GUI_BTL_SP_BAR_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_SP_BAR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
