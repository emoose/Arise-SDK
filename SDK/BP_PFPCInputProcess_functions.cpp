
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

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsDebugInputEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPCInputProcess_C::IsDebugInputEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsDebugInputEnable");

	ABP_PFPCInputProcess_C_IsDebugInputEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteSwitchPartyTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CW                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPCInputProcess_C::ExecuteSwitchPartyTop(bool CW)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteSwitchPartyTop");

	ABP_PFPCInputProcess_C_ExecuteSwitchPartyTop_Params params;
	params.CW = CW;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteGamePause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPCInputProcess_C::ExecuteGamePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteGamePause");

	ABP_PFPCInputProcess_C_ExecuteGamePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsExecuteProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PFPCInputProcess_C::IsExecuteProcess(bool* Is)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsExecuteProcess");

	ABP_PFPCInputProcess_C_IsExecuteProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPCInputProcess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.UserConstructionScript");

	ABP_PFPCInputProcess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.K2_ExecuteProcess
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPCInputProcess_C::K2_ExecuteProcess(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.K2_ExecuteProcess");

	ABP_PFPCInputProcess_C_K2_ExecuteProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteUbergraph_BP_PFPCInputProcess
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPCInputProcess_C::ExecuteUbergraph_BP_PFPCInputProcess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteUbergraph_BP_PFPCInputProcess");

	ABP_PFPCInputProcess_C_ExecuteUbergraph_BP_PFPCInputProcess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
