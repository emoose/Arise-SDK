
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

// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Condition
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MGC_CON_ReceiveMessage_C::Received_Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Condition");

	UBP_MGC_CON_ReceiveMessage_C_Received_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_GetConditionName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_CON_ReceiveMessage_C::Received_GetConditionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_GetConditionName");

	UBP_MGC_CON_ReceiveMessage_C_Received_GetConditionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Deactivated
// (Event, Protected, BlueprintEvent)

void UBP_MGC_CON_ReceiveMessage_C::Received_Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Deactivated");

	UBP_MGC_CON_ReceiveMessage_C_Received_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Activated
// (Event, Protected, BlueprintEvent)

void UBP_MGC_CON_ReceiveMessage_C::Received_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_Activated");

	UBP_MGC_CON_ReceiveMessage_C_Received_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_ReceiveMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_CON_ReceiveMessage_C::Received_ReceiveMessage(const struct FString& Message, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.Received_ReceiveMessage");

	UBP_MGC_CON_ReceiveMessage_C_Received_ReceiveMessage_Params params;
	params.Message = Message;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.ExecuteUbergraph_BP_MGC_CON_ReceiveMessage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_CON_ReceiveMessage_C::ExecuteUbergraph_BP_MGC_CON_ReceiveMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_CON_ReceiveMessage.BP_MGC_CON_ReceiveMessage_C.ExecuteUbergraph_BP_MGC_CON_ReceiveMessage");

	UBP_MGC_CON_ReceiveMessage_C_ExecuteUbergraph_BP_MGC_CON_ReceiveMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
