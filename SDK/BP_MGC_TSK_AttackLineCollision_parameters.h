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

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.GetInterval_CollisionNum
struct UBP_MGC_TSK_AttackLineCollision_C_GetInterval_CollisionNum_Params
{
	float                                              ResultInterval;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultNum;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetWarningMessage
struct UBP_MGC_TSK_AttackLineCollision_C_Received_GetWarningMessage_Params
{
	class UBtlMagicAsset*                              Asset;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.AddCollision
struct UBP_MGC_TSK_AttackLineCollision_C_AddCollision_Params
{
	TScriptInterface<class UBtlMagicExtension_Interface_C> Magic;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_GetTaskName
struct UBP_MGC_TSK_AttackLineCollision_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Begin
struct UBP_MGC_TSK_AttackLineCollision_C_Received_Begin_Params
{
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_End
struct UBP_MGC_TSK_AttackLineCollision_C_Received_End_Params
{
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.Received_Tick
struct UBP_MGC_TSK_AttackLineCollision_C_Received_Tick_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_AttackLineCollision.BP_MGC_TSK_AttackLineCollision_C.ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision
struct UBP_MGC_TSK_AttackLineCollision_C_ExecuteUbergraph_BP_MGC_TSK_AttackLineCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
