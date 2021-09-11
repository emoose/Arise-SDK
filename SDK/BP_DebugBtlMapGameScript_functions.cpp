
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

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.@InitializeEncount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMap                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMap                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_DebugBtlMapGameScript_C::@InitializeEncount(const struct FString& NewMap, const struct FString& OldMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.@InitializeEncount");

	ABP_DebugBtlMapGameScript_C_@InitializeEncount_Params params;
	params.NewMap = NewMap;
	params.OldMap = OldMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ApplyBattleWorldSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAriseWorldSettings*     AriseWorldSettings             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugBtlMapGameScript_C::ApplyBattleWorldSettings(class AAriseWorldSettings* AriseWorldSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ApplyBattleWorldSettings");

	ABP_DebugBtlMapGameScript_C_ApplyBattleWorldSettings_Params params;
	params.AriseWorldSettings = AriseWorldSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugBtlMapGameScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.UserConstructionScript");

	ABP_DebugBtlMapGameScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugBtlMapGameScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveBeginPlay");

	ABP_DebugBtlMapGameScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugBtlMapGameScript_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveTick");

	ABP_DebugBtlMapGameScript_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnBeginBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugBtlMapGameScript_C::OnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnBeginBattle");

	ABP_DebugBtlMapGameScript_C_OnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnEndBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugBtlMapGameScript_C::OnEndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnEndBattle");

	ABP_DebugBtlMapGameScript_C_OnEndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.BattleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugBtlMapGameScript_C::BattleEnd(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.BattleEnd");

	ABP_DebugBtlMapGameScript_C_BattleEnd_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ExecuteUbergraph_BP_DebugBtlMapGameScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugBtlMapGameScript_C::ExecuteUbergraph_BP_DebugBtlMapGameScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ExecuteUbergraph_BP_DebugBtlMapGameScript");

	ABP_DebugBtlMapGameScript_C_ExecuteUbergraph_BP_DebugBtlMapGameScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
