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

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsMouseCursorVisibleScene
struct ABP_AriseGamemode_C_IsMouseCursorVisibleScene_Params
{
	EAriseGameScene                                    GameScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C._IsNeedAutoSaveLocation?
struct ABP_AriseGamemode_C__IsNeedAutoSaveLocation__Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bNeedAutoSave;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ManageTextureCache
struct ABP_AriseGamemode_C_ManageTextureCache_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.UnloadMenuClasses
struct ABP_AriseGamemode_C_UnloadMenuClasses_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.PreloadMenuClasses
struct ABP_AriseGamemode_C_PreloadMenuClasses_Params
{
	int                                                Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefaultScreenColor
struct ABP_AriseGamemode_C_SetDefaultScreenColor_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetPFUILongChatManager
struct ABP_AriseGamemode_C_SetPFUILongChatManager_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsCurrentFadeWhite?
struct ABP_AriseGamemode_C_IsCurrentFadeWhite__Params
{
	bool                                               bWhite;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToLogin
struct ABP_AriseGamemode_C_GoBackToLogin_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToScene
struct ABP_AriseGamemode_C_GoBackToScene_Params
{
	unsigned char                                      NewSceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDebugInputEnable
struct ABP_AriseGamemode_C_SetDebugInputEnable_Params
{
	bool                                               bNew;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsDebugInputEnable
struct ABP_AriseGamemode_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlagImpl
struct ABP_AriseGamemode_C_OpenLocationFlagImpl_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BattleFinalizeToTitle
struct ABP_AriseGamemode_C_BattleFinalizeToTitle_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetChangeMapReason
struct ABP_AriseGamemode_C_GetChangeMapReason_Params
{
	EMapChangeReason                                   MapChangeReason;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ReloadCurrentMap
struct ABP_AriseGamemode_C_ReloadCurrentMap_Params
{
	bool                                               ChangeMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetPFHUDManager
struct ABP_AriseGamemode_C_GetPFHUDManager_Params
{
	class APF_HUD_Manager*                             PFHUDManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetHelpManagerInterface
struct ABP_AriseGamemode_C_GetHelpManagerInterface_Params
{
	TScriptInterface<class UBP_HelpManagerInterface_C> HelpManager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.FixCameraForCapture
struct ABP_AriseGamemode_C_FixCameraForCapture_Params
{
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            OutCamera;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ResetPostProcessSettingsForCapture
struct ABP_AriseGamemode_C_ResetPostProcessSettingsForCapture_Params
{
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OldBloomIntensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldMotionBlurAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetPostProcessSettingsForCapture
struct ABP_AriseGamemode_C_SetPostProcessSettingsForCapture_Params
{
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OldBloomIntensity;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OldMotionBlurAmount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsAutoSaveNow
struct ABP_AriseGamemode_C_IsAutoSaveNow_Params
{
	bool                                               bAutoSaving;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetMenuManagerInterface
struct ABP_AriseGamemode_C_GetMenuManagerInterface_Params
{
	TScriptInterface<class UTO14_BP_MenuManagerInterface_C> OutMenuManager;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPGeneralFunctionBool
struct ABP_AriseGamemode_C_BPGeneralFunctionBool_Params
{
	struct FName                                       OpertionName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<struct FName, struct FString>                 Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SpawnActor
struct ABP_AriseGamemode_C_SpawnActor_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstances
struct ABP_AriseGamemode_C_CreateGUIInstances_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SceneStreamLevelManagement
struct ABP_AriseGamemode_C_SceneStreamLevelManagement_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C._PLayLongChatWithArgs
struct ABP_AriseGamemode_C__PLayLongChatWithArgs_Params
{
	struct FLongChatPlayArgs                           Args;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenFastTravelPoint
struct ABP_AriseGamemode_C_OpenFastTravelPoint_Params
{
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ShowUI;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.UpdateLongChatPlayQue
struct ABP_AriseGamemode_C_UpdateLongChatPlayQue_Params
{
	bool                                               bPostMapChange;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlag
struct ABP_AriseGamemode_C_OpenLocationFlag_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetTipsScreenMask
struct ABP_AriseGamemode_C_SetTipsScreenMask_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetCurrentScreenMask
struct ABP_AriseGamemode_C_GetCurrentScreenMask_Params
{
	class AScreenMaskBase*                             CurrentScreenMask;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenUnMasked
struct ABP_AriseGamemode_C_IsScreenUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenMasked
struct ABP_AriseGamemode_C_IsScreenMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EncountLockByUser
struct ABP_AriseGamemode_C_EncountLockByUser_Params
{
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveManagement
struct ABP_AriseGamemode_C_AutoSaveManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveCancel
struct ABP_AriseGamemode_C_AutoSaveCancel_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAutoSave
struct ABP_AriseGamemode_C_RequestAutoSave_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToTitle
struct ABP_AriseGamemode_C_GoBackToTitle_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.PlayMovie
struct ABP_AriseGamemode_C_PlayMovie_Params
{
	struct FString                                     PlayMovieName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapLocation
struct ABP_AriseGamemode_C_ChangeMapLocation_Params
{
	struct FString                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bNeedAutoSave;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateLocationMapManager
struct ABP_AriseGamemode_C_CreateLocationMapManager_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.DefaultPlayerReset
struct ABP_AriseGamemode_C_DefaultPlayerReset_Params
{
	bool                                               InIndoorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnPreMapChange
struct ABP_AriseGamemode_C_OnPreMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.UpdatePlayerInfoForMaterial
struct ABP_AriseGamemode_C_UpdatePlayerInfoForMaterial_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetScreenMaskAlpha
struct ABP_AriseGamemode_C_GetScreenMaskAlpha_Params
{
	struct FString                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_GetCurrentMapname
struct ABP_AriseGamemode_C_BPE_GetCurrentMapname_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.PossessDefaultPlayer
struct ABP_AriseGamemode_C_PossessDefaultPlayer_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnPostMapChange
struct ABP_AriseGamemode_C_OnPostMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSkipAutoSave;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetEditLevelList
struct ABP_AriseGamemode_C_GetEditLevelList_Params
{
	TArray<struct FString>                             LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.AddLevelDebugMenu
struct ABP_AriseGamemode_C_AddLevelDebugMenu_Params
{
	TArray<struct FString>                             LevelNames;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ResetWorldTime
struct ABP_AriseGamemode_C_ResetWorldTime_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetWorldTimeSettings
struct ABP_AriseGamemode_C_SetWorldTimeSettings_Params
{
	float                                              CurrentHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapEnvironment
struct ABP_AriseGamemode_C_ChangeMapEnvironment_Params
{
	struct FString                                     EnvName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CameraReset
struct ABP_AriseGamemode_C_CameraReset_Params
{
	int                                                InCameraPreset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCameraPitch;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CanOpenPFMenu
struct ABP_AriseGamemode_C_CanOpenPFMenu_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GamePause
struct ABP_AriseGamemode_C_GamePause_Params
{
	bool                                               bPause;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.LockPlayerFree
struct ABP_AriseGamemode_C_LockPlayerFree_Params
{
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.PlaySequenceEvent
struct ABP_AriseGamemode_C_PlaySequenceEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ShowNowLoading
struct ABP_AriseGamemode_C_ShowNowLoading_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceWhite;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefalutScreenMask
struct ABP_AriseGamemode_C_SetDefalutScreenMask_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeAriseGameScene
struct ABP_AriseGamemode_C_ChangeAriseGameScene_Params
{
	EAriseGameScene                                    AriseGameScene;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESceneRunType                                      NewRunType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeNow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestRemoveStreamLevels
struct ABP_AriseGamemode_C_RequestRemoveStreamLevels_Params
{
	TArray<struct FName>                               LevelNames;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAddStreamLevels
struct ABP_AriseGamemode_C_RequestAddStreamLevels_Params
{
	TArray<struct FName>                               LevelNames;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             LevelPaths;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ShowStreamLevels
struct ABP_AriseGamemode_C_ShowStreamLevels_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ReservedAriseGameScene
struct ABP_AriseGamemode_C_ReservedAriseGameScene_Params
{
	EAriseGameScene                                    GameScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsPrevSceneEnd
struct ABP_AriseGamemode_C_IsPrevSceneEnd_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultPlayer
struct ABP_AriseGamemode_C_CreateDefaultPlayer_Params
{
	struct FVector                                     Loaction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.SetupSceneStreamLevel
struct ABP_AriseGamemode_C_SetupSceneStreamLevel_Params
{
	struct FString                                     SceneName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               oLevelNames;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             oLevelPaths;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.GetPlayerController
struct ABP_AriseGamemode_C_GetPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateUMG
struct ABP_AriseGamemode_C_CreateUMG_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UserWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_CreateSceneController
struct ABP_AriseGamemode_C_BPE_CreateSceneController_Params
{
	unsigned char                                      aSceneId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGameSceneController*                        newCtrl;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.UserConstructionScript
struct ABP_AriseGamemode_C_UserConstructionScript_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstanceManager
struct ABP_AriseGamemode_C_CreateGUIInstanceManager_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultMaskInst
struct ABP_AriseGamemode_C_CreateDefaultMaskInst_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreloadMenuClasses
struct ABP_AriseGamemode_C_EventPreloadMenuClasses_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostGobackTitle
struct ABP_AriseGamemode_C_EventPostGobackTitle_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnBeginGameTitle
struct ABP_AriseGamemode_C_OnBeginGameTitle_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.DoScreenMask
struct ABP_AriseGamemode_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnStartGameSectionProc
struct ABP_AriseGamemode_C_OnStartGameSectionProc_Params
{
	unsigned char                                      StartedSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.CaptureScene
struct ABP_AriseGamemode_C_CaptureScene_Params
{
	struct FTransform                                  CameraTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bUsePlayerTransform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeScreenMask
struct ABP_AriseGamemode_C_ChangeScreenMask_Params
{
	class AScreenMaskBase*                             NewScreenMask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.Event Go Back Scene Screen Mask
struct ABP_AriseGamemode_C_Event_Go_Back_Scene_Screen_Mask_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveBeginPlay
struct ABP_AriseGamemode_C_ReceiveBeginPlay_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoLoadSceneStreamLevel
struct ABP_AriseGamemode_C_BPE_DoLoadSceneStreamLevel_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoUnloadSceneStreamLevel
struct ABP_AriseGamemode_C_BPE_DoUnloadSceneStreamLevel_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveTick
struct ABP_AriseGamemode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveEndPlay
struct ABP_AriseGamemode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnDoSceneCapture
struct ABP_AriseGamemode_C_OnDoSceneCapture_Params
{
	struct FTransform                                  CaptureTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChat
struct ABP_AriseGamemode_C_BPE_PlayLongChat_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MapChange
struct ABP_AriseGamemode_C_BPE_MapChange_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapChangeReason                                   reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnRestartFieldScene
struct ABP_AriseGamemode_C_OnRestartFieldScene_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeDisplayScene
struct ABP_AriseGamemode_C_OnChangeDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChatWithArgs
struct ABP_AriseGamemode_C_BPE_PlayLongChatWithArgs_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLongChatPlayArgs                           InArgs;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayMovie
struct ABP_AriseGamemode_C_BPE_PlayMovie_Params
{
	struct FString                                     movieName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnEndMovie
struct ABP_AriseGamemode_C_OnEndMovie_Params
{
	unsigned char                                      ActiveScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnExecAutoSave
struct ABP_AriseGamemode_C_OnExecAutoSave_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.DelayedUpdateLongchatPlayQue
struct ABP_AriseGamemode_C_DelayedUpdateLongchatPlayQue_Params
{
	bool                                               bPostMapChange;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnTextureCacheFlash
struct ABP_AriseGamemode_C_OnTextureCacheFlash_Params
{
	bool                                               bGarbageCollection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropMips;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MemoryRefresh
struct ABP_AriseGamemode_C_BPE_MemoryRefresh_Params
{
	bool                                               bGarbageCollection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropMips;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_TextureRefresh
struct ABP_AriseGamemode_C_BPE_TextureRefresh_Params
{
	bool                                               bGarbageCollection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropMips;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeScenarioCounter
struct ABP_AriseGamemode_C_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventOnChanageDisplayScene
struct ABP_AriseGamemode_C_EventOnChanageDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.Event On Reset Player Free Lock Until Map Jump
struct ABP_AriseGamemode_C_Event_On_Reset_Player_Free_Lock_Until_Map_Jump_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeGameScene
struct ABP_AriseGamemode_C_OnChangeGameScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.񣌘򠳾񍯐�0�0_1
struct ABP_AriseGamemode_C_񣌘򠳾񍯐�0�0_1_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.ExecuteUbergraph_BP_AriseGamemode
struct ABP_AriseGamemode_C_ExecuteUbergraph_BP_AriseGamemode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveCancel__DelegateSignature
struct ABP_AriseGamemode_C_EventAutoSaveCancel__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation_PFUI__DelegateSignature
struct ABP_AriseGamemode_C_EventChangeLocation_PFUI__DelegateSignature_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveComplite__DelegateSignature
struct ABP_AriseGamemode_C_EventAutoSaveComplite__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventRequestAutoSave__DelegateSignature
struct ABP_AriseGamemode_C_EventRequestAutoSave__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventExecAutoSave__DelegateSignature
struct ABP_AriseGamemode_C_EventExecAutoSave__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventOpenFastTravelPoint__DelegateSignature
struct ABP_AriseGamemode_C_EventOpenFastTravelPoint__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventRestartFieldScene__DelegateSignature
struct ABP_AriseGamemode_C_EventRestartFieldScene__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation__DelegateSignature
struct ABP_AriseGamemode_C_EventChangeLocation__DelegateSignature_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventBattleStart__DelegateSignature
struct ABP_AriseGamemode_C_EventBattleStart__DelegateSignature_Params
{
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreMapChange__DelegateSignature
struct ABP_AriseGamemode_C_EventPreMapChange__DelegateSignature_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventFieldWakeup__DelegateSignature
struct ABP_AriseGamemode_C_EventFieldWakeup__DelegateSignature_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostMapChange__DelegateSignature
struct ABP_AriseGamemode_C_EventPostMapChange__DelegateSignature_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeWorldTime__DelegateSignature
struct ABP_AriseGamemode_C_OnChangeWorldTime__DelegateSignature_Params
{
	float                                              NewWorldTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.DoChangeMapEnvironment__DelegateSignature
struct ABP_AriseGamemode_C_DoChangeMapEnvironment__DelegateSignature_Params
{
	struct FString                                     EnvName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGamemode.BP_AriseGamemode_C.DoCaptureScene__DelegateSignature
struct ABP_AriseGamemode_C_DoCaptureScene__DelegateSignature_Params
{
	struct FTransform                                  CaptureTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
