
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

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@SafeStopAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Anim                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT2_C::@SafeStopAnim(class UWidgetAnimation* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@SafeStopAnim");

	UTO14_BPI_GUI_SYS_SCHT2_C_@SafeStopAnim_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT2_C::@PlayAnim(class UWidgetAnimation* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@PlayAnim");

	UTO14_BPI_GUI_SYS_SCHT2_C_@PlayAnim_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayOpenAnim_
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT2_C::PlayOpenAnim_()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayOpenAnim_");

	UTO14_BPI_GUI_SYS_SCHT2_C_PlayOpenAnim__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayCloseAnim
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT2_C::PlayCloseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayCloseAnim");

	UTO14_BPI_GUI_SYS_SCHT2_C_PlayCloseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Abort
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT2_C::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Abort");

	UTO14_BPI_GUI_SYS_SCHT2_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveAnim
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT2_C::PlayMoveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveAnim");

	UTO14_BPI_GUI_SYS_SCHT2_C_PlayMoveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveCloseAnim
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_SCHT2_C::PlayMoveCloseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveCloseAnim");

	UTO14_BPI_GUI_SYS_SCHT2_C_PlayMoveCloseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseCharaIconID              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideIconLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_SCHT2_C::Initialize(EAriseCharaIconID Icon, const struct FName& OverrideIconLabel, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Initialize");

	UTO14_BPI_GUI_SYS_SCHT2_C_Initialize_Params params;
	params.Icon = Icon;
	params.OverrideIconLabel = OverrideIconLabel;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_SCHT2_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2");

	UTO14_BPI_GUI_SYS_SCHT2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
