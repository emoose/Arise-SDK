
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

// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.SetActionUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBTT_PF_NPC_Action_MoveTo_Move_C::SetActionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.SetActionUpdate");

	UBTT_PF_NPC_Action_MoveTo_Move_C_SetActionUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_MoveTo_Move_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ReceiveExecuteAI");

	UBTT_PF_NPC_Action_MoveTo_Move_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_MoveTo_Move_C::CustomEvent_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.CustomEvent_1");

	UBTT_PF_NPC_Action_MoveTo_Move_C_CustomEvent_1_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_MoveTo_Move_C::ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_MoveTo_Move.BTT_PF_NPC_Action_MoveTo_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move");

	UBTT_PF_NPC_Action_MoveTo_Move_C_ExecuteUbergraph_BTT_PF_NPC_Action_MoveTo_Move_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
