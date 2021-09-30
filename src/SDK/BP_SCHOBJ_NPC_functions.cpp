
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

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::IsQuest(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsQuest");

	UBP_SCHOBJ_NPC_C_IsQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsModelID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InModelID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::IsModelID(const struct FString& InModelID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsModelID");

	UBP_SCHOBJ_NPC_C_IsModelID_Params params;
	params.InModelID = InModelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsSexAgeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAchScenarioCharSexType        Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAchScenarioCharAgeType        Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::IsSexAgeType(EAchScenarioCharSexType Sex, EAchScenarioCharAgeType Age, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsSexAgeType");

	UBP_SCHOBJ_NPC_C_IsSexAgeType_Params params;
	params.Sex = Sex;
	params.Age = Age;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetInteractiveSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Field                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Dungeon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Town                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::GetInteractiveSize(float* Field, float* Dungeon, float* Town)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetInteractiveSize");

	UBP_SCHOBJ_NPC_C_GetInteractiveSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Field != nullptr)
		*Field = params.Field;
	if (Dungeon != nullptr)
		*Dungeon = params.Dungeon;
	if (Town != nullptr)
		*Town = params.Town;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPFSCHObjDefine                Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::GetType(EPFSCHObjDefine* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetType");

	UBP_SCHOBJ_NPC_C_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetShortChatDatabase
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_NPC_C::GetShortChatDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetShortChatDatabase");

	UBP_SCHOBJ_NPC_C_GetShortChatDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.CanCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_NPC_C::CanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.CanCheck");

	UBP_SCHOBJ_NPC_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SCHOBJ_NPC_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetTarget");

	UBP_SCHOBJ_NPC_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_NPC_C::IsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsTarget");

	UBP_SCHOBJ_NPC_C_IsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ReceiveBeginPlay");

	UBP_SCHOBJ_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.UpdateNPC
// (BlueprintCallable, BlueprintEvent)

void UBP_SCHOBJ_NPC_C::UpdateNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.UpdateNPC");

	UBP_SCHOBJ_NPC_C_UpdateNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ExecuteUbergraph_BP_SCHOBJ_NPC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_NPC_C::ExecuteUbergraph_BP_SCHOBJ_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ExecuteUbergraph_BP_SCHOBJ_NPC");

	UBP_SCHOBJ_NPC_C_ExecuteUbergraph_BP_SCHOBJ_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
