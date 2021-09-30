
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

// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_CHANT_C::OnStateChanged(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnStateChanged");

	UBP_BTL_USS_CHANT_C_OnStateChanged_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_CHANT_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnDisabled");

	UBP_BTL_USS_CHANT_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_CHANT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnEnabled");

	UBP_BTL_USS_CHANT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.ExecuteUbergraph_BP_BTL_USS_CHANT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_CHANT_C::ExecuteUbergraph_BP_BTL_USS_CHANT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.ExecuteUbergraph_BP_BTL_USS_CHANT");

	UBP_BTL_USS_CHANT_C_ExecuteUbergraph_BP_BTL_USS_CHANT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
