
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

// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.SetInfluence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInfluence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::SetInfluence(bool bInfluence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.SetInfluence");

	ABP_ScenarioSwitchMesh_C_SetInfluence_Params params;
	params.bInfluence = bInfluence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.DestroyInfluenceMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScenarioSwitchMesh_C::DestroyInfluenceMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.DestroyInfluenceMap");

	ABP_ScenarioSwitchMesh_C_DestroyInfluenceMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CreateInfluenceMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScenarioSwitchMesh_C::CreateInfluenceMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CreateInfluenceMap");

	ABP_ScenarioSwitchMesh_C_CreateInfluenceMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ShowModels
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::ShowModels(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ShowModels");

	ABP_ScenarioSwitchMesh_C_ShowModels_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CheckScenarioCondions
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSatisfy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::CheckScenarioCondions(bool* bSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.CheckScenarioCondions");

	ABP_ScenarioSwitchMesh_C_CheckScenarioCondions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSatisfy != nullptr)
		*bSatisfy = params.bSatisfy;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScenarioSwitchMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.UserConstructionScript");

	ABP_ScenarioSwitchMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ScenarioSwitchMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveBeginPlay");

	ABP_ScenarioSwitchMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioCounterChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::OnScenarioCounterChange(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioCounterChange");

	ABP_ScenarioSwitchMesh_C_OnScenarioCounterChange_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::OnScenarioFlagChange(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.OnScenarioFlagChange");

	ABP_ScenarioSwitchMesh_C_OnScenarioFlagChange_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ReceiveEndPlay");

	ABP_ScenarioSwitchMesh_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ExecuteUbergraph_BP_ScenarioSwitchMesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScenarioSwitchMesh_C::ExecuteUbergraph_BP_ScenarioSwitchMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScenarioSwitchMesh.BP_ScenarioSwitchMesh_C.ExecuteUbergraph_BP_ScenarioSwitchMesh");

	ABP_ScenarioSwitchMesh_C_ExecuteUbergraph_BP_ScenarioSwitchMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
