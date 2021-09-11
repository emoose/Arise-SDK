
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

// Function BP_EncountGroup.BP_EncountGroup_C.MakeSurroundEncountParameter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         InEncountGroupNames            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)

void ABP_EncountGroup_C::MakeSurroundEncountParameter(TArray<struct FString> InEncountGroupNames, bool* Success, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.MakeSurroundEncountParameter");

	ABP_EncountGroup_C_MakeSurroundEncountParameter_Params params;
	params.InEncountGroupNames = InEncountGroupNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;
}


// Function BP_EncountGroup.BP_EncountGroup_C.MakeEncountParameter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InAutoSymbolName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           LockEntry                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBtlEncountGroupParam   Param                          (Parm, OutParm)
// struct FString                 EncountGroupName               (Parm, OutParm, ZeroConstructor)

void ABP_EncountGroup_C::MakeEncountParameter(const struct FString& InAutoSymbolName, bool* Success, bool* LockEntry, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.MakeEncountParameter");

	ABP_EncountGroup_C_MakeEncountParameter_Params params;
	params.InAutoSymbolName = InAutoSymbolName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (LockEntry != nullptr)
		*LockEntry = params.LockEntry;
	if (Param != nullptr)
		*Param = params.Param;
	if (EncountGroupName != nullptr)
		*EncountGroupName = params.EncountGroupName;
}


// Function BP_EncountGroup.BP_EncountGroup_C.GetUnloadBattleAssetUserImpl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Battle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 AutoSymbolName                 (Parm, OutParm, ZeroConstructor)
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)
// struct FName                   GroupID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::GetUnloadBattleAssetUserImpl(bool* Battle, struct FString* AutoSymbolName, struct FString* MapName, struct FName* GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.GetUnloadBattleAssetUserImpl");

	ABP_EncountGroup_C_GetUnloadBattleAssetUserImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Battle != nullptr)
		*Battle = params.Battle;
	if (AutoSymbolName != nullptr)
		*AutoSymbolName = params.AutoSymbolName;
	if (MapName != nullptr)
		*MapName = params.MapName;
	if (GroupID != nullptr)
		*GroupID = params.GroupID;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UpdateRareState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareState");

	ABP_EncountGroup_C_UpdateRareState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsLoadedSymbolAsset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountGroup_C::BPE_IsLoadedSymbolAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsLoadedSymbolAsset");

	ABP_EncountGroup_C_BPE_IsLoadedSymbolAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetupBattleAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SetupBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetupBattleAsset");

	ABP_EncountGroup_C_SetupBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.GetBossLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::GetBossLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.GetBossLevel");

	ABP_EncountGroup_C_GetBossLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetWakeupLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SetWakeupLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetWakeupLocation");

	ABP_EncountGroup_C_SetWakeupLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFadeOut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountGroup_C::BPE_IsFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFadeOut");

	ABP_EncountGroup_C_BPE_IsFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFollow
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountGroup_C::BPE_IsFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFollow");

	ABP_EncountGroup_C_BPE_IsFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsCanSpawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountGroup_C::BPE_IsCanSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsCanSpawn");

	ABP_EncountGroup_C_BPE_IsCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OutputParameter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FEncountSymbolGroupParamData Output                         (Parm, OutParm)

