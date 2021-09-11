
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

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.IsRequestEvent_EnableControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EAriseGameState                InChangedState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNextIs                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInCheckIs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::IsRequestEvent_EnableControl(EAriseGameState InChangedState, bool bInNextIs, bool bInCheckIs, bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.IsRequestEvent_EnableControl");

	ABP_PF_DelegateManager_C_IsRequestEvent_EnableControl_Params params;
	params.InChangedState = InChangedState;
	params.bInNextIs = bInNextIs;
	params.bInCheckIs = bInCheckIs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_DelegateManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.UserConstructionScript");

	ABP_PF_DelegateManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_DelegateManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ReceiveBeginPlay");

	ABP_PF_DelegateManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_EnableControl
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            InDelegateNum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::ExecuteBroadcast_EnableControl(int InDelegateNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_EnableControl");

	ABP_PF_DelegateManager_C_ExecuteBroadcast_EnableControl_Params params;
	params.InDelegateNum = InDelegateNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_DisableControl
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            InDelegateNum                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::ExecuteBroadcast_DisableControl(int InDelegateNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_DisableControl");

	ABP_PF_DelegateManager_C_ExecuteBroadcast_DisableControl_Params params;
	params.InDelegateNum = InDelegateNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.SetFishingResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InPointName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         InTypes                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_DelegateManager_C::SetFishingResult(const struct FString& InPointName, TArray<struct FString> InTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.SetFishingResult");

	ABP_PF_DelegateManager_C_SetFishingResult_Params params;
	params.InPointName = InPointName;
	params.InTypes = InTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChageGameState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnChageGameState(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChageGameState");

	ABP_PF_DelegateManager_C_OnChageGameState_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChangeDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChangeDisplayScene");

	ABP_PF_DelegateManager_C_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteCheckCP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::ExecuteCheckCP(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteCheckCP");

	ABP_PF_DelegateManager_C_ExecuteCheckCP_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnShowTutorial_PF_PROFICIENCY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnShowTutorial_PF_PROFICIENCY(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnShowTutorial_PF_PROFICIENCY");

	ABP_PF_DelegateManager_C_OnShowTutorial_PF_PROFICIENCY_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::CustomEvent_1(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.CustomEvent_1");

	ABP_PF_DelegateManager_C_CustomEvent_1_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnLearnSpArts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnLearnSpArts(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnLearnSpArts");

	ABP_PF_DelegateManager_C_OnLearnSpArts_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnPlayFishingLC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnPlayFishingLC(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnPlayFishingLC");

	ABP_PF_DelegateManager_C_OnPlayFishingLC_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnCooking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  InPartyID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InRecipeID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::OnCooking(EArisePartyID InPartyID, int InRecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnCooking");

	ABP_PF_DelegateManager_C_OnCooking_Params params;
	params.InPartyID = InPartyID;
	params.InRecipeID = InRecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Item Rate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::Event_Check_Item_Rate(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Item Rate");

	ABP_PF_DelegateManager_C_Event_Check_Item_Rate_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Monster Complete Rate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPFDelegateArgs_EnableControl* InArgs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::Event_Check_Monster_Complete_Rate(class UPFDelegateArgs_EnableControl* InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Monster Complete Rate");

	ABP_PF_DelegateManager_C_Event_Check_Monster_Complete_Rate_Params params;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteUbergraph_BP_PF_DelegateManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_DelegateManager_C::ExecuteUbergraph_BP_PF_DelegateManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteUbergraph_BP_PF_DelegateManager");

	ABP_PF_DelegateManager_C_ExecuteUbergraph_BP_PF_DelegateManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
