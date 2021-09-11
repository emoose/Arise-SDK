
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

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExNewGameScript_C::IsGameStart(bool* Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsGameStart");

	ABP_ExNewGameScript_C_IsGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ArtifactFlagCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ExNewGameScript_C::ArtifactFlagCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.ArtifactFlagCheck");

	ABP_ExNewGameScript_C_ArtifactFlagCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsDatabaseLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ExNewGameScript_C::IsDatabaseLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsDatabaseLoaded");

	ABP_ExNewGameScript_C_IsDatabaseLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_ExNewGameScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptState");

	ABP_ExNewGameScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_ExNewGameScript_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptName");

	ABP_ExNewGameScript_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExNewGameScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.UserConstructionScript");

	ABP_ExNewGameScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExNewGameScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.ReceiveBeginPlay");

	ABP_ExNewGameScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)

void ABP_ExNewGameScript_C::«0¹0¿0à0¤0Ù0ó0È0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	ABP_ExNewGameScript_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_2
// (BlueprintCallable, BlueprintEvent)

void ABP_ExNewGameScript_C::«0¹0¿0à0¤0Ù0ó0È0_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_2");

	ABP_ExNewGameScript_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ExecuteUbergraph_BP_ExNewGameScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExNewGameScript_C::ExecuteUbergraph_BP_ExNewGameScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExNewGameScript.BP_ExNewGameScript_C.ExecuteUbergraph_BP_ExNewGameScript");

	ABP_ExNewGameScript_C_ExecuteUbergraph_BP_ExNewGameScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