void ABP_EncountGroup_C::OutputParameter(struct FEncountSymbolGroupParamData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OutputParameter");

	ABP_EncountGroup_C_OutputParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetBattleEncount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlResultType                 BattleResult                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SetBattleEncount(EBtlResultType BattleResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetBattleEncount");

	ABP_EncountGroup_C_SetBattleEncount_Params params;
	params.BattleResult = BattleResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.GetBtlEncountGroupParam
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBtlEncountGroupParam   Result                         (Parm, OutParm)

void ABP_EncountGroup_C::GetBtlEncountGroupParam(struct FBtlEncountGroupParam* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.GetBtlEncountGroupParam");

	ABP_EncountGroup_C_GetBtlEncountGroupParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountGroup.BP_EncountGroup_C.PostSpawnProcessInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountSymbolBase_C* InSymbol                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFBP_EnSym_Placement_C* inPlacement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::PostSpawnProcessInternal(class ABP_EncountSymbolBase_C* InSymbol, class APFBP_EnSym_Placement_C* inPlacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.PostSpawnProcessInternal");

	ABP_EncountGroup_C_PostSpawnProcessInternal_Params params;
	params.InSymbol = InSymbol;
	params.inPlacement = inPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsBuildCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsBuildCompleted(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsBuildCompleted");

	ABP_EncountGroup_C_IsBuildCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsFindedSymbol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsFindedSymbol(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsFindedSymbol");

	ABP_EncountGroup_C_IsFindedSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SubFindedCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSymbol                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SubFindedCount(class AActor* InSymbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SubFindedCount");

	ABP_EncountGroup_C_SubFindedCount_Params params;
	params.InSymbol = InSymbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnDeleteSymbol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSymbol                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::OnDeleteSymbol(class AActor* InSymbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnDeleteSymbol");

	ABP_EncountGroup_C_OnDeleteSymbol_Params params;
	params.InSymbol = InSymbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.RemoveManagerAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::RemoveManagerAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.RemoveManagerAll");

	ABP_EncountGroup_C_RemoveManagerAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsPF
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsPF(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsPF");

	ABP_EncountGroup_C_IsPF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ChangeSymbolRare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Rare                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::ChangeSymbolRare(bool Rare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ChangeSymbolRare");

	ABP_EncountGroup_C_ChangeSymbolRare_Params params;
	params.Rare = Rare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareGroup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UpdateRareGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareGroup");

	ABP_EncountGroup_C_UpdateRareGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.DeactiveSymbol
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::DeactiveSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.DeactiveSymbol");

	ABP_EncountGroup_C_DeactiveSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsInvisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsInvisible(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsInvisible");

	ABP_EncountGroup_C_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_EncountGroup.BP_EncountGroup_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.Stop");

	ABP_EncountGroup_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.Restart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.Restart");

	ABP_EncountGroup_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SetActivate(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetActivate");

	ABP_EncountGroup_C_SetActivate_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsScenarioCondision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsScenarioCondision(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsScenarioCondision");

	ABP_EncountGroup_C_IsScenarioCondision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_EncountGroup.BP_EncountGroup_C.CheckSpawnID
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::CheckSpawnID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.CheckSpawnID");

	ABP_EncountGroup_C_CheckSpawnID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnGround
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFBP_EnSym_Placement_C* Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::OnGround(class APFBP_EnSym_Placement_C* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnGround");

	ABP_EncountGroup_C_OnGround_Params params;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.Respawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpdateRare                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::Respawn(bool UpdateRare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.Respawn");

	ABP_EncountGroup_C_Respawn_Params params;
	params.UpdateRare = UpdateRare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.CheckFinded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::CheckFinded(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.CheckFinded");

	ABP_EncountGroup_C_CheckFinded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnDelete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::OnDelete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnDelete");

	ABP_EncountGroup_C_OnDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsLoaded(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsLoaded");

	ABP_EncountGroup_C_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsCanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsCanSpawn(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsCanSpawn");

	ABP_EncountGroup_C_IsCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_EncountGroup.BP_EncountGroup_C.IsSpawnTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::IsSpawnTime(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.IsSpawnTime");

	ABP_EncountGroup_C_IsSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SpawnPlacement
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SpawnPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SpawnPlacement");

	ABP_EncountGroup_C_SpawnPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetupActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountSymbolBase_C* Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFBP_EnSym_Placement_C* Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SetupActor(class ABP_EncountSymbolBase_C* Symbol, class APFBP_EnSym_Placement_C* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetupActor");

	ABP_EncountGroup_C_SetupActor_Params params;
	params.Symbol = Symbol;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SpawnActor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFBP_EnSym_Placement_C* Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_EncountSymbolBase_C* Spawned                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SpawnActor(class APFBP_EnSym_Placement_C* Placement, class ABP_EncountSymbolBase_C** Spawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SpawnActor");

	ABP_EncountGroup_C_SpawnActor_Params params;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawned != nullptr)
		*Spawned = params.Spawned;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnSpawn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::OnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnSpawn");

	ABP_EncountGroup_C_OnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UserConstructionScript");

	ABP_EncountGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountBattleStateImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SetEncountBattleStateImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetEncountBattleStateImpl");

	ABP_EncountGroup_C_SetEncountBattleStateImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.DeleteSymbolImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::DeleteSymbolImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.DeleteSymbolImpl");

	ABP_EncountGroup_C_DeleteSymbolImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UpdateRareImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareImpl");

	ABP_EncountGroup_C_UpdateRareImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAssetImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UnloadBattleAssetImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAssetImpl");

	ABP_EncountGroup_C_UnloadBattleAssetImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.RespawnSymbolImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::RespawnSymbolImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.RespawnSymbolImpl");

	ABP_EncountGroup_C_RespawnSymbolImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ResetBattleFlagImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::ResetBattleFlagImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ResetBattleFlagImpl");

	ABP_EncountGroup_C_ResetBattleFlagImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.LoadBattleAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::LoadBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.LoadBattleAsset");

	ABP_EncountGroup_C_LoadBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UnloadBattleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAsset");

	ABP_EncountGroup_C_UnloadBattleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetBattleResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlResultType                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SetBattleResult(EBtlResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetBattleResult");

	ABP_EncountGroup_C_SetBattleResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnUnloadMapStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EncountGroup_C::OnUnloadMapStart(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnUnloadMapStart");

	ABP_EncountGroup_C_OnUnloadMapStart_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareStateImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::UpdateRareStateImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareStateImpl");

	ABP_EncountGroup_C_UpdateRareStateImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.InitCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::InitCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.InitCallback");

	ABP_EncountGroup_C_InitCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.TermCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::TermCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.TermCallback");

	ABP_EncountGroup_C_TermCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnChangeScenario
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::OnChangeScenario()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnChangeScenario");

	ABP_EncountGroup_C_OnChangeScenario_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::ScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ScenarioFlag");

	ABP_EncountGroup_C_ScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::ScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ScenarioCounter");

	ABP_EncountGroup_C_ScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnChangeGameState_BattleLoadCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::OnChangeGameState_BattleLoadCheck(EAriseGameState ChangeState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnChangeGameState_BattleLoadCheck");

	ABP_EncountGroup_C_OnChangeGameState_BattleLoadCheck_Params params;
	params.ChangeState = ChangeState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SpawnEncountSymbol
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::SpawnEncountSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SpawnEncountSymbol");

	ABP_EncountGroup_C_SpawnEncountSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.GroundEncountSymbol
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::GroundEncountSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.GroundEncountSymbol");

	ABP_EncountGroup_C_GroundEncountSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.RebuildEncountSymbol
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::RebuildEncountSymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.RebuildEncountSymbol");

	ABP_EncountGroup_C_RebuildEncountSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EncountGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ReceiveBeginPlay");

	ABP_EncountGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ReceiveEndPlay");

	ABP_EncountGroup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountGroupNames
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SetEncountGroupNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetEncountGroupNames");

	ABP_EncountGroup_C_SetEncountGroupNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountSymbolState
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::SetEncountSymbolState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SetEncountSymbolState");

	ABP_EncountGroup_C_SetEncountSymbolState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.AddFindedSymbol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountSymbolBase_C* Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::AddFindedSymbol(class ABP_EncountSymbolBase_C* Symbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.AddFindedSymbol");

	ABP_EncountGroup_C_AddFindedSymbol_Params params;
	params.Symbol = Symbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountSymbolBase_C* Symbol                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::RemoveFindedSymbol(class ABP_EncountSymbolBase_C* Symbol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbol");

	ABP_EncountGroup_C_RemoveFindedSymbol_Params params;
	params.Symbol = Symbol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbolAll
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::RemoveFindedSymbolAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbolAll");

	ABP_EncountGroup_C_RemoveFindedSymbolAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.SpawnPostProcess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APFEncountSymbol*        Symbol                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFEnSymPlacement*       Placement                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::SpawnPostProcess(class APFEncountSymbol* Symbol, class APFEnSymPlacement* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.SpawnPostProcess");

	ABP_EncountGroup_C_SpawnPostProcess_Params params;
	params.Symbol = Symbol;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ReceiveDestroyed");

	ABP_EncountGroup_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_Spawn
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::BPE_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_Spawn");

	ABP_EncountGroup_C_BPE_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_LoadBtlAsset
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::BPE_LoadBtlAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_LoadBtlAsset");

	ABP_EncountGroup_C_BPE_LoadBtlAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_UnloadBtlAsset
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::BPE_UnloadBtlAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_UnloadBtlAsset");

	ABP_EncountGroup_C_BPE_UnloadBtlAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_FadeOut
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::BPE_FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_FadeOut");

	ABP_EncountGroup_C_BPE_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.BPE_ExecFadeOut
// (Event, Public, BlueprintEvent)

void ABP_EncountGroup_C::BPE_ExecFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.BPE_ExecFadeOut");

	ABP_EncountGroup_C_BPE_ExecFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.OnReservedSpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountGroup_C::OnReservedSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.OnReservedSpawn");

	ABP_EncountGroup_C_OnReservedSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountGroup.BP_EncountGroup_C.ExecuteUbergraph_BP_EncountGroup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountGroup_C::ExecuteUbergraph_BP_EncountGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountGroup.BP_EncountGroup_C.ExecuteUbergraph_BP_EncountGroup");

	ABP_EncountGroup_C_ExecuteUbergraph_BP_EncountGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
