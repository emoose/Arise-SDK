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

// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.FindVoiceSpeaker
struct UBP_PF_InteractEventScript_OwlPoint_C_FindVoiceSpeaker_Params
{
	struct FString                                     InCharacterID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      OutSpeaker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.Main
struct UBP_PF_InteractEventScript_OwlPoint_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_OwlPoint.BP_PF_InteractEventScript_OwlPoint_C.ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint
struct UBP_PF_InteractEventScript_OwlPoint_C_ExecuteUbergraph_BP_PF_InteractEventScript_OwlPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
