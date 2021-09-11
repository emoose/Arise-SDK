
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

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UseCamp
// (Public, BlueprintCallable, BlueprintEvent, Const)

void ABP_PF_CampActorBase_C::UseCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UseCamp");

	ABP_PF_CampActorBase_C_UseCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCampPattern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPFCampDatabaseData     CampData                       (Parm, OutParm)

void ABP_PF_CampActorBase_C::GetCampPattern(bool* bValid, struct FPFCampDatabaseData* CampData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCampPattern");

	ABP_PF_CampActorBase_C_GetCampPattern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (CampData != nullptr)
		*CampData = params.CampData;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetLookAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_CampActorBase_C::SetLookAtTarget(class APFNpcCharacterBase* Character, const struct FString& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetLookAtTarget");

	ABP_PF_CampActorBase_C_SetLookAtTarget_Params params;
	params.Character = Character;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetTalkGroup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::ResetTalkGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetTalkGroup");

	ABP_PF_CampActorBase_C_ResetTalkGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::SetCampVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampVisibility");

	ABP_PF_CampActorBase_C_SetCampVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AttachCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ChildActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AttachID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_CampActorBase_C::AttachCharacter(class AActor* ChildActor, const struct FString& AttachID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AttachCharacter");

	ABP_PF_CampActorBase_C_AttachCharacter_Params params;
	params.ChildActor = ChildActor;
	params.AttachID = AttachID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_NPC_CampWeapon_C* Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::AddWeapon(class ABP_PF_NPC_CampWeapon_C* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddWeapon");

	ABP_PF_CampActorBase_C_AddWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_PF_CampActorBase_C::AddCharacter(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddCharacter");

	ABP_PF_CampActorBase_C_AddCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsCharacterVisualChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bChange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::IsCharacterVisualChange(bool* bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsCharacterVisualChange");

	ABP_PF_CampActorBase_C_IsCharacterVisualChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacterByPartyID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NPC_CampCharacter_C* Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::FindCharacterByPartyID(EArisePartyID PartyId, bool* bFound, class ABP_PF_NPC_CampCharacter_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacterByPartyID");

	ABP_PF_CampActorBase_C_FindCharacterByPartyID_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacterByPartyID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::DestroyCharacterByPartyID(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacterByPartyID");

	ABP_PF_CampActorBase_C_DestroyCharacterByPartyID_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_PF_NPC_CampCharacter_C* Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::FindCharacter(const struct FString& CharacterID, bool* bFound, class ABP_PF_NPC_CampCharacter_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacter");

	ABP_PF_CampActorBase_C_FindCharacter_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddTalkGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::AddTalkGroup(const struct FString& Key, class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddTalkGroup");

	ABP_PF_CampActorBase_C_AddTalkGroup_Params params;
	params.Key = Key;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetRandomLotteryCampID
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPFCampDatabaseObject*   CampDatabase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CampID                         (Parm, OutParm, ZeroConstructor)

void ABP_PF_CampActorBase_C::GetRandomLotteryCampID(class UPFCampDatabaseObject* CampDatabase, struct FString* CampID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetRandomLotteryCampID");

	ABP_PF_CampActorBase_C_GetRandomLotteryCampID_Params params;
	params.CampDatabase = CampDatabase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CampID != nullptr)
		*CampID = params.CampID;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewCharacterID                 (Parm, OutParm, ZeroConstructor)

void ABP_PF_CampActorBase_C::GetCharacterID(int Index, const struct FString& CharacterID, bool* bResult, struct FString* NewCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCharacterID");

	ABP_PF_CampActorBase_C_GetCharacterID_Params params;
	params.Index = Index;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (NewCharacterID != nullptr)
		*NewCharacterID = params.NewCharacterID;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StopCamp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::StopCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StopCamp");

	ABP_PF_CampActorBase_C_StopCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StartCamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::StartCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StartCamp");

	ABP_PF_CampActorBase_C_StartCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UnloadCampAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::UnloadCampAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UnloadCampAsset");

	ABP_PF_CampActorBase_C_UnloadCampAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.LoadCampAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::LoadCampAsset(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.LoadCampAsset");

	ABP_PF_CampActorBase_C_LoadCampAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReadCampData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::ReadCampData(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReadCampData");

	ABP_PF_CampActorBase_C_ReadCampData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsResourceLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::IsResourceLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsResourceLoaded");

	ABP_PF_CampActorBase_C_IsResourceLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.CanPlayEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanPlay                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::CanPlayEvent(bool* bCanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.CanPlayEvent");

	ABP_PF_CampActorBase_C_CanPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanPlay != nullptr)
		*bCanPlay = params.bCanPlay;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetCampSceneCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::ResetCampSceneCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetCampSceneCamera");

	ABP_PF_CampActorBase_C_ResetCampSceneCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampSceneCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::SetCampSceneCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampSceneCamera");

	ABP_PF_CampActorBase_C_SetCampSceneCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::DestroyCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacter");

	ABP_PF_CampActorBase_C_DestroyCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SpawnCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::SpawnCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SpawnCharacter");

	ABP_PF_CampActorBase_C_SpawnCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_CampActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UserConstructionScript");

	ABP_PF_CampActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_CampActorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveBeginPlay");

	ABP_PF_CampActorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveEndPlay");

	ABP_PF_CampActorBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_CampActorBase_C::OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.OnMapChange");

	ABP_PF_CampActorBase_C_OnMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ExecuteUbergraph_BP_PF_CampActorBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_CampActorBase_C::ExecuteUbergraph_BP_PF_CampActorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ExecuteUbergraph_BP_PF_CampActorBase");

	ABP_PF_CampActorBase_C_ExecuteUbergraph_BP_PF_CampActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
