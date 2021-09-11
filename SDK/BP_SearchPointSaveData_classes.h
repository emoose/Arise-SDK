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

// BlueprintGeneratedClass BP_SearchPointSaveData.BP_SearchPointSaveData_C
// 0x00A8 (0x01B8 - 0x0110)
class UBP_SearchPointSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FString                                     Label_TimeStamp;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Label_Discover;                                           // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDiscoverStateChanged;                                   // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemGetStateChanged;                                    // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     Label_AcquireOnce;                                        // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty BP_SearchPointSaveData.BP_SearchPointSaveData_C.Lock_RepopActors

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SearchPointSaveData.BP_SearchPointSaveData_C");
		return ptr;
	}


	void SetRepopUnlock(const struct FString& actorId);
	void SetRepopLock(const struct FString& actorId);
	void FillUnacquired();
	void ResetItemGetTime(const struct FString& actorId);
	void ResetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId);
	void SetAcquireOnce(const struct FString& actorId, bool Value);
	void IsAcquireOnce(const struct FString& actorId, bool* bEnable);
	void GetItemGetStatus(const struct FString& actorId, bool* bPop, int* RemainingTime);
	void BindOnItemGetStateChanged(const struct FScriptDelegate& Event);
	void BindOnDiscoverStateChanged(const struct FScriptDelegate& Event);
	void GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array);
	void SetDiscover(const struct FString& actorId, bool Value);
	void FillDiscover(bool bDiscover);
	void GetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int* RemainingTime, EPFSearchPointStatus* Status);
	void SetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int Value);
	void SetItemGetTime(const struct FString& actorId, int Time);
	void IsChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool* bEnable);
	void SetChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool bEnable);
	void IsDiscover(const struct FString& actorId, bool* bEnable);
	void Discover(const struct FString& actorId);
	void RegisterParameter();
	void ExecuteUbergraph_BP_SearchPointSaveData(int EntryPoint);
	void OnItemGetStateChanged__DelegateSignature(const struct FString& actorId);
	void OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
