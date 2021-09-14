
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

// Function BP_MGC_TASK_NotifyCollisionV2.BP_MGC_TASK_NotifyCollisionV2_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TASK_NotifyCollisionV2_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollisionV2.BP_MGC_TASK_NotifyCollisionV2_C.Received_GetTaskName");

	UBP_MGC_TASK_NotifyCollisionV2_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
