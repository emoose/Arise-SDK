
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

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_OpenMenuScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptState");

	ABP_OpenMenuScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_OpenMenuScript_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptName");

	ABP_OpenMenuScript_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_OpenMenuScript.BP_OpenMenuScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OpenMenuScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.UserConstructionScript");

	ABP_OpenMenuScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenMenuScript.BP_OpenMenuScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OpenMenuScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.ReceiveBeginPlay");

	ABP_OpenMenuScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenMenuScript.BP_OpenMenuScript_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_OpenMenuScript_C::OpenMenu(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.OpenMenu");

	ABP_OpenMenuScript_C_OpenMenu_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenMenuScript.BP_OpenMenuScript_C.ExecuteUbergraph_BP_OpenMenuScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OpenMenuScript_C::ExecuteUbergraph_BP_OpenMenuScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenMenuScript.BP_OpenMenuScript_C.ExecuteUbergraph_BP_OpenMenuScript");

	ABP_OpenMenuScript_C_ExecuteUbergraph_BP_OpenMenuScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
