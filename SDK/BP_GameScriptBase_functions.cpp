
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

// Function BP_GameScriptBase.BP_GameScriptBase_C.IsGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameScriptBase_C::IsGameStart(bool* Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameScriptBase.BP_GameScriptBase_C.IsGameStart");

	ABP_GameScriptBase_C_IsGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
}


// Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_GameScriptBase_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptState");

	ABP_GameScriptBase_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_GameScriptBase_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptName");

	ABP_GameScriptBase_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_GameScriptBase.BP_GameScriptBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameScriptBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameScriptBase.BP_GameScriptBase_C.UserConstructionScript");

	ABP_GameScriptBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
