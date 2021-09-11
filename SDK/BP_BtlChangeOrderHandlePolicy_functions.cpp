
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

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetBack2Front
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABtlCharacterBase* UBP_BtlChangeOrderHandlePolicy_C::GetBack2Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetBack2Front");

	UBP_BtlChangeOrderHandlePolicy_C_GetBack2Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetFront2Back
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABtlCharacterBase* UBP_BtlChangeOrderHandlePolicy_C::GetFront2Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetFront2Back");

	UBP_BtlChangeOrderHandlePolicy_C_GetFront2Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVisibleChangeFormation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlChangeOrderHandlePolicy_C::SetVisibleChangeFormation(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVisibleChangeFormation");

	UBP_BtlChangeOrderHandlePolicy_C_SetVisibleChangeFormation_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsChangeable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlChangeOrderHandlePolicy_C::IsChangeable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsChangeable");

	UBP_BtlChangeOrderHandlePolicy_C_IsChangeable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsImmediateChangeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ImmediateChange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlChangeOrderHandlePolicy_C::IsImmediateChangeCheck(bool* ImmediateChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsImmediateChangeCheck");

	UBP_BtlChangeOrderHandlePolicy_C_IsImmediateChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImmediateChange != nullptr)
		*ImmediateChange = params.ImmediateChange;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlChangeOrderHandlePolicy_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.Init");

	UBP_BtlChangeOrderHandlePolicy_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVanguardFlags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlChangeOrderHandlePolicy_C::SetVanguardFlags(class ABtlCharacterBase* Target, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVanguardFlags");

	UBP_BtlChangeOrderHandlePolicy_C_SetVanguardFlags_Params params;
	params.Target = Target;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.OnEscapeSuccess
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlChangeOrderHandlePolicy_C::OnEscapeSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.OnEscapeSuccess");

	UBP_BtlChangeOrderHandlePolicy_C_OnEscapeSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.DoChangeOrder
// (Event, Public, BlueprintEvent)

void UBP_BtlChangeOrderHandlePolicy_C::DoChangeOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.DoChangeOrder");

	UBP_BtlChangeOrderHandlePolicy_C_DoChangeOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlChangeOrderHandlePolicy_C::ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy");

	UBP_BtlChangeOrderHandlePolicy_C_ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
