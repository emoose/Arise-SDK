
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

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetRandomCostume
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 PriName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 SecName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PartsName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::GetRandomCostume(const struct FString& PriName, const struct FString& SecName, const struct FString& PartsName, TArray<int>* Items, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetRandomCostume");

	ABP_LChatSceneBuilder_C_GetRandomCostume_Params params;
	params.PriName = PriName;
	params.SecName = SecName;
	params.PartsName = PartsName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetPlayerBuildParameter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CharName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FAchCharacterBuildParameters ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAchCharacterBuildParameters ABP_LChatSceneBuilder_C::GetPlayerBuildParameter(const struct FString& CharName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetPlayerBuildParameter");

	ABP_LChatSceneBuilder_C_GetPlayerBuildParameter_Params params;
	params.CharName = CharName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsBPAssetsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsBPAssetsLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsBPAssetsLoaded");

	ABP_LChatSceneBuilder_C_IsBPAssetsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnStop");

	ABP_LChatSceneBuilder_C_OnStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnResume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnResume");

	ABP_LChatSceneBuilder_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnPause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::OnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnPause");

	ABP_LChatSceneBuilder_C_OnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsPlayerFinalize(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerFinalize");

	ABP_LChatSceneBuilder_C_IsPlayerFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsNeedPlayEndMask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ChatName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bNeed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsNeedPlayEndMask(const struct FString& ChatName, bool* bNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsNeedPlayEndMask");

	ABP_LChatSceneBuilder_C_IsNeedPlayEndMask_Params params;
	params.ChatName = ChatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeed != nullptr)
		*bNeed = params.bNeed;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequenceSync
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 animId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UAnimSequence*           AnimSequence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::GetAnimSequenceSync(const struct FString& CharaName, const struct FString& animId, class UAnimSequence** AnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequenceSync");

	ABP_LChatSceneBuilder_C_GetAnimSequenceSync_Params params;
	params.CharaName = CharaName;
	params.animId = animId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSequence != nullptr)
		*AnimSequence = params.AnimSequence;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharAnimAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::UnloadCharAnimAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharAnimAsset");

	ABP_LChatSceneBuilder_C_UnloadCharAnimAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAnimLoaded?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsCharacterAnimLoaded_(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAnimLoaded?");

	ABP_LChatSceneBuilder_C_IsCharacterAnimLoaded__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PerseAnimePath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 animId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSoftObjectPath         SoftPath                       (Parm, OutParm)

void ABP_LChatSceneBuilder_C::PerseAnimePath(const struct FString& animId, struct FSoftObjectPath* SoftPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PerseAnimePath");

	ABP_LChatSceneBuilder_C_PerseAnimePath_Params params;
	params.animId = animId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoftPath != nullptr)
		*SoftPath = params.SoftPath;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacterAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PathString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatSceneBuilder_C::InitializeCharacterAnimation(const struct FString& PathString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacterAnimation");

	ABP_LChatSceneBuilder_C_InitializeCharacterAnimation_Params params;
	params.PathString = PathString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadParticleAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::UnloadParticleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadParticleAsset");

	ABP_LChatSceneBuilder_C_UnloadParticleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsParticleAssetsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsParticleAssetsLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsParticleAssetsLoaded");

	ABP_LChatSceneBuilder_C_IsParticleAssetsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeParticleAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PathString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatSceneBuilder_C::InitializeParticleAsset(const struct FString& PathString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeParticleAsset");

	ABP_LChatSceneBuilder_C_InitializeParticleAsset_Params params;
	params.PathString = PathString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetParticleAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ParticleName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UParticleSystem*         ParticleObj                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::GetParticleAsset(const struct FString& ParticleName, class UParticleSystem** ParticleObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetParticleAsset");

	ABP_LChatSceneBuilder_C_GetParticleAsset_Params params;
	params.ParticleName = ParticleName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleObj != nullptr)
		*ParticleObj = params.ParticleObj;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAssetsLoaded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsCharacterAssetsLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAssetsLoaded");

	ABP_LChatSceneBuilder_C_IsCharacterAssetsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadAssets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::LoadAssets(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadAssets");

	ABP_LChatSceneBuilder_C_LoadAssets_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharacterAssets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::UnloadCharacterAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharacterAssets");

	ABP_LChatSceneBuilder_C_UnloadCharacterAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadCharacterAssets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         CharacterNameArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_LChatSceneBuilder_C::LoadCharacterAssets(TArray<struct FString>* CharacterNameArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadCharacterAssets");

	ABP_LChatSceneBuilder_C_LoadCharacterAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterNameArray != nullptr)
		*CharacterNameArray = params.CharacterNameArray;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 animId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UAnimSequence*           AnimSequence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::GetAnimSequence(const struct FString& CharaName, const struct FString& animId, class UAnimSequence** AnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequence");

	ABP_LChatSceneBuilder_C_GetAnimSequence_Params params;
	params.CharaName = CharaName;
	params.animId = animId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSequence != nullptr)
		*AnimSequence = params.AnimSequence;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetTickableWhenPausedAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TiclableWhenPaused             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::SetTickableWhenPausedAll(bool TiclableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetTickableWhenPausedAll");

	ABP_LChatSceneBuilder_C_SetTickableWhenPausedAll_Params params;
	params.TiclableWhenPaused = TiclableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.RefreshAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::RefreshAttach(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.RefreshAttach");

	ABP_LChatSceneBuilder_C_RefreshAttach_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._GetCharacterByName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ACharacter*              Charcter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::_GetCharacterByName(const struct FString& CharaName, class ACharacter** Charcter, int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._GetCharacterByName");

	ABP_LChatSceneBuilder_C__GetCharacterByName_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charcter != nullptr)
		*Charcter = params.Charcter;
	if (idx != nullptr)
		*idx = params.idx;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._SettingGuestCharacterCapsule
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatSceneBuilder_C::_SettingGuestCharacterCapsule(const struct FString& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._SettingGuestCharacterCapsule");

	ABP_LChatSceneBuilder_C__SettingGuestCharacterCapsule_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.CreateCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterNama                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ACharacter*              Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::CreateCharacter(const struct FString& CharacterNama, class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.CreateCharacter");

	ABP_LChatSceneBuilder_C_CreateCharacter_Params params;
	params.CharacterNama = CharacterNama;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowMapLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsShowMapLevels(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowMapLevels");

	ABP_LChatSceneBuilder_C_IsShowMapLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLCEnvUnloaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsLCEnvUnloaded(bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLCEnvUnloaded");

	ABP_LChatSceneBuilder_C_IsLCEnvUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PopMapEnv
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::PopMapEnv()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PopMapEnv");

	ABP_LChatSceneBuilder_C_PopMapEnv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowLCEnv
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsShowLCEnv(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowLCEnv");

	ABP_LChatSceneBuilder_C_IsShowLCEnv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeLCEnv
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::ChangeLCEnv()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeLCEnv");

	ABP_LChatSceneBuilder_C_ChangeLCEnv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLevelLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsLevelLoaded(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLevelLoaded");

	ABP_LChatSceneBuilder_C_IsLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetWindStrengthOverrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::SetWindStrengthOverrid(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetWindStrengthOverrid");

	ABP_LChatSceneBuilder_C_SetWindStrengthOverrid_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerPartyCharacter?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 StrCharaID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bPartyCharacter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsPlayerPartyCharacter_(const struct FString& StrCharaID, bool* bPartyCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerPartyCharacter?");

	ABP_LChatSceneBuilder_C_IsPlayerPartyCharacter__Params params;
	params.StrCharaID = StrCharaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPartyCharacter != nullptr)
		*bPartyCharacter = params.bPartyCharacter;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimInstClassByName
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bGuest                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AnimClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::GetAnimInstClassByName(const struct FString& CharacterName, bool bGuest, class UClass** AnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimInstClassByName");

	ABP_LChatSceneBuilder_C_GetAnimInstClassByName_Params params;
	params.CharacterName = CharacterName;
	params.bGuest = bGuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimClass != nullptr)
		*AnimClass = params.AnimClass;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.MakeBuildParameter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bGuest                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAchCharacterBuildParameters BuildParam                     (Parm, OutParm)

void ABP_LChatSceneBuilder_C::MakeBuildParameter(const struct FString& CharacterName, bool bGuest, struct FAchCharacterBuildParameters* BuildParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.MakeBuildParameter");

	ABP_LChatSceneBuilder_C_MakeBuildParameter_Params params;
	params.CharacterName = CharacterName;
	params.bGuest = bGuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildParam != nullptr)
		*BuildParam = params.BuildParam;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ActivatePoseController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AriseCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::ActivatePoseController(class AActor* AriseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ActivatePoseController");

	ABP_LChatSceneBuilder_C_ActivatePoseController_Params params;
	params.AriseCharacter = AriseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeStringToCharID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 StrCharaID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EArisePartyID                  charId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::ChangeStringToCharID(const struct FString& StrCharaID, EArisePartyID* charId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeStringToCharID");

	ABP_LChatSceneBuilder_C_ChangeStringToCharID_Params params;
	params.StrCharaID = StrCharaID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (charId != nullptr)
		*charId = params.charId;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScriptFile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LChatSceneBuilder_C::InitializeCharacter(const struct FString& ScriptFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacter");

	ABP_LChatSceneBuilder_C_InitializeCharacter_Params params;
	params.ScriptFile = ScriptFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Finalize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Finalize");

	ABP_LChatSceneBuilder_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::IsEnd(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsEnd");

	ABP_LChatSceneBuilder_C_IsEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLongChatPlayArgs       PlayArgs                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LChatSceneBuilder_C::Initialize(const struct FString& LongchatName, const struct FLongChatPlayArgs& PlayArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Initialize");

	ABP_LChatSceneBuilder_C_Initialize_Params params;
	params.LongchatName = LongchatName;
	params.PlayArgs = PlayArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ScenePlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChangePlayerCameraView        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::ScenePlay(bool bChangePlayerCameraView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ScenePlay");

	ABP_LChatSceneBuilder_C_ScenePlay_Params params;
	params.bChangePlayerCameraView = bChangePlayerCameraView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SceneBuild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_LChatSceneBuilder_C::SceneBuild(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SceneBuild");

	ABP_LChatSceneBuilder_C_SceneBuild_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UserConstructionScript");

	ABP_LChatSceneBuilder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadStreamLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::EventLoadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadStreamLevel");

	ABP_LChatSceneBuilder_C_EventLoadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventUnloadStreamLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::EventUnloadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventUnloadStreamLevel");

	ABP_LChatSceneBuilder_C_EventUnloadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EvCharacterPreCreate
// (BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::EvCharacterPreCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EvCharacterPreCreate");

	ABP_LChatSceneBuilder_C_EvCharacterPreCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadingParticleAsset
// (BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::EventLoadingParticleAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadingParticleAsset");

	ABP_LChatSceneBuilder_C_EventLoadingParticleAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLodingCharacterAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_LChatSceneBuilder_C::EventLodingCharacterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLodingCharacterAnimation");

	ABP_LChatSceneBuilder_C_EventLodingCharacterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveEndPlay");

	ABP_LChatSceneBuilder_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LChatSceneBuilder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveBeginPlay");

	ABP_LChatSceneBuilder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ExecuteUbergraph_BP_LChatSceneBuilder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LChatSceneBuilder_C::ExecuteUbergraph_BP_LChatSceneBuilder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ExecuteUbergraph_BP_LChatSceneBuilder");

	ABP_LChatSceneBuilder_C_ExecuteUbergraph_BP_LChatSceneBuilder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
