
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

// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnDisabled");

	UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnEnabled");

	UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnFirstCriticalAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C::OnFirstCriticalAttack(class ABtlCharacterBase* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnFirstCriticalAttack");

	UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnFirstCriticalAttack_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C::ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG");

	UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
