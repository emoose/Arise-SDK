
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

// Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.GetScreenMaskAnimState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUBtlEncountEffectWidgetState  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BattleScreenMaskInterface_C::GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.GetScreenMaskAnimState");

	UBP_BattleScreenMaskInterface_C_GetScreenMaskAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.BindingStartAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BattleScreenMaskInterface_C::BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.BindingStartAnimFinish");

	UBP_BattleScreenMaskInterface_C_BindingStartAnimFinish_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
