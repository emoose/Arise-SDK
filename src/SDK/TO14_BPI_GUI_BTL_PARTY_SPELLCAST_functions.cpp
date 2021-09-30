
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

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.Refresh");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.GetAnimationStartAtTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           SkipAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartAtTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::GetAnimationStartAtTime(class UWidgetAnimation* Animation, bool SkipAnim, float* StartAtTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.GetAnimationStartAtTime");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_GetAnimationStartAtTime_Params params;
	params.Animation = Animation;
	params.SkipAnim = SkipAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartAtTime != nullptr)
		*StartAtTime = params.StartAtTime;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.SetPercent");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.BindEvent");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnBeginSpellCast
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::OnBeginSpellCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnBeginSpellCast");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnBeginSpellCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnChangeSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GaugeRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::OnChangeSpellCast(float GaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnChangeSpellCast");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnChangeSpellCast_Params params;
	params.GaugeRate = GaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnEndSpellCast
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::OnEndSpellCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnEndSpellCast");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnEndSpellCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST");

	UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
