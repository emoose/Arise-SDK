
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

// Function DebugPlugin.DebugUtility.K2_SetScreenMessageEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_SetScreenMessageEnable(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_SetScreenMessageEnable");

	UDebugUtility_K2_SetScreenMessageEnable_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_IsScreenMessageEnable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugUtility::STATIC_K2_IsScreenMessageEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_IsScreenMessageEnable");

	UDebugUtility_K2_IsScreenMessageEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DebugWarningString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (ConstParm, Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugWarningString(const struct FString& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugWarningString");

	UDebugUtility_K2_DebugWarningString_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DebugWarning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugWarning(const struct FText& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugWarning");

	UDebugUtility_K2_DebugWarning_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DebugPrintString
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (ConstParm, Parm, ZeroConstructor)
// bool                           bPrintToScreen                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintToLog                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugPrintString(const struct FString& Text, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugPrintString");

	UDebugUtility_K2_DebugPrintString_Params params;
	params.Text = Text;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToLog = bPrintToLog;
	params.TextColor = TextColor;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DebugPrint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm)
// bool                           bPrintToScreen                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintToLog                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugPrint(const struct FText& Text, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugPrint");

	UDebugUtility_K2_DebugPrint_Params params;
	params.Text = Text;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToLog = bPrintToLog;
	params.TextColor = TextColor;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DebugErrorString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (ConstParm, Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugErrorString(const struct FString& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugErrorString");

	UDebugUtility_K2_DebugErrorString_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DebugError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DebugError(const struct FText& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DebugError");

	UDebugUtility_K2_DebugError_Params params;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_UnregisterDebugValueChangedCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBP_UnregisterDebugValueChangedCallback(const struct FName& Name, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_UnregisterDebugValueChangedCallback");

	UDebugUtility_K2_DBP_UnregisterDebugValueChangedCallback_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_string
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBP_SetDebugValue_string(const struct FName& Name, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_string");

	UDebugUtility_K2_DBP_SetDebugValue_string_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_int32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBP_SetDebugValue_int32(const struct FName& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_int32");

	UDebugUtility_K2_DBP_SetDebugValue_int32_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBP_SetDebugValue_float(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_float");

	UDebugUtility_K2_DBP_SetDebugValue_float_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBP_SetDebugValue_color(const struct FName& Name, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_color");

	UDebugUtility_K2_DBP_SetDebugValue_color_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBP_SetDebugValue_bool(const struct FName& Name, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_SetDebugValue_bool");

	UDebugUtility_K2_DBP_SetDebugValue_bool_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_RegisterDebugValueChangedCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FScriptDelegate         Event                          (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBP_RegisterDebugValueChangedCallback(const struct FName& Name, const struct FString& Key, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_RegisterDebugValueChangedCallback");

	UDebugUtility_K2_DBP_RegisterDebugValueChangedCallback_Params params;
	params.Name = Name;
	params.Key = Key;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_string
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FallOffValue                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDebugUtility::STATIC_K2_DBP_GetDebugValue_string(const struct FName& Name, const struct FString& FallOffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_string");

	UDebugUtility_K2_DBP_GetDebugValue_string_Params params;
	params.Name = Name;
	params.FallOffValue = FallOffValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_int32
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FallOffValue                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDebugUtility::STATIC_K2_DBP_GetDebugValue_int32(const struct FName& Name, int FallOffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_int32");

	UDebugUtility_K2_DBP_GetDebugValue_int32_Params params;
	params.Name = Name;
	params.FallOffValue = FallOffValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_float
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          FallOffValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDebugUtility::STATIC_K2_DBP_GetDebugValue_float(const struct FName& Name, float FallOffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_float");

	UDebugUtility_K2_DBP_GetDebugValue_float_Params params;
	params.Name = Name;
	params.FallOffValue = FallOffValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FallOffValue                   (Parm, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UDebugUtility::STATIC_K2_DBP_GetDebugValue_color(const struct FName& Name, const struct FLinearColor& FallOffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_color");

	UDebugUtility_K2_DBP_GetDebugValue_color_Params params;
	params.Name = Name;
	params.FallOffValue = FallOffValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_bool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FallOffValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugUtility::STATIC_K2_DBP_GetDebugValue_bool(const struct FName& Name, bool FallOffValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_GetDebugValue_bool");

	UDebugUtility_K2_DBP_GetDebugValue_bool_Params params;
	params.Name = Name;
	params.FallOffValue = FallOffValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBP_AddDebugValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDebugParamDesc         Parameter                      (Parm)

void UDebugUtility::STATIC_K2_DBP_AddDebugValue(const struct FDebugParamDesc& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBP_AddDebugValue");

	UDebugUtility_K2_DBP_AddDebugValue_Params params;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueStringWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueStringWithEvent");

	UDebugUtility_K2_DBM_ValueStringWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnlyWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueStringReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnlyWithEvent");

	UDebugUtility_K2_DBM_ValueStringReadOnlyWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueStringReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueStringReadOnly");

	UDebugUtility_K2_DBM_ValueStringReadOnly_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueString(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueString");

	UDebugUtility_K2_DBM_ValueString_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Step                           (Parm, ZeroConstructor, IsPlainOldData)
// EDebugMenuIntegerStyle         Style                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeparateCount                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SeparateChar                   (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueIntWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide, int Min, int Max, int Step, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueIntWithEvent");

	UDebugUtility_K2_DBM_ValueIntWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Decide = Decide;
	params.Min = Min;
	params.Max = Max;
	params.Step = Step;
	params.Style = Style;
	params.SeparateCount = SeparateCount;
	params.SeparateChar = SeparateChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnlyWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)
// EDebugMenuIntegerStyle         Style                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeparateCount                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SeparateChar                   (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueIntReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnlyWithEvent");

	UDebugUtility_K2_DBM_ValueIntReadOnlyWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.Decide = Decide;
	params.Style = Style;
	params.SeparateCount = SeparateCount;
	params.SeparateChar = SeparateChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// EDebugMenuIntegerStyle         Style                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeparateCount                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SeparateChar                   (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueIntReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueIntReadOnly");

	UDebugUtility_K2_DBM_ValueIntReadOnly_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.Style = Style;
	params.SeparateCount = SeparateCount;
	params.SeparateChar = SeparateChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Step                           (Parm, ZeroConstructor, IsPlainOldData)
// EDebugMenuIntegerStyle         Style                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeparateCount                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SeparateChar                   (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueInt(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, int Min, int Max, int Step, EDebugMenuIntegerStyle Style, int SeparateCount, const struct FString& SeparateChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueInt");

	UDebugUtility_K2_DBM_ValueInt_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Min = Min;
	params.Max = Max;
	params.Step = Step;
	params.Style = Style;
	params.SeparateCount = SeparateCount;
	params.SeparateChar = SeparateChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_ValueGroup(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueGroup");

	UDebugUtility_K2_DBM_ValueGroup_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Step                           (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_ValueFloatWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide, float Min, float Max, float Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatWithEvent");

	UDebugUtility_K2_DBM_ValueFloatWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Decide = Decide;
	params.Min = Min;
	params.Max = Max;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnlyWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueFloatReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnlyWithEvent");

	UDebugUtility_K2_DBM_ValueFloatReadOnlyWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueFloatReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueFloatReadOnly");

	UDebugUtility_K2_DBM_ValueFloatReadOnly_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Step                           (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_ValueFloat(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, float Min, float Max, float Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueFloat");

	UDebugUtility_K2_DBM_ValueFloat_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Min = Min;
	params.Max = Max;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Enum                           (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueEnum(const struct FString& Title, const struct FString& Enum, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueEnum");

	UDebugUtility_K2_DBM_ValueEnum_Params params;
	params.Title = Title;
	params.Enum = Enum;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueColor(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueColor");

	UDebugUtility_K2_DBM_ValueColor_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueBoolWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolWithEvent");

	UDebugUtility_K2_DBM_ValueBoolWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnlyWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueBoolReadOnlyWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnlyWithEvent");

	UDebugUtility_K2_DBM_ValueBoolReadOnlyWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueBoolReadOnly(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueBoolReadOnly");

	UDebugUtility_K2_DBM_ValueBoolReadOnly_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ValueBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetValue                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SetValue                       (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ValueBool(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetValue, const struct FScriptDelegate& SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ValueBool");

	UDebugUtility_K2_DBM_ValueBool_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetValue = GetValue;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_Value(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_Value");

	UDebugUtility_K2_DBM_Value_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_Text
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_Text(const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_Text");

	UDebugUtility_K2_DBM_Text_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_SubMenu
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GenerateSubMenu                (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_SubMenu(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GenerateSubMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_SubMenu");

	UDebugUtility_K2_DBM_SubMenu_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GenerateSubMenu = GenerateSubMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_SetEditGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_SetEditGroup(const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_SetEditGroup");

	UDebugUtility_K2_DBM_SetEditGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_Open
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Group                          (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_Open(const struct FName& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_Open");

	UDebugUtility_K2_DBM_Open_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_ListWithEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetList                        (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_ListWithEvent(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetList, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_ListWithEvent");

	UDebugUtility_K2_DBM_ListWithEvent_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetList = GetList;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_List
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         GetList                        (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_List(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& GetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_List");

	UDebugUtility_K2_DBM_List_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.GetList = GetList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_GetEditGroup
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDebugUtility::STATIC_K2_DBM_GetEditGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_GetEditGroup");

	UDebugUtility_K2_DBM_GetEditGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.K2_DBM_Button
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 UserData                       (Parm, ZeroConstructor)
// struct FScriptDelegate         Decide                         (Parm, ZeroConstructor)

void UDebugUtility::STATIC_K2_DBM_Button(const struct FString& Title, const struct FString& UserData, const struct FScriptDelegate& Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_Button");

	UDebugUtility_K2_DBM_Button_Params params;
	params.Title = Title;
	params.UserData = UserData;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.K2_DBM_Bracket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)

void UDebugUtility::STATIC_K2_DBM_Bracket(const struct FString& Title, const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.K2_DBM_Bracket");

	UDebugUtility_K2_DBM_Bracket_Params params;
	params.Title = Title;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.DBM_Show
// (Final, Native, Static, Public, BlueprintCallable)

void UDebugUtility::STATIC_DBM_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_Show");

	UDebugUtility_DBM_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.DBM_IsOpened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDebugUtility::STATIC_DBM_IsOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_IsOpened");

	UDebugUtility_DBM_IsOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DebugPlugin.DebugUtility.DBM_Hide
// (Final, Native, Static, Public, BlueprintCallable)

void UDebugUtility::STATIC_DBM_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_Hide");

	UDebugUtility_DBM_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.DBM_CurrentWindowClose
// (Final, Native, Static, Public, BlueprintCallable)

void UDebugUtility::STATIC_DBM_CurrentWindowClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_CurrentWindowClose");

	UDebugUtility_DBM_CurrentWindowClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.DBM_Close
// (Final, Native, Static, Public, BlueprintCallable)

void UDebugUtility::STATIC_DBM_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_Close");

	UDebugUtility_DBM_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugPlugin.DebugUtility.DBM_ClearAll
// (Final, Native, Static, Public, BlueprintCallable)

void UDebugUtility::STATIC_DBM_ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugPlugin.DebugUtility.DBM_ClearAll");

	UDebugUtility_DBM_ClearAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
