
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

// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.SelectTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBTT_SetDownUnitTarget_C::SelectTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.SelectTarget");

	UBTT_SetDownUnitTarget_C_SelectTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetDownUnitTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ReceiveExecuteAI");

	UBTT_SetDownUnitTarget_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ExecuteUbergraph_BTT_SetDownUnitTarget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetDownUnitTarget_C::ExecuteUbergraph_BTT_SetDownUnitTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetDownUnitTarget.BTT_SetDownUnitTarget_C.ExecuteUbergraph_BTT_SetDownUnitTarget");

	UBTT_SetDownUnitTarget_C_ExecuteUbergraph_BTT_SetDownUnitTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
