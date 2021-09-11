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

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.RemoveSysWindowPadProcessUnderLayer
struct ABP_PlatformUserManagerEvent_C_RemoveSysWindowPadProcessUnderLayer_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CreateSysWindowPadProcessUnderLayer
struct ABP_PlatformUserManagerEvent_C_CreateSysWindowPadProcessUnderLayer_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CanUserEvent
struct ABP_PlatformUserManagerEvent_C_CanUserEvent_Params
{
	bool                                               ok;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CallSystemPause
struct ABP_PlatformUserManagerEvent_C_CallSystemPause_Params
{
	bool                                               bPause;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.GotoTitle
struct ABP_PlatformUserManagerEvent_C_GotoTitle_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckReconnectPad
struct ABP_PlatformUserManagerEvent_C_CheckReconnectPad_Params
{
	int                                                ControllerId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.CheckPad
struct ABP_PlatformUserManagerEvent_C_CheckPad_Params
{
	TArray<class AMenuPadProcess*>                     MenuPadProcessArray;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AMenuPadProcess*                             MenuPadProcess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenLogout
struct ABP_PlatformUserManagerEvent_C_OpenLogout_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OpenReconnectController
struct ABP_PlatformUserManagerEvent_C_OpenReconnectController_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.UserConstructionScript
struct ABP_PlatformUserManagerEvent_C_UserConstructionScript_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventReconnectController
struct ABP_PlatformUserManagerEvent_C_EventReconnectController_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.EventLogoutMessaging
struct ABP_PlatformUserManagerEvent_C_EventLogoutMessaging_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnLogoutMessaging
struct ABP_PlatformUserManagerEvent_C_OnLogoutMessaging_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.OnReconnectController
struct ABP_PlatformUserManagerEvent_C_OnReconnectController_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveTick
struct ABP_PlatformUserManagerEvent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ReceiveBeginPlay
struct ABP_PlatformUserManagerEvent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C.ExecuteUbergraph_BP_PlatformUserManagerEvent
struct ABP_PlatformUserManagerEvent_C_ExecuteUbergraph_BP_PlatformUserManagerEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
