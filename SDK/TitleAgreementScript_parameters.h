#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TitleAgreementScript.TitleAgreementScript_C.GetScriptState
struct ATitleAgreementScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function TitleAgreementScript.TitleAgreementScript_C.UserConstructionScript
struct ATitleAgreementScript_C_UserConstructionScript_Params
{
};

// Function TitleAgreementScript.TitleAgreementScript_C.ReceiveBeginPlay
struct ATitleAgreementScript_C_ReceiveBeginPlay_Params
{
};

// Function TitleAgreementScript.TitleAgreementScript_C.EventGoBackTitle
struct ATitleAgreementScript_C_EventGoBackTitle_Params
{
};

// Function TitleAgreementScript.TitleAgreementScript_C.ReceiveEndPlay
struct ATitleAgreementScript_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TitleAgreementScript.TitleAgreementScript_C.ExecuteUbergraph_TitleAgreementScript
struct ATitleAgreementScript_C_ExecuteUbergraph_TitleAgreementScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
