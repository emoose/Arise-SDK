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

// BlueprintGeneratedClass BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SearchOwlFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetSearchOwlReceiveRewardFlag(int InRewardID, bool bInNew, class UObject* __WorldContext);
	void STATIC_GetReceivableSearchOwlReward(class UObject* __WorldContext, TArray<int>* OutRewardID);
	void STATIC_DiscoverSearchOwl(const struct FString& InOwlPointID, class UObject* __WorldContext);
	void STATIC_GetDiscoveredSearchOwlNum(const struct FString& InRegionName, class UObject* __WorldContext, int* OutNum);
	void STATIC_GetCompletedSearchOwlNum(class UObject* __WorldContext, int* OutNum);
	void STATIC_GetDiscoveredSearchOwlRate(class UObject* __WorldContext, int* OutRate);
	void STATIC_GetCompletedSearchOwlRate(class UObject* __WorldContext, int* OutRate);
	void STATIC_IsReceiveSearchOwlReward(class UObject* __WorldContext, bool* Out);
	void STATIC_ReceiveSearchOwlReward(class UObject* __WorldContext, TArray<int>* OutReceiveRewardID);
	void STATIC_BindOnSearchOwlDiscoveryStateChanged(class UObject* __WorldContext, struct FScriptDelegate* Event);
	void STATIC_FillDiscoverySearchOwl(bool InDiscovery, bool InWithEx, class UObject* __WorldContext);
	void STATIC_IsDiscoverySearchOwl__From_ActorID_(const struct FString& InActorID, bool bInDiscoverPoint, class UObject* __WorldContext, bool* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
