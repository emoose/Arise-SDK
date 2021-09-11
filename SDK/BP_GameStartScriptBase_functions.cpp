
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

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UpdateNewGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameStartScriptBase_C::UpdateNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UpdateNewGame");

	ABP_GameStartScriptBase_C_UpdateNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameStartScriptBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UserConstructionScript");

	ABP_GameStartScriptBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.InitializeGameData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   EndCallback                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GameStartScriptBase_C::InitializeGameData(const struct FAriseSimpleEventData& EndCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.InitializeGameData");

	ABP_GameStartScriptBase_C_InitializeGameData_Params params;
	params.EndCallback = EndCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.PlayFirstMovie
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   MovieEndCallback               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GameStartScriptBase_C::PlayFirstMovie(const struct FAriseSimpleEventData& MovieEndCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.PlayFirstMovie");

	ABP_GameStartScriptBase_C_PlayFirstMovie_Params params;
	params.MovieEndCallback = MovieEndCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.ExecuteUbergraph_BP_GameStartScriptBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameStartScriptBase_C::ExecuteUbergraph_BP_GameStartScriptBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.ExecuteUbergraph_BP_GameStartScriptBase");

	ABP_GameStartScriptBase_C_ExecuteUbergraph_BP_GameStartScriptBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnFirstMovieEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameStartScriptBase_C::OnFirstMovieEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnFirstMovieEnd__DelegateSignature");

	ABP_GameStartScriptBase_C_OnFirstMovieEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnGameDataInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameStartScriptBase_C::OnGameDataInitialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnGameDataInitialized__DelegateSignature");

	ABP_GameStartScriptBase_C_OnGameDataInitialized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
