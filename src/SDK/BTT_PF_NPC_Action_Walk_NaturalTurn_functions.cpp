
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

// Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_NaturalTurn_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ReceiveTickAI");

	UBTT_PF_NPC_Action_Walk_NaturalTurn_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_NaturalTurn_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ReceiveExecuteAI");

	UBTT_PF_NPC_Action_Walk_NaturalTurn_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NaturalTurn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_NaturalTurn_C::ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NaturalTurn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_NaturalTurn.BTT_PF_NPC_Action_Walk_NaturalTurn_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NaturalTurn");

	UBTT_PF_NPC_Action_Walk_NaturalTurn_C_ExecuteUbergraph_BTT_PF_NPC_Action_Walk_NaturalTurn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif