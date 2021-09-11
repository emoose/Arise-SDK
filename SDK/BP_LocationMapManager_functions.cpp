
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

// Function BP_LocationMapManager.BP_LocationMapManager_C.SetPlayerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_LocationMapManager_C::SetPlayerPosition(const struct FTransform& ActorTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.SetPlayerPosition");

	ABP_LocationMapManager_C_SetPlayerPosition_Params params;
	params.ActorTransform = ActorTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           LocationChanged                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::GetLocationName(const struct FString& LevelName, const struct FString& LocationName, bool* LocationChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationName");

	ABP_LocationMapManager_C_GetLocationName_Params params;
	params.LevelName = LevelName;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationChanged != nullptr)
		*LocationChanged = params.LocationChanged;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.SetForceAllOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::SetForceAllOpen(const struct FString& UserData, bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.SetForceAllOpen");

	ABP_LocationMapManager_C_SetForceAllOpen_Params params;
	params.UserData = UserData;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.IsForceAllOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsOpened                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::IsForceAllOpen(const struct FString& UserData, bool* IsOpened)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.IsForceAllOpen");

	ABP_LocationMapManager_C_IsForceAllOpen_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpened != nullptr)
		*IsOpened = params.IsOpened;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDummyUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::ShowDummyUI(bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDummyUI");

	ABP_LocationMapManager_C_ShowDummyUI_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FMapLocationData        LocationData                   (Parm, OutParm)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::GetLocationData(const struct FString& LocationName, struct FMapLocationData* LocationData, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.GetLocationData");

	ABP_LocationMapManager_C_GetLocationData_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationData != nullptr)
		*LocationData = params.LocationData;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDebug
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::ShowDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.ShowDebug");

	ABP_LocationMapManager_C_ShowDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.LoadDatabase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::LoadDatabase(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.LoadDatabase");

	ABP_LocationMapManager_C_LoadDatabase_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.LoadLocationMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::LoadLocationMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.LoadLocationMap");

	ABP_LocationMapManager_C_LoadLocationMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.UserConstructionScript");

	ABP_LocationMapManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.OnMapChange");

	ABP_LocationMapManager_C_OnMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::CustomEvent_1(const struct FString& NewLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_1");

	ABP_LocationMapManager_C_CustomEvent_1_Params params;
	params.NewLocationName = NewLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.DoCollectLocators
// (BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::DoCollectLocators()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.DoCollectLocators");

	ABP_LocationMapManager_C_DoCollectLocators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::CustomEvent_3(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.CustomEvent_3");

	ABP_LocationMapManager_C_CustomEvent_3_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LocationMapManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.ReceiveBeginPlay");

	ABP_LocationMapManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.ExecuteUbergraph_BP_LocationMapManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocationMapManager_C::ExecuteUbergraph_BP_LocationMapManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.ExecuteUbergraph_BP_LocationMapManager");

	ABP_LocationMapManager_C_ExecuteUbergraph_BP_LocationMapManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostLocationChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::EventPostLocationChange__DelegateSignature(const struct FString& NewLocationName, const struct FString& OldLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostLocationChange__DelegateSignature");

	ABP_LocationMapManager_C_EventPostLocationChange__DelegateSignature_Params params;
	params.NewLocationName = NewLocationName;
	params.OldLocationName = OldLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.OnPlayerMoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::OnPlayerMoved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.OnPlayerMoved__DelegateSignature");

	ABP_LocationMapManager_C_OnPlayerMoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventOnMenuLocationChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LocationMapManager_C::EventOnMenuLocationChanged__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventOnMenuLocationChanged__DelegateSignature");

	ABP_LocationMapManager_C_EventOnMenuLocationChanged__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventUpdateQuestLocator__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::EventUpdateQuestLocator__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventUpdateQuestLocator__DelegateSignature");

	ABP_LocationMapManager_C_EventUpdateQuestLocator__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostCollectionLocator__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::EventPostCollectionLocator__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventPostCollectionLocator__DelegateSignature");

	ABP_LocationMapManager_C_EventPostCollectionLocator__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventCollectionLocator__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::EventCollectionLocator__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventCollectionLocator__DelegateSignature");

	ABP_LocationMapManager_C_EventCollectionLocator__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocationMapManager.BP_LocationMapManager_C.EventLoadNewLocationMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LocationMapManager_C::EventLoadNewLocationMap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocationMapManager.BP_LocationMapManager_C.EventLoadNewLocationMap__DelegateSignature");

	ABP_LocationMapManager_C_EventLoadNewLocationMap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
