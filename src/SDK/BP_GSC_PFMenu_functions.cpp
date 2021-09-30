
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

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_PFMenu_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsEnableSystemPause");

	UBP_GSC_PFMenu_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_PFMenu_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsPausePossibleState");

	UBP_GSC_PFMenu_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterLockIfNeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::PFCharacterLockIfNeed(class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterLockIfNeed");

	UBP_GSC_PFMenu_C_PFCharacterLockIfNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterUnlockIfNeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::PFCharacterUnlockIfNeed(class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterUnlockIfNeed");

	UBP_GSC_PFMenu_C_PFCharacterUnlockIfNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ShowCharcterStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::ShowCharcterStage(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ShowCharcterStage");

	UBP_GSC_PFMenu_C_ShowCharcterStage_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.MaskPFMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMask                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::MaskPFMap(bool bMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.MaskPFMap");

	UBP_GSC_PFMenu_C_MaskPFMap_Params params;
	params.bMask = bMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.SetupScreenMack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewScreenMask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::SetupScreenMack(bool NewScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.SetupScreenMack");

	UBP_GSC_PFMenu_C_SetupScreenMack_Params params;
	params.NewScreenMask = NewScreenMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CreateScreenMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::CreateScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CreateScreenMask");

	UBP_GSC_PFMenu_C_CreateScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::DebugPrintSceneState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.DebugPrintSceneState");

	UBP_GSC_PFMenu_C_DebugPrintSceneState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.UnbindPause
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::UnbindPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.UnbindPause");

	UBP_GSC_PFMenu_C_UnbindPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Tick");

	UBP_GSC_PFMenu_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Initialize");

	UBP_GSC_PFMenu_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Finalize");

	UBP_GSC_PFMenu_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BindPause
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::BindPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BindPause");

	UBP_GSC_PFMenu_C_BindPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.Resume
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.Resume");

	UBP_GSC_PFMenu_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ResumePF
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::ResumePF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ResumePF");

	UBP_GSC_PFMenu_C_ResumePF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PausePF
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::PausePF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PausePF");

	UBP_GSC_PFMenu_C_PausePF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CancelPause
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_PFMenu_C::CancelPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CancelPause");

	UBP_GSC_PFMenu_C_CancelPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Wakeup
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::BPE_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Wakeup");

	UBP_GSC_PFMenu_C_BPE_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Sleep");

	UBP_GSC_PFMenu_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ExecuteUbergraph_BP_GSC_PFMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_PFMenu_C::ExecuteUbergraph_BP_GSC_PFMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ExecuteUbergraph_BP_GSC_PFMenu");

	UBP_GSC_PFMenu_C_ExecuteUbergraph_BP_GSC_PFMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
