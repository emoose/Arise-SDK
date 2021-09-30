
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

// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.SetIconOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::SetIconOffset(const struct FVector& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.SetIconOffset");

	ABP_PF_Interaction_EmptyPoint_C_SetIconOffset_Params params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UpdateActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Interaction_EmptyPoint_C::UpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UpdateActive");

	ABP_PF_Interaction_EmptyPoint_C_UpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_Interaction_EmptyPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.UserConstructionScript");

	ABP_PF_Interaction_EmptyPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveEndPlay");

	ABP_PF_Interaction_EmptyPoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveTick");

	ABP_PF_Interaction_EmptyPoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_Interaction_EmptyPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ReceiveBeginPlay");

	ABP_PF_Interaction_EmptyPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::Event_OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChangeScenarioCounter");

	ABP_PF_Interaction_EmptyPoint_C_Event_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChageScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::Event_OnChageScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.Event OnChageScenarioFlag");

	ABP_PF_Interaction_EmptyPoint_C_Event_OnChageScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ExecuteUbergraph_BP_PF_Interaction_EmptyPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Interaction_EmptyPoint_C::ExecuteUbergraph_BP_PF_Interaction_EmptyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C.ExecuteUbergraph_BP_PF_Interaction_EmptyPoint");

	ABP_PF_Interaction_EmptyPoint_C_ExecuteUbergraph_BP_PF_Interaction_EmptyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
