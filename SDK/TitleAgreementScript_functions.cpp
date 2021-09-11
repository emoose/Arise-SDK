
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

// Function TitleAgreementScript.TitleAgreementScript_C.GetScriptState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 CurrentState                   (Parm, OutParm, ZeroConstructor)

void ATitleAgreementScript_C::GetScriptState(struct FString* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.GetScriptState");

	ATitleAgreementScript_C_GetScriptState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function TitleAgreementScript.TitleAgreementScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATitleAgreementScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.UserConstructionScript");

	ATitleAgreementScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleAgreementScript.TitleAgreementScript_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATitleAgreementScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.ReceiveBeginPlay");

	ATitleAgreementScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleAgreementScript.TitleAgreementScript_C.EventGoBackTitle
// (BlueprintCallable, BlueprintEvent)

void ATitleAgreementScript_C::EventGoBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.EventGoBackTitle");

	ATitleAgreementScript_C_EventGoBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleAgreementScript.TitleAgreementScript_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitleAgreementScript_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.ReceiveEndPlay");

	ATitleAgreementScript_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleAgreementScript.TitleAgreementScript_C.ExecuteUbergraph_TitleAgreementScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitleAgreementScript_C::ExecuteUbergraph_TitleAgreementScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleAgreementScript.TitleAgreementScript_C.ExecuteUbergraph_TitleAgreementScript");

	ATitleAgreementScript_C_ExecuteUbergraph_TitleAgreementScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
