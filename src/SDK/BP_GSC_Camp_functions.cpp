
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

// Function BP_GSC_Camp.BP_GSC_Camp_C.CampLevelUnload
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::CampLevelUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.CampLevelUnload");

	UBP_GSC_Camp_C_CampLevelUnload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.IsCampLevelUnloaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::IsCampLevelUnloaded(bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.IsCampLevelUnloaded");

	UBP_GSC_Camp_C_IsCampLevelUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Camp_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.IsPausePossibleState");

	UBP_GSC_Camp_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Camp_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.IsEnableSystemPause");

	UBP_GSC_Camp_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.DestroyScreenMask
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::DestroyScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.DestroyScreenMask");

	UBP_GSC_Camp_C_DestroyScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowTopMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::ShowTopMenu(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.ShowTopMenu");

	UBP_GSC_Camp_C_ShowTopMenu_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.SetScreenMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::SetScreenMask(const struct FString& Type, bool MaskOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.SetScreenMask");

	UBP_GSC_Camp_C_SetScreenMask_Params params;
	params.Type = Type;
	params.MaskOn = MaskOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneRunning
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::SceneRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.SceneRunning");

	UBP_GSC_Camp_C_SceneRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneFinalize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::SceneFinalize(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.SceneFinalize");

	UBP_GSC_Camp_C_SceneFinalize_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::SceneInitialize(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.SceneInitialize");

	UBP_GSC_Camp_C_SceneInitialize_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.WaitExitCampCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::WaitExitCampCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.WaitExitCampCompleted");

	UBP_GSC_Camp_C_WaitExitCampCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.ExitCamp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::ExitCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.ExitCamp");

	UBP_GSC_Camp_C_ExitCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.UnloadCamp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::UnloadCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.UnloadCamp");

	UBP_GSC_Camp_C_UnloadCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.LoadCamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::LoadCamp(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.LoadCamp");

	UBP_GSC_Camp_C_LoadCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.WaitInitCampCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::WaitInitCampCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.WaitInitCampCompleted");

	UBP_GSC_Camp_C_WaitInitCampCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.InitCamp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::InitCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.InitCamp");

	UBP_GSC_Camp_C_InitCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCampMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::ShowCampMap(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCampMap");

	UBP_GSC_Camp_C_ShowCampMap_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.PFCharacterActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::PFCharacterActive(bool bEnable, class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.PFCharacterActive");

	UBP_GSC_Camp_C_PFCharacterActive_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCharcterStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::ShowCharcterStage(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCharcterStage");

	UBP_GSC_Camp_C_ShowCharcterStage_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.SetupScreenMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewScreenMask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::SetupScreenMask(bool NewScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.SetupScreenMask");

	UBP_GSC_Camp_C_SetupScreenMask_Params params;
	params.NewScreenMask = NewScreenMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.CreateScreenMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::CreateScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.CreateScreenMask");

	UBP_GSC_Camp_C_CreateScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Camp_C::DebugPrintSceneState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.DebugPrintSceneState");

	UBP_GSC_Camp_C_DebugPrintSceneState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Finalize");

	UBP_GSC_Camp_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Initialize");

	UBP_GSC_Camp_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Tick");

	UBP_GSC_Camp_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Sleep");

	UBP_GSC_Camp_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Wakeup
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::BPE_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Wakeup");

	UBP_GSC_Camp_C_BPE_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Camp.BP_GSC_Camp_C.ExecuteUbergraph_BP_GSC_Camp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Camp_C::ExecuteUbergraph_BP_GSC_Camp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Camp.BP_GSC_Camp_C.ExecuteUbergraph_BP_GSC_Camp");

	UBP_GSC_Camp_C_ExecuteUbergraph_BP_GSC_Camp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
