
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

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_DownloadShopScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptState");

	ABP_DownloadShopScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MyName                         (Parm, OutParm, ZeroConstructor)

void ABP_DownloadShopScript_C::GetScriptName(struct FString* MyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptName");

	ABP_DownloadShopScript_C_GetScriptName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyName != nullptr)
		*MyName = params.MyName;
}


// Function BP_DownloadShopScript.BP_DownloadShopScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DownloadShopScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DownloadShopScript.BP_DownloadShopScript_C.UserConstructionScript");

	ABP_DownloadShopScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DownloadShopScript.BP_DownloadShopScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DownloadShopScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DownloadShopScript.BP_DownloadShopScript_C.ReceiveBeginPlay");

	ABP_DownloadShopScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DownloadShopScript.BP_DownloadShopScript_C.ExecuteUbergraph_BP_DownloadShopScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DownloadShopScript_C::ExecuteUbergraph_BP_DownloadShopScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DownloadShopScript.BP_DownloadShopScript_C.ExecuteUbergraph_BP_DownloadShopScript");

	ABP_DownloadShopScript_C_ExecuteUbergraph_BP_DownloadShopScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
