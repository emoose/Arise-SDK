
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

// Function BPD_BattleManager.BPD_BattleManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPD_BattleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.UserConstructionScript");

	ABPD_BattleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.OnComplete_14AF256D4E9CA85F82CCC2BF15003C1D
// (BlueprintCallable, BlueprintEvent)

void ABPD_BattleManager_C::OnComplete_14AF256D4E9CA85F82CCC2BF15003C1D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.OnComplete_14AF256D4E9CA85F82CCC2BF15003C1D");

	ABPD_BattleManager_C_OnComplete_14AF256D4E9CA85F82CCC2BF15003C1D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.ReceiveInitialize
// (Event, Public, BlueprintEvent)

void ABPD_BattleManager_C::ReceiveInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.ReceiveInitialize");

	ABPD_BattleManager_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.DebugOnBeginBattle
// (BlueprintCallable, BlueprintEvent)

void ABPD_BattleManager_C::DebugOnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.DebugOnBeginBattle");

	ABPD_BattleManager_C_DebugOnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPD_BattleManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.ReceiveBeginPlay");

	ABPD_BattleManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.ReceiveFinalize
// (Event, Public, BlueprintEvent)

void ABPD_BattleManager_C::ReceiveFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.ReceiveFinalize");

	ABPD_BattleManager_C_ReceiveFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_BattleManager.BPD_BattleManager_C.ExecuteUbergraph_BPD_BattleManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_BattleManager_C::ExecuteUbergraph_BPD_BattleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_BattleManager.BPD_BattleManager_C.ExecuteUbergraph_BPD_BattleManager");

	ABPD_BattleManager_C_ExecuteUbergraph_BPD_BattleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
