
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

// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsBuildCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::IsBuildCharacter(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsBuildCharacter");

	ABP_PFPartyTopCharacterBase_C_IsBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsPlayVibration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PFPartyTopCharacterBase_C::IsPlayVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsPlayVibration");

	ABP_PFPartyTopCharacterBase_C_IsPlayVibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsDebugInputEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::IsDebugInputEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IsDebugInputEnable");

	ABP_PFPartyTopCharacterBase_C_IsDebugInputEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.SetLookAtSymbol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDE_PFPartyTopLookAtType> LookAtType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::SetLookAtSymbol(class AActor* NewTarget, TEnumAsByte<EDE_PFPartyTopLookAtType> LookAtType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.SetLookAtSymbol");

	ABP_PFPartyTopCharacterBase_C_SetLookAtSymbol_Params params;
	params.NewTarget = NewTarget;
	params.LookAtType = LookAtType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFadeTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::FadeOut(float InFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeOut");

	ABP_PFPartyTopCharacterBase_C_FadeOut_Params params;
	params.InFadeTime = InFadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InFadeTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::FadeIn(float InFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.FadeIn");

	ABP_PFPartyTopCharacterBase_C_FadeIn_Params params;
	params.InFadeTime = InFadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Initialize");

	ABP_PFPartyTopCharacterBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReconstructFromPartyTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::ReconstructFromPartyTop(bool bBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReconstructFromPartyTop");

	ABP_PFPartyTopCharacterBase_C_ReconstructFromPartyTop_Params params;
	params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.UserConstructionScript");

	ABP_PFPartyTopCharacterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IF_ReconstPartyTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::IF_ReconstPartyTop(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.IF_ReconstPartyTop");

	ABP_PFPartyTopCharacterBase_C_IF_ReconstPartyTop_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Game State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::Event_On_Game_State_Change(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Game State Change");

	ABP_PFPartyTopCharacterBase_C_Event_On_Game_State_Change_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.BuildCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::BuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.BuildCharacter");

	ABP_PFPartyTopCharacterBase_C_BuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnBuildCharacter");

	ABP_PFPartyTopCharacterBase_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnResetCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInIndoorMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::OnResetCharacter(bool bInIndoorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnResetCharacter");

	ABP_PFPartyTopCharacterBase_C_OnResetCharacter_Params params;
	params.bInIndoorMode = bInIndoorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Post Map Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PFPartyTopCharacterBase_C::Event_On_Post_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Post Map Change");

	ABP_PFPartyTopCharacterBase_C_Event_On_Post_Map_Change_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Pre Map Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PFPartyTopCharacterBase_C::Event_On_Pre_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.Event On Pre Map Change");

	ABP_PFPartyTopCharacterBase_C_Event_On_Pre_Map_Change_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnChangedDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::OnChangedDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.OnChangedDisplayScene");

	ABP_PFPartyTopCharacterBase_C_OnChangedDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::«0¹0¿0à0¤0Ù0ó0È0_1(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_1");

	ABP_PFPartyTopCharacterBase_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveTick");

	ABP_PFPartyTopCharacterBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::«0¹0¿0à0¤0Ù0ó0È0_2(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.«0¹0¿0à0¤0Ù0ó0È0_2");

	ABP_PFPartyTopCharacterBase_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ReceiveBeginPlay");

	ABP_PFPartyTopCharacterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_PFPartyTopCharacterBase_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.CustomEvent_1");

	ABP_PFPartyTopCharacterBase_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ExecuteUbergraph_BP_PFPartyTopCharacterBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPartyTopCharacterBase_C::ExecuteUbergraph_BP_PFPartyTopCharacterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPartyTopCharacterBase.BP_PFPartyTopCharacterBase_C.ExecuteUbergraph_BP_PFPartyTopCharacterBase");

	ABP_PFPartyTopCharacterBase_C_ExecuteUbergraph_BP_PFPartyTopCharacterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
