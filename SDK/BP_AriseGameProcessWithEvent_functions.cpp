
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

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchatByLongchatName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLongchatName           LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::PlayEventLongchatByLongchatName(const struct FLongchatName& LongchatName, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchatByLongchatName");

	ABP_AriseGameProcessWithEvent_C_PlayEventLongchatByLongchatName_Params params;
	params.LongchatName = LongchatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.StopEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGameProcessWithEvent_C::StopEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.StopEvent");

	ABP_AriseGameProcessWithEvent_C_StopEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.IsPlayEventFinalized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFinalized                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::IsPlayEventFinalized(bool* bFinalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.IsPlayEventFinalized");

	ABP_AriseGameProcessWithEvent_C_IsPlayEventFinalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFinalized != nullptr)
		*bFinalized = params.bFinalized;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventMovie
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventNo                EventName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::PlayEventMovie(const struct FEventNo& EventName, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventMovie");

	ABP_AriseGameProcessWithEvent_C_PlayEventMovie_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventSequence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventNo                EventName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::PlayEventSequence(const struct FEventNo& EventName, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventSequence");

	ABP_AriseGameProcessWithEvent_C_PlayEventSequence_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventNo                EventName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::PlayEventLongchat(const struct FEventNo& EventName, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchat");

	ABP_AriseGameProcessWithEvent_C_PlayEventLongchat_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGameProcessWithEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.UserConstructionScript");

	ABP_AriseGameProcessWithEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseGameProcessWithEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveBeginPlay");

	ABP_AriseGameProcessWithEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveEndPlay");

	ABP_AriseGameProcessWithEvent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ExecuteUbergraph_BP_AriseGameProcessWithEvent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGameProcessWithEvent_C::ExecuteUbergraph_BP_AriseGameProcessWithEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ExecuteUbergraph_BP_AriseGameProcessWithEvent");

	ABP_AriseGameProcessWithEvent_C_ExecuteUbergraph_BP_AriseGameProcessWithEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
