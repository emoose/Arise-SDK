
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

// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Condition
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MGC_CON_HeightCheck_C::Received_Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Condition");

	UBP_MGC_CON_HeightCheck_C_Received_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_GetConditionName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_CON_HeightCheck_C::Received_GetConditionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_GetConditionName");

	UBP_MGC_CON_HeightCheck_C_Received_GetConditionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Activated
// (Event, Protected, BlueprintEvent)

void UBP_MGC_CON_HeightCheck_C::Received_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Activated");

	UBP_MGC_CON_HeightCheck_C_Received_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.ExecuteUbergraph_BP_MGC_CON_HeightCheck
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_CON_HeightCheck_C::ExecuteUbergraph_BP_MGC_CON_HeightCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.ExecuteUbergraph_BP_MGC_CON_HeightCheck");

	UBP_MGC_CON_HeightCheck_C_ExecuteUbergraph_BP_MGC_CON_HeightCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
