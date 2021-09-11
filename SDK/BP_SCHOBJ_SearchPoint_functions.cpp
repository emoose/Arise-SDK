
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

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckItemNotEnough
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PFSC_QuestTargetData Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_SearchPoint_C::CheckItemNotEnough(const struct FST_PFSC_QuestTargetData& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckItemNotEnough");

	UBP_SCHOBJ_SearchPoint_C_CheckItemNotEnough_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsQuestItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_SearchPoint_C::IsQuestItem(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsQuestItem");

	UBP_SCHOBJ_SearchPoint_C_IsQuestItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetShortChatDatabase
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_SearchPoint_C::GetShortChatDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetShortChatDatabase");

	UBP_SCHOBJ_SearchPoint_C_GetShortChatDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CanCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_SearchPoint_C::CanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CanCheck");

	UBP_SCHOBJ_SearchPoint_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SCHOBJ_SearchPoint_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetTarget");

	UBP_SCHOBJ_SearchPoint_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_SearchPoint_C::IsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsTarget");

	UBP_SCHOBJ_SearchPoint_C_IsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_SearchPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ReceiveBeginPlay");

	UBP_SCHOBJ_SearchPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckQuest
// (BlueprintCallable, BlueprintEvent)

void UBP_SCHOBJ_SearchPoint_C::CheckQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckQuest");

	UBP_SCHOBJ_SearchPoint_C_CheckQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ExecuteUbergraph_BP_SCHOBJ_SearchPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_SearchPoint_C::ExecuteUbergraph_BP_SCHOBJ_SearchPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ExecuteUbergraph_BP_SCHOBJ_SearchPoint");

	UBP_SCHOBJ_SearchPoint_C_ExecuteUbergraph_BP_SCHOBJ_SearchPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
