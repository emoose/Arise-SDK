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

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetEventLevelSequencePlayer
struct UBP_EventManager_Interface_C_GetEventLevelSequencePlayer_Params
{
	class ULevelSequencePlayer*                        Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.EventAtPFRuning
struct UBP_EventManager_Interface_C_EventAtPFRuning_Params
{
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsPostEventNpcRespawn
struct UBP_EventManager_Interface_C_IsPostEventNpcRespawn_Params
{
	bool                                               bNpcRespawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.DestroyObjects
struct UBP_EventManager_Interface_C_DestroyObjects_Params
{
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsRunPostScript
struct UBP_EventManager_Interface_C_IsRunPostScript_Params
{
	bool                                               bRun;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.RequestMapShowOutEvent
struct UBP_EventManager_Interface_C_RequestMapShowOutEvent_Params
{
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.GetCurrentFrameInfo
struct UBP_EventManager_Interface_C_GetCurrentFrameInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EventManager_Interface.BP_EventManager_Interface_C.IsNeedDisplayFrameInfo
struct UBP_EventManager_Interface_C_IsNeedDisplayFrameInfo_Params
{
	bool                                               Need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
