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

// Function InputExtPlugin.InputExtInputProcessBase.SetLayer
struct AInputExtInputProcessBase_SetLayer_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.SetCurrentProcess
struct AInputExtInputProcessBase_SetCurrentProcess_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.ReceiveSuspendProcess
struct AInputExtInputProcessBase_ReceiveSuspendProcess_Params
{
};

// Function InputExtPlugin.InputExtInputProcessBase.ReceiveResumeProcess
struct AInputExtInputProcessBase_ReceiveResumeProcess_Params
{
};

// Function InputExtPlugin.InputExtInputProcessBase.ReceiveEndProcess
struct AInputExtInputProcessBase_ReceiveEndProcess_Params
{
};

// Function InputExtPlugin.InputExtInputProcessBase.ReceiveBeginProcess
struct AInputExtInputProcessBase_ReceiveBeginProcess_Params
{
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonRepeated
struct AInputExtInputProcessBase_K2_IsButtonRepeated_Params
{
	struct FName                                       InButtonName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonPressed
struct AInputExtInputProcessBase_K2_IsButtonPressed_Params
{
	struct FName                                       InButtonName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustReleased
struct AInputExtInputProcessBase_K2_IsButtonJustReleased_Params
{
	struct FName                                       InButtonName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustPressed
struct AInputExtInputProcessBase_K2_IsButtonJustPressed_Params
{
	struct FName                                       InButtonName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_GetPlayerController
struct AInputExtInputProcessBase_K2_GetPlayerController_Params
{
	class AInputExtPlayerController*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_GetMousePosition
struct AInputExtInputProcessBase_K2_GetMousePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_GetMouseDelta
struct AInputExtInputProcessBase_K2_GetMouseDelta_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_GetAxisValue
struct AInputExtInputProcessBase_K2_GetAxisValue_Params
{
	struct FName                                       InAxisName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.K2_ExecuteProcess
struct AInputExtInputProcessBase_K2_ExecuteProcess_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtInputProcessBase.GetLayer
struct AInputExtInputProcessBase_GetLayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_ShowSteamBindingPanel
struct AInputExtPlayerController_K2_ShowSteamBindingPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_ShowMouseCursor
struct AInputExtPlayerController_K2_ShowMouseCursor_Params
{
	bool                                               iShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetPadAssignList
struct AInputExtPlayerController_K2_SetPadAssignList_Params
{
	TMap<struct FName, int>                            OutAssignList;                                            // (Parm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetKeyboardAssignList
struct AInputExtPlayerController_K2_SetKeyboardAssignList_Params
{
	TMap<struct FName, int>                            OutAssignList;                                            // (Parm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetInputModeArise
struct AInputExtPlayerController_K2_SetInputModeArise_Params
{
	bool                                               bMouseHold;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetInputAnalogButtonThreshold
struct AInputExtPlayerController_K2_SetInputAnalogButtonThreshold_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetHoldMousePosition
struct AInputExtPlayerController_K2_SetHoldMousePosition_Params
{
	bool                                               iHold;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetHasWindowFocus
struct AInputExtPlayerController_K2_SetHasWindowFocus_Params
{
	bool                                               iHold;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_SetCategoryFilter
struct AInputExtPlayerController_K2_SetCategoryFilter_Params
{
	int                                                CategoryFilter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_ResetPadAssignList
struct AInputExtPlayerController_K2_ResetPadAssignList_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAssignList
struct AInputExtPlayerController_K2_ResetKeyboardAssignList_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAndMouseAssignList
struct AInputExtPlayerController_K2_ResetKeyboardAndMouseAssignList_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_ResetCategoryFilter
struct AInputExtPlayerController_K2_ResetCategoryFilter_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_Reset
struct AInputExtPlayerController_K2_Reset_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_RemoveAssign
struct AInputExtPlayerController_K2_RemoveAssign_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess2
struct AInputExtPlayerController_K2_PushInputProcess2_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess
struct AInputExtPlayerController_K2_PushInputProcess_Params
{
	class AInputExtInputProcessBase*                   NewProcess;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_PushInputLayer
struct AInputExtPlayerController_K2_PushInputLayer_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	TArray<struct FName>                               ButtonNames;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BlockAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcessLayer
struct AInputExtPlayerController_K2_PopInputProcessLayer_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyProcess;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcess
struct AInputExtPlayerController_K2_PopInputProcess_Params
{
	bool                                               bDestroyProcess;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_PopInputLayer
struct AInputExtPlayerController_K2_PopInputLayer_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsSteamControllerEnable
struct AInputExtPlayerController_K2_IsSteamControllerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsShowMouseCursor
struct AInputExtPlayerController_K2_IsShowMouseCursor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsMouseMove
struct AInputExtPlayerController_K2_IsMouseMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsHoldMousePosition
struct AInputExtPlayerController_K2_IsHoldMousePosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonRepeated
struct AInputExtPlayerController_K2_IsButtonRepeated_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonPressed
struct AInputExtPlayerController_K2_IsButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustReleased
struct AInputExtPlayerController_K2_IsButtonJustReleased_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustPressed
struct AInputExtPlayerController_K2_IsButtonJustPressed_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonDefined
struct AInputExtPlayerController_K2_IsButtonDefined_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsAxisDefined
struct AInputExtPlayerController_K2_IsAxisDefined_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyMouseButtonPressed
struct AInputExtPlayerController_K2_IsAnyMouseButtonPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyKeyboardPressed
struct AInputExtPlayerController_K2_IsAnyKeyboardPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyGamepadPressed
struct AInputExtPlayerController_K2_IsAnyGamepadPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_InputActivate
struct AInputExtPlayerController_K2_InputActivate_Params
{
	class APlayerController*                           OldPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_HasWindowFocus
struct AInputExtPlayerController_K2_HasWindowFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetSteamControllerKeys
struct AInputExtPlayerController_K2_GetSteamControllerKeys_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAssignKeyInfo>                 OutInfos;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys_DEPRECATED
struct AInputExtPlayerController_K2_GetPadKeys_DEPRECATED_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKey>                                OutShifts;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys
struct AInputExtPlayerController_K2_GetPadKeys_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAssignKeyInfo>                 OutInfos;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetPadGuideList
struct AInputExtPlayerController_K2_GetPadGuideList_Params
{
	EInputCategory                                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPadKeyId, struct FName>                      OutAssignList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetPadFixedList
struct AInputExtPlayerController_K2_GetPadFixedList_Params
{
	TMap<struct FName, int>                            OutAssignList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetPadAssignList
struct AInputExtPlayerController_K2_GetPadAssignList_Params
{
	TMap<struct FName, int>                            OutAssignList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetMousePosition
struct AInputExtPlayerController_K2_GetMousePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetMouseDelta
struct AInputExtPlayerController_K2_GetMouseDelta_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys_DEPRECATED
struct AInputExtPlayerController_K2_GetKeyboardKeys_DEPRECATED_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKey>                                OutShifts;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys
struct AInputExtPlayerController_K2_GetKeyboardKeys_Params
{
	struct FName                                       ButtonName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAssignKeyInfo>                 OutInfos;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardAssignList
struct AInputExtPlayerController_K2_GetKeyboardAssignList_Params
{
	TMap<struct FName, int>                            OutAssignList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetInputAnalogButtonThreshold
struct AInputExtPlayerController_K2_GetInputAnalogButtonThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetDebugMouseState
struct AInputExtPlayerController_K2_GetDebugMouseState_Params
{
	struct FDebugMouseState                            State;                                                    // (Parm, OutParm)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetCurrentInputProcess
struct AInputExtPlayerController_K2_GetCurrentInputProcess_Params
{
	class AInputExtInputProcessBase*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetCategoryFilter
struct AInputExtPlayerController_K2_GetCategoryFilter_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_GetAxisValue
struct AInputExtPlayerController_K2_GetAxisValue_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_DumpAssign
struct AInputExtPlayerController_K2_DumpAssign_Params
{
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddThresholdTime
struct AInputExtPlayerController_K2_AddThresholdTime_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddShift_DEPRECATED
struct AInputExtPlayerController_K2_AddShift_DEPRECATED_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddButtonFromDataTable
struct AInputExtPlayerController_K2_AddButtonFromDataTable_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddButton
struct AInputExtPlayerController_K2_AddButton_Params
{
	struct FName                                       ButtonName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddAxisFromDataTable
struct AInputExtPlayerController_K2_AddAxisFromDataTable_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputExtPlugin.InputExtPlayerController.K2_AddAxis
struct AInputExtPlayerController_K2_AddAxis_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
