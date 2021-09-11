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

// BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GameFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GameFunc_ChangeLocator(const struct FString& MapLocatorName, class UObject* __WorldContext);
	void STATIC_GameFunc_IsDuringMapChanging(class UObject* __WorldContext, bool* bChanging);
	void STATIC_GameFunc_ShowNowloading(bool bInShow, class UObject* __WorldContext);
	void STATIC_GameFunc_ShowPF_HUD(bool bInShow, class UObject* __WorldContext);
	void STATIC_GameFunc_LockPlayerFree(bool bLock, class UObject* __WorldContext);
	void STATIC_GameFunc_BindWorldWind(class UParticleSystemComponent* Particle, float Rate, class UObject* __WorldContext);
	void STATIC_GameFunc_GetCurrentMapName(class UObject* __WorldContext, struct FString* MapName);
	void STATIC_GameFunc_PostDataLoad(class UObject* __WorldContext);
	void STATIC_GameFunc_MapChange(const struct FString& MapName, const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_GameFunc_IsBattelScene(class UObject* __WorldContext, bool* bInBattle);
	void STATIC_GameFunc_PartyStatusRefresh(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
