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

// BlueprintGeneratedClass BP_EncountGroup.BP_EncountGroup_C
// 0x0092 (0x0552 - 0x04C0)
class ABP_EncountGroup_C : public ABP_EncountGroupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (Transient, DuplicateTransient)
	class UBP_SCHOBJ_EncBoss_C*                        BP_SCHOBJ_EncBoss;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SpawnID;                                                  // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOverwriteGiveup;                                         // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              GiveupTime;                                               // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollow;                                                  // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBoss;                                                    // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoaded;                                                  // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFading;                                                  // 0x04EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRare;                                                    // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitActivated;                                           // 0x04ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReservedSpawn;                                           // 0x04EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04EF(0x0001) MISSED OFFSET
	TArray<class AActor*>                              FindedSymbolCount;                                        // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             SpawnParticle;                                            // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SpawnSoundLabel;                                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBattleWarAssetHandle                       BattleAssetHandle;                                        // 0x0518(0x0038) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                               bForceRare;                                               // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableRare;                                             // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountGroup.BP_EncountGroup_C");
		return ptr;
	}


	void MakeSurroundEncountParameter(TArray<struct FString> InEncountGroupNames, bool* Success, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	void MakeEncountParameter(const struct FString& InAutoSymbolName, bool* Success, bool* LockEntry, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	void GetUnloadBattleAssetUserImpl(bool* Battle, struct FString* AutoSymbolName, struct FString* MapName, struct FName* GroupID);
	void UpdateRareState();
	bool BPE_IsLoadedSymbolAsset();
	void SetupBattleAsset();
	void GetBossLevel(int* Level);
	void SetWakeupLocation();
	bool BPE_IsFadeOut();
	bool BPE_IsFollow();
	bool BPE_IsCanSpawn();
	void OutputParameter(struct FEncountSymbolGroupParamData* Output);
	void SetBattleEncount(EBtlResultType BattleResult);
	void GetBtlEncountGroupParam(struct FBtlEncountGroupParam* Result);
	void PostSpawnProcessInternal(class ABP_EncountSymbolBase_C* InSymbol, class APFBP_EnSym_Placement_C* inPlacement);
	void IsBuildCompleted(bool* Result);
	void IsFindedSymbol(bool* Result);
	void SubFindedCount(class AActor* InSymbol);
	void OnDeleteSymbol(class AActor* InSymbol);
	void RemoveManagerAll();
	void IsPF(bool* Result);
	void ChangeSymbolRare(bool Rare);
	void UpdateRareGroup();
	void DeactiveSymbol();
	void IsInvisible(bool* Value);
	void Stop();
	void Restart();
	void SetActivate(bool Activate);
	void IsScenarioCondision(bool* bSuccess);
	void CheckSpawnID();
	void OnGround(class APFBP_EnSym_Placement_C* Placement);
	void Respawn(bool UpdateRare);
	void CheckFinded(bool* Success);
	void OnDelete();
	void IsLoaded(bool* Success);
	void IsCanSpawn(bool* Success);
	void IsSpawnTime(bool* bSuccess);
	void SpawnPlacement();
	void SetupActor(class ABP_EncountSymbolBase_C* Symbol, class APFBP_EnSym_Placement_C* Placement);
	void SpawnActor(class APFBP_EnSym_Placement_C* Placement, class ABP_EncountSymbolBase_C** Spawned);
	void OnSpawn();
	void UserConstructionScript();
	void SetEncountBattleStateImpl();
	void DeleteSymbolImpl();
	void UpdateRareImpl();
	void UnloadBattleAssetImpl();
	void RespawnSymbolImpl();
	void ResetBattleFlagImpl();
	void LoadBattleAsset();
	void UnloadBattleAsset();
	void SetBattleResult(EBtlResultType Result);
	void OnUnloadMapStart(const struct FString& MapName);
	void UpdateRareStateImpl();
	void InitCallback();
	void TermCallback();
	void OnChangeScenario();
	void ScenarioFlag(int Flag, bool bValid);
	void ScenarioCounter(int counter, int Prev);
	void OnChangeGameState_BattleLoadCheck(EAriseGameState ChangeState, bool NewState);
	void SpawnEncountSymbol();
	void GroundEncountSymbol();
	void RebuildEncountSymbol();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SetEncountGroupNames();
	void SetEncountSymbolState();
	void AddFindedSymbol(class ABP_EncountSymbolBase_C* Symbol);
	void RemoveFindedSymbol(class ABP_EncountSymbolBase_C* Symbol);
	void RemoveFindedSymbolAll();
	void SpawnPostProcess(class APFEncountSymbol* Symbol, class APFEnSymPlacement* Placement);
	void ReceiveDestroyed();
	void BPE_Spawn();
	void BPE_LoadBtlAsset();
	void BPE_UnloadBtlAsset();
	void BPE_FadeOut();
	void BPE_ExecFadeOut();
	void OnReservedSpawn();
	void ExecuteUbergraph_BP_EncountGroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
