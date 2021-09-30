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

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.GetLockOnShortChartID
struct ABP_PF_EventProcess_CameraLookAt_C_GetLockOnShortChartID_Params
{
	struct FString                                     Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.DestroyQuestProcess
struct ABP_PF_EventProcess_CameraLookAt_C_DestroyQuestProcess_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.CreateQuestProcess
struct ABP_PF_EventProcess_CameraLookAt_C_CreateQuestProcess_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.IsInteractEnable
struct ABP_PF_EventProcess_CameraLookAt_C_IsInteractEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.UserConstructionScript
struct ABP_PF_EventProcess_CameraLookAt_C_UserConstructionScript_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.ReceiveBeginPlay
struct ABP_PF_EventProcess_CameraLookAt_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.Event End ShortChat
struct ABP_PF_EventProcess_CameraLookAt_C_Event_End_ShortChat_Params
{
	bool                                               Abort;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.Event Start ShortChat
struct ABP_PF_EventProcess_CameraLookAt_C_Event_Start_ShortChat_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.Event On Completed Auto Move
struct ABP_PF_EventProcess_CameraLookAt_C_Event_On_Completed_Auto_Move_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.Quest Script Load Completed
struct ABP_PF_EventProcess_CameraLookAt_C_Quest_Script_Load_Completed_Params
{
	class UObject*                                     InLoadedAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.ReceiveEndPlay
struct ABP_PF_EventProcess_CameraLookAt_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.CustomEvent_1
struct ABP_PF_EventProcess_CameraLookAt_C_CustomEvent_1_Params
{
	class AActor*                                      InSender;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InReceiver;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.ReceiveExecuteProcess
struct ABP_PF_EventProcess_CameraLookAt_C_ReceiveExecuteProcess_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.Event End Play Component Event
struct ABP_PF_EventProcess_CameraLookAt_C_Event_End_Play_Component_Event_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.OnGoBackTitle
struct ABP_PF_EventProcess_CameraLookAt_C_OnGoBackTitle_Params
{
};

// Function BP_PF_EventProcess_CameraLookAt.BP_PF_EventProcess_CameraLookAt_C.ExecuteUbergraph_BP_PF_EventProcess_CameraLookAt
struct ABP_PF_EventProcess_CameraLookAt_C_ExecuteUbergraph_BP_PF_EventProcess_CameraLookAt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
