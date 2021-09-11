
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

// Function BP_LoadGameScript.BP_LoadGameScript_C.IsGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LoadGameScript_C::IsGameStart(bool* Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.IsGameStart");

	ABP_LoadGameScript_C_IsGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
}


// Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_LoadGameScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptState");

	ABP_LoadGameScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_LoadGameScript_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptName");

	ABP_LoadGameScript_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_LoadGameScript.BP_LoadGameScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LoadGameScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.UserConstructionScript");

	ABP_LoadGameScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameScript.BP_LoadGameScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LoadGameScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.ReceiveBeginPlay");

	ABP_LoadGameScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameScript.BP_LoadGameScript_C.ExecuteUbergraph_BP_LoadGameScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LoadGameScript_C::ExecuteUbergraph_BP_LoadGameScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameScript.BP_LoadGameScript_C.ExecuteUbergraph_BP_LoadGameScript");

	ABP_LoadGameScript_C_ExecuteUbergraph_BP_LoadGameScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
