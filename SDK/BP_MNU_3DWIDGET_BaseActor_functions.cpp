
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

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseFinishedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MNU_3DWIDGET_BaseActor_C::BindAnimCloseFinishedEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseFinishedEvent");

	ABP_MNU_3DWIDGET_BaseActor_C_BindAnimCloseFinishedEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenFinishedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MNU_3DWIDGET_BaseActor_C::BindAnimOpenFinishedEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenFinishedEvent");

	ABP_MNU_3DWIDGET_BaseActor_C_BindAnimOpenFinishedEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MNU_3DWIDGET_BaseActor_C::BindAnimCloseStartEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseStartEvent");

	ABP_MNU_3DWIDGET_BaseActor_C_BindAnimCloseStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MNU_3DWIDGET_BaseActor_C::BindAnimOpenStartEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenStartEvent");

	ABP_MNU_3DWIDGET_BaseActor_C_BindAnimOpenStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.IsPlayingAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DWIDGET_BaseActor_C::IsPlayingAnimation(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.IsPlayingAnimation");

	ABP_MNU_3DWIDGET_BaseActor_C_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.CheckFinishAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveVector*            LocationCurve                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            RotationCurve                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            ScaleCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFinish                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DWIDGET_BaseActor_C::CheckFinishAnim(class UCurveVector* LocationCurve, class UCurveVector* RotationCurve, class UCurveVector* ScaleCurve, float Time, bool CheckFlag, bool* bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.CheckFinishAnim");

	ABP_MNU_3DWIDGET_BaseActor_C_CheckFinishAnim_Params params;
	params.LocationCurve = LocationCurve;
	params.RotationCurve = RotationCurve;
	params.ScaleCurve = ScaleCurve;
	params.Time = Time;
	params.CheckFlag = CheckFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFinish != nullptr)
		*bFinish = params.bFinish;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.MakeAnimTransform
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveVector*            LocationCurve                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            RotationCurve                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            ScaleCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Trans                          (Parm, OutParm, IsPlainOldData)

void ABP_MNU_3DWIDGET_BaseActor_C::MakeAnimTransform(class UCurveVector* LocationCurve, class UCurveVector* RotationCurve, class UCurveVector* ScaleCurve, float Time, struct FTransform* Trans)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.MakeAnimTransform");

	ABP_MNU_3DWIDGET_BaseActor_C_MakeAnimTransform_Params params;
	params.LocationCurve = LocationCurve;
	params.RotationCurve = RotationCurve;
	params.ScaleCurve = ScaleCurve;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trans != nullptr)
		*Trans = params.Trans;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::PlayAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimClose");

	ABP_MNU_3DWIDGET_BaseActor_C_PlayAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimOpen");

	ABP_MNU_3DWIDGET_BaseActor_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.UserConstructionScript");

	ABP_MNU_3DWIDGET_BaseActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpen");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimClose
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimClose");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimOpenStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenStart");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpenStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimCloseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseStart");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimCloseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenFinishded
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimOpenFinishded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenFinishded");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpenFinishded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::OnAnimCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseFinished");

	ABP_MNU_3DWIDGET_BaseActor_C_OnAnimCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DWIDGET_BaseActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveTick");

	ABP_MNU_3DWIDGET_BaseActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveBeginPlay");

	ABP_MNU_3DWIDGET_BaseActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DWIDGET_BaseActor_C::ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor");

	ABP_MNU_3DWIDGET_BaseActor_C_ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::AnimCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseFinishedEvent__DelegateSignature");

	ABP_MNU_3DWIDGET_BaseActor_C_AnimCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::AnimOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenFinishedEvent__DelegateSignature");

	ABP_MNU_3DWIDGET_BaseActor_C_AnimOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::AnimCloseStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseStartEvent__DelegateSignature");

	ABP_MNU_3DWIDGET_BaseActor_C_AnimCloseStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DWIDGET_BaseActor_C::AnimOpenStartEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenStartEvent__DelegateSignature");

	ABP_MNU_3DWIDGET_BaseActor_C_AnimOpenStartEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
