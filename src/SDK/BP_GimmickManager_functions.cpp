
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

// Function BP_GimmickManager.BP_GimmickManager_C.GetStreamData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Current_Map_Name               (Parm, OutParm, ZeroConstructor)
// struct FString                 LoadMapName                    (Parm, OutParm, ZeroConstructor)

void ABP_GimmickManager_C::GetStreamData(const struct FString& actorId, struct FString* Current_Map_Name, struct FString* LoadMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.GetStreamData");

	ABP_GimmickManager_C_GetStreamData_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Map_Name != nullptr)
		*Current_Map_Name = params.Current_Map_Name;
	if (LoadMapName != nullptr)
		*LoadMapName = params.LoadMapName;
}


// Function BP_GimmickManager.BP_GimmickManager_C.IsShowMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickManager_C::IsShowMap(bool Current, bool Next, const struct FString& actorId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.IsShowMap");

	ABP_GimmickManager_C_IsShowMap_Params params;
	params.Current = Current;
	params.Next = Next;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_GimmickManager.BP_GimmickManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GimmickManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.UserConstructionScript");

	ABP_GimmickManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.RegisterMapOrder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 CurrentMapName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LoadMapName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::RegisterMapOrder(const struct FString& actorId, const struct FString& CurrentMapName, const struct FString& LoadMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.RegisterMapOrder");

	ABP_GimmickManager_C_RegisterMapOrder_Params params;
	params.actorId = actorId;
	params.CurrentMapName = CurrentMapName;
	params.LoadMapName = LoadMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.PreloadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::PreloadMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.PreloadMap");

	ABP_GimmickManager_C_PreloadMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.UnloadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::UnloadMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.UnloadMap");

	ABP_GimmickManager_C_UnloadMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.ShowMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::ShowMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.ShowMap");

	ABP_GimmickManager_C_ShowMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.HideMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::HideMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.HideMap");

	ABP_GimmickManager_C_HideMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.ShowCurrentMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::ShowCurrentMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.ShowCurrentMap");

	ABP_GimmickManager_C_ShowCurrentMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.HideCurrentMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::HideCurrentMap(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.HideCurrentMap");

	ABP_GimmickManager_C_HideCurrentMap_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GimmickManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.ReceiveBeginPlay");

	ABP_GimmickManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.OnMapChangeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::OnMapChangeStart(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.OnMapChangeStart");

	ABP_GimmickManager_C_OnMapChangeStart_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.OnShowMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickManager_C::OnShowMap(const struct FName& LevelName, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.OnShowMap");

	ABP_GimmickManager_C_OnShowMap_Params params;
	params.LevelName = LevelName;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.BPE_UnloadLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GimmickManager_C::BPE_UnloadLevel(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.BPE_UnloadLevel");

	ABP_GimmickManager_C_BPE_UnloadLevel_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickManager.BP_GimmickManager_C.ExecuteUbergraph_BP_GimmickManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickManager_C::ExecuteUbergraph_BP_GimmickManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickManager.BP_GimmickManager_C.ExecuteUbergraph_BP_GimmickManager");

	ABP_GimmickManager_C_ExecuteUbergraph_BP_GimmickManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
