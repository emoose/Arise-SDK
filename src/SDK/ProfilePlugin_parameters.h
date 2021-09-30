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

// Function ProfilePlugin.ProfileBPLibrary.UnregisterOnUpdateProfileCallback
struct UProfileBPLibrary_UnregisterOnUpdateProfileCallback_Params
{
	int                                                iHandle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.UnregisterOnPreUpdateProfileCallback
struct UProfileBPLibrary_UnregisterOnPreUpdateProfileCallback_Params
{
	int                                                iHandle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnUpdateProfileCallback
struct UProfileBPLibrary_UnregisterAllOnUpdateProfileCallback_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnPreUpdateProfileCallback
struct UProfileBPLibrary_UnregisterAllOnPreUpdateProfileCallback_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdTime
struct UProfileBPLibrary_SetProfileThresholdTime_Params
{
	float                                              iRenderThreadTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              iGameThreadTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              iGPUFrameTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              iFrameTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdIntervalTime
struct UProfileBPLibrary_SetProfileThresholdIntervalTime_Params
{
	float                                              iIntervalTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.SetProfileIntervalTime
struct UProfileBPLibrary_SetProfileIntervalTime_Params
{
	float                                              iIntervalTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.SetEnableProfileInterval
struct UProfileBPLibrary_SetEnableProfileInterval_Params
{
	bool                                               iEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.Screenshot
struct UProfileBPLibrary_Screenshot_Params
{
	TArray<struct FString>                             iFolders;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     iFileName;                                                // (Parm, ZeroConstructor)
	struct FString                                     OutFilePath;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function ProfilePlugin.ProfileBPLibrary.ResetProfileThresholdIntervalTime
struct UProfileBPLibrary_ResetProfileThresholdIntervalTime_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.ResetProfileIntervalTime
struct UProfileBPLibrary_ResetProfileIntervalTime_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.Reset
struct UProfileBPLibrary_Reset_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.RequestProfile
struct UProfileBPLibrary_RequestProfile_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.RegisterOnUpdateProfileCallback
struct UProfileBPLibrary_RegisterOnUpdateProfileCallback_Params
{
	struct FScriptDelegate                             iDelegate;                                                // (ConstParm, Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.RegisterOnPreUpdateProfileCallback
struct UProfileBPLibrary_RegisterOnPreUpdateProfileCallback_Params
{
	struct FScriptDelegate                             iDelegate;                                                // (ConstParm, Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.OutputJSON
struct UProfileBPLibrary_OutputJSON_Params
{
	TArray<struct FString>                             iFolders;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     iFileName;                                                // (Parm, ZeroConstructor)
	struct FString                                     OutOutputPath;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ProfilePlugin.ProfileBPLibrary.OutputCSV
struct UProfileBPLibrary_OutputCSV_Params
{
	TArray<struct FString>                             iFolders;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     iFileName;                                                // (Parm, ZeroConstructor)
	struct FString                                     OutOutputPath;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformXboxOne
struct UProfileBPLibrary_IsTargetPlatformXboxOne_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformWIN
struct UProfileBPLibrary_IsTargetPlatformWIN_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformPS4
struct UProfileBPLibrary_IsTargetPlatformPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.IsEnableToggleDrawEvents
struct UProfileBPLibrary_IsEnableToggleDrawEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.IsEnableStatNamedEvents
struct UProfileBPLibrary_IsEnableStatNamedEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProfilePlugin.ProfileBPLibrary.End
struct UProfileBPLibrary_End_Params
{
};

// Function ProfilePlugin.ProfileBPLibrary.Begin
struct UProfileBPLibrary_Begin_Params
{
};

// Function ProfilePlugin.RequestChangeMapReceiver.OnRequestReceive
struct ARequestChangeMapReceiver_OnRequestReceive_Params
{
	struct FChangeMapRequest                           iRequest;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
