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

// Function UMG_BootScreen.UMG_BootScreen_C.IsSkipKey
struct UUMG_BootScreen_C_IsSkipKey_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.UnloadAsset
struct UUMG_BootScreen_C_UnloadAsset_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.Fade
struct UUMG_BootScreen_C_Fade_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UMG_BootScreen.UMG_BootScreen_C.ShowTextIfNeeded
struct UUMG_BootScreen_C_ShowTextIfNeeded_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UMG_BootScreen.UMG_BootScreen_C.ShowTexture
struct UUMG_BootScreen_C_ShowTexture_Params
{
	class UObject*                                     Txture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.Clear
struct UUMG_BootScreen_C_Clear_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.IsClose?
struct UUMG_BootScreen_C_IsClose__Params
{
	bool                                               bClose;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeOut
struct UUMG_BootScreen_C_OnEndFadeOut_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.LoadTexture
struct UUMG_BootScreen_C_LoadTexture_Params
{
	struct FSoftObjectPath                             TexturePath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_BootScreen.UMG_BootScreen_C.FadeOut
struct UUMG_BootScreen_C_FadeOut_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.OnLoadTexture
struct UUMG_BootScreen_C_OnLoadTexture_Params
{
	class UObject*                                     InLoadedAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeIn
struct UUMG_BootScreen_C_OnEndFadeIn_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.FadeIn
struct UUMG_BootScreen_C_FadeIn_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.SetTickEnabled
struct UUMG_BootScreen_C_SetTickEnabled_Params
{
	float                                              DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RequiredWaitTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.Skip
struct UUMG_BootScreen_C_Skip_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.OnDisplayTick
struct UUMG_BootScreen_C_OnDisplayTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.Construct
struct UUMG_BootScreen_C_Construct_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.MonitorRequiredTime
struct UUMG_BootScreen_C_MonitorRequiredTime_Params
{
	float                                              RequiredTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.OnRequiredTimePassed
struct UUMG_BootScreen_C_OnRequiredTimePassed_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.EndDisplay
struct UUMG_BootScreen_C_EndDisplay_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.BeginDisplay
struct UUMG_BootScreen_C_BeginDisplay_Params
{
	struct FSTR_BootScreenInfo                         Settings;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UMG_BootScreen.UMG_BootScreen_C.Tick
struct UUMG_BootScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.SetTickDisabled
struct UUMG_BootScreen_C_SetTickDisabled_Params
{
};

// Function UMG_BootScreen.UMG_BootScreen_C.ExecuteUbergraph_UMG_BootScreen
struct UUMG_BootScreen_C_ExecuteUbergraph_UMG_BootScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_BootScreen.UMG_BootScreen_C.ScreenEnd__DelegateSignature
struct UUMG_BootScreen_C_ScreenEnd__DelegateSignature_Params
{
	TEnumAsByte<ENM_BootScreenState>                   State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
