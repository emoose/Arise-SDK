
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

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.SCPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InPause                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePFSCPauseState           InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::SCPause(bool InPause, EArisePFSCPauseState InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.SCPause");

	ABP_Camp_SCHManager_C_SCPause_Params params;
	params.InPause = InPause;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Camp_SCHManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.UserConstructionScript");

	ABP_Camp_SCHManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveTick");

	ABP_Camp_SCHManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Camp_SCHManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveBeginPlay");

	ABP_Camp_SCHManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveEndPlay");

	ABP_Camp_SCHManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.StartShortChat
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 FaceIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Camp_SCHManager_C::StartShortChat(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.StartShortChat");

	ABP_Camp_SCHManager_C_StartShortChat_Params params;
	params.FaceIcon = FaceIcon;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.EndShortChat
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bAbort                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::EndShortChat(bool bAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.EndShortChat");

	ABP_Camp_SCHManager_C_EndShortChat_Params params;
	params.bAbort = bAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ResumeShortChat
// (Event, Public, BlueprintEvent)

void ABP_Camp_SCHManager_C::ResumeShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ResumeShortChat");

	ABP_Camp_SCHManager_C_ResumeShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.PauseShortChat
// (Event, Public, BlueprintEvent)

void ABP_Camp_SCHManager_C::PauseShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.PauseShortChat");

	ABP_Camp_SCHManager_C_PauseShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecutePause
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePFSCPauseState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::ExecutePause(EArisePFSCPauseState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecutePause");

	ABP_Camp_SCHManager_C_ExecutePause_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteReleasePause
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePFSCPauseState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::ExecuteReleasePause(EArisePFSCPauseState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteReleasePause");

	ABP_Camp_SCHManager_C_ExecuteReleasePause_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteUbergraph_BP_Camp_SCHManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Camp_SCHManager_C::ExecuteUbergraph_BP_Camp_SCHManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteUbergraph_BP_Camp_SCHManager");

	ABP_Camp_SCHManager_C_ExecuteUbergraph_BP_Camp_SCHManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
