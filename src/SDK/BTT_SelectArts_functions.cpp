
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

// Function BTT_SelectArts.BTT_SelectArts_C.SelectTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBTT_SelectArts_C::SelectTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SelectArts.BTT_SelectArts_C.SelectTarget");

	UBTT_SelectArts_C_SelectTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SelectArts.BTT_SelectArts_C.SelectArts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Request                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_SelectArts_C::SelectArts(struct FName* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SelectArts.BTT_SelectArts_C.SelectArts");

	UBTT_SelectArts_C_SelectArts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;
}


// Function BTT_SelectArts.BTT_SelectArts_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SelectArts_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SelectArts.BTT_SelectArts_C.ReceiveExecuteAI");

	UBTT_SelectArts_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SelectArts.BTT_SelectArts_C.ExecuteUbergraph_BTT_SelectArts
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SelectArts_C::ExecuteUbergraph_BTT_SelectArts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SelectArts.BTT_SelectArts_C.ExecuteUbergraph_BTT_SelectArts");

	UBTT_SelectArts_C_ExecuteUbergraph_BTT_SelectArts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
