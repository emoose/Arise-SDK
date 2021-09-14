
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

// Function BP_BtlAIController.BP_BtlAIController_C.InitializeBehavior
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlAIController_C::InitializeBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIController.BP_BtlAIController_C.InitializeBehavior");

	ABP_BtlAIController_C_InitializeBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlAIController.BP_BtlAIController_C.InitializeBlackboard
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAIController_C::InitializeBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIController.BP_BtlAIController_C.InitializeBlackboard");

	ABP_BtlAIController_C_InitializeBlackboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIController.BP_BtlAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIController.BP_BtlAIController_C.UserConstructionScript");

	ABP_BtlAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIController.BP_BtlAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIController.BP_BtlAIController_C.ReceiveBeginPlay");

	ABP_BtlAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIController.BP_BtlAIController_C.ExecuteUbergraph_BP_BtlAIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlAIController_C::ExecuteUbergraph_BP_BtlAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIController.BP_BtlAIController_C.ExecuteUbergraph_BP_BtlAIController");

	ABP_BtlAIController_C_ExecuteUbergraph_BP_BtlAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
