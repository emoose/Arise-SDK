
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

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CanAdsorb
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::CanAdsorb(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CanAdsorb");

	UBP_MenuFreeCursorAdsorbArea_C_CanAdsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.IsOnFreeCursorReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReaction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::IsOnFreeCursorReaction(bool* IsReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.IsOnFreeCursorReaction");

	UBP_MenuFreeCursorAdsorbArea_C_IsOnFreeCursorReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReaction != nullptr)
		*IsReaction = params.IsReaction;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorDecided
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::OnFreeCursorDecided(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorDecided");

	UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorDecided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::OnFreeCursorUnhovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhovered");

	UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCusrorHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::OnFreeCusrorHovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCusrorHovered");

	UBP_MenuFreeCursorAdsorbArea_C_OnFreeCusrorHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::SetActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.SetActive");

	UBP_MenuFreeCursorAdsorbArea_C_SetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorUnhoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFreeCursorUnhovered          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MenuFreeCursorAdsorbArea_C::BindFreeCursorUnhoveredEvent(const struct FScriptDelegate& OnFreeCursorUnhovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorUnhoveredEvent");

	UBP_MenuFreeCursorAdsorbArea_C_BindFreeCursorUnhoveredEvent_Params params;
	params.OnFreeCursorUnhovered = OnFreeCursorUnhovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorHoveredEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFreeCursorHovered            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MenuFreeCursorAdsorbArea_C::BindFreeCursorHoveredEvent(const struct FScriptDelegate& OnFreeCursorHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorHoveredEvent");

	UBP_MenuFreeCursorAdsorbArea_C_BindFreeCursorHoveredEvent_Params params;
	params.OnFreeCursorHovered = OnFreeCursorHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CheckInsideAndLength
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsInside                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorAdsorbArea_C::CheckInsideAndLength(class UWidget* Widget, bool* IsInside, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CheckInsideAndLength");

	UBP_MenuFreeCursorAdsorbArea_C_CheckInsideAndLength_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInside != nullptr)
		*IsInside = params.IsInside;
	if (Length != nullptr)
		*Length = params.Length;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MenuFreeCursorAdsorbArea_C::OnFreeCursorUnhoveredEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhoveredEvent__DelegateSignature");

	UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorUnhoveredEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MenuFreeCursorAdsorbArea_C::OnFreeCursorHoveredEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorHoveredEvent__DelegateSignature");

	UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorHoveredEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
