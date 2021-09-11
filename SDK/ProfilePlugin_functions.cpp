
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

// Function ProfilePlugin.ProfileBPLibrary.UnregisterOnUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            iHandle                        (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_UnregisterOnUpdateProfileCallback(int iHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.UnregisterOnUpdateProfileCallback");

	UProfileBPLibrary_UnregisterOnUpdateProfileCallback_Params params;
	params.iHandle = iHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.UnregisterOnPreUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            iHandle                        (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_UnregisterOnPreUpdateProfileCallback(int iHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.UnregisterOnPreUpdateProfileCallback");

	UProfileBPLibrary_UnregisterOnPreUpdateProfileCallback_Params params;
	params.iHandle = iHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_UnregisterAllOnUpdateProfileCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnUpdateProfileCallback");

	UProfileBPLibrary_UnregisterAllOnUpdateProfileCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnPreUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_UnregisterAllOnPreUpdateProfileCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.UnregisterAllOnPreUpdateProfileCallback");

	UProfileBPLibrary_UnregisterAllOnPreUpdateProfileCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          iRenderThreadTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          iGameThreadTime                (Parm, ZeroConstructor, IsPlainOldData)
// float                          iGPUFrameTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          iFrameTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_SetProfileThresholdTime(float iRenderThreadTime, float iGameThreadTime, float iGPUFrameTime, float iFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdTime");

	UProfileBPLibrary_SetProfileThresholdTime_Params params;
	params.iRenderThreadTime = iRenderThreadTime;
	params.iGameThreadTime = iGameThreadTime;
	params.iGPUFrameTime = iGPUFrameTime;
	params.iFrameTime = iFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdIntervalTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          iIntervalTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_SetProfileThresholdIntervalTime(float iIntervalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.SetProfileThresholdIntervalTime");

	UProfileBPLibrary_SetProfileThresholdIntervalTime_Params params;
	params.iIntervalTime = iIntervalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.SetProfileIntervalTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          iIntervalTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_SetProfileIntervalTime(float iIntervalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.SetProfileIntervalTime");

	UProfileBPLibrary_SetProfileIntervalTime_Params params;
	params.iIntervalTime = iIntervalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.SetEnableProfileInterval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           iEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UProfileBPLibrary::STATIC_SetEnableProfileInterval(bool iEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.SetEnableProfileInterval");

	UProfileBPLibrary_SetEnableProfileInterval_Params params;
	params.iEnable = iEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.Screenshot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         iFolders                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 iFileName                      (Parm, ZeroConstructor)
// struct FString                 OutFilePath                    (Parm, OutParm, ZeroConstructor)

void UProfileBPLibrary::STATIC_Screenshot(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.Screenshot");

	UProfileBPLibrary_Screenshot_Params params;
	params.iFolders = iFolders;
	params.iFileName = iFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFilePath != nullptr)
		*OutFilePath = params.OutFilePath;
}


// Function ProfilePlugin.ProfileBPLibrary.ResetProfileThresholdIntervalTime
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_ResetProfileThresholdIntervalTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.ResetProfileThresholdIntervalTime");

	UProfileBPLibrary_ResetProfileThresholdIntervalTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.ResetProfileIntervalTime
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_ResetProfileIntervalTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.ResetProfileIntervalTime");

	UProfileBPLibrary_ResetProfileIntervalTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.Reset");

	UProfileBPLibrary_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.RequestProfile
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_RequestProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.RequestProfile");

	UProfileBPLibrary_RequestProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.RegisterOnUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         iDelegate                      (ConstParm, Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProfileBPLibrary::STATIC_RegisterOnUpdateProfileCallback(const struct FScriptDelegate& iDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.RegisterOnUpdateProfileCallback");

	UProfileBPLibrary_RegisterOnUpdateProfileCallback_Params params;
	params.iDelegate = iDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.RegisterOnPreUpdateProfileCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         iDelegate                      (ConstParm, Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProfileBPLibrary::STATIC_RegisterOnPreUpdateProfileCallback(const struct FScriptDelegate& iDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.RegisterOnPreUpdateProfileCallback");

	UProfileBPLibrary_RegisterOnPreUpdateProfileCallback_Params params;
	params.iDelegate = iDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.OutputJSON
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         iFolders                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 iFileName                      (Parm, ZeroConstructor)
// struct FString                 OutOutputPath                  (Parm, OutParm, ZeroConstructor)

void UProfileBPLibrary::STATIC_OutputJSON(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutOutputPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.OutputJSON");

	UProfileBPLibrary_OutputJSON_Params params;
	params.iFolders = iFolders;
	params.iFileName = iFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOutputPath != nullptr)
		*OutOutputPath = params.OutOutputPath;
}


// Function ProfilePlugin.ProfileBPLibrary.OutputCSV
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         iFolders                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 iFileName                      (Parm, ZeroConstructor)
// struct FString                 OutOutputPath                  (Parm, OutParm, ZeroConstructor)

void UProfileBPLibrary::STATIC_OutputCSV(TArray<struct FString> iFolders, const struct FString& iFileName, struct FString* OutOutputPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.OutputCSV");

	UProfileBPLibrary_OutputCSV_Params params;
	params.iFolders = iFolders;
	params.iFileName = iFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOutputPath != nullptr)
		*OutOutputPath = params.OutOutputPath;
}


// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformXboxOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProfileBPLibrary::STATIC_IsTargetPlatformXboxOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformXboxOne");

	UProfileBPLibrary_IsTargetPlatformXboxOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformWIN
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProfileBPLibrary::STATIC_IsTargetPlatformWIN()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformWIN");

	UProfileBPLibrary_IsTargetPlatformWIN_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformPS4
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProfileBPLibrary::STATIC_IsTargetPlatformPS4()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.IsTargetPlatformPS4");

	UProfileBPLibrary_IsTargetPlatformPS4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.IsEnableToggleDrawEvents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProfileBPLibrary::STATIC_IsEnableToggleDrawEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.IsEnableToggleDrawEvents");

	UProfileBPLibrary_IsEnableToggleDrawEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.IsEnableStatNamedEvents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProfileBPLibrary::STATIC_IsEnableStatNamedEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.IsEnableStatNamedEvents");

	UProfileBPLibrary_IsEnableStatNamedEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProfilePlugin.ProfileBPLibrary.End
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.End");

	UProfileBPLibrary_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.ProfileBPLibrary.Begin
// (Final, Native, Static, Public, BlueprintCallable)

void UProfileBPLibrary::STATIC_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.ProfileBPLibrary.Begin");

	UProfileBPLibrary_Begin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfilePlugin.RequestChangeMapReceiver.OnRequestReceive
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChangeMapRequest       iRequest                       (ConstParm, Parm, OutParm, ReferenceParm)

void ARequestChangeMapReceiver::OnRequestReceive(const struct FChangeMapRequest& iRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfilePlugin.RequestChangeMapReceiver.OnRequestReceive");

	ARequestChangeMapReceiver_OnRequestReceive_Params params;
	params.iRequest = iRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
