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

// Function DebugPlugin.DebugUtility.K2_SetScreenMessageEnable
struct UDebugUtility_K2_SetScreenMessageEnable_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_IsScreenMessageEnable
struct UDebugUtility_K2_IsScreenMessageEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugWarningString
struct UDebugUtility_K2_DebugWarningString_Params
{
	struct FString                                     Text;                                                     // (ConstParm, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugWarning
struct UDebugUtility_K2_DebugWarning_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugPrintString
struct UDebugUtility_K2_DebugPrintString_Params
{
	struct FString                                     Text;                                                     // (ConstParm, Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugPrint
struct UDebugUtility_K2_DebugPrint_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugErrorString
struct UDebugUtility_K2_DebugErrorString_Params
{
	struct FString                                     Text;                                                     // (ConstParm, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DebugError
struct UDebugUtility_K2_DebugError_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_UnregisterDebugValueChangedCallback
struct UDebugUtility_K2_DBP_UnregisterDebugValueChangedCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_string
struct UDebugUtility_K2_DBP_SetDebugValue_string_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_int32
struct UDebugUtility_K2_DBP_SetDebugValue_int32_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_float
struct UDebugUtility_K2_DBP_SetDebugValue_float_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_color
struct UDebugUtility_K2_DBP_SetDebugValue_color_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_bool
struct UDebugUtility_K2_DBP_SetDebugValue_bool_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_RegisterDebugValueChangedCallback
struct UDebugUtility_K2_DBP_RegisterDebugValueChangedCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Event;                                                    // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_string
struct UDebugUtility_K2_DBP_GetDebugValue_string_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FallOffValue;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_int32
struct UDebugUtility_K2_DBP_GetDebugValue_int32_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FallOffValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_float
struct UDebugUtility_K2_DBP_GetDebugValue_float_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FallOffValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_color
struct UDebugUtility_K2_DBP_GetDebugValue_color_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FallOffValue;                                             // (Parm, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_bool
struct UDebugUtility_K2_DBP_GetDebugValue_bool_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FallOffValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBP_AddDebugValue
struct UDebugUtility_K2_DBP_AddDebugValue_Params
{
	struct FDebugParamDesc                             Parameter;                                                // (Parm)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringWithEvent
struct UDebugUtility_K2_DBM_ValueStringWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnlyWithEvent
struct UDebugUtility_K2_DBM_ValueStringReadOnlyWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnly
struct UDebugUtility_K2_DBM_ValueStringReadOnly_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueString
struct UDebugUtility_K2_DBM_ValueString_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntWithEvent
struct UDebugUtility_K2_DBM_ValueIntWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EDebugMenuIntegerStyle                             Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeparateCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SeparateChar;                                             // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnlyWithEvent
struct UDebugUtility_K2_DBM_ValueIntReadOnlyWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
	EDebugMenuIntegerStyle                             Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeparateCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SeparateChar;                                             // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnly
struct UDebugUtility_K2_DBM_ValueIntReadOnly_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	EDebugMenuIntegerStyle                             Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeparateCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SeparateChar;                                             // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueInt
struct UDebugUtility_K2_DBM_ValueInt_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EDebugMenuIntegerStyle                             Style;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeparateCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SeparateChar;                                             // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueGroup
struct UDebugUtility_K2_DBM_ValueGroup_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatWithEvent
struct UDebugUtility_K2_DBM_ValueFloatWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnlyWithEvent
struct UDebugUtility_K2_DBM_ValueFloatReadOnlyWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnly
struct UDebugUtility_K2_DBM_ValueFloatReadOnly_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloat
struct UDebugUtility_K2_DBM_ValueFloat_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueEnum
struct UDebugUtility_K2_DBM_ValueEnum_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Enum;                                                     // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueColor
struct UDebugUtility_K2_DBM_ValueColor_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolWithEvent
struct UDebugUtility_K2_DBM_ValueBoolWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnlyWithEvent
struct UDebugUtility_K2_DBM_ValueBoolReadOnlyWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnly
struct UDebugUtility_K2_DBM_ValueBoolReadOnly_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ValueBool
struct UDebugUtility_K2_DBM_ValueBool_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetValue;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SetValue;                                                 // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_Value
struct UDebugUtility_K2_DBM_Value_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_Text
struct UDebugUtility_K2_DBM_Text_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_SubMenu
struct UDebugUtility_K2_DBM_SubMenu_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GenerateSubMenu;                                          // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_SetEditGroup
struct UDebugUtility_K2_DBM_SetEditGroup_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_Open
struct UDebugUtility_K2_DBM_Open_Params
{
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_ListWithEvent
struct UDebugUtility_K2_DBM_ListWithEvent_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetList;                                                  // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_List
struct UDebugUtility_K2_DBM_List_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             GetList;                                                  // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_GetEditGroup
struct UDebugUtility_K2_DBM_GetEditGroup_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.K2_DBM_Button
struct UDebugUtility_K2_DBM_Button_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     UserData;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Decide;                                                   // (Parm, ZeroConstructor)
};

// Function DebugPlugin.DebugUtility.K2_DBM_Bracket
struct UDebugUtility_K2_DBM_Bracket_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.DBM_Show
struct UDebugUtility_DBM_Show_Params
{
};

// Function DebugPlugin.DebugUtility.DBM_IsOpened
struct UDebugUtility_DBM_IsOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugPlugin.DebugUtility.DBM_Hide
struct UDebugUtility_DBM_Hide_Params
{
};

// Function DebugPlugin.DebugUtility.DBM_CurrentWindowClose
struct UDebugUtility_DBM_CurrentWindowClose_Params
{
};

// Function DebugPlugin.DebugUtility.DBM_Close
struct UDebugUtility_DBM_Close_Params
{
};

// Function DebugPlugin.DebugUtility.DBM_ClearAll
struct UDebugUtility_DBM_ClearAll_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
