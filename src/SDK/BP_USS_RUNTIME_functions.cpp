
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

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsBool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_USS_RUNTIME_C::GetUnitParameterAsBool(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsBool");

	UBP_USS_RUNTIME_C_GetUnitParameterAsBool_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_USS_RUNTIME_C::GetUnitParameterAsInt(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsInt");

	UBP_USS_RUNTIME_C_GetUnitParameterAsInt_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_USS_RUNTIME_C::GetUnitParameter(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameter");

	UBP_USS_RUNTIME_C_GetUnitParameter_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnCoolTimeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnCoolTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnCoolTimeOut");

	UBP_USS_RUNTIME_C_OnCoolTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EffectTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_RUNTIME_C::SetEffectTime(float EffectTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTime");

	UBP_USS_RUNTIME_C_SetEffectTime_Params params;
	params.EffectTime = EffectTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnTimeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnTimeOut");

	UBP_USS_RUNTIME_C_OnTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTimeIfNeeded
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::SetEffectTimeIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTimeIfNeeded");

	UBP_USS_RUNTIME_C_SetEffectTimeIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTimeIfNeeded
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::SetCoolTimeIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTimeIfNeeded");

	UBP_USS_RUNTIME_C_SetCoolTimeIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CoolTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_RUNTIME_C::SetCoolTime(float CoolTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTime");

	UBP_USS_RUNTIME_C_SetCoolTime_Params params;
	params.CoolTime = CoolTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.CoolTimeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::CoolTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.CoolTimeOut");

	UBP_USS_RUNTIME_C_CoolTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnApplySkill");

	UBP_USS_RUNTIME_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_USS_RUNTIME_C::OnDeadCharacter(class ABtlCharacterBase* SelfCharacter, class ABtlCharacterBase* Attacker, const struct FBtlArtsData& PreArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDeadCharacter");

	UBP_USS_RUNTIME_C_OnDeadCharacter_Params params;
	params.SelfCharacter = SelfCharacter;
	params.Attacker = Attacker;
	params.PreArts = PreArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDead
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDead");

	UBP_USS_RUNTIME_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnEnabled");

	UBP_USS_RUNTIME_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_RUNTIME_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDisabled");

	UBP_USS_RUNTIME_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.ExecuteUbergraph_BP_USS_RUNTIME
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_RUNTIME_C::ExecuteUbergraph_BP_USS_RUNTIME(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.ExecuteUbergraph_BP_USS_RUNTIME");

	UBP_USS_RUNTIME_C_ExecuteUbergraph_BP_USS_RUNTIME_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
