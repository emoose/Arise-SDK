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

// BlueprintGeneratedClass BP_PF_CampActorBase.BP_PF_CampActorBase_C
// 0x01B8 (0x04E0 - 0x0328)
class ABP_PF_CampActorBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMapjumped;                                               // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayed;                                                  // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TArray<class APFNpcCharacterBase*>                 SpawnCharacterList;                                       // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_PF_NPC_CampWeapon_C*>             SpawnWeaponList;                                          // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     CampID;                                                   // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bLoading;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class ABP_PF_CampCamera_C*                         CampCamera;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FArisePlayerVisualData>              PartyVisualStatus;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PartyCharacterIDs;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EArisePartyID>                              PartyIDs;                                                 // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class ABP_PF_CampTalkGroupActor_C*> TalkGroupMap;                                             // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPFCampLayoutData                           CampLayout;                                               // 0x0408(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class AActor*, struct FString>                AttachCharacterMap;                                       // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AActor*, struct FString>                LookAtTargetMap;                                          // 0x0490(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_CampActorBase.BP_PF_CampActorBase_C");
		return ptr;
	}


	void UseCamp();
	void GetCampPattern(bool* bValid, struct FPFCampDatabaseData* CampData);
	void SetLookAtTarget(class APFNpcCharacterBase* Character, const struct FString& Target);
	void ResetTalkGroup();
	void SetCampVisibility(bool bVisible);
	void AttachCharacter(class AActor* ChildActor, const struct FString& AttachID);
	void AddWeapon(class ABP_PF_NPC_CampWeapon_C* Weapon);
	void AddCharacter(class APFNpcCharacterBase* Character);
	void IsCharacterVisualChange(bool* bChange);
	void FindCharacterByPartyID(EArisePartyID PartyId, bool* bFound, class ABP_PF_NPC_CampCharacter_C** Character);
	void DestroyCharacterByPartyID(EArisePartyID PartyId);
	void FindCharacter(const struct FString& CharacterID, bool* bFound, class ABP_PF_NPC_CampCharacter_C** Character);
	void AddTalkGroup(const struct FString& Key, class APFNpcCharacterBase* Character);
	void GetRandomLotteryCampID(class UPFCampDatabaseObject* CampDatabase, struct FString* CampID);
	void GetCharacterID(int Index, const struct FString& CharacterID, bool* bResult, struct FString* NewCharacterID);
	void StopCamp();
	void StartCamp();
	void UnloadCampAsset();
	void LoadCampAsset(bool* bResult);
	void ReadCampData(bool* bSuccess);
	void IsResourceLoaded(bool* bLoaded);
	void CanPlayEvent(bool* bCanPlay);
	void ResetCampSceneCamera();
	void SetCampSceneCamera();
	void DestroyCharacter();
	void SpawnCharacter();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void ExecuteUbergraph_BP_PF_CampActorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
