
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

// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.Tick");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_BndEvt__BOOSTBREAK_ANIM_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.PlayCoreBreakAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::PlayCoreBreakAnim(const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.PlayCoreBreakAnim");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_PlayCoreBreakAnim_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.PlayBoostBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::PlayBoostBreak(const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.PlayBoostBreak");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_PlayBoostBreak_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.Construct");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.ExecuteUbergraph_TO14_BP_BTL_BREAK_NOTIFY_ITEM
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::ExecuteUbergraph_TO14_BP_BTL_BREAK_NOTIFY_ITEM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.ExecuteUbergraph_TO14_BP_BTL_BREAK_NOTIFY_ITEM");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_ExecuteUbergraph_TO14_BP_BTL_BREAK_NOTIFY_ITEM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.OnBoostBreakAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* BreakNotify                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C::OnBoostBreakAnimEnd__DelegateSignature(class UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C* BreakNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BREAK_NOTIFY_ITEM.TO14_BP_BTL_BREAK_NOTIFY_ITEM_C.OnBoostBreakAnimEnd__DelegateSignature");

	UTO14_BP_BTL_BREAK_NOTIFY_ITEM_C_OnBoostBreakAnimEnd__DelegateSignature_Params params;
	params.BreakNotify = BreakNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
