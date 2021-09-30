
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

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.GetEffectValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAriseSkillEffect       Effect                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BTL_USS_KISIN_C::GetEffectValue(const struct FAriseSkillEffect& Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.GetEffectValue");

	UBP_BTL_USS_KISIN_C_GetEffectValue_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.InitializeRefCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_KISIN_C::InitializeRefCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.InitializeRefCount");

	UBP_BTL_USS_KISIN_C_InitializeRefCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetCharacterChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NewCharacter                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       PrevCharacter                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_KISIN_C::OnTargetCharacterChanged(class ABtlCharacterBase* Unit, class ABtlCharacterBase* NewCharacter, class ABtlCharacterBase* PrevCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetCharacterChanged");

	UBP_BTL_USS_KISIN_C_OnTargetCharacterChanged_Params params;
	params.Unit = Unit;
	params.NewCharacter = NewCharacter;
	params.PrevCharacter = PrevCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* NewTargetComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlTargetCursorComponent* PrevTargetComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_USS_KISIN_C::OnTargetChanged(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetChanged");

	UBP_BTL_USS_KISIN_C_OnTargetChanged_Params params;
	params.Unit = Unit;
	params.NewTargetComponent = NewTargetComponent;
	params.PrevTargetComponent = PrevTargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.TargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* NewTargetComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlTargetCursorComponent* PrevTargetComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_USS_KISIN_C::TargetChanged(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.TargetChanged");

	UBP_BTL_USS_KISIN_C_TargetChanged_Params params;
	params.Unit = Unit;
	params.NewTargetComponent = NewTargetComponent;
	params.PrevTargetComponent = PrevTargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnFocus
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_KISIN_C::OnFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnFocus");

	UBP_BTL_USS_KISIN_C_OnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnOutOfFocus
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_KISIN_C::OnOutOfFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnOutOfFocus");

	UBP_BTL_USS_KISIN_C_OnOutOfFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KISIN_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDisabled");

	UBP_BTL_USS_KISIN_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KISIN_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnEnabled");

	UBP_BTL_USS_KISIN_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_KISIN_C::OnDeadUnit(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDeadUnit");

	UBP_BTL_USS_KISIN_C_OnDeadUnit_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.ExecuteUbergraph_BP_BTL_USS_KISIN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_KISIN_C::ExecuteUbergraph_BP_BTL_USS_KISIN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.ExecuteUbergraph_BP_BTL_USS_KISIN");

	UBP_BTL_USS_KISIN_C_ExecuteUbergraph_BP_BTL_USS_KISIN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
