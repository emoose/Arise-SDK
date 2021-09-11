
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

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.CanAdsorb
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickableAreaInterface_C::CanAdsorb(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.CanAdsorb");

	UBP_MenuFreeCursorClickableAreaInterface_C_CanAdsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.IsOnFreeCursorReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReaction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickableAreaInterface_C::IsOnFreeCursorReaction(bool* IsReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.IsOnFreeCursorReaction");

	UBP_MenuFreeCursorClickableAreaInterface_C_IsOnFreeCursorReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReaction != nullptr)
		*IsReaction = params.IsReaction;
}


// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorDecided
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickableAreaInterface_C::OnFreeCursorDecided(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorDecided");

	UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCursorDecided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorUnhovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickableAreaInterface_C::OnFreeCursorUnhovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorUnhovered");

	UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCursorUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCusrorHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuFreeCursorClickableAreaInterface_C::OnFreeCusrorHovered(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCusrorHovered");

	UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCusrorHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
