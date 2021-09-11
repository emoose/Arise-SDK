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

// BlueprintGeneratedClass BP_GSC_Field_Interface.BP_GSC_Field_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GSC_Field_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Field_Interface.BP_GSC_Field_Interface_C");
		return ptr;
	}


	void GetFieldSceneLocalState(TEnumAsByte<ENM_FieldSceneLocalState>* LocalState);
	void GetMapShowState(TEnumAsByte<ENM_MapShowState>* MapShowState);
	void IsMapUnloadedWithAllMapNoAction_(const struct FString& MapName, bool* bEntry);
	void SkipNpcSpawnShowMapOnce();
	void IsPFHoldMousePosition(bool* Out);
	void UnpauseField();
	void PauseField();
	void IsPreShowMap_(bool* bPreShow);
	void ReloadCurrentMap();
	void MakeHotLink(const struct FString& LinkName);
	void GetMenuID(struct FString* MenuID);
	void ShowPlayerFreeHUD(bool Show, bool PFEnableNOCheck);
	void OpenPlayerFreeMenu(const struct FString& MenuID, bool bChangeNow);
	void RegisterEvent_OnPostWakeupShowPlayer(const struct FAriseSimpleEventData& Event);
	void GetMapLocatorName(struct FString* MapLocatorName);
	void GetNextMapName(struct FString* NextMapName);
	void GetMapLocatorDatabase(class UMapLocatorDatabase** MapLocatorDatabase);
	void AddPrePFOperation(const struct FSTR_PrePFStartOperation& Operation);
	void IsPlayerFree_(bool* Is);
	void GetMapChangeReason(EMapChangeReason* MapChangeReason);
	void GetOldMapName(struct FString* OldMapName);
	void ShowFieldMap(bool NewShow);
	void CameraReset();
	void ChangeLocator(const struct FString& MapLocatorName);
	void GetPFHUD(class APF_HUD_Manager** PFHUD);
	void SetPostDataLoad(bool PostDataLoad);
	void SetHideFieldMap(bool HideFieldMap);
	void GetCurrentMapName(struct FString* CurrentMapName);
	void CreanupPreloadMap();
	void IsMapUnloaded_(const struct FString& MapName, bool* bEntry);
	void UnloadMap(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept);
	void PreloadMap(const struct FString& MapName, bool* bAccept, bool* bPreloaded);
	void ChangeMap(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
