
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

// Function UMG_BootScreen.UMG_BootScreen_C.IsSkipKey
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUMG_BootScreen_C::IsSkipKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.IsSkipKey");

	UUMG_BootScreen_C_IsSkipKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_BootScreen.UMG_BootScreen_C.UnloadAsset
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::UnloadAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.UnloadAsset");

	UUMG_BootScreen_C_UnloadAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.Fade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Callback                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_BootScreen_C::Fade(float Duration, bool FadeIn, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.Fade");

	UUMG_BootScreen_C_Fade_Params params;
	params.Duration = Duration;
	params.FadeIn = FadeIn;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.ShowTextIfNeeded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_BootScreen_C::ShowTextIfNeeded(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.ShowTextIfNeeded");

	UUMG_BootScreen_C_ShowTextIfNeeded_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.ShowTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Txture                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::ShowTexture(class UObject* Txture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.ShowTexture");

	UUMG_BootScreen_C_ShowTexture_Params params;
	params.Txture = Txture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.Clear");

	UUMG_BootScreen_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.IsClose?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bClose                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::IsClose_(bool* bClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.IsClose?");

	UUMG_BootScreen_C_IsClose__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClose != nullptr)
		*bClose = params.bClose;
}


// Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeOut
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::OnEndFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeOut");

	UUMG_BootScreen_C_OnEndFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         TexturePath                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_BootScreen_C::LoadTexture(const struct FSoftObjectPath& TexturePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.LoadTexture");

	UUMG_BootScreen_C_LoadTexture_Params params;
	params.TexturePath = TexturePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.FadeOut");

	UUMG_BootScreen_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.OnLoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InLoadedAsset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::OnLoadTexture(class UObject* InLoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.OnLoadTexture");

	UUMG_BootScreen_C_OnLoadTexture_Params params;
	params.InLoadedAsset = InLoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeIn
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::OnEndFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.OnEndFadeIn");

	UUMG_BootScreen_C_OnEndFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.FadeIn");

	UUMG_BootScreen_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.SetTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RequiredWaitTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::SetTickEnabled(float DisplayTime, float RequiredWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.SetTickEnabled");

	UUMG_BootScreen_C_SetTickEnabled_Params params;
	params.DisplayTime = DisplayTime;
	params.RequiredWaitTime = RequiredWaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.Skip
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.Skip");

	UUMG_BootScreen_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.OnDisplayTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::OnDisplayTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.OnDisplayTick");

	UUMG_BootScreen_C_OnDisplayTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_BootScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.Construct");

	UUMG_BootScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.MonitorRequiredTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RequiredTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::MonitorRequiredTime(float RequiredTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.MonitorRequiredTime");

	UUMG_BootScreen_C_MonitorRequiredTime_Params params;
	params.RequiredTime = RequiredTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.OnRequiredTimePassed
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::OnRequiredTimePassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.OnRequiredTimePassed");

	UUMG_BootScreen_C_OnRequiredTimePassed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.EndDisplay
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::EndDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.EndDisplay");

	UUMG_BootScreen_C_EndDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.BeginDisplay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_BootScreenInfo     Settings                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_BootScreen_C::BeginDisplay(const struct FSTR_BootScreenInfo& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.BeginDisplay");

	UUMG_BootScreen_C_BeginDisplay_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.Tick");

	UUMG_BootScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.SetTickDisabled
// (BlueprintCallable, BlueprintEvent)

void UUMG_BootScreen_C::SetTickDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.SetTickDisabled");

	UUMG_BootScreen_C_SetTickDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.ExecuteUbergraph_UMG_BootScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::ExecuteUbergraph_UMG_BootScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.ExecuteUbergraph_UMG_BootScreen");

	UUMG_BootScreen_C_ExecuteUbergraph_UMG_BootScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_BootScreen.UMG_BootScreen_C.ScreenEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_BootScreenState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_BootScreen_C::ScreenEnd__DelegateSignature(TEnumAsByte<ENM_BootScreenState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BootScreen.UMG_BootScreen_C.ScreenEnd__DelegateSignature");

	UUMG_BootScreen_C_ScreenEnd__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
