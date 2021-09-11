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

// BlueprintGeneratedClass BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FishingSceneControllerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C");
		return ptr;
	}


	void IF_IsOpenSytemWindow(bool* bSysOpen);
	void IF_IsDisplayCutin(bool* bDisplaying);
	void IF_GetLineTension(float* Tension);
	void IF_GetAnimFightRodLR(float* LR);
	void IF_GetResultCamera(class AActor** ResCamera);
	void IF_GetResultFishModel(class AActor** FishModel);
	void IF_PlayShortChat(EFishScScene Scene, int Detail, bool* bAccept);
	void IF_RequestCharAnimation(TEnumAsByte<ENM_FishingAnim> ReqAnim, bool* bAccept);
	void IF_GetRodTipLocation(struct FVector* TipLocation);
	void IF_GetRodTensionDamageRate(float* Rate);
	void IF_GetRodTensionDownRate(float* DownRate);
	void IF_AddLineTension(float Add);
	void IF_IsLineTensionFaild(bool* bFaild);
	void IF_GetFishingSettings(struct FSTR_FishingSettings* Settings);
	void IF_IsScenePause(bool* bPause);
	void IF_GetBiteFishId(int* FishId);
	void IF_GetFishingPointTransform(struct FTransform* Transform);
	void IF_SpawnEffect(const struct FName& EfcName, const struct FTransform& Transform, class UParticleSystemComponent** SpawnedParticle);
	void IF_GetWaterZ(float* WaterZ);
	void IF_GetHotSpotManager(class AActor** HotSpotManager);
	void IF_GetFishingAreaId(struct FString* AreaName);
	void DIF_DebugNeverTensionFail(bool Never);
	void DIF_EvDebugQTE();
	void DIF_LoadFishingSetting();
	void DIF_EvDebugFail();
	void DIF_EvDebugSuccess();
	void DIF_EvDebugResult();
	void IF_GetEquipment(int* Rod, int* Lure);
	void DIF_OnChageFixedFishType(const struct FString& FixedFishType);
	void DIF_OnChangeFixedFishSize(const struct FString& FixedSize);
	void DIF_OnChangeFishingArea(const struct FString& AreaId);
	void IF_GetFishingState(TEnumAsByte<ENM_FishingState>* State);
	void DIF_FishSize(float Size);
	void DIF_FishSizeFix(const struct FString& FIxedName);
	void Abort(bool* bAccept);
	void IsFishingEnd(bool* bEnd);
	void EventFinalize();
	void EventStartFishing();
	void InitializeScene(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPointActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
