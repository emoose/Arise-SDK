
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

// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.LoadMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayTitleMovieScript_C::LoadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.LoadMap");

	ABP_PlayTitleMovieScript_C_LoadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ABP_PlayTitleMovieScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.GetScriptState");

	ABP_PlayTitleMovieScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayTitleMovieScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.UserConstructionScript");

	ABP_PlayTitleMovieScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayTitleMovieScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.ReceiveBeginPlay");

	ABP_PlayTitleMovieScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.񣌘򠳾񍯐�0�0_1
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayTitleMovieScript_C::񣌘򠳾񍯐�0�0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.񣌘򠳾񍯐�0�0_1");

	ABP_PlayTitleMovieScript_C_񣌘򠳾񍯐�0�0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.񣌘򠳾񍯐�0�0_2
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayTitleMovieScript_C::񣌘򠳾񍯐�0�0_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.񣌘򠳾񍯐�0�0_2");

	ABP_PlayTitleMovieScript_C_񣌘򠳾񍯐�0�0_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.ExecuteUbergraph_BP_PlayTitleMovieScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayTitleMovieScript_C::ExecuteUbergraph_BP_PlayTitleMovieScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayTitleMovieScript.BP_PlayTitleMovieScript_C.ExecuteUbergraph_BP_PlayTitleMovieScript");

	ABP_PlayTitleMovieScript_C_ExecuteUbergraph_BP_PlayTitleMovieScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
