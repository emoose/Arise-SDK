
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

// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UpdateKPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PrevCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WatchScenarioCounter_C::UpdateKPI(int CurCount, int PrevCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UpdateKPI");

	ABP_WatchScenarioCounter_C_UpdateKPI_Params params;
	params.CurCount = CurCount;
	params.PrevCount = PrevCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WatchScenarioCounter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.UserConstructionScript");

	ABP_WatchScenarioCounter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WatchScenarioCounter_C::OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.OnChangeScenarioCounter");

	ABP_WatchScenarioCounter_C_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WatchScenarioCounter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveBeginPlay");

	ABP_WatchScenarioCounter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WatchScenarioCounter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ReceiveEndPlay");

	ABP_WatchScenarioCounter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ExecuteUbergraph_BP_WatchScenarioCounter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WatchScenarioCounter_C::ExecuteUbergraph_BP_WatchScenarioCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WatchScenarioCounter.BP_WatchScenarioCounter_C.ExecuteUbergraph_BP_WatchScenarioCounter");

	ABP_WatchScenarioCounter_C_ExecuteUbergraph_BP_WatchScenarioCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
