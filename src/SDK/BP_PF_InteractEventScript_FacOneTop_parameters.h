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

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.ClearAction
struct UBP_PF_InteractEventScript_FacOneTop_C_ClearAction_Params
{
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.EndsOneTop
struct UBP_PF_InteractEventScript_FacOneTop_C_EndsOneTop_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.Main
struct UBP_PF_InteractEventScript_FacOneTop_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.ReceiveBeginPlay
struct UBP_PF_InteractEventScript_FacOneTop_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.Add PlayerAction Character
struct UBP_PF_InteractEventScript_FacOneTop_C_Add_PlayerAction_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.Add Turn Character
struct UBP_PF_InteractEventScript_FacOneTop_C_Add_Turn_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.Add LookAt Character
struct UBP_PF_InteractEventScript_FacOneTop_C_Add_LookAt_Character_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.ReceiveEndPlay
struct UBP_PF_InteractEventScript_FacOneTop_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FacOneTop.BP_PF_InteractEventScript_FacOneTop_C.ExecuteUbergraph_BP_PF_InteractEventScript_FacOneTop
struct UBP_PF_InteractEventScript_FacOneTop_C_ExecuteUbergraph_BP_PF_InteractEventScript_FacOneTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
