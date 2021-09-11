
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

// Function LV_MenuModelView2.LV_MenuModelView2_C.ApplyPostProcessSettings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALV_MenuModelView2_C::ApplyPostProcessSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ApplyPostProcessSettings");

	ALV_MenuModelView2_C_ApplyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.GetModelPostProcessSettings
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPostProcessSettings    Settings                       (Parm, OutParm)

void ALV_MenuModelView2_C::GetModelPostProcessSettings(struct FPostProcessSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.GetModelPostProcessSettings");

	ALV_MenuModelView2_C_GetModelPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.GetDefaultPostProcessSettings
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPostProcessSettings    Settings                       (Parm, OutParm)

void ALV_MenuModelView2_C::GetDefaultPostProcessSettings(struct FPostProcessSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.GetDefaultPostProcessSettings");

	ALV_MenuModelView2_C_GetDefaultPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.GetPostProcessSettings
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPostProcessSettings    Settings                       (Parm, OutParm)

void ALV_MenuModelView2_C::GetPostProcessSettings(struct FPostProcessSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.GetPostProcessSettings");

	ALV_MenuModelView2_C_GetPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.SpawnEmitter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Template                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::SpawnEmitter(class UObject* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.SpawnEmitter");

	ALV_MenuModelView2_C_SpawnEmitter_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ActivateEmitter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ActivateEmitter(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ActivateEmitter");

	ALV_MenuModelView2_C_ActivateEmitter_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_MenuModelView2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveBeginPlay");

	ALV_MenuModelView2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ReceiveTick");

	ALV_MenuModelView2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.CheckActorEnabled
// (BlueprintCallable, BlueprintEvent)

void ALV_MenuModelView2_C::CheckActorEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.CheckActorEnabled");

	ALV_MenuModelView2_C_CheckActorEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowCaptureBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ShowCaptureBG(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ShowCaptureBG");

	ALV_MenuModelView2_C_ShowCaptureBG_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowHeader3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ShowHeader3D(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ShowHeader3D");

	ALV_MenuModelView2_C_ShowHeader3D_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              ShowCharaType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BackDarkness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ShowTopBG(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopBG");

	ALV_MenuModelView2_C_ShowTopBG_Params params;
	params.bShow = bShow;
	params.ShowCharaType = ShowCharaType;
	params.BackDarkness = BackDarkness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ChangeTopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNext                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OldShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              OldCharaType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              NewCharaType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BackDarkness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ChangeTopBG(bool bNext, bool OldShow, EMenuTopCharaType OldCharaType, bool NewShow, EMenuTopCharaType NewCharaType, float BackDarkness)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ChangeTopBG");

	ALV_MenuModelView2_C_ChangeTopBG_Params params;
	params.bNext = bNext;
	params.OldShow = OldShow;
	params.OldCharaType = OldCharaType;
	params.NewShow = NewShow;
	params.NewCharaType = NewCharaType;
	params.BackDarkness = BackDarkness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ShowTopParticle(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ShowTopParticle");

	ALV_MenuModelView2_C_ShowTopParticle_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.OnLevelActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePostProcess                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::OnLevelActivate(bool Active, bool bUsePostProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.OnLevelActivate");

	ALV_MenuModelView2_C_OnLevelActivate_Params params;
	params.Active = Active;
	params.bUsePostProcess = bUsePostProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.OnMenuCloseStart
// (BlueprintCallable, BlueprintEvent)

void ALV_MenuModelView2_C::OnMenuCloseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.OnMenuCloseStart");

	ALV_MenuModelView2_C_OnMenuCloseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ShowLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ShowLight(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ShowLight");

	ALV_MenuModelView2_C_ShowLight_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.OnAnimCaptureBlack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::OnAnimCaptureBlack(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.OnAnimCaptureBlack");

	ALV_MenuModelView2_C_OnAnimCaptureBlack_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LV_MenuModelView2.LV_MenuModelView2_C.ExecuteUbergraph_LV_MenuModelView2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALV_MenuModelView2_C::ExecuteUbergraph_LV_MenuModelView2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LV_MenuModelView2.LV_MenuModelView2_C.ExecuteUbergraph_LV_MenuModelView2");

	ALV_MenuModelView2_C_ExecuteUbergraph_LV_MenuModelView2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
