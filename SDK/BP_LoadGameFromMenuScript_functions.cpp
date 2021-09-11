
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

// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.UserConstructionScript");

	ABP_LoadGameFromMenuScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Preload Map
// (BlueprintCallable, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::Phase_Preload_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Preload Map");

	ABP_LoadGameFromMenuScript_C_Phase_Preload_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Chara Build
// (BlueprintCallable, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::Phase_Chara_Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Chara Build");

	ABP_LoadGameFromMenuScript_C_Phase_Chara_Build_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Change Map
// (BlueprintCallable, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::Phase_Change_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Change Map");

	ABP_LoadGameFromMenuScript_C_Phase_Change_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Quit
// (BlueprintCallable, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::Phase_Quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.Phase Quit");

	ABP_LoadGameFromMenuScript_C_Phase_Quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LoadGameFromMenuScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.ReceiveBeginPlay");

	ABP_LoadGameFromMenuScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.ExecuteUbergraph_BP_LoadGameFromMenuScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LoadGameFromMenuScript_C::ExecuteUbergraph_BP_LoadGameFromMenuScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadGameFromMenuScript.BP_LoadGameFromMenuScript_C.ExecuteUbergraph_BP_LoadGameFromMenuScript");

	ABP_LoadGameFromMenuScript_C_ExecuteUbergraph_BP_LoadGameFromMenuScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
