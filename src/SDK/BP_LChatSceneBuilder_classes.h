#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LChatSceneBuilder.BP_LChatSceneBuilder_C
// 0x02B1 (0x06E1 - 0x0430)
class ABP_LChatSceneBuilder_C : public ALongChatSceneBuilder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             RootDir;                                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      LongChatPlayer;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULongChatDatabase*                           LongChatDatabase;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MasterTransform;                                          // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLongChatPlayArgs                           PlayArgs;                                                 // 0x0480(0x0050) (Edit, BlueprintVisible)
	float                                              OldWindStrengthScale;                                     // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FString                                     PrecaptureBG;                                             // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EnvName;                                                  // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       LCEnv;                                                    // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               MapEnv;                                                   // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeEnv;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	TArray<class ACharacter*>                          SpawnedCharacters;                                        // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FString>                             EntryCharNames;                                           // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAchCharacterBuildLoadRequestHandle> CharacterAssetHandles;                                    // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bPreCreateCharacter;                                      // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBuildEnd;                                                // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	struct FString                                     LCEnvLevelPath;                                           // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AArisePostProcessVolume*>             PushPostProcess;                                          // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                       PushPostProcessVisible;                                   // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UParticleSystem*>       ParticleAsset;                                            // 0x0588(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FString>               LoadingParticleAsset;                                     // 0x05D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoadParticleId;                                           // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	TArray<struct FString>                             LoadedAnimAssets;                                         // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       LoadedAnimSequences;                                      // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LoadStateCharacterAnimation;                              // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoadCharAnimId;                                           // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	TArray<struct FSoftClassPath>                      LoadedClass;                                              // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BP_LongChatPlayerAsset;                                   // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBPI_LongChatPlayer_C>      BPI_LongChatPlayer;                                       // 0x0680(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FAchCharacterBuildParameters> LoadBuildParam;                                           // 0x0690(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRandomCostume;                                           // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LChatSceneBuilder.BP_LChatSceneBuilder_C");
		return ptr;
	}


	void GetRandomCostume(const struct FString& PriName, const struct FString& SecName, const struct FString& PartsName, TArray<int>* Items, int* ItemID);
	struct FAchCharacterBuildParameters GetPlayerBuildParameter(const struct FString& CharName);
	void IsBPAssetsLoaded(bool* bLoaded);
	void OnStop();
	void OnResume();
	void OnPause();
	void IsPlayerFinalize(bool* bEnd);
	void IsNeedPlayEndMask(const struct FString& ChatName, bool* bNeed);
	void GetAnimSequenceSync(const struct FString& CharaName, const struct FString& animId, class UAnimSequence** AnimSequence);
	void UnloadCharAnimAsset();
	void IsCharacterAnimLoaded_(bool* bLoaded);
	void PerseAnimePath(const struct FString& animId, struct FSoftObjectPath* SoftPath);
	void InitializeCharacterAnimation(const struct FString& PathString);
	void UnloadParticleAsset();
	void IsParticleAssetsLoaded(bool* bLoaded);
	void InitializeParticleAsset(const struct FString& PathString);
	void GetParticleAsset(const struct FString& ParticleName, class UParticleSystem** ParticleObj);
	void IsCharacterAssetsLoaded(bool* bLoaded);
	void LoadAssets(class UObject* LoadedObject);
	void UnloadCharacterAssets();
	void LoadCharacterAssets(TArray<struct FString>* CharacterNameArray);
	void GetAnimSequence(const struct FString& CharaName, const struct FString& animId, class UAnimSequence** AnimSequence);
	void SetTickableWhenPausedAll(bool TiclableWhenPaused);
	void RefreshAttach(class ACharacter* Character);
	void _GetCharacterByName(const struct FString& CharaName, class ACharacter** Charcter, int* idx);
	void _SettingGuestCharacterCapsule(const struct FString& CharaName);
	void CreateCharacter(const struct FString& CharacterNama, class ACharacter** Character);
	void IsShowMapLevels(bool* bShow);
	void IsLCEnvUnloaded(bool* bUnloaded);
	void PopMapEnv();
	void IsShowLCEnv(bool* bShow);
	void ChangeLCEnv();
	void IsLevelLoaded(bool* bLoaded);
	void SetWindStrengthOverrid(float Scale);
	void IsPlayerPartyCharacter_(const struct FString& StrCharaID, bool* bPartyCharacter);
	void GetAnimInstClassByName(const struct FString& CharacterName, bool bGuest, class UClass** AnimClass);
	void MakeBuildParameter(const struct FString& CharacterName, bool bGuest, struct FAchCharacterBuildParameters* BuildParam);
	void ActivatePoseController(class AActor* AriseCharacter);
	void ChangeStringToCharID(const struct FString& StrCharaID, EArisePartyID* charId);
	void InitializeCharacter(const struct FString& ScriptFile);
	void Finalize();
	void IsEnd(bool* bEnd);
	void Initialize(const struct FString& LongchatName, const struct FLongChatPlayArgs& PlayArgs);
	void ScenePlay(bool bChangePlayerCameraView);
	void SceneBuild(const struct FTransform& Transform);
	void UserConstructionScript();
	void EventLoadStreamLevel();
	void EventUnloadStreamLevel();
	void EvCharacterPreCreate();
	void EventLoadingParticleAsset();
	void EventLodingCharacterAnimation();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LChatSceneBuilder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
