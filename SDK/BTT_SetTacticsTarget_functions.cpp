
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

// Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.SelectTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBTT_SetTacticsTarget_C::SelectTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.SelectTarget");

	UBTT_SetTacticsTarget_C_SelectTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetTacticsTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.ReceiveExecuteAI");

	UBTT_SetTacticsTarget_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.ExecuteUbergraph_BTT_SetTacticsTarget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetTacticsTarget_C::ExecuteUbergraph_BTT_SetTacticsTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetTacticsTarget.BTT_SetTacticsTarget_C.ExecuteUbergraph_BTT_SetTacticsTarget");

	UBTT_SetTacticsTarget_C_ExecuteUbergraph_BTT_SetTacticsTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
