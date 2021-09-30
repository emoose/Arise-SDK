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

// BlueprintGeneratedClass BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_MAPOBJ_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_FunctionLibrary.BP_PF_MAPOBJ_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetRepopLockBreakPoint(const struct FString& actorId, bool bLock, class UObject* __WorldContext);
	void STATIC_SetRepopLockSearchPoint(const struct FString& actorId, bool bLock, class UObject* __WorldContext);
	void STATIC_SetUseRecovery(const struct FString& actorId, int RepopTime, class UObject* __WorldContext);
	void STATIC_GetUsedRecovery(const struct FString& actorId, class UObject* __WorldContext, bool* bUsed, int* Time);
	void STATIC_SetSearchableObjectVisibilityAll(bool bVisible, class UObject* __WorldContext);
	void STATIC_ResetRepopTimeBreakPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_ResetRepopTimeSearchPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_SetAcquireOnceBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bValid);
	void STATIC_SetAcquireOnceSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bValid);
	void STATIC_IsSearchMapGimmick(const struct FString& actorId, class UObject* __WorldContext, struct FString* MapGimmickActorID, bool* Result);
	void STATIC_SetHideMapGimmick(const struct FString& actorId, bool Enable, class UObject* __WorldContext);
	void STATIC_IsHideMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bUnlock);
	void STATIC_IsValidMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* Result);
	void STATIC_SetDiscoverCampPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsDiscoverCampPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover);
	void STATIC_GetOwlCharacterID(ESearchOwlType InOwlType, class UObject* __WorldContext, struct FString* OutCharacterID);
	void STATIC_GetOwlModelID(ESearchOwlType InOwlType, class UObject* __WorldContext, struct FString* OutModelID);
	void STATIC_RefreshIconBreakPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_RefreshIconSearchPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_SetUnlockMapGimmick(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsUnlockMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bUnlock);
	void STATIC_SetDiscoverMapGimmick(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsDiscoverMapGimmick(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover);
	void STATIC_SetOpenTreasurePoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsOpenTreasurePoint(const struct FString& actorId, class UObject* __WorldContext, bool* bOpen);
	void STATIC_SetDiscoverTreasurePoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsDiscoverTreasurePoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover);
	void STATIC_SetRepopTimeBreakPoint(const struct FString& actorId, int RepopTime, class UObject* __WorldContext);
	void STATIC_SetRepopTimeSearchPoint(const struct FString& actorId, int RepopTime, class UObject* __WorldContext);
	void STATIC_SetDiscoverBreakPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_SetDiscoverSearchPoint(const struct FString& actorId, class UObject* __WorldContext);
	void STATIC_IsPopBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bEnable);
	void STATIC_IsPopSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bEnable);
	void STATIC_GetPopStatusBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bPop, int* RemainingTime);
	void STATIC_IsDiscoverBreakPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover);
	void STATIC_GetPopStatusSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bPop, int* RemainingTime);
	void STATIC_IsDiscoverSearchPoint(const struct FString& actorId, class UObject* __WorldContext, bool* bDiscover);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
