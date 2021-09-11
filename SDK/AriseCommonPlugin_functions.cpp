
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

// Function AriseCommonPlugin.AreaPriorityComponent.SetOverridPriorityInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  _overridePriority              (Parm, ZeroConstructor, IsPlainOldData)

void UAreaPriorityComponent::SetOverridPriorityInt(unsigned char _overridePriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.SetOverridPriorityInt");

	UAreaPriorityComponent_SetOverridPriorityInt_Params params;
	params._overridePriority = _overridePriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AreaPriorityComponent.SetLocalPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            _localPriority                 (Parm, ZeroConstructor, IsPlainOldData)

void UAreaPriorityComponent::SetLocalPriority(int _localPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.SetLocalPriority");

	UAreaPriorityComponent_SetLocalPriority_Params params;
	params._localPriority = _localPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AreaPriorityComponent.SetDefaultPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAreaPriority                  _defaultPriority               (Parm, ZeroConstructor, IsPlainOldData)

void UAreaPriorityComponent::SetDefaultPriority(EAreaPriority _defaultPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.SetDefaultPriority");

	UAreaPriorityComponent_SetDefaultPriority_Params params;
	params._defaultPriority = _defaultPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AreaPriorityComponent.IsOverraped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAreaPriorityComponent::IsOverraped()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.IsOverraped");

	UAreaPriorityComponent_IsOverraped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AreaPriorityComponent.EndAreaOverlap
// (Native, Public, BlueprintCallable)

void UAreaPriorityComponent::EndAreaOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.EndAreaOverlap");

	UAreaPriorityComponent_EndAreaOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AreaPriorityComponent.CanAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAreaPriorityComponent::CanAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.CanAction");

	UAreaPriorityComponent_CanAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AreaPriorityComponent.BeginAreaOverlap
// (Native, Public, BlueprintCallable)

void UAreaPriorityComponent::BeginAreaOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AreaPriorityComponent.BeginAreaOverlap");

	UAreaPriorityComponent_BeginAreaOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_ResetAssign
// (Final, Native, Public, BlueprintCallable)

void AAriseBasePlayerController::K2_ResetAssign()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_ResetAssign");

	AAriseBasePlayerController_K2_ResetAssign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsMouseMove_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsMouseMove_Arise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsMouseMove_Arise");

	AAriseBasePlayerController_K2_IsMouseMove_Arise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonRepeated_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InButton                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsButtonRepeated_Arise(const struct FName& InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonRepeated_Arise");

	AAriseBasePlayerController_K2_IsButtonRepeated_Arise_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonPressed_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InButton                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsButtonPressed_Arise(const struct FName& InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonPressed_Arise");

	AAriseBasePlayerController_K2_IsButtonPressed_Arise_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustReleased_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InButton                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsButtonJustReleased_Arise(const struct FName& InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustReleased_Arise");

	AAriseBasePlayerController_K2_IsButtonJustReleased_Arise_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustPressed_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InButton                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsButtonJustPressed_Arise(const struct FName& InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsButtonJustPressed_Arise");

	AAriseBasePlayerController_K2_IsButtonJustPressed_Arise_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyMouseButtonPressed_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsAnyMouseButtonPressed_Arise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyMouseButtonPressed_Arise");

	AAriseBasePlayerController_K2_IsAnyMouseButtonPressed_Arise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyKeyboardPressed_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsAnyKeyboardPressed_Arise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyKeyboardPressed_Arise");

	AAriseBasePlayerController_K2_IsAnyKeyboardPressed_Arise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyGamepadPressed_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBasePlayerController::K2_IsAnyGamepadPressed_Arise()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_IsAnyGamepadPressed_Arise");

	AAriseBasePlayerController_K2_IsAnyGamepadPressed_Arise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAngleYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAriseBasePlayerController::K2_GetCameraAngleYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAngleYaw");

	AAriseBasePlayerController_K2_GetCameraAngleYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAnglePitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAriseBasePlayerController::K2_GetCameraAnglePitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_GetCameraAnglePitch");

	AAriseBasePlayerController_K2_GetCameraAnglePitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseBasePlayerController.K2_GetAxisValue_Arise
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InAxis                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAriseBasePlayerController::K2_GetAxisValue_Arise(const struct FName& InAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseBasePlayerController.K2_GetAxisValue_Arise");

	AAriseBasePlayerController_K2_GetAxisValue_Arise_Params params;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseCommonFunctionLibrary.TakeScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DirectoryPath                  (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bAddFilenameSuffix             (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCommonFunctionLibrary::STATIC_TakeScreenshot(const struct FString& DirectoryPath, const struct FString& Filename, bool bAddFilenameSuffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseCommonFunctionLibrary.TakeScreenshot");

	UAriseCommonFunctionLibrary_TakeScreenshot_Params params;
	params.DirectoryPath = DirectoryPath;
	params.Filename = Filename;
	params.bAddFilenameSuffix = bAddFilenameSuffix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseCommonFunctionLibrary.IsSimulateInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCommonFunctionLibrary::STATIC_IsSimulateInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseCommonFunctionLibrary.IsSimulateInEditor");

	UAriseCommonFunctionLibrary_IsSimulateInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseConfigProfileDelegate.AriseConfigProfileDelegate_Test
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseConfigProfileDelegate::STATIC_AriseConfigProfileDelegate_Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseConfigProfileDelegate.AriseConfigProfileDelegate_Test");

	UAriseConfigProfileDelegate_AriseConfigProfileDelegate_Test_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameModeBase.UnloadStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAriseGameModeBase::UnloadStreamLevels(TArray<struct FName> names)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameModeBase.UnloadStreamLevels");

	AAriseGameModeBase_UnloadStreamLevels_Params params;
	params.names = names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameModeBase.RemoveStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAriseGameModeBase::RemoveStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameModeBase.RemoveStreamLevels");

	AAriseGameModeBase_RemoveStreamLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.names = names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameModeBase.LoadStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAriseGameModeBase::LoadStreamLevels(TArray<struct FName> names)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameModeBase.LoadStreamLevels");

	AAriseGameModeBase_LoadStreamLevels_Params params;
	params.names = names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameModeBase.GetPersistantLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevel*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevel* AAriseGameModeBase::GetPersistantLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameModeBase.GetPersistantLevel");

	AAriseGameModeBase_GetPersistantLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.AriseGameModeBase.AddStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Paths                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAriseGameModeBase::AddStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names, TArray<struct FString> Paths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameModeBase.AddStreamLevels");

	AAriseGameModeBase_AddStreamLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.names = names;
	params.Paths = Paths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameViewportClient.OnBeforeLostFocus
// (Event, Public, BlueprintEvent)

void UAriseGameViewportClient::OnBeforeLostFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameViewportClient.OnBeforeLostFocus");

	UAriseGameViewportClient_OnBeforeLostFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseGameViewportClient.OnAfterReceivedFocus
// (Event, Public, BlueprintEvent)

void UAriseGameViewportClient::OnAfterReceivedFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseGameViewportClient.OnAfterReceivedFocus");

	UAriseGameViewportClient_OnAfterReceivedFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_SetPadKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InButtonId                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FKey>            InShifts                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAriseKeyConfig::K2_SetPadKeys(int InButtonId, TArray<struct FKey> InKeys, TArray<struct FKey> InShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_SetPadKeys");

	UAriseKeyConfig_K2_SetPadKeys_Params params;
	params.InButtonId = InButtonId;
	params.InKeys = InKeys;
	params.InShifts = InShifts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_SetKeyboardKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InButtonId                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FKey>            InShifts                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAriseKeyConfig::K2_SetKeyboardKeys(int InButtonId, TArray<struct FKey> InKeys, TArray<struct FKey> InShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_SetKeyboardKeys");

	UAriseKeyConfig_K2_SetKeyboardKeys_Params params;
	params.InButtonId = InButtonId;
	params.InKeys = InKeys;
	params.InShifts = InShifts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_Reset
// (Final, Native, Public, BlueprintCallable)

void UAriseKeyConfig::K2_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_Reset");

	UAriseKeyConfig_K2_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_GetPadKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InButtonId                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>            OutShifts                      (Parm, OutParm, ZeroConstructor)

void UAriseKeyConfig::K2_GetPadKeys(int InButtonId, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_GetPadKeys");

	UAriseKeyConfig_K2_GetPadKeys_Params params;
	params.InButtonId = InButtonId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutShifts != nullptr)
		*OutShifts = params.OutShifts;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_GetKeyboardKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InButtonId                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>            OutShifts                      (Parm, OutParm, ZeroConstructor)

void UAriseKeyConfig::K2_GetKeyboardKeys(int InButtonId, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_GetKeyboardKeys");

	UAriseKeyConfig_K2_GetKeyboardKeys_Params params;
	params.InButtonId = InButtonId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutShifts != nullptr)
		*OutShifts = params.OutShifts;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_GetButtons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    OutButtons                     (Parm, OutParm, ZeroConstructor)

void UAriseKeyConfig::K2_GetButtons(TArray<int>* OutButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_GetButtons");

	UAriseKeyConfig_K2_GetButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtons != nullptr)
		*OutButtons = params.OutButtons;
}


// Function AriseCommonPlugin.AriseKeyConfig.K2_Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AInputExtPlayerController* InController                   (Parm, ZeroConstructor, IsPlainOldData)

void UAriseKeyConfig::K2_Apply(class AInputExtPlayerController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseKeyConfig.K2_Apply");

	UAriseKeyConfig_K2_Apply_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibrationAll
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseVibrationFunctionLibrary::STATIC_StopVibrationAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibrationAll");

	UAriseVibrationFunctionLibrary_StopVibrationAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UAriseVibrationFunctionLibrary::STATIC_StopVibration(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseVibrationFunctionLibrary.StopVibration");

	UAriseVibrationFunctionLibrary_StopVibration_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.PlayVibration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*    ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          LargePow                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SmallPow                       (Parm, ZeroConstructor, IsPlainOldData)

void UAriseVibrationFunctionLibrary::STATIC_PlayVibration(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const struct FName& Tag, float LargePow, float SmallPow)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseVibrationFunctionLibrary.PlayVibration");

	UAriseVibrationFunctionLibrary_PlayVibration_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.bLooping = bLooping;
	params.Tag = Tag;
	params.LargePow = LargePow;
	params.SmallPow = SmallPow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.AriseVibrationFunctionLibrary.EnableVibration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnable                     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseVibrationFunctionLibrary::STATIC_EnableVibration(bool bNewEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.AriseVibrationFunctionLibrary.EnableVibration");

	UAriseVibrationFunctionLibrary_EnableVibration_Params params;
	params.bNewEnable = bNewEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.BlueprintBridgeInterface.BPGeneralFunctionBool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OpertionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<struct FName, struct FString> Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintBridgeInterface::BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.BlueprintBridgeInterface.BPGeneralFunctionBool");

	UBlueprintBridgeInterface_BPGeneralFunctionBool_Params params;
	params.OpertionName = OpertionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.StreamLevelLoader.UnloadStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void AStreamLevelLoader::UnloadStreamLevels(TArray<struct FName> names, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.UnloadStreamLevels");

	AStreamLevelLoader_UnloadStreamLevels_Params params;
	params.names = names;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.UnloadAllStreamLevels
// (Final, Native, Public, BlueprintCallable)

void AStreamLevelLoader::UnloadAllStreamLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.UnloadAllStreamLevels");

	AStreamLevelLoader_UnloadAllStreamLevels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.RemoveStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AStreamLevelLoader::RemoveStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.RemoveStreamLevels");

	AStreamLevelLoader_RemoveStreamLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.names = names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.LoadStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AStreamLevelLoader::LoadStreamLevels(TArray<struct FName> names)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.LoadStreamLevels");

	AStreamLevelLoader_LoadStreamLevels_Params params;
	params.names = names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.GetUserConut
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStreamLevelLoader::GetUserConut(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.GetUserConut");

	AStreamLevelLoader_GetUserConut_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseCommonPlugin.StreamLevelLoader.DoUnloadStreamLevels
// (Final, Native, Public, BlueprintCallable)

void AStreamLevelLoader::DoUnloadStreamLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.DoUnloadStreamLevels");

	AStreamLevelLoader_DoUnloadStreamLevels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.DoUnloadAll
// (Final, Native, Public, BlueprintCallable)

void AStreamLevelLoader::DoUnloadAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.DoUnloadAll");

	AStreamLevelLoader_DoUnloadAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.DoLoadStreamLevels
// (Final, Native, Public, BlueprintCallable)

void AStreamLevelLoader::DoLoadStreamLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.DoLoadStreamLevels");

	AStreamLevelLoader_DoLoadStreamLevels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadStreamLevel
// (Event, Public, BlueprintEvent)

void AStreamLevelLoader::BPE_DoUnloadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadStreamLevel");

	AStreamLevelLoader_BPE_DoUnloadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadAll
// (Event, Public, BlueprintEvent)

void AStreamLevelLoader::BPE_DoUnloadAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.BPE_DoUnloadAll");

	AStreamLevelLoader_BPE_DoUnloadAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.BPE_DoLoadStreamLevel
// (Event, Public, BlueprintEvent)

void AStreamLevelLoader::BPE_DoLoadStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.BPE_DoLoadStreamLevel");

	AStreamLevelLoader_BPE_DoLoadStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.StreamLevelLoader.AddStreamLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Paths                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AStreamLevelLoader::AddStreamLevels(class UObject* WorldContextObject, TArray<struct FName> names, TArray<struct FString> Paths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.StreamLevelLoader.AddStreamLevels");

	AStreamLevelLoader_AddStreamLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.names = names;
	params.Paths = Paths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.TextWidgetInterface.SetTextColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateColor             NewColor                       (Parm)

void UTextWidgetInterface::SetTextColor(const struct FSlateColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.TextWidgetInterface.SetTextColor");

	UTextWidgetInterface_SetTextColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.TextWidgetInterface.SetText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UTextWidgetInterface::SetText(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.TextWidgetInterface.SetText");

	UTextWidgetInterface_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseCommonPlugin.TextWidgetInterface.SetBgColor
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)

void UTextWidgetInterface::SetBgColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseCommonPlugin.TextWidgetInterface.SetBgColor");

	UTextWidgetInterface_SetBgColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
