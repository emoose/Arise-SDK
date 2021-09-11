
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

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnChageGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_PlayEventActor_C::OnChageGameState(EAriseGameState ChangedState, bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnChageGameState");

	ABP_GP_PlayEventActor_C_OnChageGameState_Params params;
	params.ChangedState = ChangedState;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.DoPlayEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GP_PlayEventActor_C::DoPlayEvent(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.DoPlayEvent");

	ABP_GP_PlayEventActor_C_DoPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnPlayEventFinalize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GP_PlayEventActor_C::OnPlayEventFinalize(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnPlayEventFinalize");

	ABP_GP_PlayEventActor_C_OnPlayEventFinalize_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GP_PlayEventActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.UserConstructionScript");

	ABP_GP_PlayEventActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GP_PlayEventActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveBeginPlay");

	ABP_GP_PlayEventActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_PlayEventActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveEndPlay");

	ABP_GP_PlayEventActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ExecuteUbergraph_BP_GP_PlayEventActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GP_PlayEventActor_C::ExecuteUbergraph_BP_GP_PlayEventActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ExecuteUbergraph_BP_GP_PlayEventActor");

	ABP_GP_PlayEventActor_C_ExecuteUbergraph_BP_GP_PlayEventActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
