#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetRandomCostume
struct ABP_LChatSceneBuilder_C_GetRandomCostume_Params
{
	TArray<int>                                        Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     PriName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     SecName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PartsName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetPlayerBuildParameter
struct ABP_LChatSceneBuilder_C_GetPlayerBuildParameter_Params
{
	struct FString                                     CharName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FAchCharacterBuildParameters                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsBPAssetsLoaded
struct ABP_LChatSceneBuilder_C_IsBPAssetsLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnStop
struct ABP_LChatSceneBuilder_C_OnStop_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnResume
struct ABP_LChatSceneBuilder_C_OnResume_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.OnPause
struct ABP_LChatSceneBuilder_C_OnPause_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerFinalize
struct ABP_LChatSceneBuilder_C_IsPlayerFinalize_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsNeedPlayEndMask
struct ABP_LChatSceneBuilder_C_IsNeedPlayEndMask_Params
{
	struct FString                                     ChatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bNeed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequenceSync
struct ABP_LChatSceneBuilder_C_GetAnimSequenceSync_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     animId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UAnimSequence*                               AnimSequence;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharAnimAsset
struct ABP_LChatSceneBuilder_C_UnloadCharAnimAsset_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAnimLoaded?
struct ABP_LChatSceneBuilder_C_IsCharacterAnimLoaded__Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PerseAnimePath
struct ABP_LChatSceneBuilder_C_PerseAnimePath_Params
{
	struct FString                                     animId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSoftObjectPath                             SoftPath;                                                 // (Parm, OutParm)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacterAnimation
struct ABP_LChatSceneBuilder_C_InitializeCharacterAnimation_Params
{
	struct FString                                     PathString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadParticleAsset
struct ABP_LChatSceneBuilder_C_UnloadParticleAsset_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsParticleAssetsLoaded
struct ABP_LChatSceneBuilder_C_IsParticleAssetsLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeParticleAsset
struct ABP_LChatSceneBuilder_C_InitializeParticleAsset_Params
{
	struct FString                                     PathString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetParticleAsset
struct ABP_LChatSceneBuilder_C_GetParticleAsset_Params
{
	struct FString                                     ParticleName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UParticleSystem*                             ParticleObj;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsCharacterAssetsLoaded
struct ABP_LChatSceneBuilder_C_IsCharacterAssetsLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadAssets
struct ABP_LChatSceneBuilder_C_LoadAssets_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UnloadCharacterAssets
struct ABP_LChatSceneBuilder_C_UnloadCharacterAssets_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.LoadCharacterAssets
struct ABP_LChatSceneBuilder_C_LoadCharacterAssets_Params
{
	TArray<struct FString>                             CharacterNameArray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimSequence
struct ABP_LChatSceneBuilder_C_GetAnimSequence_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     animId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UAnimSequence*                               AnimSequence;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetTickableWhenPausedAll
struct ABP_LChatSceneBuilder_C_SetTickableWhenPausedAll_Params
{
	bool                                               TiclableWhenPaused;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.RefreshAttach
struct ABP_LChatSceneBuilder_C_RefreshAttach_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._GetCharacterByName
struct ABP_LChatSceneBuilder_C__GetCharacterByName_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ACharacter*                                  Charcter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C._SettingGuestCharacterCapsule
struct ABP_LChatSceneBuilder_C__SettingGuestCharacterCapsule_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.CreateCharacter
struct ABP_LChatSceneBuilder_C_CreateCharacter_Params
{
	struct FString                                     CharacterNama;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ACharacter*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowMapLevels
struct ABP_LChatSceneBuilder_C_IsShowMapLevels_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLCEnvUnloaded
struct ABP_LChatSceneBuilder_C_IsLCEnvUnloaded_Params
{
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.PopMapEnv
struct ABP_LChatSceneBuilder_C_PopMapEnv_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsShowLCEnv
struct ABP_LChatSceneBuilder_C_IsShowLCEnv_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeLCEnv
struct ABP_LChatSceneBuilder_C_ChangeLCEnv_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsLevelLoaded
struct ABP_LChatSceneBuilder_C_IsLevelLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SetWindStrengthOverrid
struct ABP_LChatSceneBuilder_C_SetWindStrengthOverrid_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsPlayerPartyCharacter?
struct ABP_LChatSceneBuilder_C_IsPlayerPartyCharacter__Params
{
	struct FString                                     StrCharaID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bPartyCharacter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.GetAnimInstClassByName
struct ABP_LChatSceneBuilder_C_GetAnimInstClassByName_Params
{
	struct FString                                     CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bGuest;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.MakeBuildParameter
struct ABP_LChatSceneBuilder_C_MakeBuildParameter_Params
{
	struct FString                                     CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bGuest;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAchCharacterBuildParameters                BuildParam;                                               // (Parm, OutParm)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ActivatePoseController
struct ABP_LChatSceneBuilder_C_ActivatePoseController_Params
{
	class AActor*                                      AriseCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ChangeStringToCharID
struct ABP_LChatSceneBuilder_C_ChangeStringToCharID_Params
{
	struct FString                                     StrCharaID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EArisePartyID                                      charId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.InitializeCharacter
struct ABP_LChatSceneBuilder_C_InitializeCharacter_Params
{
	struct FString                                     ScriptFile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Finalize
struct ABP_LChatSceneBuilder_C_Finalize_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.IsEnd
struct ABP_LChatSceneBuilder_C_IsEnd_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.Initialize
struct ABP_LChatSceneBuilder_C_Initialize_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLongChatPlayArgs                           PlayArgs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ScenePlay
struct ABP_LChatSceneBuilder_C_ScenePlay_Params
{
	bool                                               bChangePlayerCameraView;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.SceneBuild
struct ABP_LChatSceneBuilder_C_SceneBuild_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.UserConstructionScript
struct ABP_LChatSceneBuilder_C_UserConstructionScript_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadStreamLevel
struct ABP_LChatSceneBuilder_C_EventLoadStreamLevel_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventUnloadStreamLevel
struct ABP_LChatSceneBuilder_C_EventUnloadStreamLevel_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EvCharacterPreCreate
struct ABP_LChatSceneBuilder_C_EvCharacterPreCreate_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLoadingParticleAsset
struct ABP_LChatSceneBuilder_C_EventLoadingParticleAsset_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.EventLodingCharacterAnimation
struct ABP_LChatSceneBuilder_C_EventLodingCharacterAnimation_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveEndPlay
struct ABP_LChatSceneBuilder_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ReceiveBeginPlay
struct ABP_LChatSceneBuilder_C_ReceiveBeginPlay_Params
{
};

// Function BP_LChatSceneBuilder.BP_LChatSceneBuilder_C.ExecuteUbergraph_BP_LChatSceneBuilder
struct ABP_LChatSceneBuilder_C_ExecuteUbergraph_BP_LChatSceneBuilder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
