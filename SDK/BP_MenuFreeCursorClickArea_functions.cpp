
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

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.CanAdsorb
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::CanAdsorb(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.CanAdsorb");

	UBP_MenuFreeCursorClickArea_C_CanAdsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.IsOnFreeCursorReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReaction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::IsOnFreeCursorReaction(bool* IsReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.IsOnFreeCursorReaction");

	UBP_MenuFreeCursorClickArea_C_IsOnFreeCursorReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReaction != nullptr)
		*IsReaction = params.IsReaction;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorDecided
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::OnFreeCursorDecided(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorDecided");

	UBP_MenuFreeCursorClickArea_C_OnFreeCursorDecided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCusrorHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::OnFreeCusrorHovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCusrorHovered");

	UBP_MenuFreeCursorClickArea_C_OnFreeCusrorHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorUnhovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::OnFreeCursorUnhovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorUnhovered");

	UBP_MenuFreeCursorClickArea_C_OnFreeCursorUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetCanFreeCursorDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanFreeCursorDecide           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::SetCanFreeCursorDecide(bool bCanFreeCursorDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetCanFreeCursorDecide");

	UBP_MenuFreeCursorClickArea_C_SetCanFreeCursorDecide_Params params;
	params.bCanFreeCursorDecide = bCanFreeCursorDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.GetOwnerUserWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             OwnerUserWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::GetOwnerUserWidget(class UUserWidget** OwnerUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.GetOwnerUserWidget");

	UBP_MenuFreeCursorClickArea_C_GetOwnerUserWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerUserWidget != nullptr)
		*OwnerUserWidget = params.OwnerUserWidget;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetOwnerUserWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             OwnerUserWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::SetOwnerUserWidget(class UUserWidget* OwnerUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetOwnerUserWidget");

	UBP_MenuFreeCursorClickArea_C_SetOwnerUserWidget_Params params;
	params.OwnerUserWidget = OwnerUserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorDecidedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         FreeCursorDecided              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MenuFreeCursorClickArea_C::BindFreeCursorDecidedEvent(const struct FScriptDelegate& FreeCursorDecided)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorDecidedEvent");

	UBP_MenuFreeCursorClickArea_C_BindFreeCursorDecidedEvent_Params params;
	params.FreeCursorDecided = FreeCursorDecided;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorUnhoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFreeCursorUnhovered          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MenuFreeCursorClickArea_C::BindFreeCursorUnhoveredEvent(const struct FScriptDelegate& OnFreeCursorUnhovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorUnhoveredEvent");

	UBP_MenuFreeCursorClickArea_C_BindFreeCursorUnhoveredEvent_Params params;
	params.OnFreeCursorUnhovered = OnFreeCursorUnhovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorHoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFreeCursorHovered            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MenuFreeCursorClickArea_C::BindFreeCursorHoveredEvent(const struct FScriptDelegate& OnFreeCursorHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorHoveredEvent");

	UBP_MenuFreeCursorClickArea_C_BindFreeCursorHoveredEvent_Params params;
	params.OnFreeCursorHovered = OnFreeCursorHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorDecidedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::FreeCursorDecidedDelegate__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorDecidedDelegate__DelegateSignature");

	UBP_MenuFreeCursorClickArea_C_FreeCursorDecidedDelegate__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorUnHoveredDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::FreeCursorUnHoveredDelegate__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorUnHoveredDelegate__DelegateSignature");

	UBP_MenuFreeCursorClickArea_C_FreeCursorUnHoveredDelegate__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorHoveredDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MenuFreeCursorClickArea_C::FreeCursorHoveredDelegate__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorHoveredDelegate__DelegateSignature");

	UBP_MenuFreeCursorClickArea_C_FreeCursorHoveredDelegate__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
