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

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetFieldSceneLocalState
struct UBP_GSC_Field_Interface_C_GetFieldSceneLocalState_Params
{
	TEnumAsByte<ENM_FieldSceneLocalState>              LocalState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapShowState
struct UBP_GSC_Field_Interface_C_GetMapShowState_Params
{
	TEnumAsByte<ENM_MapShowState>                      MapShowState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloadedWithAllMapNoAction?
struct UBP_GSC_Field_Interface_C_IsMapUnloadedWithAllMapNoAction__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SkipNpcSpawnShowMapOnce
struct UBP_GSC_Field_Interface_C_SkipNpcSpawnShowMapOnce_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPFHoldMousePosition
struct UBP_GSC_Field_Interface_C_IsPFHoldMousePosition_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnpauseField
struct UBP_GSC_Field_Interface_C_UnpauseField_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PauseField
struct UBP_GSC_Field_Interface_C_PauseField_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPreShowMap?
struct UBP_GSC_Field_Interface_C_IsPreShowMap__Params
{
	bool                                               bPreShow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ReloadCurrentMap
struct UBP_GSC_Field_Interface_C_ReloadCurrentMap_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.MakeHotLink
struct UBP_GSC_Field_Interface_C_MakeHotLink_Params
{
	struct FString                                     LinkName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMenuID
struct UBP_GSC_Field_Interface_C_GetMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowPlayerFreeHUD
struct UBP_GSC_Field_Interface_C_ShowPlayerFreeHUD_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PFEnableNOCheck;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.OpenPlayerFreeMenu
struct UBP_GSC_Field_Interface_C_OpenPlayerFreeMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bChangeNow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.RegisterEvent_OnPostWakeupShowPlayer
struct UBP_GSC_Field_Interface_C_RegisterEvent_OnPostWakeupShowPlayer_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorName
struct UBP_GSC_Field_Interface_C_GetMapLocatorName_Params
{
	struct FString                                     MapLocatorName;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetNextMapName
struct UBP_GSC_Field_Interface_C_GetNextMapName_Params
{
	struct FString                                     NextMapName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorDatabase
struct UBP_GSC_Field_Interface_C_GetMapLocatorDatabase_Params
{
	class UMapLocatorDatabase*                         MapLocatorDatabase;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.AddPrePFOperation
struct UBP_GSC_Field_Interface_C_AddPrePFOperation_Params
{
	struct FSTR_PrePFStartOperation                    Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPlayerFree?
struct UBP_GSC_Field_Interface_C_IsPlayerFree__Params
{
	bool                                               Is;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapChangeReason
struct UBP_GSC_Field_Interface_C_GetMapChangeReason_Params
{
	EMapChangeReason                                   MapChangeReason;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetOldMapName
struct UBP_GSC_Field_Interface_C_GetOldMapName_Params
{
	struct FString                                     OldMapName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowFieldMap
struct UBP_GSC_Field_Interface_C_ShowFieldMap_Params
{
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CameraReset
struct UBP_GSC_Field_Interface_C_CameraReset_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeLocator
struct UBP_GSC_Field_Interface_C_ChangeLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetPFHUD
struct UBP_GSC_Field_Interface_C_GetPFHUD_Params
{
	class APF_HUD_Manager*                             PFHUD;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetPostDataLoad
struct UBP_GSC_Field_Interface_C_SetPostDataLoad_Params
{
	bool                                               PostDataLoad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetHideFieldMap
struct UBP_GSC_Field_Interface_C_SetHideFieldMap_Params
{
	bool                                               HideFieldMap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetCurrentMapName
struct UBP_GSC_Field_Interface_C_GetCurrentMapName_Params
{
	struct FString                                     CurrentMapName;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CreanupPreloadMap
struct UBP_GSC_Field_Interface_C_CreanupPreloadMap_Params
{
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloaded?
struct UBP_GSC_Field_Interface_C_IsMapUnloaded__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnloadMap
struct UBP_GSC_Field_Interface_C_UnloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAtActorFinalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnloadAccept;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PreloadMap
struct UBP_GSC_Field_Interface_C_PreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreloaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeMap
struct UBP_GSC_Field_Interface_C_ChangeMap_Params
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
