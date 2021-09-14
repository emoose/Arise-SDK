
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

// Function BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetBehaviorAsset_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C.ReceiveExecuteAI");

	UBTT_SetBehaviorAsset_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C.ExecuteUbergraph_BTT_SetBehaviorAsset
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetBehaviorAsset_C::ExecuteUbergraph_BTT_SetBehaviorAsset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C.ExecuteUbergraph_BTT_SetBehaviorAsset");

	UBTT_SetBehaviorAsset_C_ExecuteUbergraph_BTT_SetBehaviorAsset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
