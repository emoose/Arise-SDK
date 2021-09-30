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

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.Refresh
struct ABP_PF_CampTalkGroupActor_C_Refresh_Params
{
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateSpeakerLookAt
struct ABP_PF_CampTalkGroupActor_C_UpdateSpeakerLookAt_Params
{
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UpdateTalk
struct ABP_PF_CampTalkGroupActor_C_UpdateTalk_Params
{
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.AddCharacter
struct ABP_PF_CampTalkGroupActor_C_AddCharacter_Params
{
	class APFNpcCharacterBase*                         NewChracter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.UserConstructionScript
struct ABP_PF_CampTalkGroupActor_C_UserConstructionScript_Params
{
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ReceiveTick
struct ABP_PF_CampTalkGroupActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampTalkGroupActor.BP_PF_CampTalkGroupActor_C.ExecuteUbergraph_BP_PF_CampTalkGroupActor
struct ABP_PF_CampTalkGroupActor_C_ExecuteUbergraph_BP_PF_CampTalkGroupActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
