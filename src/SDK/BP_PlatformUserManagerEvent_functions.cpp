
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

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.RemoveSysWindowPadProcessUnderLayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::RemoveSysWindowPadProcessUnderLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.RemoveSysWindowPadProcessUnderLayer");

	ABP_PlatformUserManagerEvent_C_RemoveSysWindowPadProcessUnderLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CreateSysWindowPadProcessUnderLayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::CreateSysWindowPadProcessUnderLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CreateSysWindowPadProcessUnderLayer");

	ABP_PlatformUserManagerEvent_C_CreateSysWindowPadProcessUnderLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CanUserEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::CanUserEvent(bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CanUserEvent");

	ABP_PlatformUserManagerEvent_C_CanUserEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ok != nullptr)
		*ok = params.ok;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CallSystemPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPause                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::CallSystemPause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CallSystemPause");

	ABP_PlatformUserManagerEvent_C_CallSystemPause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.GotoTitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::GotoTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.GotoTitle");

	ABP_PlatformUserManagerEvent_C_GotoTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckReconnectPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ControllerId                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::CheckReconnectPad(int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckReconnectPad");

	ABP_PlatformUserManagerEvent_C_CheckReconnectPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AMenuPadProcess*> MenuPadProcessArray            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AMenuPadProcess*         MenuPadProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::CheckPad(TArray<class AMenuPadProcess*>* MenuPadProcessArray, class AMenuPadProcess** MenuPadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckPad");

	ABP_PlatformUserManagerEvent_C_CheckPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuPadProcessArray != nullptr)
		*MenuPadProcessArray = params.MenuPadProcessArray;
	if (MenuPadProcess != nullptr)
		*MenuPadProcess = params.MenuPadProcess;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenLogout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::OpenLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenLogout");

	ABP_PlatformUserManagerEvent_C_OpenLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenReconnectController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::OpenReconnectController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenReconnectController");

	ABP_PlatformUserManagerEvent_C_OpenReconnectController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.UserConstructionScript");

	ABP_PlatformUserManagerEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventReconnectController
// (BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::EventReconnectController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventReconnectController");

	ABP_PlatformUserManagerEvent_C_EventReconnectController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventLogoutMessaging
// (BlueprintCallable, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::EventLogoutMessaging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventLogoutMessaging");

	ABP_PlatformUserManagerEvent_C_EventLogoutMessaging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnLogoutMessaging
// (Event, Public, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::OnLogoutMessaging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnLogoutMessaging");

	ABP_PlatformUserManagerEvent_C_OnLogoutMessaging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnReconnectController
// (Event, Public, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::OnReconnectController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnReconnectController");

	ABP_PlatformUserManagerEvent_C_OnReconnectController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveTick");

	ABP_PlatformUserManagerEvent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlatformUserManagerEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveBeginPlay");

	ABP_PlatformUserManagerEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ExecuteUbergraph_BP_PlatformUserManagerEvent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlatformUserManagerEvent_C::ExecuteUbergraph_BP_PlatformUserManagerEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ExecuteUbergraph_BP_PlatformUserManagerEvent");

	ABP_PlatformUserManagerEvent_C_ExecuteUbergraph_BP_PlatformUserManagerEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
