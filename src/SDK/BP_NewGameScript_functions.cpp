
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

// Function BP_NewGameScript.BP_NewGameScript_C.GetMenuManager_local
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NewGameScript_C::GetMenuManager_local(TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.GetMenuManager_local");

	ABP_NewGameScript_C_GetMenuManager_local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuManagerInterface != nullptr)
		*MenuManagerInterface = params.MenuManagerInterface;
}


// Function BP_NewGameScript.BP_NewGameScript_C.UpdateNewGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NewGameScript_C::UpdateNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.UpdateNewGame");

	ABP_NewGameScript_C_UpdateNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewGameScript.BP_NewGameScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NewGameScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.UserConstructionScript");

	ABP_NewGameScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewGameScript.BP_NewGameScript_C.InitializeGameData
// (BlueprintCallable, BlueprintEvent)

void ABP_NewGameScript_C::InitializeGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.InitializeGameData");

	ABP_NewGameScript_C_InitializeGameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewGameScript.BP_NewGameScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NewGameScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.ReceiveBeginPlay");

	ABP_NewGameScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewGameScript.BP_NewGameScript_C.ExecuteUbergraph_BP_NewGameScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewGameScript_C::ExecuteUbergraph_BP_NewGameScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewGameScript.BP_NewGameScript_C.ExecuteUbergraph_BP_NewGameScript");

	ABP_NewGameScript_C_ExecuteUbergraph_BP_NewGameScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
