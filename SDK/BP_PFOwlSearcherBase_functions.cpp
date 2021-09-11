
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

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLevelName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (Parm, OutParm, ZeroConstructor)

void ABP_PFOwlSearcherBase_C::GetCurrentLevelName(struct FString* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLevelName");

	ABP_PFOwlSearcherBase_C_GetCurrentLevelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentMapLocation             (Parm, OutParm, ZeroConstructor)

void ABP_PFOwlSearcherBase_C::GetCurrentLocation(struct FString* CurrentMapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLocation");

	ABP_PFOwlSearcherBase_C_GetCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMapLocation != nullptr)
		*CurrentMapLocation = params.CurrentMapLocation;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         FoundVoiceLabels               (Parm, OutParm, ZeroConstructor)

void ABP_PFOwlSearcherBase_C::GetFoundVoiceLabels(TArray<struct FString>* FoundVoiceLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabels");

	ABP_PFOwlSearcherBase_C_GetFoundVoiceLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundVoiceLabels != nullptr)
		*FoundVoiceLabels = params.FoundVoiceLabels;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UpdateFoundVoiceLabel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::UpdateFoundVoiceLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UpdateFoundVoiceLabel");

	ABP_PFOwlSearcherBase_C_UpdateFoundVoiceLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 FoundVoiceLabel                (Parm, OutParm, ZeroConstructor)

void ABP_PFOwlSearcherBase_C::GetFoundVoiceLabel(struct FString* FoundVoiceLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabel");

	ABP_PFOwlSearcherBase_C_GetFoundVoiceLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundVoiceLabel != nullptr)
		*FoundVoiceLabel = params.FoundVoiceLabel;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.IsInTownOrDungeon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PFOwlSearcherBase_C::IsInTownOrDungeon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.IsInTownOrDungeon");

	ABP_PFOwlSearcherBase_C_IsInTownOrDungeon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.RequestShortChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::RequestShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.RequestShortChat");

	ABP_PFOwlSearcherBase_C_RequestShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.SendCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFOwlSearcherBase_C::SendCommand(const struct FName& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.SendCommand");

	ABP_PFOwlSearcherBase_C_SendCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UserConstructionScript");

	ABP_PFOwlSearcherBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeSearchState
// (Event, Public, BlueprintEvent)
// Parameters:
// EPFOwlSearchState              InPrevState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPFOwlSearchState              InNextState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFOwlSearcherBase_C::ChangeSearchState(EPFOwlSearchState InPrevState, EPFOwlSearchState InNextState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeSearchState");

	ABP_PFOwlSearcherBase_C_ChangeSearchState_Params params;
	params.InPrevState = InPrevState;
	params.InNextState = InNextState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ReceiveBeginPlay");

	ABP_PFOwlSearcherBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeAvailable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFOwlSearcherBase_C::ChangeAvailable(bool bInAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeAvailable");

	ABP_PFOwlSearcherBase_C_ChangeAvailable_Params params;
	params.bInAvailable = bInAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnStartToFly
// (BlueprintCallable, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::OnStartToFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnStartToFly");

	ABP_PFOwlSearcherBase_C_OnStartToFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnEndToIdle
// (BlueprintCallable, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::OnEndToIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnEndToIdle");

	ABP_PFOwlSearcherBase_C_OnEndToIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnPostMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PFOwlSearcherBase_C::OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnPostMapChange");

	ABP_PFOwlSearcherBase_C_OnPostMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnBuild
// (Event, Public, BlueprintEvent)

void ABP_PFOwlSearcherBase_C::OnBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnBuild");

	ABP_PFOwlSearcherBase_C_OnBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ExecuteUbergraph_BP_PFOwlSearcherBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFOwlSearcherBase_C::ExecuteUbergraph_BP_PFOwlSearcherBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ExecuteUbergraph_BP_PFOwlSearcherBase");

	ABP_PFOwlSearcherBase_C_ExecuteUbergraph_BP_PFOwlSearcherBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
