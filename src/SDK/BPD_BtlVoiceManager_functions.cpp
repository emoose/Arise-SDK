
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

// Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnCombEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void ABPD_BtlVoiceManager_C::OnCombEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnCombEvent");

	ABPD_BtlVoiceManager_C_OnCombEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnDeadEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void ABPD_BtlVoiceManager_C::OnDeadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnDeadEvent");

	ABPD_BtlVoiceManager_C_OnDeadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnDamageEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void ABPD_BtlVoiceManager_C::OnDamageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.OnDamageEvent");

	ABPD_BtlVoiceManager_C_OnDamageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPD_BtlVoiceManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BtlVoiceManager.BPD_BtlVoiceManager_C.UserConstructionScript");

	ABPD_BtlVoiceManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
