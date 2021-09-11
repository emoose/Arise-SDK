
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

// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CanPlayerFreeInfluence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PFG_InfluenceMap_C::CanPlayerFreeInfluence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CanPlayerFreeInfluence");

	ABP_PFG_InfluenceMap_C_CanPlayerFreeInfluence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.DestroyInfluence
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PFG_InfluenceMap_C::DestroyInfluence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.DestroyInfluence");

	ABP_PFG_InfluenceMap_C_DestroyInfluence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CreateInfluence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PFG_InfluenceMap_C::CreateInfluence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.CreateInfluence");

	ABP_PFG_InfluenceMap_C_CreateInfluence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.SetInfluence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInfluence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFG_InfluenceMap_C::SetInfluence(bool bInfluence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.SetInfluence");

	ABP_PFG_InfluenceMap_C_SetInfluence_Params params;
	params.bInfluence = bInfluence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFG_InfluenceMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.UserConstructionScript");

	ABP_PFG_InfluenceMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFG_InfluenceMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveBeginPlay");

	ABP_PFG_InfluenceMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFG_InfluenceMap_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ReceiveEndPlay");

	ABP_PFG_InfluenceMap_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnSceneChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFG_InfluenceMap_C::OnSceneChange(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnSceneChange");

	ABP_PFG_InfluenceMap_C_OnSceneChange_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnPFStart
// (BlueprintCallable, BlueprintEvent)

void ABP_PFG_InfluenceMap_C::OnPFStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnPFStart");

	ABP_PFG_InfluenceMap_C_OnPFStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFG_InfluenceMap_C::OnChangeState(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.OnChangeState");

	ABP_PFG_InfluenceMap_C_OnChangeState_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ExecuteUbergraph_BP_PFG_InfluenceMap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFG_InfluenceMap_C::ExecuteUbergraph_BP_PFG_InfluenceMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFG_InfluenceMap.BP_PFG_InfluenceMap_C.ExecuteUbergraph_BP_PFG_InfluenceMap");

	ABP_PFG_InfluenceMap_C_ExecuteUbergraph_BP_PFG_InfluenceMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
