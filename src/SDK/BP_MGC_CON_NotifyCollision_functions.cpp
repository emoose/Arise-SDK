
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

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetConditionName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_CON_NotifyCollision_C::Received_GetConditionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetConditionName");

	UBP_MGC_CON_NotifyCollision_C_Received_GetConditionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Condition
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MGC_CON_NotifyCollision_C::Received_Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Condition");

	UBP_MGC_CON_NotifyCollision_C_Received_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetErrorMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBtlMagicAsset*          Asset                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_CON_NotifyCollision_C::Received_GetErrorMessage(class UBtlMagicAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetErrorMessage");

	UBP_MGC_CON_NotifyCollision_C_Received_GetErrorMessage_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MGC_CON_NotifyCollision_C::OnEndOverlap(class UPrimitiveComponent* Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnEndOverlap");

	UBP_MGC_CON_NotifyCollision_C_OnEndOverlap_Params params;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MGC_CON_NotifyCollision_C::OnBeginOverlap(class UPrimitiveComponent* Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnBeginOverlap");

	UBP_MGC_CON_NotifyCollision_C_OnBeginOverlap_Params params;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Deactivated
// (Event, Protected, BlueprintEvent)

void UBP_MGC_CON_NotifyCollision_C::Received_Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Deactivated");

	UBP_MGC_CON_NotifyCollision_C_Received_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Activated
// (Event, Protected, BlueprintEvent)

void UBP_MGC_CON_NotifyCollision_C::Received_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Activated");

	UBP_MGC_CON_NotifyCollision_C_Received_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_BeginOverlap
// (BlueprintCallable, BlueprintEvent)

void UBP_MGC_CON_NotifyCollision_C::V2_BeginOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_BeginOverlap");

	UBP_MGC_CON_NotifyCollision_C_V2_BeginOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_EndOverlap
// (BlueprintCallable, BlueprintEvent)

void UBP_MGC_CON_NotifyCollision_C::V2_EndOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_EndOverlap");

	UBP_MGC_CON_NotifyCollision_C_V2_EndOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.ExecuteUbergraph_BP_MGC_CON_NotifyCollision
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_CON_NotifyCollision_C::ExecuteUbergraph_BP_MGC_CON_NotifyCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.ExecuteUbergraph_BP_MGC_CON_NotifyCollision");

	UBP_MGC_CON_NotifyCollision_C_ExecuteUbergraph_BP_MGC_CON_NotifyCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
