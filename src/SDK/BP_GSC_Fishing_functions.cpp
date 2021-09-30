
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

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.GetFishingSceneController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_FishingSceneControllerInterface_C> Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::GetFishingSceneController(TScriptInterface<class UBP_FishingSceneControllerInterface_C>* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.GetFishingSceneController");

	UBP_GSC_Fishing_C_GetFishingSceneController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PopLevelsEndFishing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Fishing_C::PopLevelsEndFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.PopLevelsEndFishing");

	UBP_GSC_Fishing_C_PopLevelsEndFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Fishing_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsEnableSystemPause");

	UBP_GSC_Fishing_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.HideLevelsStartFishing
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Fishing_C::HideLevelsStartFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.HideLevelsStartFishing");

	UBP_GSC_Fishing_C_HideLevelsStartFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.SpawnBlueprints
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Fishing_C::SpawnBlueprints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.SpawnBlueprints");

	UBP_GSC_Fishing_C_SpawnBlueprints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsBlueprintsLoaded?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::IsBlueprintsLoaded_(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsBlueprintsLoaded?");

	UBP_GSC_Fishing_C_IsBlueprintsLoaded__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Fishing_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsPausePossibleState");

	UBP_GSC_Fishing_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEventSkip                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::PauseManagement(bool* bEventSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseManagement");

	UBP_GSC_Fishing_C_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEventSkip != nullptr)
		*bEventSkip = params.bEventSkip;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseTickManagement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::PauseTickManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseTickManagement");

	UBP_GSC_Fishing_C_PauseTickManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.CheckTackle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Fishing_C::CheckTackle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.CheckTackle");

	UBP_GSC_Fishing_C_CheckTackle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPGeneralFunctionBool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OpertionName                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<struct FName, struct FString> Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Fishing_C::BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPGeneralFunctionBool");

	UBP_GSC_Fishing_C_BPGeneralFunctionBool_Params params;
	params.OpertionName = OpertionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PFCharacterActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::PFCharacterActive(bool Enable, class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.PFCharacterActive");

	UBP_GSC_Fishing_C_PFCharacterActive_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.InitializeByFishingPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_FishingPointInterface_C> FishingPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::InitializeByFishingPoint(const TScriptInterface<class UBP_FishingPointInterface_C>& FishingPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.InitializeByFishingPoint");

	UBP_GSC_Fishing_C_InitializeByFishingPoint_Params params;
	params.FishingPoint = FishingPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Initialize");

	UBP_GSC_Fishing_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Tick");

	UBP_GSC_Fishing_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Finalize");

	UBP_GSC_Fishing_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Wakeup
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::BPE_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Wakeup");

	UBP_GSC_Fishing_C_BPE_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Sleep");

	UBP_GSC_Fishing_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.EventCreatePauseController
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Fishing_C::EventCreatePauseController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.EventCreatePauseController");

	UBP_GSC_Fishing_C_EventCreatePauseController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Fishing.BP_GSC_Fishing_C.ExecuteUbergraph_BP_GSC_Fishing
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Fishing_C::ExecuteUbergraph_BP_GSC_Fishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Fishing.BP_GSC_Fishing_C.ExecuteUbergraph_BP_GSC_Fishing");

	UBP_GSC_Fishing_C_ExecuteUbergraph_BP_GSC_Fishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
