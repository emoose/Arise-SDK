
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

// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_DebugMapStartScrip_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.GetScriptState");

	ABP_DebugMapStartScrip_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_DebugMapStartScrip_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.GetScriptName");

	ABP_DebugMapStartScrip_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugMapStartScrip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.UserConstructionScript");

	ABP_DebugMapStartScrip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugMapStartScrip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.ReceiveBeginPlay");

	ABP_DebugMapStartScrip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugMapStartScrip_C::«0¹0¿0à0¤0Ù0ó0È0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	ABP_DebugMapStartScrip_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.ExecuteUbergraph_BP_DebugMapStartScrip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugMapStartScrip_C::ExecuteUbergraph_BP_DebugMapStartScrip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugMapStartScrip.BP_DebugMapStartScrip_C.ExecuteUbergraph_BP_DebugMapStartScrip");

	ABP_DebugMapStartScrip_C_ExecuteUbergraph_BP_DebugMapStartScrip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
