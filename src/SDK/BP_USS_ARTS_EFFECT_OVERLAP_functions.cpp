
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

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.GetEffectValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAriseSkillEffect       Effect                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_USS_ARTS_EFFECT_OVERLAP_C::GetEffectValue(const struct FAriseSkillEffect& Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.GetEffectValue");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_GetEffectValue_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnUnapplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_OVERLAP_C::OnUnapplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnUnapplySkill");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_OnUnapplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_OVERLAP_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnApplySkill");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_OVERLAP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEnabled");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEndArts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsHandle          ArtsHandle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_USS_ARTS_EFFECT_OVERLAP_C::OnEndArts(const struct FBtlArtsHandle& ArtsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEndArts");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_OnEndArts_Params params;
	params.ArtsHandle = ArtsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ARTS_EFFECT_OVERLAP_C::ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP");

	UBP_USS_ARTS_EFFECT_OVERLAP_C_ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
