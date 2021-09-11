
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsOpenSytemWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSysOpen                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_IsOpenSytemWindow(bool* bSysOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsOpenSytemWindow");

	UBP_FishingSceneControllerInterface_C_IF_IsOpenSytemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSysOpen != nullptr)
		*bSysOpen = params.bSysOpen;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsDisplayCutin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisplaying                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_IsDisplayCutin(bool* bDisplaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsDisplayCutin");

	UBP_FishingSceneControllerInterface_C_IF_IsDisplayCutin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDisplaying != nullptr)
		*bDisplaying = params.bDisplaying;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetLineTension
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tension                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetLineTension(float* Tension)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetLineTension");

	UBP_FishingSceneControllerInterface_C_IF_GetLineTension_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tension != nullptr)
		*Tension = params.Tension;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetAnimFightRodLR
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LR                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetAnimFightRodLR(float* LR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetAnimFightRodLR");

	UBP_FishingSceneControllerInterface_C_IF_GetAnimFightRodLR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LR != nullptr)
		*LR = params.LR;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ResCamera                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetResultCamera(class AActor** ResCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultCamera");

	UBP_FishingSceneControllerInterface_C_IF_GetResultCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResCamera != nullptr)
		*ResCamera = params.ResCamera;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultFishModel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FishModel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetResultFishModel(class AActor** FishModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultFishModel");

	UBP_FishingSceneControllerInterface_C_IF_GetResultFishModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishModel != nullptr)
		*FishModel = params.FishModel;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_PlayShortChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFishScScene                   Scene                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_PlayShortChat(EFishScScene Scene, int Detail, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_PlayShortChat");

	UBP_FishingSceneControllerInterface_C_IF_PlayShortChat_Params params;
	params.Scene = Scene;
	params.Detail = Detail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_RequestCharAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_FishingAnim>   ReqAnim                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_RequestCharAnimation(TEnumAsByte<ENM_FishingAnim> ReqAnim, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_RequestCharAnimation");

	UBP_FishingSceneControllerInterface_C_IF_RequestCharAnimation_Params params;
	params.ReqAnim = ReqAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTipLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TipLocation                    (Parm, OutParm, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetRodTipLocation(struct FVector* TipLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTipLocation");

	UBP_FishingSceneControllerInterface_C_IF_GetRodTipLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TipLocation != nullptr)
		*TipLocation = params.TipLocation;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDamageRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetRodTensionDamageRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDamageRate");

	UBP_FishingSceneControllerInterface_C_IF_GetRodTensionDamageRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDownRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DownRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetRodTensionDownRate(float* DownRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDownRate");

	UBP_FishingSceneControllerInterface_C_IF_GetRodTensionDownRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownRate != nullptr)
		*DownRate = params.DownRate;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_AddLineTension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_AddLineTension(float Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_AddLineTension");

	UBP_FishingSceneControllerInterface_C_IF_AddLineTension_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsLineTensionFaild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFaild                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_IsLineTensionFaild(bool* bFaild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsLineTensionFaild");

	UBP_FishingSceneControllerInterface_C_IF_IsLineTensionFaild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFaild != nullptr)
		*bFaild = params.bFaild;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_FishingSettings    Settings                       (Parm, OutParm)

void UBP_FishingSceneControllerInterface_C::IF_GetFishingSettings(struct FSTR_FishingSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingSettings");

	UBP_FishingSceneControllerInterface_C_IF_GetFishingSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsScenePause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPause                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_IsScenePause(bool* bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsScenePause");

	UBP_FishingSceneControllerInterface_C_IF_IsScenePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPause != nullptr)
		*bPause = params.bPause;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetBiteFishId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FishId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetBiteFishId(int* FishId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetBiteFishId");

	UBP_FishingSceneControllerInterface_C_IF_GetBiteFishId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishId != nullptr)
		*FishId = params.FishId;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingPointTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetFishingPointTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingPointTransform");

	UBP_FishingSceneControllerInterface_C_IF_GetFishingPointTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_SpawnEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EfcName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystemComponent* SpawnedParticle                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_SpawnEffect(const struct FName& EfcName, const struct FTransform& Transform, class UParticleSystemComponent** SpawnedParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_SpawnEffect");

	UBP_FishingSceneControllerInterface_C_IF_SpawnEffect_Params params;
	params.EfcName = EfcName;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedParticle != nullptr)
		*SpawnedParticle = params.SpawnedParticle;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetWaterZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterZ                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetWaterZ(float* WaterZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetWaterZ");

	UBP_FishingSceneControllerInterface_C_IF_GetWaterZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterZ != nullptr)
		*WaterZ = params.WaterZ;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetHotSpotManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HotSpotManager                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetHotSpotManager(class AActor** HotSpotManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetHotSpotManager");

	UBP_FishingSceneControllerInterface_C_IF_GetHotSpotManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HotSpotManager != nullptr)
		*HotSpotManager = params.HotSpotManager;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingAreaId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (Parm, OutParm, ZeroConstructor)

void UBP_FishingSceneControllerInterface_C::IF_GetFishingAreaId(struct FString* AreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingAreaId");

	UBP_FishingSceneControllerInterface_C_IF_GetFishingAreaId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaName != nullptr)
		*AreaName = params.AreaName;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_DebugNeverTensionFail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Never                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::DIF_DebugNeverTensionFail(bool Never)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_DebugNeverTensionFail");

	UBP_FishingSceneControllerInterface_C_DIF_DebugNeverTensionFail_Params params;
	params.Never = Never;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugQTE
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::DIF_EvDebugQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugQTE");

	UBP_FishingSceneControllerInterface_C_DIF_EvDebugQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_LoadFishingSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::DIF_LoadFishingSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_LoadFishingSetting");

	UBP_FishingSceneControllerInterface_C_DIF_LoadFishingSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugFail
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::DIF_EvDebugFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugFail");

	UBP_FishingSceneControllerInterface_C_DIF_EvDebugFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::DIF_EvDebugSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugSuccess");

	UBP_FishingSceneControllerInterface_C_DIF_EvDebugSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugResult
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::DIF_EvDebugResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugResult");

	UBP_FishingSceneControllerInterface_C_DIF_EvDebugResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Lure                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetEquipment(int* Rod, int* Lure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetEquipment");

	UBP_FishingSceneControllerInterface_C_IF_GetEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rod != nullptr)
		*Rod = params.Rod;
	if (Lure != nullptr)
		*Lure = params.Lure;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChageFixedFishType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FixedFishType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_FishingSceneControllerInterface_C::DIF_OnChageFixedFishType(const struct FString& FixedFishType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChageFixedFishType");

	UBP_FishingSceneControllerInterface_C_DIF_OnChageFixedFishType_Params params;
	params.FixedFishType = FixedFishType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFixedFishSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FixedSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_FishingSceneControllerInterface_C::DIF_OnChangeFixedFishSize(const struct FString& FixedSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFixedFishSize");

	UBP_FishingSceneControllerInterface_C_DIF_OnChangeFixedFishSize_Params params;
	params.FixedSize = FixedSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFishingArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_FishingSceneControllerInterface_C::DIF_OnChangeFishingArea(const struct FString& AreaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFishingArea");

	UBP_FishingSceneControllerInterface_C_DIF_OnChangeFishingArea_Params params;
	params.AreaId = AreaId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_FishingState>  State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IF_GetFishingState(TEnumAsByte<ENM_FishingState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingState");

	UBP_FishingSceneControllerInterface_C_IF_GetFishingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::DIF_FishSize(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSize");

	UBP_FishingSceneControllerInterface_C_DIF_FishSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSizeFix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FIxedName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_FishingSceneControllerInterface_C::DIF_FishSizeFix(const struct FString& FIxedName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSizeFix");

	UBP_FishingSceneControllerInterface_C_DIF_FishSizeFix_Params params;
	params.FIxedName = FIxedName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.Abort
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::Abort(bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.Abort");

	UBP_FishingSceneControllerInterface_C_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IsFishingEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::IsFishingEnd(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IsFishingEnd");

	UBP_FishingSceneControllerInterface_C_IsFishingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventFinalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::EventFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventFinalize");

	UBP_FishingSceneControllerInterface_C_EventFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventStartFishing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FishingSceneControllerInterface_C::EventStartFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventStartFishing");

	UBP_FishingSceneControllerInterface_C_EventStartFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.InitializeScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_FishingPointInterface_C> FishingPointActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSceneControllerInterface_C::InitializeScene(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPointActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.InitializeScene");

	UBP_FishingSceneControllerInterface_C_InitializeScene_Params params;
	params.FishingPointActor = FishingPointActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
