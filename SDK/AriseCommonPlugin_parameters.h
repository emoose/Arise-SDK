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

// Function AriseCommonPlugin.AreaPriorityComponent.SetOverridPriorityInt
struct UAreaPriorityComponent_SetOverridPriorityInt_Params
{
	unsigned char                                      _overridePriority;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AreaPriorityComponent.SetLocalPriority
struct UAreaPriorityComponent_SetLocalPriority_Params
{
	int                                                _localPriority;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AreaPriorityComponent.SetDefaultPriority
struct UAreaPriorityComponent_SetDefaultPriority_Params
{
	EAreaPriority                                      _defaultPriority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AreaPriorityComponent.IsOverraped
struct UAreaPriorityComponent_IsOverraped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AreaPriorityComponent.EndAreaOverlap
struct UAreaPriorityComponent_EndAreaOverlap_Params
{
};

// Function AriseCommonPlugin.AreaPriorityComponent.CanAction
struct UAreaPriorityComponent_CanAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AreaPriorityComponent.BeginAreaOverlap
struct UAreaPriorityComponent_BeginAreaOverlap_Params
{
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_ResetAssign
struct AAriseBasePlayerController_K2_ResetAssign_Params
{
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsMouseMove_Arise
struct AAriseBasePlayerController_K2_IsMouseMove_Arise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonRepeated_Arise
struct AAriseBasePlayerController_K2_IsButtonRepeated_Arise_Params
{
	struct FName                                       InButton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonPressed_Arise
struct AAriseBasePlayerController_K2_IsButtonPressed_Arise_Params
{
	struct FName                                       InButton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustReleased_Arise
struct AAriseBasePlayerController_K2_IsButtonJustReleased_Arise_Params
{
	struct FName                                       InButton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustPressed_Arise
struct AAriseBasePlayerController_K2_IsButtonJustPressed_Arise_Params
{
	struct FName                                       InButton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyMouseButtonPressed_Arise
struct AAriseBasePlayerController_K2_IsAnyMouseButtonPressed_Arise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyKeyboardPressed_Arise
struct AAriseBasePlayerController_K2_IsAnyKeyboardPressed_Arise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyGamepadPressed_Arise
struct AAriseBasePlayerController_K2_IsAnyGamepadPressed_Arise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAngleYaw
struct AAriseBasePlayerController_K2_GetCameraAngleYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAnglePitch
struct AAriseBasePlayerController_K2_GetCameraAnglePitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetAxisValue_Arise
struct AAriseBasePlayerController_K2_GetAxisValue_Arise_Params
{
	struct FName                                       InAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseCommonFunctionLibrary.TakeScreenshot
struct UAriseCommonFunctionLibrary_TakeScreenshot_Params
{
	struct FString                                     DirectoryPath;                                            // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bAddFilenameSuffix;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseCommonFunctionLibrary.IsSimulateInEditor
struct UAriseCommonFunctionLibrary_IsSimulateInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseConfigProfileDelegate.AriseConfigProfileDelegate_Test
struct UAriseConfigProfileDelegate_AriseConfigProfileDelegate_Test_Params
{
};

// Function AriseCommonPlugin.AriseGameModeBase.UnloadStreamLevels
struct AAriseGameModeBase_UnloadStreamLevels_Params
{
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseGameModeBase.RemoveStreamLevels
struct AAriseGameModeBase_RemoveStreamLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseGameModeBase.LoadStreamLevels
struct AAriseGameModeBase_LoadStreamLevels_Params
{
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseGameModeBase.GetPersistantLevel
struct AAriseGameModeBase_GetPersistantLevel_Params
{
	class ULevel*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseGameModeBase.AddStreamLevels
struct AAriseGameModeBase_AddStreamLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Paths;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseGameViewportClient.OnBeforeLostFocus
struct UAriseGameViewportClient_OnBeforeLostFocus_Params
{
};

// Function AriseCommonPlugin.AriseGameViewportClient.OnAfterReceivedFocus
struct UAriseGameViewportClient_OnAfterReceivedFocus_Params
{
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_SetPadKeys
struct UAriseKeyConfig_K2_SetPadKeys_Params
{
	int                                                InButtonId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FKey>                                InShifts;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_SetKeyboardKeys
struct UAriseKeyConfig_K2_SetKeyboardKeys_Params
{
	int                                                InButtonId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FKey>                                InShifts;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_Reset
struct UAriseKeyConfig_K2_Reset_Params
{
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_GetPadKeys
struct UAriseKeyConfig_K2_GetPadKeys_Params
{
	int                                                InButtonId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKey>                                OutShifts;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_GetKeyboardKeys
struct UAriseKeyConfig_K2_GetKeyboardKeys_Params
{
	int                                                InButtonId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKey>                                OutShifts;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_GetButtons
struct UAriseKeyConfig_K2_GetButtons_Params
{
	TArray<int>                                        OutButtons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function AriseCommonPlugin.AriseKeyConfig.K2_Apply
struct UAriseKeyConfig_K2_Apply_Params
{
	class AInputExtPlayerController*                   InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibrationAll
struct UAriseVibrationFunctionLibrary_StopVibrationAll_Params
{
};

// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibration
struct UAriseVibrationFunctionLibrary_StopVibration_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.PlayVibration
struct UAriseVibrationFunctionLibrary_PlayVibration_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LargePow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SmallPow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.EnableVibration
struct UAriseVibrationFunctionLibrary_EnableVibration_Params
{
	bool                                               bNewEnable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.BlueprintBridgeInterface.BPGeneralFunctionBool
struct UBlueprintBridgeInterface_BPGeneralFunctionBool_Params
{
	struct FName                                       OpertionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<struct FName, struct FString>                 Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.StreamLevelLoader.UnloadStreamLevels
struct AStreamLevelLoader_UnloadStreamLevels_Params
{
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseCommonPlugin.StreamLevelLoader.UnloadAllStreamLevels
struct AStreamLevelLoader_UnloadAllStreamLevels_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.RemoveStreamLevels
struct AStreamLevelLoader_RemoveStreamLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.StreamLevelLoader.LoadStreamLevels
struct AStreamLevelLoader_LoadStreamLevels_Params
{
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.StreamLevelLoader.GetUserConut
struct AStreamLevelLoader_GetUserConut_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseCommonPlugin.StreamLevelLoader.DoUnloadStreamLevels
struct AStreamLevelLoader_DoUnloadStreamLevels_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.DoUnloadAll
struct AStreamLevelLoader_DoUnloadAll_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.DoLoadStreamLevels
struct AStreamLevelLoader_DoLoadStreamLevels_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadStreamLevel
struct AStreamLevelLoader_BPE_DoUnloadStreamLevel_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadAll
struct AStreamLevelLoader_BPE_DoUnloadAll_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoLoadStreamLevel
struct AStreamLevelLoader_BPE_DoLoadStreamLevel_Params
{
};

// Function AriseCommonPlugin.StreamLevelLoader.AddStreamLevels
struct AStreamLevelLoader_AddStreamLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Paths;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AriseCommonPlugin.TextWidgetInterface.SetTextColor
struct UTextWidgetInterface_SetTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                 // (Parm)
};

// Function AriseCommonPlugin.TextWidgetInterface.SetText
struct UTextWidgetInterface_SetText_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseCommonPlugin.TextWidgetInterface.SetBgColor
struct UTextWidgetInterface_SetBgColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
