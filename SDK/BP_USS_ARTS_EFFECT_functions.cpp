
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

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.RegisterArtsEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_C::RegisterArtsEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.RegisterArtsEffects");

	UBP_USS_ARTS_EFFECT_C_RegisterArtsEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.GetSkillEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          EffectTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAriseSkillEffect> SkillEffects                   (Parm, OutParm, ZeroConstructor)

void UBP_USS_ARTS_EFFECT_C::GetSkillEffects(const struct FBtlArtsData& ArtsData, float* EffectTime, TArray<struct FAriseSkillEffect>* SkillEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.GetSkillEffects");

	UBP_USS_ARTS_EFFECT_C_GetSkillEffects_Params params;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectTime != nullptr)
		*EffectTime = params.EffectTime;
	if (SkillEffects != nullptr)
		*SkillEffects = params.SkillEffects;
}


// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnArtsEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Supporter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ARTS_EFFECT_C::OnArtsEffect(class ABtlCharacterBase* Supporter, class ABtlCharacterBase* Receiver, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnArtsEffect");

	UBP_USS_ARTS_EFFECT_C_OnArtsEffect_Params params;
	params.Supporter = Supporter;
	params.Receiver = Receiver;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnInitialized");

	UBP_USS_ARTS_EFFECT_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_ARTS_EFFECT_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnApplySkill");

	UBP_USS_ARTS_EFFECT_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ARTS_EFFECT_C::ExecuteUbergraph_BP_USS_ARTS_EFFECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT");

	UBP_USS_ARTS_EFFECT_C_ExecuteUbergraph_BP_USS_ARTS_EFFECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
