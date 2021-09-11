
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

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTargetLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_SCHOBJ_EncBoss_C::GetTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTargetLocation");

	UBP_SCHOBJ_EncBoss_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckEnmyNotEnough
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PFSC_QuestTargetData Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::CheckEnmyNotEnough(const struct FST_PFSC_QuestTargetData& Param, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckEnmyNotEnough");

	UBP_SCHOBJ_EncBoss_C_CheckEnmyNotEnough_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsQuestEnemy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::IsQuestEnemy(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsQuestEnemy");

	UBP_SCHOBJ_EncBoss_C_IsQuestEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetShortChatDatabase
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_EncBoss_C::GetShortChatDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetShortChatDatabase");

	UBP_SCHOBJ_EncBoss_C_GetShortChatDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindBossSymbol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::FindBossSymbol(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindBossSymbol");

	UBP_SCHOBJ_EncBoss_C_FindBossSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindRareSymbol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::FindRareSymbol(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindRareSymbol");

	UBP_SCHOBJ_EncBoss_C_FindRareSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SCHOBJ_EncBoss_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTarget");

	UBP_SCHOBJ_EncBoss_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CanCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_EncBoss_C::CanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CanCheck");

	UBP_SCHOBJ_EncBoss_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_EncBoss_C::IsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsTarget");

	UBP_SCHOBJ_EncBoss_C_IsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_EncBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveBeginPlay");

	UBP_SCHOBJ_EncBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckQuest
// (BlueprintCallable, BlueprintEvent)

void UBP_SCHOBJ_EncBoss_C::CheckQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckQuest");

	UBP_SCHOBJ_EncBoss_C_CheckQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveEndPlay");

	UBP_SCHOBJ_EncBoss_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.Update
// (BlueprintCallable, BlueprintEvent)

void UBP_SCHOBJ_EncBoss_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.Update");

	UBP_SCHOBJ_EncBoss_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ExecuteUbergraph_BP_SCHOBJ_EncBoss
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_EncBoss_C::ExecuteUbergraph_BP_SCHOBJ_EncBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ExecuteUbergraph_BP_SCHOBJ_EncBoss");

	UBP_SCHOBJ_EncBoss_C_ExecuteUbergraph_BP_SCHOBJ_EncBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
