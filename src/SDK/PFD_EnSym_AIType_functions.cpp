
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

// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckFollowType
// (Private, BlueprintCallable, BlueprintEvent)

void UPFD_EnSym_AIType_C::CheckFollowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckFollowType");

	UPFD_EnSym_AIType_C_CheckFollowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWanderingType
// (Private, BlueprintCallable, BlueprintEvent)

void UPFD_EnSym_AIType_C::CheckWanderingType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWanderingType");

	UPFD_EnSym_AIType_C_CheckWanderingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWaitType
// (Private, BlueprintCallable, BlueprintEvent)

void UPFD_EnSym_AIType_C::CheckWaitType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.CheckWaitType");

	UPFD_EnSym_AIType_C_CheckWaitType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPFD_EnSym_AIType_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFD_EnSym_AIType.PFD_EnSym_AIType_C.PerformConditionCheckAI");

	UPFD_EnSym_AIType_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
