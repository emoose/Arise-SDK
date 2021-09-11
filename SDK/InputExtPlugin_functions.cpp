
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

// Function InputExtPlugin.InputExtInputProcessBase.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtInputProcessBase::SetLayer(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.SetLayer");

	AInputExtInputProcessBase_SetLayer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.SetCurrentProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtInputProcessBase::SetCurrentProcess(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.SetCurrentProcess");

	AInputExtInputProcessBase_SetCurrentProcess_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.ReceiveSuspendProcess
// (Event, Public, BlueprintEvent)

void AInputExtInputProcessBase::ReceiveSuspendProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.ReceiveSuspendProcess");

	AInputExtInputProcessBase_ReceiveSuspendProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.ReceiveResumeProcess
// (Event, Public, BlueprintEvent)

void AInputExtInputProcessBase::ReceiveResumeProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.ReceiveResumeProcess");

	AInputExtInputProcessBase_ReceiveResumeProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.ReceiveEndProcess
// (Event, Public, BlueprintEvent)

void AInputExtInputProcessBase::ReceiveEndProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.ReceiveEndProcess");

	AInputExtInputProcessBase_ReceiveEndProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.ReceiveBeginProcess
// (Event, Public, BlueprintEvent)

void AInputExtInputProcessBase::ReceiveBeginProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.ReceiveBeginProcess");

	AInputExtInputProcessBase_ReceiveBeginProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonRepeated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InButtonName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtInputProcessBase::K2_IsButtonRepeated(const struct FName& InButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonRepeated");

	AInputExtInputProcessBase_K2_IsButtonRepeated_Params params;
	params.InButtonName = InButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InButtonName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtInputProcessBase::K2_IsButtonPressed(const struct FName& InButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonPressed");

	AInputExtInputProcessBase_K2_IsButtonPressed_Params params;
	params.InButtonName = InButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustReleased
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InButtonName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtInputProcessBase::K2_IsButtonJustReleased(const struct FName& InButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustReleased");

	AInputExtInputProcessBase_K2_IsButtonJustReleased_Params params;
	params.InButtonName = InButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InButtonName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtInputProcessBase::K2_IsButtonJustPressed(const struct FName& InButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_IsButtonJustPressed");

	AInputExtInputProcessBase_K2_IsButtonJustPressed_Params params;
	params.InButtonName = InButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AInputExtPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AInputExtPlayerController* AInputExtInputProcessBase::K2_GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_GetPlayerController");

	AInputExtInputProcessBase_K2_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_GetMousePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D AInputExtInputProcessBase::K2_GetMousePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_GetMousePosition");

	AInputExtInputProcessBase_K2_GetMousePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_GetMouseDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D AInputExtInputProcessBase::K2_GetMouseDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_GetMouseDelta");

	AInputExtInputProcessBase_K2_GetMouseDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_GetAxisValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InAxisName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AInputExtInputProcessBase::K2_GetAxisValue(const struct FName& InAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_GetAxisValue");

	AInputExtInputProcessBase_K2_GetAxisValue_Params params;
	params.InAxisName = InAxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtInputProcessBase.K2_ExecuteProcess
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtInputProcessBase::K2_ExecuteProcess(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.K2_ExecuteProcess");

	AInputExtInputProcessBase_K2_ExecuteProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtInputProcessBase.GetLayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AInputExtInputProcessBase::GetLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtInputProcessBase.GetLayer");

	AInputExtInputProcessBase_GetLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ShowSteamBindingPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_ShowSteamBindingPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ShowSteamBindingPanel");

	AInputExtPlayerController_K2_ShowSteamBindingPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ShowMouseCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           iShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_ShowMouseCursor(bool iShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ShowMouseCursor");

	AInputExtPlayerController_K2_ShowMouseCursor_Params params;
	params.iShow = iShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetPadAssignList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<struct FName, int>        OutAssignList                  (Parm, ZeroConstructor)

void AInputExtPlayerController::K2_SetPadAssignList(TMap<struct FName, int> OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetPadAssignList");

	AInputExtPlayerController_K2_SetPadAssignList_Params params;
	params.OutAssignList = OutAssignList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetKeyboardAssignList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<struct FName, int>        OutAssignList                  (Parm, ZeroConstructor)

void AInputExtPlayerController::K2_SetKeyboardAssignList(TMap<struct FName, int> OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetKeyboardAssignList");

	AInputExtPlayerController_K2_SetKeyboardAssignList_Params params;
	params.OutAssignList = OutAssignList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetInputModeArise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMouseHold                     (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_SetInputModeArise(bool bMouseHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetInputModeArise");

	AInputExtPlayerController_K2_SetInputModeArise_Params params;
	params.bMouseHold = bMouseHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetInputAnalogButtonThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_SetInputAnalogButtonThreshold(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetInputAnalogButtonThreshold");

	AInputExtPlayerController_K2_SetInputAnalogButtonThreshold_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetHoldMousePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           iHold                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_SetHoldMousePosition(bool iHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetHoldMousePosition");

	AInputExtPlayerController_K2_SetHoldMousePosition_Params params;
	params.iHold = iHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetHasWindowFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           iHold                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_SetHasWindowFocus(bool iHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetHasWindowFocus");

	AInputExtPlayerController_K2_SetHasWindowFocus_Params params;
	params.iHold = iHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_SetCategoryFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CategoryFilter                 (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_SetCategoryFilter(int CategoryFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_SetCategoryFilter");

	AInputExtPlayerController_K2_SetCategoryFilter_Params params;
	params.CategoryFilter = CategoryFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ResetPadAssignList
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_ResetPadAssignList()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ResetPadAssignList");

	AInputExtPlayerController_K2_ResetPadAssignList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAssignList
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_ResetKeyboardAssignList()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAssignList");

	AInputExtPlayerController_K2_ResetKeyboardAssignList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAndMouseAssignList
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_ResetKeyboardAndMouseAssignList()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ResetKeyboardAndMouseAssignList");

	AInputExtPlayerController_K2_ResetKeyboardAndMouseAssignList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_ResetCategoryFilter
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_ResetCategoryFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_ResetCategoryFilter");

	AInputExtPlayerController_K2_ResetCategoryFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_Reset
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_Reset");

	AInputExtPlayerController_K2_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_RemoveAssign
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_RemoveAssign()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_RemoveAssign");

	AInputExtPlayerController_K2_RemoveAssign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_PushInputProcess2(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess2");

	AInputExtPlayerController_K2_PushInputProcess2_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInputExtInputProcessBase* NewProcess                     (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_PushInputProcess(class AInputExtInputProcessBase* NewProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PushInputProcess");

	AInputExtPlayerController_K2_PushInputProcess_Params params;
	params.NewProcess = NewProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PushInputLayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// TArray<struct FName>           ButtonNames                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BlockAll                       (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_PushInputLayer(const struct FString& Name, TArray<struct FName> ButtonNames, bool BlockAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PushInputLayer");

	AInputExtPlayerController_K2_PushInputLayer_Params params;
	params.Name = Name;
	params.ButtonNames = ButtonNames;
	params.BlockAll = BlockAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcessLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyProcess                (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_PopInputProcessLayer(int Layer, bool bDestroyProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcessLayer");

	AInputExtPlayerController_K2_PopInputProcessLayer_Params params;
	params.Layer = Layer;
	params.bDestroyProcess = bDestroyProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroyProcess                (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_PopInputProcess(bool bDestroyProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PopInputProcess");

	AInputExtPlayerController_K2_PopInputProcess_Params params;
	params.bDestroyProcess = bDestroyProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_PopInputLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void AInputExtPlayerController::K2_PopInputLayer(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_PopInputLayer");

	AInputExtPlayerController_K2_PopInputLayer_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsSteamControllerEnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsSteamControllerEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsSteamControllerEnable");

	AInputExtPlayerController_K2_IsSteamControllerEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsShowMouseCursor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsShowMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsShowMouseCursor");

	AInputExtPlayerController_K2_IsShowMouseCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsMouseMove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsMouseMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsMouseMove");

	AInputExtPlayerController_K2_IsMouseMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsHoldMousePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsHoldMousePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsHoldMousePosition");

	AInputExtPlayerController_K2_IsHoldMousePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonRepeated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsButtonRepeated(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsButtonRepeated");

	AInputExtPlayerController_K2_IsButtonRepeated_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsButtonPressed(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsButtonPressed");

	AInputExtPlayerController_K2_IsButtonPressed_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustReleased
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsButtonJustReleased(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustReleased");

	AInputExtPlayerController_K2_IsButtonJustReleased_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsButtonJustPressed(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsButtonJustPressed");

	AInputExtPlayerController_K2_IsButtonJustPressed_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsButtonDefined
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsButtonDefined(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsButtonDefined");

	AInputExtPlayerController_K2_IsButtonDefined_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsAxisDefined
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsAxisDefined(const struct FName& AxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsAxisDefined");

	AInputExtPlayerController_K2_IsAxisDefined_Params params;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyMouseButtonPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsAnyMouseButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsAnyMouseButtonPressed");

	AInputExtPlayerController_K2_IsAnyMouseButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyKeyboardPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsAnyKeyboardPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsAnyKeyboardPressed");

	AInputExtPlayerController_K2_IsAnyKeyboardPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_IsAnyGamepadPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_IsAnyGamepadPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_IsAnyGamepadPressed");

	AInputExtPlayerController_K2_IsAnyGamepadPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_InputActivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       OldPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_InputActivate(class APlayerController* OldPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_InputActivate");

	AInputExtPlayerController_K2_InputActivate_Params params;
	params.OldPlayerController = OldPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_HasWindowFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInputExtPlayerController::K2_HasWindowFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_HasWindowFocus");

	AInputExtPlayerController_K2_HasWindowFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetSteamControllerKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputAssignKeyInfo> OutInfos                       (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetSteamControllerKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetSteamControllerKeys");

	AInputExtPlayerController_K2_GetSteamControllerKeys_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfos != nullptr)
		*OutInfos = params.OutInfos;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys_DEPRECATED
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>            OutShifts                      (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetPadKeys_DEPRECATED(const struct FName& ButtonName, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys_DEPRECATED");

	AInputExtPlayerController_K2_GetPadKeys_DEPRECATED_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutShifts != nullptr)
		*OutShifts = params.OutShifts;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputAssignKeyInfo> OutInfos                       (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetPadKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetPadKeys");

	AInputExtPlayerController_K2_GetPadKeys_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfos != nullptr)
		*OutInfos = params.OutInfos;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetPadGuideList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInputCategory                 Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TMap<EPadKeyId, struct FName>  OutAssignList                  (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetPadGuideList(EInputCategory Category, TMap<EPadKeyId, struct FName>* OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetPadGuideList");

	AInputExtPlayerController_K2_GetPadGuideList_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssignList != nullptr)
		*OutAssignList = params.OutAssignList;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetPadFixedList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, int>        OutAssignList                  (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetPadFixedList(TMap<struct FName, int>* OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetPadFixedList");

	AInputExtPlayerController_K2_GetPadFixedList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssignList != nullptr)
		*OutAssignList = params.OutAssignList;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetPadAssignList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, int>        OutAssignList                  (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetPadAssignList(TMap<struct FName, int>* OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetPadAssignList");

	AInputExtPlayerController_K2_GetPadAssignList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssignList != nullptr)
		*OutAssignList = params.OutAssignList;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetMousePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D AInputExtPlayerController::K2_GetMousePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetMousePosition");

	AInputExtPlayerController_K2_GetMousePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetMouseDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D AInputExtPlayerController::K2_GetMouseDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetMouseDelta");

	AInputExtPlayerController_K2_GetMouseDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys_DEPRECATED
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FKey>            OutShifts                      (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetKeyboardKeys_DEPRECATED(const struct FName& ButtonName, TArray<struct FKey>* OutKeys, TArray<struct FKey>* OutShifts)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys_DEPRECATED");

	AInputExtPlayerController_K2_GetKeyboardKeys_DEPRECATED_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutShifts != nullptr)
		*OutShifts = params.OutShifts;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ButtonName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputAssignKeyInfo> OutInfos                       (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetKeyboardKeys(const struct FName& ButtonName, TArray<struct FInputAssignKeyInfo>* OutInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardKeys");

	AInputExtPlayerController_K2_GetKeyboardKeys_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfos != nullptr)
		*OutInfos = params.OutInfos;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardAssignList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, int>        OutAssignList                  (Parm, OutParm, ZeroConstructor)

void AInputExtPlayerController::K2_GetKeyboardAssignList(TMap<struct FName, int>* OutAssignList)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetKeyboardAssignList");

	AInputExtPlayerController_K2_GetKeyboardAssignList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssignList != nullptr)
		*OutAssignList = params.OutAssignList;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetInputAnalogButtonThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AInputExtPlayerController::K2_GetInputAnalogButtonThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetInputAnalogButtonThreshold");

	AInputExtPlayerController_K2_GetInputAnalogButtonThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetDebugMouseState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDebugMouseState        State                          (Parm, OutParm)

void AInputExtPlayerController::K2_GetDebugMouseState(struct FDebugMouseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetDebugMouseState");

	AInputExtPlayerController_K2_GetDebugMouseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetCurrentInputProcess
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AInputExtInputProcessBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AInputExtInputProcessBase* AInputExtPlayerController::K2_GetCurrentInputProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetCurrentInputProcess");

	AInputExtPlayerController_K2_GetCurrentInputProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetCategoryFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AInputExtPlayerController::K2_GetCategoryFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetCategoryFilter");

	AInputExtPlayerController_K2_GetCategoryFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_GetAxisValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AInputExtPlayerController::K2_GetAxisValue(const struct FName& AxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_GetAxisValue");

	AInputExtPlayerController_K2_GetAxisValue_Params params;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputExtPlugin.InputExtPlayerController.K2_DumpAssign
// (Final, Native, Public, BlueprintCallable)

void AInputExtPlayerController::K2_DumpAssign()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_DumpAssign");

	AInputExtPlayerController_K2_DumpAssign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddThresholdTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_AddThresholdTime(const struct FName& Name, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddThresholdTime");

	AInputExtPlayerController_K2_AddThresholdTime_Params params;
	params.Name = Name;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddShift_DEPRECATED
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void AInputExtPlayerController::K2_AddShift_DEPRECATED(const struct FName& Name, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddShift_DEPRECATED");

	AInputExtPlayerController_K2_AddShift_DEPRECATED_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddButtonFromDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_AddButtonFromDataTable(class UDataTable* Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddButtonFromDataTable");

	AInputExtPlayerController_K2_AddButtonFromDataTable_Params params;
	params.Table = Table;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ButtonName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void AInputExtPlayerController::K2_AddButton(const struct FName& ButtonName, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddButton");

	AInputExtPlayerController_K2_AddButton_Params params;
	params.ButtonName = ButtonName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddAxisFromDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_AddAxisFromDataTable(class UDataTable* Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddAxisFromDataTable");

	AInputExtPlayerController_K2_AddAxisFromDataTable_Params params;
	params.Table = Table;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputExtPlugin.InputExtPlayerController.K2_AddAxis
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AInputExtPlayerController::K2_AddAxis(const struct FName& AxisName, const struct FKey& Key, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputExtPlugin.InputExtPlayerController.K2_AddAxis");

	AInputExtPlayerController_K2_AddAxis_Params params;
	params.AxisName = AxisName;
	params.Key = Key;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
