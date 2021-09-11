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

// BlueprintGeneratedClass BP_BtlAssetManager.BP_BtlAssetManager_C
// 0x0078 (0x0570 - 0x04F8)
class ABP_BtlAssetManager_C : public ABtlAssetManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	TArray<EArisePartyID>                              LoadPartyIDLists;                                         // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<EAriseGuestID>                              LoadGuestIDLists;                                         // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<class ABtlCharacterBase*, struct FSTR_BTL_MysticLoadInfo> MysticLoadInfo;                                           // 0x0520(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlAssetManager.BP_BtlAssetManager_C");
		return ptr;
	}


	void OnEndOverlimitsUnit(class ABtlCharacterBase* Unit);
	void OnBeginOverlimitsUnit(class ABtlCharacterBase* Unit);
	void GetMysticLabels(class ABtlCharacterBase* Unit, TArray<struct FName>* MysticLabels);
	void OnBackTitle();
	bool IsSortWarHandle(const struct FBattleWarAssetHandle& Lhs, const struct FBattleWarAssetHandle& Rhs);
	void OnPreMapChangeNative(const struct FString& NewMapName, const struct FString& PrevMapName);
	void OnChangeState(EAriseGameState ChangedState, bool NewState);
	void IsBattleAssetLoadable(bool* IsLoadable);
	void OnSaveDataLoadComplated();
	void LoadAsyncGuest(EAriseGuestID GuestId);
	void LoadAsyncParty(EArisePartyID PartyId);
	void UnLoadParty(bool bForce, TArray<EArisePartyID>* Array);
	void UnLoadGuest(bool bForce, TArray<EAriseGuestID>* Array);
	void UserConstructionScript();
	void LoadAsyncPartyUnit();
	void UnloadPartyUnit(bool bForce);
	void ReceiveBeginPlay();
	void OnPartyIn(EArisePartyID InPartyID);
	void OnPartyOut(EArisePartyID OutPartyID);
	void OnGuestIn(EAriseGuestID InGuestID);
	void OnGuestOut(TArray<EAriseGuestID> OutGuestID);
	void LoadResidentRequiredAssets();
	void UnloadResidentRequiredAssets();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPartyOrderLoadComplated();
	void OnReplaceGuestUnitId(EAriseGuestID GuestId, const struct FName& NewGuestUnitID, const struct FName& PrevGuestUnitID);
	void UnloadBattleMapCore(const struct FName& BattleMap);
	void LoadBattleMapCore(const struct FName& BattleMap);
	void OnEndBattle();
	void ExecuteUbergraph_BP_BtlAssetManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
