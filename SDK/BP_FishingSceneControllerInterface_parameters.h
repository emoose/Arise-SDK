#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsOpenSytemWindow
struct UBP_FishingSceneControllerInterface_C_IF_IsOpenSytemWindow_Params
{
	bool                                               bSysOpen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsDisplayCutin
struct UBP_FishingSceneControllerInterface_C_IF_IsDisplayCutin_Params
{
	bool                                               bDisplaying;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetLineTension
struct UBP_FishingSceneControllerInterface_C_IF_GetLineTension_Params
{
	float                                              Tension;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetAnimFightRodLR
struct UBP_FishingSceneControllerInterface_C_IF_GetAnimFightRodLR_Params
{
	float                                              LR;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultCamera
struct UBP_FishingSceneControllerInterface_C_IF_GetResultCamera_Params
{
	class AActor*                                      ResCamera;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetResultFishModel
struct UBP_FishingSceneControllerInterface_C_IF_GetResultFishModel_Params
{
	class AActor*                                      FishModel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_PlayShortChat
struct UBP_FishingSceneControllerInterface_C_IF_PlayShortChat_Params
{
	EFishScScene                                       Scene;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_RequestCharAnimation
struct UBP_FishingSceneControllerInterface_C_IF_RequestCharAnimation_Params
{
	TEnumAsByte<ENM_FishingAnim>                       ReqAnim;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTipLocation
struct UBP_FishingSceneControllerInterface_C_IF_GetRodTipLocation_Params
{
	struct FVector                                     TipLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDamageRate
struct UBP_FishingSceneControllerInterface_C_IF_GetRodTensionDamageRate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetRodTensionDownRate
struct UBP_FishingSceneControllerInterface_C_IF_GetRodTensionDownRate_Params
{
	float                                              DownRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_AddLineTension
struct UBP_FishingSceneControllerInterface_C_IF_AddLineTension_Params
{
	float                                              Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsLineTensionFaild
struct UBP_FishingSceneControllerInterface_C_IF_IsLineTensionFaild_Params
{
	bool                                               bFaild;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingSettings
struct UBP_FishingSceneControllerInterface_C_IF_GetFishingSettings_Params
{
	struct FSTR_FishingSettings                        Settings;                                                 // (Parm, OutParm)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_IsScenePause
struct UBP_FishingSceneControllerInterface_C_IF_IsScenePause_Params
{
	bool                                               bPause;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetBiteFishId
struct UBP_FishingSceneControllerInterface_C_IF_GetBiteFishId_Params
{
	int                                                FishId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingPointTransform
struct UBP_FishingSceneControllerInterface_C_IF_GetFishingPointTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_SpawnEffect
struct UBP_FishingSceneControllerInterface_C_IF_SpawnEffect_Params
{
	struct FName                                       EfcName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedParticle;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetWaterZ
struct UBP_FishingSceneControllerInterface_C_IF_GetWaterZ_Params
{
	float                                              WaterZ;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetHotSpotManager
struct UBP_FishingSceneControllerInterface_C_IF_GetHotSpotManager_Params
{
	class AActor*                                      HotSpotManager;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingAreaId
struct UBP_FishingSceneControllerInterface_C_IF_GetFishingAreaId_Params
{
	struct FString                                     AreaName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_DebugNeverTensionFail
struct UBP_FishingSceneControllerInterface_C_DIF_DebugNeverTensionFail_Params
{
	bool                                               Never;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugQTE
struct UBP_FishingSceneControllerInterface_C_DIF_EvDebugQTE_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_LoadFishingSetting
struct UBP_FishingSceneControllerInterface_C_DIF_LoadFishingSetting_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugFail
struct UBP_FishingSceneControllerInterface_C_DIF_EvDebugFail_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugSuccess
struct UBP_FishingSceneControllerInterface_C_DIF_EvDebugSuccess_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_EvDebugResult
struct UBP_FishingSceneControllerInterface_C_DIF_EvDebugResult_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetEquipment
struct UBP_FishingSceneControllerInterface_C_IF_GetEquipment_Params
{
	int                                                Rod;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Lure;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChageFixedFishType
struct UBP_FishingSceneControllerInterface_C_DIF_OnChageFixedFishType_Params
{
	struct FString                                     FixedFishType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFixedFishSize
struct UBP_FishingSceneControllerInterface_C_DIF_OnChangeFixedFishSize_Params
{
	struct FString                                     FixedSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_OnChangeFishingArea
struct UBP_FishingSceneControllerInterface_C_DIF_OnChangeFishingArea_Params
{
	struct FString                                     AreaId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IF_GetFishingState
struct UBP_FishingSceneControllerInterface_C_IF_GetFishingState_Params
{
	TEnumAsByte<ENM_FishingState>                      State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSize
struct UBP_FishingSceneControllerInterface_C_DIF_FishSize_Params
{
	float                                              Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.DIF_FishSizeFix
struct UBP_FishingSceneControllerInterface_C_DIF_FishSizeFix_Params
{
	struct FString                                     FIxedName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.Abort
struct UBP_FishingSceneControllerInterface_C_Abort_Params
{
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.IsFishingEnd
struct UBP_FishingSceneControllerInterface_C_IsFishingEnd_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventFinalize
struct UBP_FishingSceneControllerInterface_C_EventFinalize_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.EventStartFishing
struct UBP_FishingSceneControllerInterface_C_EventStartFishing_Params
{
};

// Function BP_FishingSceneControllerInterface.BP_FishingSceneControllerInterface_C.InitializeScene
struct UBP_FishingSceneControllerInterface_C_InitializeScene_Params
{
	TScriptInterface<class UBP_FishingPointInterface_C> FishingPointActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
