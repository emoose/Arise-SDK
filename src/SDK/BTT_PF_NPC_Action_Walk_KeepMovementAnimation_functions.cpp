
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

// Function BTT_PF_NPC_Action_Walk_KeepMovementAnimation.BTT_PF_NPC_Action_Walk_KeepMovementAnimation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_KeepMovementAnimation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_KeepMovementAnimation.BTT_PF_NPC_Action_Walk_KeepMovementAnimation_C.ReceiveExecuteAI");

	UBTT_PF_NPC_Action_Walk_KeepMovementAnimation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_KeepMovementAnimation.BTT_PF_NPC_Action_Walk_KeepMovementAnimation_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_KeepMovementAnimation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_KeepMovementAnimation_C::ExecuteUbergraph_BTT_PF_NPC_Action_Walk_KeepMovementAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_KeepMovementAnimation.BTT_PF_NPC_Action_Walk_KeepMovementAnimation_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_KeepMovementAnimation");

	UBTT_PF_NPC_Action_Walk_KeepMovementAnimation_C_ExecuteUbergraph_BTT_PF_NPC_Action_Walk_KeepMovementAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
