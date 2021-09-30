
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

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.FindTrophyRecord
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           HIT                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPostEventTrophyData    TrophyRecord                   (Parm, OutParm)

void AEventTrophyUnlocker_C::FindTrophyRecord(const struct FString& EventName, bool* HIT, struct FPostEventTrophyData* TrophyRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.FindTrophyRecord");

	AEventTrophyUnlocker_C_FindTrophyRecord_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HIT != nullptr)
		*HIT = params.HIT;
	if (TrophyRecord != nullptr)
		*TrophyRecord = params.TrophyRecord;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEventTrophyUnlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.UserConstructionScript");

	AEventTrophyUnlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.Unlock
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TrophyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEventTrophyUnlocker_C::Unlock(const struct FString& TrophyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.Unlock");

	AEventTrophyUnlocker_C_Unlock_Params params;
	params.TrophyName = TrophyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnBattleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AEventTrophyUnlocker_C::OnBattleEnd(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnBattleEnd");

	AEventTrophyUnlocker_C_OnBattleEnd_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.EventEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AEventTrophyUnlocker_C::EventEnd(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.EventEnd");

	AEventTrophyUnlocker_C_EventEnd_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.BattleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AEventTrophyUnlocker_C::BattleEnd(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.BattleEnd");

	AEventTrophyUnlocker_C_BattleEnd_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnEventEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AEventTrophyUnlocker_C::OnEventEnd(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnEventEnd");

	AEventTrophyUnlocker_C_OnEventEnd_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEventTrophyUnlocker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.ReceiveBeginPlay");

	AEventTrophyUnlocker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTrophyUnlocker.EventTrophyUnlocker_C.ExecuteUbergraph_EventTrophyUnlocker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEventTrophyUnlocker_C::ExecuteUbergraph_EventTrophyUnlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrophyUnlocker.EventTrophyUnlocker_C.ExecuteUbergraph_EventTrophyUnlocker");

	AEventTrophyUnlocker_C_ExecuteUbergraph_EventTrophyUnlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
