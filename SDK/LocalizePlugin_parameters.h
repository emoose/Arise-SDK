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

// Function LocalizePlugin.CultureCallbackManager.K2_UnregisterCallback
struct UCultureCallbackManager_K2_UnregisterCallback_Params
{
	struct FCultureCallbackHandle                      iHandle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LocalizePlugin.CultureCallbackManager.K2_RegisterCallback
struct UCultureCallbackManager_K2_RegisterCallback_Params
{
	struct FScriptDelegate                             iDelegate;                                                // (ConstParm, Parm, ZeroConstructor)
	int                                                iPriority;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCultureCallbackHandle                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LocalizePlugin.LocalizeBPLibrary.SetCurrentVoiceLanguage
struct ULocalizeBPLibrary_SetCurrentVoiceLanguage_Params
{
	ELocalizeSupportLanguage                           iLanguage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalizePlugin.LocalizeBPLibrary.SetCurrentTextLanguge
struct ULocalizeBPLibrary_SetCurrentTextLanguge_Params
{
	ELocalizeSupportLanguage                           iLanguage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalizePlugin.LocalizeBPLibrary.GetSupportVoiceLanguageList
struct ULocalizeBPLibrary_GetSupportVoiceLanguageList_Params
{
	TArray<ELocalizeSupportLanguage>                   oLanguageList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function LocalizePlugin.LocalizeBPLibrary.GetSupportTextLangaugeList
struct ULocalizeBPLibrary_GetSupportTextLangaugeList_Params
{
	TArray<ELocalizeSupportLanguage>                   oLanguageList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function LocalizePlugin.LocalizeBPLibrary.GetCurrentVoiceLanguage
struct ULocalizeBPLibrary_GetCurrentVoiceLanguage_Params
{
	ELocalizeSupportLanguage                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocalizePlugin.LocalizeBPLibrary.GetCurrentTextLanguage
struct ULocalizeBPLibrary_GetCurrentTextLanguage_Params
{
	ELocalizeSupportLanguage                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentVoiceLanguage
struct ULocalizeBPLibrary_CheckCurrentVoiceLanguage_Params
{
	ELocalizeSupportLanguage                           iLanguage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LocalizePlugin.LocalizeBPLibrary.CheckCurrentTextLanguage
struct ULocalizeBPLibrary_CheckCurrentTextLanguage_Params
{
	ELocalizeSupportLanguage                           iLanguage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
