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

// BlueprintGeneratedClass BP_MapGimmickSaveData.BP_MapGimmickSaveData_C
// 0x0078 (0x0188 - 0x0110)
class UBP_MapGimmickSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	bool                                               bDiscoverStateChanged;                                    // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDiscoverStateChanged;                                   // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     ChunkPostFix_Discover;                                    // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkPostFix_Unlock;                                      // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUnlockStateChanged;                                     // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bUnlockStateChanged;                                      // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FString                                     ChunkPostFix_Hide;                                        // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnHideStateChanged;                                       // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapGimmickSaveData.BP_MapGimmickSaveData_C");
		return ptr;
	}


	void IsHide(const struct FString& ActrorID, bool* bUnlocked);
	void Hide(const struct FString& actorId, bool Enable);
	void IsValidMapGimmick(const struct FString& actorId, bool* Result);
	void Register(const struct FString& LevelName, int Num);
	void DebugRegisterInfo();
	void BindOnUnlockStateChanged(struct FScriptDelegate* ¤0Ù0ó0È0);
	void SetChunkEnable(const struct FString& actorId, const struct FString& ChunkName, bool Enable, bool* IsChangeState);
	void BindOnDiscoverStateChanged(struct FScriptDelegate* ¤0Ù0ó0È0);
	void IsChunkEnable(const struct FString& actorId, const struct FString& ChunkName, bool* bEnable);
	void IsUnlock(const struct FString& ActrorID, bool* bUnlocked);
	void Unlock(const struct FString& actorId);
	void IsDiscover(const struct FString& actorId, bool* bDiscover);
	void Discover(const struct FString& actorId);
	void RegisterParameter();
	void OnNewGame();
	void ExecuteUbergraph_BP_MapGimmickSaveData(int EntryPoint);
	void OnHideStateChanged__DelegateSignature(const struct FString& actorId, bool Enable);
	void OnUnlockStateChanged__DelegateSignature(const struct FString& actorId);
	void OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
