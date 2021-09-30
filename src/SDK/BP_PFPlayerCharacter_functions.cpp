
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

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetDebugVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InNewValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::SetDebugVisibility(bool InNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetDebugVisibility");

	ABP_PFPlayerCharacter_C_SetDebugVisibility_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsDebugInputEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::IsDebugInputEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsDebugInputEnable");

	ABP_PFPlayerCharacter_C_IsDebugInputEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.AdsorbGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::AdsorbGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.AdsorbGround");

	ABP_PFPlayerCharacter_C_AdsorbGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           OutIdle                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::IsIdle(bool* OutIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsIdle");

	ABP_PFPlayerCharacter_C_IsIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIdle != nullptr)
		*OutIdle = params.OutIdle;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.PlaySearchSwim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::PlaySearchSwim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.PlaySearchSwim");

	ABP_PFPlayerCharacter_C_PlaySearchSwim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IdleTransLadder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InBeginStepNum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InTotalStepNum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeginLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                BeginRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   InPhysMaterialName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::IdleTransLadder(int InBeginStepNum, int InTotalStepNum, const struct FVector& BeginLocation, const struct FRotator& BeginRotation, const struct FName& InPhysMaterialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IdleTransLadder");

	ABP_PFPlayerCharacter_C_IdleTransLadder_Params params;
	params.InBeginStepNum = InBeginStepNum;
	params.InTotalStepNum = InTotalStepNum;
	params.BeginLocation = BeginLocation;
	params.BeginRotation = BeginRotation;
	params.InPhysMaterialName = InPhysMaterialName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransIdle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::LadderTransIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransIdle");

	ABP_PFPlayerCharacter_C_LadderTransIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransFloating
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::LadderTransFloating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransFloating");

	ABP_PFPlayerCharacter_C_LadderTransFloating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetCollisionPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPFPlayerCollisionPreset> InNewPreset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::SetCollisionPreset(TEnumAsByte<EPFPlayerCollisionPreset> InNewPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetCollisionPreset");

	ABP_PFPlayerCharacter_C_SetCollisionPreset_Params params;
	params.InNewPreset = InNewPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.CanOpenPFMenuTop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanOpen                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::CanOpenPFMenuTop(bool* CanOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.CanOpenPFMenuTop");

	ABP_PFPlayerCharacter_C_CanOpenPFMenuTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanOpen != nullptr)
		*CanOpen = params.CanOpen;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.GetCurrentJumpZVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          JumpZVelocity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::GetCurrentJumpZVelocity(float* JumpZVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.GetCurrentJumpZVelocity");

	ABP_PFPlayerCharacter_C_GetCurrentJumpZVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpZVelocity != nullptr)
		*JumpZVelocity = params.JumpZVelocity;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteFlyModeMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ExecuteFlyModeMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteFlyModeMovement");

	ABP_PFPlayerCharacter_C_ExecuteFlyModeMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeFlyMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlyMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ChangeFlyMode(bool FlyMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeFlyMode");

	ABP_PFPlayerCharacter_C_ChangeFlyMode_Params params;
	params.FlyMode = FlyMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeJumpRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ChangeJumpRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeJumpRate");

	ABP_PFPlayerCharacter_C_ChangeJumpRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeMoveSpeedRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ChangeMoveSpeedRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeMoveSpeedRate");

	ABP_PFPlayerCharacter_C_ChangeMoveSpeedRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetupActionState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::SetupActionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetupActionState");

	ABP_PFPlayerCharacter_C_SetupActionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.UserConstructionScript");

	ABP_PFPlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnMoveBlockedBy
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PFPlayerCharacter_C::OnMoveBlockedBy(const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnMoveBlockedBy");

	ABP_PFPlayerCharacter_C_OnMoveBlockedBy_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnResetCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInIndoorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::OnResetCharacter(bool bInIndoorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnResetCharacter");

	ABP_PFPlayerCharacter_C_OnResetCharacter_Params params;
	params.bInIndoorMode = bInIndoorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFPlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveBeginPlay");

	ABP_PFPlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveTick");

	ABP_PFPlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteUbergraph_BP_PFPlayerCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCharacter_C::ExecuteUbergraph_BP_PFPlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteUbergraph_BP_PFPlayerCharacter");

	ABP_PFPlayerCharacter_C_ExecuteUbergraph_BP_PFPlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
