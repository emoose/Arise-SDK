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

// BlueprintGeneratedClass BP_SearchOwlSaveData.BP_SearchOwlSaveData_C
// 0x0060 (0x0170 - 0x0110)
class UBP_SearchOwlSaveData_C : public UAriseScriptSaveData
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnDiscoverStateChanged;                                   // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDiscoverStateChanged;                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TArray<struct FString>                             DiscoveredActors;                                         // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkName_discover;                                       // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkName_received;                                       // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ChunkName_discover_sub;                                   // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SearchOwlSaveData.BP_SearchOwlSaveData_C");
		return ptr;
	}


	void GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array);
	void SetReceiveFlag(int InRewardID, bool bInNew);
	void GetReceivableReward(TArray<int>* OutRewardID);
	void GetCompletedNum(int* OutNum);
	void GetCompletedRate(int* OutRate);
	void IsReceiveReward(bool* Out);
	void GetDiscoverdRate(int* OutRate);
	void ReceiveReward(TArray<int>* OutReceiveRewardID);
	void GetDiscoveredNum(const struct FString& InRegionName, int* Out);
	void Update(float InDeltaSeconds);
	void BindOnDiscoverStateChanged(struct FScriptDelegate* Event);
	void SetDiscover(const struct FString& InLabel, bool InDiscover);
	void FillDiscover(bool InDiscover, bool InWithEx);
	void IsDiscover(const struct FString& InActorID, bool bInDiscoverPoint, bool* NewParam);
	void Discover(const struct FString& InLabel);
	void Event_On_New_Game();
	void RegisterParameter();
	void ExecuteUbergraph_BP_SearchOwlSaveData(int EntryPoint);
	void OnDiscoverStateChanged__DelegateSignature(const struct FString& InActorID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
