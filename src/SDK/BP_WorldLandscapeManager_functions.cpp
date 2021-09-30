
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

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldLandscapeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.UserConstructionScript");

	ABP_WorldLandscapeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuOpened
// (BlueprintCallable, BlueprintEvent)

void ABP_WorldLandscapeManager_C::OnMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuOpened");

	ABP_WorldLandscapeManager_C_OnMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_WorldLandscapeManager_C::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuClosed");

	ABP_WorldLandscapeManager_C_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.SetLandscapeTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldLandscapeManager_C::SetLandscapeTickEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.SetLandscapeTickEnabled");

	ABP_WorldLandscapeManager_C_SetLandscapeTickEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WorldLandscapeManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ReceiveBeginPlay");

	ABP_WorldLandscapeManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnSceneChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldLandscapeManager_C::OnSceneChanged(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnSceneChanged");

	ABP_WorldLandscapeManager_C_OnSceneChanged_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMapChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_WorldLandscapeManager_C::OnMapChanged(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMapChanged");

	ABP_WorldLandscapeManager_C_OnMapChanged_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ExecuteUbergraph_BP_WorldLandscapeManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldLandscapeManager_C::ExecuteUbergraph_BP_WorldLandscapeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ExecuteUbergraph_BP_WorldLandscapeManager");

	ABP_WorldLandscapeManager_C_ExecuteUbergraph_BP_WorldLandscapeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
