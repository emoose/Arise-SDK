
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

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndOverlimitsUnit
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnEndOverlimitsUnit(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndOverlimitsUnit");

	ABP_BtlAssetManager_C_OnEndOverlimitsUnit_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBeginOverlimitsUnit
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnBeginOverlimitsUnit(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBeginOverlimitsUnit");

	ABP_BtlAssetManager_C_OnBeginOverlimitsUnit_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.GetMysticLabels
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           MysticLabels                   (Parm, OutParm, ZeroConstructor)

void ABP_BtlAssetManager_C::GetMysticLabels(class ABtlCharacterBase* Unit, TArray<struct FName>* MysticLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.GetMysticLabels");

	ABP_BtlAssetManager_C_GetMysticLabels_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MysticLabels != nullptr)
		*MysticLabels = params.MysticLabels;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBackTitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAssetManager_C::OnBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBackTitle");

	ABP_BtlAssetManager_C_OnBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsSortWarHandle
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleWarAssetHandle   Lhs                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleWarAssetHandle   Rhs                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlAssetManager_C::IsSortWarHandle(const struct FBattleWarAssetHandle& Lhs, const struct FBattleWarAssetHandle& Rhs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsSortWarHandle");

	ABP_BtlAssetManager_C_IsSortWarHandle_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPreMapChangeNative
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PrevMapName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_BtlAssetManager_C::OnPreMapChangeNative(const struct FString& NewMapName, const struct FString& PrevMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPreMapChangeNative");

	ABP_BtlAssetManager_C_OnPreMapChangeNative_Params params;
	params.NewMapName = NewMapName;
	params.PrevMapName = PrevMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnChangeState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnChangeState(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnChangeState");

	ABP_BtlAssetManager_C_OnChangeState_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsBattleAssetLoadable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsLoadable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::IsBattleAssetLoadable(bool* IsLoadable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsBattleAssetLoadable");

	ABP_BtlAssetManager_C_IsBattleAssetLoadable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLoadable != nullptr)
		*IsLoadable = params.IsLoadable;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnSaveDataLoadComplated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAssetManager_C::OnSaveDataLoadComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnSaveDataLoadComplated");

	ABP_BtlAssetManager_C_OnSaveDataLoadComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncGuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGuestID                  GuestId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::LoadAsyncGuest(EAriseGuestID GuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncGuest");

	ABP_BtlAssetManager_C_LoadAsyncGuest_Params params;
	params.GuestId = GuestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::LoadAsyncParty(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncParty");

	ABP_BtlAssetManager_C_LoadAsyncParty_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadParty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EArisePartyID>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::UnLoadParty(bool bForce, TArray<EArisePartyID>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadParty");

	ABP_BtlAssetManager_C_UnLoadParty_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadGuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EAriseGuestID>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::UnLoadGuest(bool bForce, TArray<EAriseGuestID>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadGuest");

	ABP_BtlAssetManager_C_UnLoadGuest_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAssetManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UserConstructionScript");

	ABP_BtlAssetManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncPartyUnit
// (Event, Public, BlueprintEvent)

void ABP_BtlAssetManager_C::LoadAsyncPartyUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncPartyUnit");

	ABP_BtlAssetManager_C_LoadAsyncPartyUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadPartyUnit
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::UnloadPartyUnit(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadPartyUnit");

	ABP_BtlAssetManager_C_UnloadPartyUnit_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlAssetManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveBeginPlay");

	ABP_BtlAssetManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyIn
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePartyID                  InPartyID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnPartyIn(EArisePartyID InPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyIn");

	ABP_BtlAssetManager_C_OnPartyIn_Params params;
	params.InPartyID = InPartyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOut
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePartyID                  OutPartyID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnPartyOut(EArisePartyID OutPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOut");

	ABP_BtlAssetManager_C_OnPartyOut_Params params;
	params.OutPartyID = OutPartyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestIn
// (Event, Public, BlueprintEvent)
// Parameters:
// EAriseGuestID                  InGuestID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnGuestIn(EAriseGuestID InGuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestIn");

	ABP_BtlAssetManager_C_OnGuestIn_Params params;
	params.InGuestID = InGuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestOut
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<EAriseGuestID>          OutGuestID                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BtlAssetManager_C::OnGuestOut(TArray<EAriseGuestID> OutGuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestOut");

	ABP_BtlAssetManager_C_OnGuestOut_Params params;
	params.OutGuestID = OutGuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadResidentRequiredAssets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAssetManager_C::LoadResidentRequiredAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadResidentRequiredAssets");

	ABP_BtlAssetManager_C_LoadResidentRequiredAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadResidentRequiredAssets
// (Event, Public, BlueprintEvent)

void ABP_BtlAssetManager_C::UnloadResidentRequiredAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadResidentRequiredAssets");

	ABP_BtlAssetManager_C_UnloadResidentRequiredAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveEndPlay");

	ABP_BtlAssetManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOrderLoadComplated
// (Event, Public, BlueprintEvent)

void ABP_BtlAssetManager_C::OnPartyOrderLoadComplated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOrderLoadComplated");

	ABP_BtlAssetManager_C_OnPartyOrderLoadComplated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnReplaceGuestUnitId
// (Event, Public, BlueprintEvent)
// Parameters:
// EAriseGuestID                  GuestId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewGuestUnitID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PrevGuestUnitID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::OnReplaceGuestUnitId(EAriseGuestID GuestId, const struct FName& NewGuestUnitID, const struct FName& PrevGuestUnitID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnReplaceGuestUnitId");

	ABP_BtlAssetManager_C_OnReplaceGuestUnitId_Params params;
	params.GuestId = GuestId;
	params.NewGuestUnitID = NewGuestUnitID;
	params.PrevGuestUnitID = PrevGuestUnitID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadBattleMapCore
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   BattleMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::UnloadBattleMapCore(const struct FName& BattleMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadBattleMapCore");

	ABP_BtlAssetManager_C_UnloadBattleMapCore_Params params;
	params.BattleMap = BattleMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadBattleMapCore
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   BattleMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::LoadBattleMapCore(const struct FName& BattleMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadBattleMapCore");

	ABP_BtlAssetManager_C_LoadBattleMapCore_Params params;
	params.BattleMap = BattleMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlAssetManager_C::OnEndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndBattle");

	ABP_BtlAssetManager_C_OnEndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ExecuteUbergraph_BP_BtlAssetManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAssetManager_C::ExecuteUbergraph_BP_BtlAssetManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAssetManager.BP_BtlAssetManager_C.ExecuteUbergraph_BP_BtlAssetManager");

	ABP_BtlAssetManager_C_ExecuteUbergraph_BP_BtlAssetManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
