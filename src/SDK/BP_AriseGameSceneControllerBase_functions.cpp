
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

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPrint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Header                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_AriseGameSceneControllerBase_C::DebugPrintSceneState(bool bPrint, const struct FString& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.DebugPrintSceneState");

	UBP_AriseGameSceneControllerBase_C_DebugPrintSceneState_Params params;
	params.bPrint = bPrint;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.UnloadThisSceneStreamLevels
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameSceneControllerBase_C::UnloadThisSceneStreamLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.UnloadThisSceneStreamLevels");

	UBP_AriseGameSceneControllerBase_C_UnloadThisSceneStreamLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.LoadThisSceneStreamLevels
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameSceneControllerBase_C::LoadThisSceneStreamLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.LoadThisSceneStreamLevels");

	UBP_AriseGameSceneControllerBase_C_LoadThisSceneStreamLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.AddThisSceneStreamLevels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameScene                SceneID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseGameSceneControllerBase_C::AddThisSceneStreamLevels(EAriseGameScene SceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.AddThisSceneStreamLevels");

	UBP_AriseGameSceneControllerBase_C_AddThisSceneStreamLevels_Params params;
	params.SceneID = SceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.GetAriseGameMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseGameSceneControllerBase_C::GetAriseGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.GetAriseGameMode");

	UBP_AriseGameSceneControllerBase_C_GetAriseGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
