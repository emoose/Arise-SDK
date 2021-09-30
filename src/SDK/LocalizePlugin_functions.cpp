
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

// Function LocalizePlugin.CultureCallbackManager.K2_UnregisterCallback
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCultureCallbackHandle  iHandle                        (ConstParm, Parm, OutParm, ReferenceParm)

void UCultureCallbackManager::STATIC_K2_UnregisterCallback(const struct FCultureCallbackHandle& iHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.CultureCallbackManager.K2_UnregisterCallback");

	UCultureCallbackManager_K2_UnregisterCallback_Params params;
	params.iHandle = iHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalizePlugin.CultureCallbackManager.K2_RegisterCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         iDelegate                      (ConstParm, Parm, ZeroConstructor)
// int                            iPriority                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FCultureCallbackHandle  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCultureCallbackHandle UCultureCallbackManager::STATIC_K2_RegisterCallback(const struct FScriptDelegate& iDelegate, int iPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.CultureCallbackManager.K2_RegisterCallback");

	UCultureCallbackManager_K2_RegisterCallback_Params params;
	params.iDelegate = iDelegate;
	params.iPriority = iPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocalizePlugin.LocalizeBPLibrary.SetCurrentVoiceLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocalizeSupportLanguage       iLanguage                      (Parm, ZeroConstructor, IsPlainOldData)

void ULocalizeBPLibrary::STATIC_SetCurrentVoiceLanguage(ELocalizeSupportLanguage iLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.SetCurrentVoiceLanguage");

	ULocalizeBPLibrary_SetCurrentVoiceLanguage_Params params;
	params.iLanguage = iLanguage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalizePlugin.LocalizeBPLibrary.SetCurrentTextLanguge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELocalizeSupportLanguage       iLanguage                      (Parm, ZeroConstructor, IsPlainOldData)

void ULocalizeBPLibrary::STATIC_SetCurrentTextLanguge(ELocalizeSupportLanguage iLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.SetCurrentTextLanguge");

	ULocalizeBPLibrary_SetCurrentTextLanguge_Params params;
	params.iLanguage = iLanguage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalizePlugin.LocalizeBPLibrary.GetSupportVoiceLanguageList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<ELocalizeSupportLanguage> oLanguageList                  (Parm, OutParm, ZeroConstructor)

void ULocalizeBPLibrary::STATIC_GetSupportVoiceLanguageList(TArray<ELocalizeSupportLanguage>* oLanguageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.GetSupportVoiceLanguageList");

	ULocalizeBPLibrary_GetSupportVoiceLanguageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oLanguageList != nullptr)
		*oLanguageList = params.oLanguageList;
}


// Function LocalizePlugin.LocalizeBPLibrary.GetSupportTextLangaugeList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<ELocalizeSupportLanguage> oLanguageList                  (Parm, OutParm, ZeroConstructor)

void ULocalizeBPLibrary::STATIC_GetSupportTextLangaugeList(TArray<ELocalizeSupportLanguage>* oLanguageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.GetSupportTextLangaugeList");

	ULocalizeBPLibrary_GetSupportTextLangaugeList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oLanguageList != nullptr)
		*oLanguageList = params.oLanguageList;
}


// Function LocalizePlugin.LocalizeBPLibrary.GetCurrentVoiceLanguage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ELocalizeSupportLanguage       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELocalizeSupportLanguage ULocalizeBPLibrary::STATIC_GetCurrentVoiceLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.GetCurrentVoiceLanguage");

	ULocalizeBPLibrary_GetCurrentVoiceLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocalizePlugin.LocalizeBPLibrary.GetCurrentTextLanguage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ELocalizeSupportLanguage       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELocalizeSupportLanguage ULocalizeBPLibrary::STATIC_GetCurrentTextLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.GetCurrentTextLanguage");

	ULocalizeBPLibrary_GetCurrentTextLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentVoiceLanguage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ELocalizeSupportLanguage       iLanguage                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocalizeBPLibrary::STATIC_CheckCurrentVoiceLanguage(ELocalizeSupportLanguage iLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentVoiceLanguage");

	ULocalizeBPLibrary_CheckCurrentVoiceLanguage_Params params;
	params.iLanguage = iLanguage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentTextLanguage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ELocalizeSupportLanguage       iLanguage                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocalizeBPLibrary::STATIC_CheckCurrentTextLanguage(ELocalizeSupportLanguage iLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentTextLanguage");

	ULocalizeBPLibrary_CheckCurrentTextLanguage_Params params;
	params.iLanguage = iLanguage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
