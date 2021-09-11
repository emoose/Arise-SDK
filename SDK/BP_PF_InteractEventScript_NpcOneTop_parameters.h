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

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.EndsOneTop
struct UBP_PF_InteractEventScript_NpcOneTop_C_EndsOneTop_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.StartsOneTop
struct UBP_PF_InteractEventScript_NpcOneTop_C_StartsOneTop_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Main
struct UBP_PF_InteractEventScript_NpcOneTop_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.UpdateMessageEvent
struct UBP_PF_InteractEventScript_NpcOneTop_C_UpdateMessageEvent_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.Run Message
struct UBP_PF_InteractEventScript_NpcOneTop_C_Run_Message_Params
{
	struct FPFOneTopID                                 GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_InteractEventScript_NpcOneTop.BP_PF_InteractEventScript_NpcOneTop_C.ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop
struct UBP_PF_InteractEventScript_NpcOneTop_C_ExecuteUbergraph_BP_PF_InteractEventScript_NpcOneTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
