
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

// Function BP_GSC_Boot.BP_GSC_Boot_C.IsLoadedLogoTextures
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::IsLoadedLogoTextures(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.IsLoadedLogoTextures");

	UBP_GSC_Boot_C_IsLoadedLogoTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLoadBootEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::StartLoadBootEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.StartLoadBootEvent");

	UBP_GSC_Boot_C_StartLoadBootEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.PreloadLogoTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadPriority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::PreloadLogoTexture(int LoadPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.PreloadLogoTexture");

	UBP_GSC_Boot_C_PreloadLogoTexture_Params params;
	params.LoadPriority = LoadPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.RemoveAllMenuPad
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::RemoveAllMenuPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.RemoveAllMenuPad");

	UBP_GSC_Boot_C_RemoveAllMenuPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.GotoLoginScene
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::GotoLoginScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.GotoLoginScene");

	UBP_GSC_Boot_C_GotoLoginScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.IsTriggerMenuPadProcesses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::IsTriggerMenuPadProcesses(const struct FName& Key, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.IsTriggerMenuPadProcesses");

	UBP_GSC_Boot_C_IsTriggerMenuPadProcesses_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.CreateAllMenuPad
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::CreateAllMenuPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.CreateAllMenuPad");

	UBP_GSC_Boot_C_CreateAllMenuPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.OnBootScreenDisplayAllEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::OnBootScreenDisplayAllEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.OnBootScreenDisplayAllEnd");

	UBP_GSC_Boot_C_OnBootScreenDisplayAllEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.NextDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::NextDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.NextDisplay");

	UBP_GSC_Boot_C_NextDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.NewDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DisplayId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::NewDisplay(int DisplayId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.NewDisplay");

	UBP_GSC_Boot_C_NewDisplay_Params params;
	params.DisplayId = DisplayId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Initialize");

	UBP_GSC_Boot_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Tick");

	UBP_GSC_Boot_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.BPE_Finalize");

	UBP_GSC_Boot_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogo
// (Event, Public, BlueprintEvent)

void UBP_GSC_Boot_C::StartLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogo");

	UBP_GSC_Boot_C_StartLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.CreateScreenWidget
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Boot_C::CreateScreenWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.CreateScreenWidget");

	UBP_GSC_Boot_C_CreateScreenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.OnScreenEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_BootScreenState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::OnScreenEnd(TEnumAsByte<ENM_BootScreenState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.OnScreenEnd");

	UBP_GSC_Boot_C_OnScreenEnd_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogin
// (Event, Public, BlueprintEvent)

void UBP_GSC_Boot_C::StartLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.StartLogin");

	UBP_GSC_Boot_C_StartLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Boot.BP_GSC_Boot_C.ExecuteUbergraph_BP_GSC_Boot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Boot_C::ExecuteUbergraph_BP_GSC_Boot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Boot.BP_GSC_Boot_C.ExecuteUbergraph_BP_GSC_Boot");

	UBP_GSC_Boot_C_ExecuteUbergraph_BP_GSC_Boot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
