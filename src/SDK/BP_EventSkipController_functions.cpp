
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

// Function BP_EventSkipController.BP_EventSkipController_C.IF_EventSkipMangement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DoEventSkip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::IF_EventSkipMangement(float Tick, bool* DoEventSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.IF_EventSkipMangement");

	ABP_EventSkipController_C_IF_EventSkipMangement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoEventSkip != nullptr)
		*DoEventSkip = params.DoEventSkip;
}


// Function BP_EventSkipController.BP_EventSkipController_C.IF_PauseManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPause                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OffPause                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Skipped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::IF_PauseManagement(bool* OnPause, bool* OffPause, bool* Skipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.IF_PauseManagement");

	ABP_EventSkipController_C_IF_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnPause != nullptr)
		*OnPause = params.OnPause;
	if (OffPause != nullptr)
		*OffPause = params.OffPause;
	if (Skipped != nullptr)
		*Skipped = params.Skipped;
}


// Function BP_EventSkipController.BP_EventSkipController_C.SetInputEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::SetInputEnable(bool NewEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.SetInputEnable");

	ABP_EventSkipController_C_SetInputEnable_Params params;
	params.NewEnable = NewEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSkipController_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.Finalize");

	ABP_EventSkipController_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C._DisplayEndSkipGuide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSkipController_C::_DisplayEndSkipGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C._DisplayEndSkipGuide");

	ABP_EventSkipController_C__DisplayEndSkipGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.EventSkipManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoEventSkip                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::EventSkipManagement(float Tick, bool* bDoEventSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.EventSkipManagement");

	ABP_EventSkipController_C_EventSkipManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDoEventSkip != nullptr)
		*bDoEventSkip = params.bDoEventSkip;
}


// Function BP_EventSkipController.BP_EventSkipController_C._GetInputPause
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bPressed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::_GetInputPause(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C._GetInputPause");

	ABP_EventSkipController_C__GetInputPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPressed != nullptr)
		*bPressed = params.bPressed;
}


// Function BP_EventSkipController.BP_EventSkipController_C.PauseManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOnPause                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOffPause                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSkiped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::PauseManagement(bool* bOnPause, bool* bOffPause, bool* bSkiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.PauseManagement");

	ABP_EventSkipController_C_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOnPause != nullptr)
		*bOnPause = params.bOnPause;
	if (bOffPause != nullptr)
		*bOffPause = params.bOffPause;
	if (bSkiped != nullptr)
		*bSkiped = params.bSkiped;
}


// Function BP_EventSkipController.BP_EventSkipController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSkipController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.UserConstructionScript");

	ABP_EventSkipController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventSkipController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.ReceiveBeginPlay");

	ABP_EventSkipController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.IF_DisplayEndSkipGuide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSkipController_C::IF_DisplayEndSkipGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.IF_DisplayEndSkipGuide");

	ABP_EventSkipController_C_IF_DisplayEndSkipGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.ReceiveEndPlay");

	ABP_EventSkipController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.ReceiveTick");

	ABP_EventSkipController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventSkipController.BP_EventSkipController_C.ExecuteUbergraph_BP_EventSkipController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventSkipController_C::ExecuteUbergraph_BP_EventSkipController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventSkipController.BP_EventSkipController_C.ExecuteUbergraph_BP_EventSkipController");

	ABP_EventSkipController_C_ExecuteUbergraph_BP_EventSkipController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
