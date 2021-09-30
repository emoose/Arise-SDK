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

// BlueprintGeneratedClass BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_SystemFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C");
		return ptr;
	}


	void STATIC_PF_ChangePartyTopTransformLocator(const struct FString& MapLocatorName, class UObject* __WorldContext);
	void STATIC_PF_CastToPFPlayerCharacter(class AActor* Actor, class UObject* __WorldContext, class ABP_PFPlayerCharacter_C** PFPlayer);
	void STATIC_PF_Get_BP_PF_QuestManager(class UObject* __WorldContext, class ABP_PF_QuestManager_C** BP_PF_Quest_Manager);
	struct FVector STATIC_PF_PlayerLocation(class UObject* __WorldContext);
	void STATIC_PF_UpdatePlayerLocationInfo(class UObject* __WorldContext);
	void STATIC_AddPrePFStartOperation(const struct FSTR_PrePFStartOperation& PreOperation, class UObject* __WorldContext);
	void STATIC_PF_IsChangePartyTopCompleted(class UObject* __WorldContext, bool* Out);
	void STATIC_PF_ChangePartyTop(EArisePartyID PartyId, class UObject* __WorldContext);
	void STATIC_PF_IsPartyTopMoving(class UObject* __WorldContext, bool* OutMoving);
	void STATIC_PF_SetPartyTopVisibility(bool bInValue, class UObject* __WorldContext);
	void STATIC_PF_GetPlayerCamera(class UObject* __WorldContext, class APFPlayerCamera** OutCamera);
	void STATIC_PF_GetPartyTopCharacter(class UObject* __WorldContext, class ABP_PFPartyTopCharacterBase_C** OutCharacter);
	void STATIC_PF_IsBuildPartyTop(class UObject* __WorldContext, bool* bIsBuilded);
	void STATIC_PF_BuildPartyTop(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
