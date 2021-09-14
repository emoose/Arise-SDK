
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

// Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_SceneDarknessEnd_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.Received_GetTaskName");

	UBP_MGC_TSK_SceneDarknessEnd_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_SceneDarknessEnd_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.Received_Begin");

	UBP_MGC_TSK_SceneDarknessEnd_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.ExecuteUbergraph_BP_MGC_TSK_SceneDarknessEnd
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_SceneDarknessEnd_C::ExecuteUbergraph_BP_MGC_TSK_SceneDarknessEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_SceneDarknessEnd.BP_MGC_TSK_SceneDarknessEnd_C.ExecuteUbergraph_BP_MGC_TSK_SceneDarknessEnd");

	UBP_MGC_TSK_SceneDarknessEnd_C_ExecuteUbergraph_BP_MGC_TSK_SceneDarknessEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
