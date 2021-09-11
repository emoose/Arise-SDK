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

// Function BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C.Initialize
struct UBP_PF_ActionState_EnSym_Base_C_Initialize_Params
{
};

// Function BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C.ChangeAnimation
struct UBP_PF_ActionState_EnSym_Base_C_ChangeAnimation_Params
{
	struct FString                                     NxtCommand;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C.K2_Begin
struct UBP_PF_ActionState_EnSym_Base_C_K2_Begin_Params
{
	struct FName                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ActionState_EnSym_Base.BP_PF_ActionState_EnSym_Base_C.ExecuteUbergraph_BP_PF_ActionState_EnSym_Base
struct UBP_PF_ActionState_EnSym_Base_C_ExecuteUbergraph_BP_PF_ActionState_EnSym_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
