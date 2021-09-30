
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

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.GetDebugColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_PF_NpcManager_C::GetDebugColor(int Num, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.GetDebugColor");

	ABP_PF_NpcManager_C_GetDebugColor_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.IsSpawnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcManager_C::IsSpawnable(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.IsSpawnable");

	ABP_PF_NpcManager_C_IsSpawnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnMinimapRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcManager_C::OnMinimapRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnMinimapRefresh");

	ABP_PF_NpcManager_C_OnMinimapRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnBuild
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_NpcManager_C::OnBuild(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnBuild");

	ABP_PF_NpcManager_C_OnBuild_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.UserConstructionScript");

	ABP_PF_NpcManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveSpawnAll
// (Event, Public, BlueprintEvent)
// Parameters:
// EPFNpcSpawnType                SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcManager_C::ReceiveSpawnAll(EPFNpcSpawnType SpawnType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveSpawnAll");

	ABP_PF_NpcManager_C_ReceiveSpawnAll_Params params;
	params.SpawnType = SpawnType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveRemoveAll
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcManager_C::ReceiveRemoveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveRemoveAll");

	ABP_PF_NpcManager_C_ReceiveRemoveAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveBeginPlay");

	ABP_PF_NpcManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnPreMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_NpcManager_C::OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnPreMapChange");

	ABP_PF_NpcManager_C_OnPreMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnChangeDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcManager_C::OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnChangeDisplayScene");

	ABP_PF_NpcManager_C_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ExecuteUbergraph_BP_PF_NpcManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcManager_C::ExecuteUbergraph_BP_PF_NpcManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcManager.BP_PF_NpcManager_C.ExecuteUbergraph_BP_PF_NpcManager");

	ABP_PF_NpcManager_C_ExecuteUbergraph_BP_PF_NpcManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
