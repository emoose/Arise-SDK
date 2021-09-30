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

// Function BP_GSC_Field.BP_GSC_Field_C.GetFieldSceneLocalState
struct UBP_GSC_Field_C_GetFieldSceneLocalState_Params
{
	TEnumAsByte<ENM_FieldSceneLocalState>              LocalState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMapShowState
struct UBP_GSC_Field_C_GetMapShowState_Params
{
	TEnumAsByte<ENM_MapShowState>                      MapShowState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloadedWithAllMapNoAction?
struct UBP_GSC_Field_C_IsMapUnloadedWithAllMapNoAction__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsPFHoldMousePosition
struct UBP_GSC_Field_C_IsPFHoldMousePosition_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsPreShowMap?
struct UBP_GSC_Field_C_IsPreShowMap__Params
{
	bool                                               bPreShow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMenuID
struct UBP_GSC_Field_C_GetMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorName
struct UBP_GSC_Field_C_GetMapLocatorName_Params
{
	struct FString                                     MapLocatorName;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetNextMapName
struct UBP_GSC_Field_C_GetNextMapName_Params
{
	struct FString                                     NextMapName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorDatabase
struct UBP_GSC_Field_C_GetMapLocatorDatabase_Params
{
	class UMapLocatorDatabase*                         MapLocatorDatabase;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree?
struct UBP_GSC_Field_C_IsPlayerFree__Params
{
	bool                                               Is;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMapChangeReason
struct UBP_GSC_Field_C_GetMapChangeReason_Params
{
	EMapChangeReason                                   MapChangeReason;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetOldMapName
struct UBP_GSC_Field_C_GetOldMapName_Params
{
	struct FString                                     OldMapName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetPFHUD
struct UBP_GSC_Field_C_GetPFHUD_Params
{
	class APF_HUD_Manager*                             PFHUD;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap
struct UBP_GSC_Field_C_ChangeMap_Params
{
	struct FString                                     ChangeMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapChangeReason                                   MapChangeReason;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeScenarioFlag;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMapChangePostEvent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNpcRespawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPlayerPose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap
struct UBP_GSC_Field_C_PreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreloaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap
struct UBP_GSC_Field_C_UnloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAtActorFinalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnloadAccept;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?
struct UBP_GSC_Field_C_IsMapUnloaded__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetCurrentMapName
struct UBP_GSC_Field_C_GetCurrentMapName_Params
{
	struct FString                                     CurrentMapName;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.WatchingTextureStreamingTick
struct UBP_GSC_Field_C_WatchingTextureStreamingTick_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.StartWatchingTextureStreaming
struct UBP_GSC_Field_C_StartWatchingTextureStreaming_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsTextureStreaming?
struct UBP_GSC_Field_C_IsTextureStreaming__Params
{
	bool                                               bStreaming;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.DestoryPFWidget
struct UBP_GSC_Field_C_DestoryPFWidget_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeMapChnagingState
struct UBP_GSC_Field_C_OnChangeMapChnagingState_Params
{
	bool                                               bChangingState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnNotifyPFStart
struct UBP_GSC_Field_C_OnNotifyPFStart_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeClear
struct UBP_GSC_Field_C_ScreenFadeClear_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C._IsFadeOrMaskOn
struct UBP_GSC_Field_C__IsFadeOrMaskOn_Params
{
	bool                                               bFadeOrMask;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C._IsPlayQuest?
struct UBP_GSC_Field_C__IsPlayQuest__Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeScenarioCounter
struct UBP_GSC_Field_C_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C._PopHotlinkLoad
struct UBP_GSC_Field_C__PopHotlinkLoad_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsPausePossibleState
struct UBP_GSC_Field_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsEnableSystemPause
struct UBP_GSC_Field_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C._PrintLog
struct UBP_GSC_Field_C__PrintLog_Params
{
	struct FString                                     LogText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameData
struct UBP_GSC_Field_C_OnLoadGameData_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.UpdateCameraMouseControlEnable
struct UBP_GSC_Field_C_UpdateCameraMouseControlEnable_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsCameraMouseControlEnable
struct UBP_GSC_Field_C_IsCameraMouseControlEnable_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.NormalizeLocationId
struct UBP_GSC_Field_C_NormalizeLocationId_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.ManagementFastTravelPointOpen
struct UBP_GSC_Field_C_ManagementFastTravelPointOpen_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C._PreloadmapListed?
struct UBP_GSC_Field_C__PreloadmapListed__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskManagement
struct UBP_GSC_Field_C_ScreenMaskManagement_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetPFStartFirstScript
struct UBP_GSC_Field_C_GetPFStartFirstScript_Params
{
	struct FSTR_PrePFStartOperation                    ScriptInfo;                                               // (Parm, OutParm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.RunPFStartScript
struct UBP_GSC_Field_C_RunPFStartScript_Params
{
	class UClass*                                      GameProcessClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation_Implementation
struct UBP_GSC_Field_C_AddPrePFOperation_Implementation_Params
{
	struct FSTR_PrePFStartOperation                    Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GSC_Field.BP_GSC_Field_C.SaveCurrentPlayerLocation
struct UBP_GSC_Field_C_SaveCurrentPlayerLocation_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.PFStart
struct UBP_GSC_Field_C_PFStart_Params
{
	bool                                               DisplaySceneIsPF;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SavedLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedResetCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CanOpenMenu
struct UBP_GSC_Field_C_CanOpenMenu_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CameraReset_Implementation
struct UBP_GSC_Field_C_CameraReset_Implementation_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorData
struct UBP_GSC_Field_C_GetRefLocatorData_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMapLocatorData                             OutLocatorData;                                           // (Parm, OutParm)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorResetCameraParams
struct UBP_GSC_Field_C_GetRefLocatorResetCameraParams_Params
{
	int                                                OutCameraType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutCamera_Pitch;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.RefLocatorInDoor?
struct UBP_GSC_Field_C_RefLocatorInDoor__Params
{
	bool                                               bIndoor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree_Implementation
struct UBP_GSC_Field_C_IsPlayerFree_Implementation_Params
{
	bool                                               Is;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator_Implementation
struct UBP_GSC_Field_C_ChangeLocator_Implementation_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap_Implementation
struct UBP_GSC_Field_C_ShowFieldMap_Implementation_Params
{
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayer
struct UBP_GSC_Field_C_ShowPlayer_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AssignLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bNeedResetCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ReloadMap
struct UBP_GSC_Field_C_ReloadMap_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeEventSatate
struct UBP_GSC_Field_C_OnChangeEventSatate_Params
{
	bool                                               bEventOn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterActive
struct UBP_GSC_Field_C_PFCharacterActive_Params
{
	bool                                               NewActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedResetCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterLockUpdate
struct UBP_GSC_Field_C_PFCharacterLockUpdate_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.AddPFCharacterLock
struct UBP_GSC_Field_C_AddPFCharacterLock_Params
{
	struct FString                                     User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UnlockDelaySec;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsEntryUnloadmap?
struct UBP_GSC_Field_C_IsEntryUnloadmap__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CanPlayable?
struct UBP_GSC_Field_C_CanPlayable__Params
{
	bool                                               bPlayAble;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ShowPFHUD
struct UBP_GSC_Field_C_ShowPFHUD_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PFEnableNOCheck;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap_Implementation
struct UBP_GSC_Field_C_CreanupPreloadMap_Implementation_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.ForceWakeup
struct UBP_GSC_Field_C_ForceWakeup_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.CurrentSceneIsSubScene?
struct UBP_GSC_Field_C_CurrentSceneIsSubScene__Params
{
	bool                                               bSubScene;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PrevSceneIsSubScene?
struct UBP_GSC_Field_C_PrevSceneIsSubScene__Params
{
	bool                                               bSubScene;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CreatePFWidget
struct UBP_GSC_Field_C_CreatePFWidget_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.DebugPrint
struct UBP_GSC_Field_C_DebugPrint_Params
{
	bool                                               PrintScreen;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsAllMapNoAction?
struct UBP_GSC_Field_C_IsAllMapNoAction__Params
{
	bool                                               bAnyAction;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsMapLoaded?
struct UBP_GSC_Field_C_IsMapLoaded__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?_Implementation
struct UBP_GSC_Field_C_IsMapUnloaded__Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.TickLoadUnloadManagement
struct UBP_GSC_Field_C_TickLoadUnloadManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.IsEntryPreloadmap?
struct UBP_GSC_Field_C_IsEntryPreloadmap__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNextUnload;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.AddPreloadmap
struct UBP_GSC_Field_C_AddPreloadmap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnPostMapChange
struct UBP_GSC_Field_C_OnPostMapChange_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap_Implementation
struct UBP_GSC_Field_C_UnloadMap_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAtActorFinalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnloadAccept;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOff
struct UBP_GSC_Field_C_ScreenMaskOff_Params
{
	bool                                               bUseDefaultMask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OpenPFMenu
struct UBP_GSC_Field_C_OpenPFMenu_Params
{
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bChangeNow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetPrevScene
struct UBP_GSC_Field_C_GetPrevScene_Params
{
	EAriseGameScene                                    PrevScene;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOn
struct UBP_GSC_Field_C_ScreenMaskOn_Params
{
	bool                                               bUseDefaultMask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.GetMapOrderManager
struct UBP_GSC_Field_C_GetMapOrderManager_Params
{
	class ABP_MapOrderManager_C*                       MapOrderManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap_Implementation
struct UBP_GSC_Field_C_PreloadMap_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreloaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap_Implementation
struct UBP_GSC_Field_C_ChangeMap_Implementation_Params
{
	struct FString                                     ChangeMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapChangeReason                                   MapChangeReason;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeScenarioFlag;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMapChangePostEvent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNpcRespawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPlayerPose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Initialize
struct UBP_GSC_Field_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Finalize
struct UBP_GSC_Field_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Tick
struct UBP_GSC_Field_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Wakeup
struct UBP_GSC_Field_C_BPE_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Sleep
struct UBP_GSC_Field_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadFinished
struct UBP_GSC_Field_C_OnLoadFinished_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnUnloadFinished
struct UBP_GSC_Field_C_OnUnloadFinished_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PlayDelayedLongChat
struct UBP_GSC_Field_C_PlayDelayedLongChat_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnChageGameState
struct UBP_GSC_Field_C_OnChageGameState_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeDisplayScene
struct UBP_GSC_Field_C_OnChangeDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnPreStartManagement
struct UBP_GSC_Field_C_OnPreStartManagement_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventShowPlayer
struct UBP_GSC_Field_C_EventShowPlayer_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap
struct UBP_GSC_Field_C_CreanupPreloadMap_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.SetPostDataLoad
struct UBP_GSC_Field_C_SetPostDataLoad_Params
{
	bool                                               PostDataLoad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.SetHideFieldMap
struct UBP_GSC_Field_C_SetHideFieldMap_Params
{
	bool                                               HideFieldMap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator
struct UBP_GSC_Field_C_ChangeLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.CameraReset
struct UBP_GSC_Field_C_CameraReset_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap
struct UBP_GSC_Field_C_ShowFieldMap_Params
{
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ReloadCurrentMap
struct UBP_GSC_Field_C_ReloadCurrentMap_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation
struct UBP_GSC_Field_C_AddPrePFOperation_Params
{
	struct FSTR_PrePFStartOperation                    Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GSC_Field.BP_GSC_Field_C.RegisterEvent_OnPostWakeupShowPlayer
struct UBP_GSC_Field_C_RegisterEvent_OnPostWakeupShowPlayer_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OpenPlayerFreeMenu
struct UBP_GSC_Field_C_OpenPlayerFreeMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bChangeNow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayerFreeHUD
struct UBP_GSC_Field_C_ShowPlayerFreeHUD_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PFEnableNOCheck;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.PauseField
struct UBP_GSC_Field_C_PauseField_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.UnpauseField
struct UBP_GSC_Field_C_UnpauseField_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.SkipNpcSpawnShowMapOnce
struct UBP_GSC_Field_C_SkipNpcSpawnShowMapOnce_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.MakeHotLink
struct UBP_GSC_Field_C_MakeHotLink_Params
{
	struct FString                                     LinkName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventShowMap
struct UBP_GSC_Field_C_EventShowMap_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeMaskClearDelayed
struct UBP_GSC_Field_C_ScreenFadeMaskClearDelayed_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.DelayedOpenMenu
struct UBP_GSC_Field_C_DelayedOpenMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field.BP_GSC_Field_C.ExecuteUbergraph_BP_GSC_Field
struct UBP_GSC_Field_C_ExecuteUbergraph_BP_GSC_Field_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameFromMenu__DelegateSignature
struct UBP_GSC_Field_C_OnLoadGameFromMenu__DelegateSignature_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventPostUnloadMap__DelegateSignature
struct UBP_GSC_Field_C_EventPostUnloadMap__DelegateSignature_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventPreUnloadMap__DelegateSignature
struct UBP_GSC_Field_C_EventPreUnloadMap__DelegateSignature_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.OnPostWakeupShowPlayer__DelegateSignature
struct UBP_GSC_Field_C_OnPostWakeupShowPlayer__DelegateSignature_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventPreStartScriptManagement__DelegateSignature
struct UBP_GSC_Field_C_EventPreStartScriptManagement__DelegateSignature_Params
{
};

// Function BP_GSC_Field.BP_GSC_Field_C.EventPostFieldWakeup__DelegateSignature
struct UBP_GSC_Field_C_EventPostFieldWakeup__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
